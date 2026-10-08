// MoonSugarEffect decode: pixel wrapper validity/restore helper. If vtable +0x38 returns live IDirect3DPixelShader9, succeeds. Otherwise base creator pointer is read through vtable +0x20 and creator vtable +0x20 restores the pixel handle.
char __cdecl sub_77EB50(int a1)
{
  int v2; // eax

  if ( !MEMORY[0xB428A8] || !a1 ) /*0x77eb60*/
    return 0; /*0x77eb60*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x38))(a1) ) /*0x77eb69*/
    return 1; /*0x77eb72*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x20))(a1); /*0x77eb7a*/
  if ( v2 ) /*0x77eb7e*/
    return (*(char (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x20))(v2, a1); /*0x77eb88*/
  else
    return 0; /*0x77eb8c*/
}
