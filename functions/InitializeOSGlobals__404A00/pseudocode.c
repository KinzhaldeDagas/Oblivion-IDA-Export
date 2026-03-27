_BYTE *__thiscall InitializeOSGlobals(_BYTE *this, int a2, IDirectInputDevice8 *a3)
{
  HANDLE CurrentThread; // eax
  InputGlobal *v5; // eax
  InputGlobal *v6; // eax
  _DWORD *v7; // eax

  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 4) = GetCurrentThreadId();
  *((_DWORD *)this + 5) = 0;
  CurrentThread = GetCurrentThread();
  DuplicateHandle(0, CurrentThread, 0, (LPHANDLE)this + 5, 0, 0, 0);
  sub_747830(*((_DWORD *)this + 4), (int)"Main");
  v5 = (InputGlobal *)FormHeapAlloc(0x1BD8u);
  if ( v5 )
    v6 = InputGlobals::InitializeInputSystem(v5, a3);
  else
    v6 = 0;
  *((_DWORD *)this + 8) = v6;
  InputGlobals::LoadControlSettingsFromINI(v6);
  v7 = (_DWORD *)FormHeapAlloc(0x328u);
  if ( v7 )
    *((_DWORD *)this + 9) = sub_6ABC80(v7, *((_DWORD *)this + 2));
  else
    *((_DWORD *)this + 9) = 0;
  return this;
}
