void __thiscall sub_663920(_DWORD *this)
{
  int v2; // esi
  _BYTE *v3; // eax

  if ( dword_B3B7D0 > 0 )
  {
    v2 = *(this + 0x16);
    if ( v2 )
    {
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0xF4))(v2, 1) )
      {
        v3 = *(_BYTE **)((*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0xF4))(v2, 1) + 8);
        if ( v3 )
          sub_607F90(v3, 0x7FFFFFFF, this, 1, 1);
      }
    }
  }
}
