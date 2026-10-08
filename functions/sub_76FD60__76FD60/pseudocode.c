// MoonSugarEffect decode: disables all elements in one stream, marks declaration dirty, and releases cached IDirect3DVertexDeclaration9.
char __thiscall sub_76FD60(_DWORD *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // eax

  if ( a2 >= *(this + 8) ) /*0x76fd6a*/
    return 0; /*0x76fd6c*/
  v4 = *(this + 9) + 0x10 * a2; /*0x76fd75*/
  v5 = 0; /*0x76fd78*/
  v6 = v4; /*0x76fd7e*/
  if ( *(this + 7) ) /*0x76fd7a*/
  {
    v7 = 0; /*0x76fd82*/
    do /*0x76fda0*/
    {
      v8 = v7 + *(_DWORD *)(v6 + 8); /*0x76fd87*/
      ++v5; /*0x76fd89*/
      *(_DWORD *)(v8 + 8) = 0xFFFFFFFF; /*0x76fd8c*/
      *(_DWORD *)(v8 + 0xC) = 0x11; /*0x76fd93*/
      v7 += 0x1C; /*0x76fd9a*/
    }
    while ( v5 < *(this + 7) ); /*0x76fda0*/
  }
  v9 = *(this + 0xC); /*0x76fda2*/
  *((_BYTE *)this + 0x28) = 1; /*0x76fda7*/
  if ( v9 ) /*0x76fdac*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x76fdb4*/
    *(this + 0xC) = 0; /*0x76fdb6*/
  }
  return 1; /*0x76fd6e*/
}
