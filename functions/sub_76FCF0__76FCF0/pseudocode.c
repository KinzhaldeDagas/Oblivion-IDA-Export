// MoonSugarEffect decode: disables one declaration element by writing sentinel usage/type values, marks declaration dirty, and releases cached IDirect3DVertexDeclaration9.
char __thiscall sub_76FCF0(int this, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // eax
  int v6; // eax

  if ( a2 >= *(_DWORD *)(this + 0x1C) || a3 >= *(_DWORD *)(this + 0x20) ) /*0x76fd09*/
    return 0; /*0x76fcfc*/
  v5 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x10 * a3 + 8) + 0x1C * a2; /*0x76fd1f*/
  *(_DWORD *)(v5 + 8) = 0xFFFFFFFF; /*0x76fd22*/
  *(_DWORD *)(v5 + 0xC) = 0x11; /*0x76fd29*/
  v6 = *(_DWORD *)(this + 0x30); /*0x76fd30*/
  *(_BYTE *)(this + 0x28) = 1; /*0x76fd35*/
  if ( v6 ) /*0x76fd3a*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x76fd42*/
    *(_DWORD *)(this + 0x30) = 0; /*0x76fd44*/
  }
  return 1; /*0x76fcfe*/
}
