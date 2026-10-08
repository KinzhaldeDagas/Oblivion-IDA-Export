_BYTE *__thiscall InitializeOSGlobals(_BYTE *this, int a2, IDirectInputDevice8 *a3)
{
  HANDLE CurrentThread; // eax
  InputGlobal *v5; // eax
  InputGlobal *v6; // eax
  _DWORD *v7; // eax

  *this = 0; /*0x404a30*/
  *(this + 1) = 0; /*0x404a32*/
  *(this + 2) = 0; /*0x404a35*/
  *(this + 3) = 0; /*0x404a38*/
  *(this + 4) = 0; /*0x404a3b*/
  *((_DWORD *)this + 6) = 0; /*0x404a3e*/
  *((_DWORD *)this + 2) = a2; /*0x404a41*/
  *((_DWORD *)this + 3) = a3; /*0x404a44*/
  *((_DWORD *)this + 4) = GetCurrentThreadId(); /*0x404a50*/
  *((_DWORD *)this + 5) = 0; /*0x404a53*/
  CurrentThread = GetCurrentThread();           // ModernWindowsCompatible decode: vanilla DuplicateHandle call passes NULL source/target process handles while trying to populate OSGlobals+0x14 mainThreadHandle. Patch duplicates GetCurrentThread through GetCurrentProcess with DUPLICATE_SAME_ACCESS. /*0x404a55*/
  DuplicateHandle(0, CurrentThread, 0, (LPHANDLE)this + 5, 0, 0, 0); /*0x404a62*/
  sub_747830(*((_DWORD *)this + 4), (int)"Main"); /*0x404a71*/
  v5 = (InputGlobal *)FormHeapAlloc(0x1BD8u); /*0x404a7b*/
  if ( v5 ) /*0x404a8d*/
    v6 = InputGlobals::InitializeInputSystem(v5, a3); /*0x404a92*/
  else
    v6 = 0; /*0x404a99*/
  *((_DWORD *)this + 8) = v6; /*0x404aa5*/
  InputGlobals::LoadControlSettingsFromINI(v6); /*0x404aa8*/
  v7 = (_DWORD *)FormHeapAlloc(0x328u); /*0x404ab2*/
  if ( v7 ) /*0x404ac8*/
    *((_DWORD *)this + 9) = sub_6ABC80(v7, *((_DWORD *)this + 2)); /*0x404ad5*/
  else
    *((_DWORD *)this + 9) = 0; /*0x404ada*/
  return this; /*0x404adf*/
}
