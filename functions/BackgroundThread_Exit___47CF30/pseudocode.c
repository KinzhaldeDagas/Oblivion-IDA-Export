int __stdcall BackgroundThread_Exit_______(LPVOID lpThreadParameter)
{
  return (*(int (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)lpThreadParameter + 4))(lpThreadParameter, 0);
}
