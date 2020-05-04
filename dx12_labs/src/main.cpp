#include "pch.h"
#include "Scene.h"

//int main()
//{
//    Scene sample(1280, 720, L"D3D12 Hello Window");
//    return Application::Run(&sample, hInstance, nCmdShow);
//}

_Use_decl_annotations_
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
    Scene sample(1280, 720, L"D3D12 Hello Window");
    return Application::Run(&sample, hInstance, nCmdShow);
}