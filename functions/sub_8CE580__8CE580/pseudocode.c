char __thiscall sub_8CE580(_DWORD *this, float *a2)
{
  char v3; // bl
  int v4; // ecx
  int i; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  _BYTE v11[524]; // [esp+10h] [ebp-210h] BYREF

  v3 = sub_8A2760(a2); /*0x8ce5ac*/
  if ( v3 )
  {
    if ( this ) /*0x8ce5b4*/
      v4 = *(this + 2); /*0x8ce5b6*/
    else
      v4 = 0; /*0x8ce5bb*/
    for ( i = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x20))(v4);
          i != 0xFFFFFFFF;
          i = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x24))(v9, i) )
    {
      if ( !v3 ) /*0x8ce5d2*/
        break; /*0x8ce5d2*/
      if ( this /*0x8ce5ee*/
        && (v6 = *(this + 2)) != 0
        && (v7 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v6 + 0x28))(v6, i, v11)) != 0 )
      {
        v8 = *(_DWORD *)(v7 + 8); /*0x8ce5f0*/
      }
      else
      {
        v8 = 0; /*0x8ce5f5*/
      }
      if ( v8 ) /*0x8ce5f9*/
        v3 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v8 + 0x8C))(v8, a2); /*0x8ce60a*/
      v9 = this ? *(this + 2) : 0;
    }
  }
  return v3; /*0x8ce626*/
}
