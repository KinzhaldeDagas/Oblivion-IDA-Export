_DWORD *__thiscall sub_6F8210(int this, _DWORD *a2, int a3, int Origin, int a5)
{
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  int v10; // ecx
  fpos_t Pos; // [esp+10h] [ebp-8h] BYREF

  v6 = this + 0x40;
  if ( **(_DWORD **)(this + 0x20) == this + 0x40 && Origin == 1 && !*(_DWORD *)(this + 0x3C) )
    v7 = a3 - 1;
  else
    v7 = a3;
  if ( !*(_DWORD *)(this + 0x4C)
    || !sub_6F7AB0((_DWORD *)this)
    || (v7 || Origin != 1) && fseek(*(FILE **)(this + 0x4C), v7, Origin)
    || fgetpos(*(FILE **)(this + 0x4C), &Pos) )
  {
    *a2 = dword_AA3E5C;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    return a2;
  }
  else
  {
    if ( **(_DWORD **)(this + 0x20) == v6 )
    {
      **(_DWORD **)(this + 0x10) = v6;
      **(_DWORD **)(this + 0x20) = this + 0x41;
      **(_DWORD **)(this + 0x30) = 0;
    }
    v9 = HIDWORD(Pos);
    a2[2] = Pos;
    v10 = *(_DWORD *)(this + 0x44);
    *a2 = 0;
    a2[3] = v9;
    a2[4] = v10;
    return a2;
  }
}
