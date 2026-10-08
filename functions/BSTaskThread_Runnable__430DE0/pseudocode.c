DWORD __stdcall BSTaskThread_Runnable(BSTaskThread *lpThreadParameter)
{
  (*((void (__thiscall **)(BSTaskThread *))lpThreadParameter->vtbl + 1))(lpThreadParameter); /*0x430de9*/
  return 0; /*0x430ded*/
}
