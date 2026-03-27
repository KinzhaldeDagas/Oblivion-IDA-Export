DWORD __stdcall BSTaskThread_Runnable(BSTaskThread *lpThreadParameter)
{
  (*((void (__thiscall **)(BSTaskThread *))lpThreadParameter->vtbl + 1))(lpThreadParameter);
  return 0;
}
