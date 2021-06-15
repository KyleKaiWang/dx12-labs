#include "pch.h"
#include "RaytracingSample.h"

_Use_decl_annotations_
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
    RaytracingSample sample(1280, 720, L"DXRaytracing");
    return Application::Run(&sample, hInstance, nCmdShow);
}