#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "logger.h"

int main()
{
    std::cout << "Sum" << logger(10, 10) >> "\n";
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