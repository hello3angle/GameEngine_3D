#include "Assets.h"
#include "Rectangle_Mesh.h"
#include "Triangle_Mesh.h"
#include "Pentagon_Mesh.h"
#include "Colored_2D_Vertex_Shader.h"
#include "Colored_2D_Fragment_Shader.h"
#include "Colored_2D_Shader_Program.h"
#include "Olympic_Texture.h"
#include "Textured_2D_Vertex_Shader.h"
#include "Textured_2D_Fragment_Shader.h"
#include "Textured_2D_Shader_Program.h"
#include "Cube_Mesh.h"
#include "Textured_3D_Vertex_Shader.h"
#include "Textured_3D_Fragment_Shader.h"
#include "Textured_3D_Shader_Program.h"
#include "Dice_One_Texture.h"
#include "Dice_Texture.h"
#include "Cube_Mesh2.h"
#include "Pyramid_Mesh.h"

Assets::Assets()
{
    // 2D Colored
    Colored_2D_Vertex_Shader* colored_2D_vertex_shader = new Colored_2D_Vertex_Shader();
    _assets.insert({ colored_2D_vertex_shader->id(), colored_2D_vertex_shader });

    Colored_2D_Fragment_Shader* colored_2D_fragment_shader = new Colored_2D_Fragment_Shader();
    _assets.insert({ colored_2D_fragment_shader->id(), colored_2D_fragment_shader });

    Colored_2D_Shader_Program* colored_2D_program = new Colored_2D_Shader_Program(colored_2D_vertex_shader, colored_2D_fragment_shader);
    _assets.insert({ colored_2D_program->id(), colored_2D_program });

    // Texture
    Olympic_Texture* olympic = new Olympic_Texture();
    _assets.insert({ olympic->id(), olympic });

    Dice_One_Texture* crate_sprite = new Dice_One_Texture();
    _assets.insert({ crate_sprite->id(), crate_sprite });

    Dice_Texture* crate_with_sides_sprite = new Dice_Texture();
    _assets.insert({ crate_with_sides_sprite->id(), crate_with_sides_sprite });

    // 2D Textured
    Textured_2D_Vertex_Shader* textured_2D_vertex_shader = new Textured_2D_Vertex_Shader();
    _assets.insert({ textured_2D_vertex_shader->id(), textured_2D_vertex_shader });

    Textured_2D_Fragment_Shader* textured_2D_fragment_shader = new Textured_2D_Fragment_Shader();
    _assets.insert({ textured_2D_fragment_shader->id(), textured_2D_fragment_shader });

    Textured_2D_Shader_Program* textured_2D_program = new Textured_2D_Shader_Program(textured_2D_vertex_shader, textured_2D_fragment_shader);
    _assets.insert({ textured_2D_program->id(), textured_2D_program });

    // 3D Textured
    Textured_3D_Vertex_Shader* textured_3D_vertex_shader = new Textured_3D_Vertex_Shader();
    _assets.insert({ textured_3D_vertex_shader->id(), textured_3D_vertex_shader });

    Textured_3D_Fragment_Shader* textured_3D_fragment_shader = new Textured_3D_Fragment_Shader();
    _assets.insert({ textured_3D_fragment_shader->id(), textured_3D_fragment_shader });

    Textured_3D_Shader_Program* textured_3D_program = new Textured_3D_Shader_Program(textured_3D_vertex_shader, textured_3D_fragment_shader);
    _assets.insert({ textured_3D_program->id(), textured_3D_program });

    // Rectangle
    Rectangle_Mesh* rectangle_mesh = new Rectangle_Mesh();
    _assets.insert({ rectangle_mesh->id(), rectangle_mesh });

    // Triangle
    Triangle_Mesh* triangle_mesh = new Triangle_Mesh();
    _assets.insert({ triangle_mesh->id(), triangle_mesh });

    // Pentagon
    Pentagon_Mesh* pentagon_mesh = new Pentagon_Mesh();
    _assets.insert({ pentagon_mesh->id(), pentagon_mesh });

    // Cube
    Cube_Mesh* cube_mesh = new Cube_Mesh();
    _assets.insert({ cube_mesh->id(), cube_mesh });

    Cube_Mesh2* cube_mesh2 = new Cube_Mesh2();
    _assets.insert({ cube_mesh2->id(), cube_mesh2 });

    // Pyramid
    Pyramid_Mesh* pyramid_mesh = new Pyramid_Mesh();
    _assets.insert({ pyramid_mesh->id(), pyramid_mesh });
}

Assets::~Assets()
{
}

Asset* Assets::get_asset(const char* id) const
{
    if (_assets.find(id) == _assets.end())
    {
        std::cout << "Attempted to find an asset that was not loaded. ID: " << id << std::endl;
        exit(1);
    }

    return _assets.find(id)->second;
}
