int __thiscall sub_6DAE50(_DWORD *this, int a2, int a3, int a4, float a5)
{
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  unsigned __int8 v8; // bl

  v5 = *(this + 6);
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_DWORD *)(v5 + 0x10);
    v8 = *(_BYTE *)(v5 + 0x14);
    v6 = *(_DWORD *)(v5 + 0xC);
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  (*(void (__cdecl **)(_DWORD, int, int, int))(4 * v7 + 0xB3D010))(LODWORD(a5), v6 + a3 * v8, v6 + a4 * v8, a2);
  return a2;
}
