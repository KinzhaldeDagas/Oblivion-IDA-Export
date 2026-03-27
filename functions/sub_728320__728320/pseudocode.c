__int16 __thiscall sub_728320(_WORD *this, __int16 a2, int a3, int a4, int a5, int a6, char a7, __int16 a8)
{
  int v9; // eax
  unsigned __int16 v10; // cx
  __int16 v11; // ax
  __int16 result; // ax

  *(this + 4) = a2;
  v9 = *(_DWORD *)this;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 8) = a4;
  v10 = (*(int (__thiscall **)(_WORD *))(v9 + 0x50))(this);
  if ( v10 )
  {
    if ( *((_DWORD *)this + 7) )
      sub_72A0F0((float *)this + 3, v10, *((float **)this + 7));
  }
  v11 = *(this + 0x16);
  *((_DWORD *)this + 9) = a5;
  result = a8 | a7 & 0x3F | v11 & 0xFC0;
  *((_DWORD *)this + 0xA) = a6;
  *(this + 0x16) = result;
  return result;
}
