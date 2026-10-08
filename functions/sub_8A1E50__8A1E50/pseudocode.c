int __thiscall sub_8A1E50(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx

  if ( this && (v2 = *(this + 2)) != 0 && (v3 = *(_DWORD *)(v2 + 0xC)) != 0 ) /*0x8a1e64*/
    v4 = *(_DWORD *)(v3 + 8); /*0x8a1e66*/
  else
    v4 = 0; /*0x8a1e6b*/
  if ( v4 ) /*0x8a1e73*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x8a1e7b*/
  return sub_6EC2C0(a2); /*0x8a1e85*/
}
