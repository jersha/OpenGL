#include "Renderer.h"
#include <iostream>

void GLClearError() {
	while (GL_NO_ERROR != glGetError());
}

bool GLLogCall(const char* function, const char* file, int line) {
	while (GLenum error = glGetError()) {
		std::cout << "[OpenGL Error] (" << error << ")" << function <<
			" " << file << ":" << line << std::endl;
		return false;
	}
	return true;
}
