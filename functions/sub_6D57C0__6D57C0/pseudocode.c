bool __thiscall sub_6D57C0(float *this, int a2)
{
  bool result; // al
  int v4; // esi
  int v5; // ecx

  result = 0;
  if ( sub_715820(this, a2) )
  {
    if ( *((_WORD *)this + 0x26) == *(_WORD *)(a2 + 0x4C) )
    {
      v4 = *(_DWORD *)(a2 + 0x50);
      v5 = *((_DWORD *)this + 0x14);
      if ( (v5 == 0) == (v4 == 0)
        && (!v5 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x2C))(v5, v4)) )
      {
        return 1;
      }
    }
  }
  return result;
}
