int __thiscall sub_7FB400(NiD3DShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  BOOL v10; // eax
  int v11; // eax

  v8 = *(_DWORD *)(a5 + 0x18);
  if ( v8 )
    v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 0xA;
  else
    v10 = 0;
  v11 = v10 ? v8 : 0;
  if ( v11 )
    *(_BYTE *)(v11 + 0x100) = 0;
  return sub_77A1B0(this, a2, a3, a4, a5, a6, a7, a8);
}
