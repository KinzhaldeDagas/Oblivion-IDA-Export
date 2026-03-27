int __thiscall sub_719F40(_WORD *this, __int16 a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0x44))(this);
  if ( result )
    HIWORD(result) = (unsigned int)(*(int (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)this + 0x48))(this, 0) >> 0x10;
  LOWORD(result) = a2;
  *(this + 0x22) = a2;
  *((_DWORD *)this + 0x12) = a3;
  *((_DWORD *)this + 0x13) = a4;
  return result;
}
