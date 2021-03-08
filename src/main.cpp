#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "add.h"

int main()
{
    std::cout << "Sum" << add(10, 10);
    return 0;
    /*
    if(!glfwInit())
    {
        printf("Their was an error Initilising glfw\n");
        return -1;
    }
    else {
    printf("GLFW Sucesfully Initilized!\n");
    }
    GLFWwindow* window = glfwCreateWindow(300, 300, "Pong!", NULL, NULL);
    glfwTerminate();
    return 1;
    */
}