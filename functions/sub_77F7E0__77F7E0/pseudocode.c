int __cdecl sub_77F7E0(int a1)
{
  int v1; // esi
  int result; // eax

  unk_B428C4 = a1; /*0x77f7e6*/
  if ( a1 ) /*0x77f7eb*/
  {
    v1 = *(_DWORD *)(a1 + 0x280); /*0x77f7ee*/
    result = g_ShaderD3DDevice; /*0x77f7f4*/
    if ( g_ShaderD3DDevice ) /*0x77f7f4*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(g_ShaderD3DDevice); /*0x77f803*/
    g_ShaderD3DDevice = v1; /*0x77f807*/
    if ( v1 ) /*0x77f80d*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 4))(v1); /*0x77f815*/
  }
  else
  {
    result = g_ShaderD3DDevice; /*0x77f819*/
    if ( g_ShaderD3DDevice ) /*0x77f819*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(g_ShaderD3DDevice); /*0x77f828*/
    g_ShaderD3DDevice = 0; /*0x77f82a*/
  }
  return result; /*0x77f818*/
}
