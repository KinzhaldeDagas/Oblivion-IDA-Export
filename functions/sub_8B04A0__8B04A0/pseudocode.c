int __thiscall sub_8B04A0(_DWORD *this, float *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( this && (v2 = *(this + 2)) != 0 )
    v3 = *(_DWORD *)(v2 + 0xC);
  else
    v3 = 0;
  if ( v3 && (v4 = *(_DWORD *)(v3 + 8)) != 0 )
    return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v4 + 0x8C))(v4, a1);
  else
    return sub_8A2760(a1);
}
