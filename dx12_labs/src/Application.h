#pragma once
class Scene;
class Application
{
public:
	static int Run(Scene* pSample, HINSTANCE hInstance, int nCmdShow);
	//inline static Application& Get() { return *s_Instance; }
	static HWND GetHwnd() { return m_hwnd; }

	static LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
private:
	//static Application* s_Instance;
	static HWND m_hwnd;
	bool m_Running = true;
};

//Application* CreateApplication();