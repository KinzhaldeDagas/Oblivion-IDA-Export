int __thiscall sub_719F40(_WORD *this, __int16 a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0x44))(this); /*0x719f48*/
  if ( result ) /*0x719f4c*/
    HIWORD(result) = (unsigned int)(*(int (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)this + 0x48))(this, 0) >> 0x10; /*0x719f57*/
  LOWORD(result) = a2; /*0x719f59*/
  *(this + 0x22) = a2; /*0x719f66*/
  *((_DWORD *)this + 0x12) = a3; /*0x719f6a*/
  *((_DWORD *)this + 0x13) = a4; /*0x719f6d*/
  return result; /*0x719f70*/
}
