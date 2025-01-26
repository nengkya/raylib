namespace raylib {
	#include <raylib.h>
}


int main() {

	raylib::InitWindow(1280, 720, "HaGa");

	/*
	typedef struct Texture2D {
		unsigned int id //OpenGL texture ID
		int width		//Texture width
		int height		//Texture height
		int mipmaps		//number of mipmaps (used for level of detail)
  						//original texture: 512x512
						//mipmap level 1: 256x256
						//mipmap level 2: 128x128
		int format		//pixel format (RGBA, grayscale)
	} Texture
	*/
	raylib::Texture background = raylib::LoadTexture("background.png"), car = raylib::LoadTexture("car.png");

	float carPositionX = - car.width;

	while (!raylib::WindowShouldClose()) {

		carPositionX += 0.9f;

		if (carPositionX > background.width) {
			carPositionX = - car.width;
		}

		/*raylib::RED warna bayangan*/
		raylib::DrawTexture(background, 0, 0, raylib::RED);

		raylib::DrawTexture(car, carPositionX, 630 - car.height, raylib::BLUE);

		/*
		end frame buffer and end swap buffers (double buffering)
		swap buffers exchanges the front and back buffers if the current pixel format for the window referenced by
		the specified device context includes a back buffer
		framebuffer is a portion of a computer's random-access memory (RAM)
		that stores the data for a video frame, or image, to be displayed on the screen
		it is a must or window wont close
		*/
		raylib::EndDrawing();

	}

}
