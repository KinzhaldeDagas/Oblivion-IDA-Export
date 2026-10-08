// MoonSugarEffect decode: walks ShaderDefinition cache B42EC0..B42F30; for shaders with type != -1 calls vtable +0x90 to detach pass texture-stage refs before texture-manager rebuild. Does not walk arbitrary plugin-owned shader wrappers or call vertex wrapper +0x5C.
int sub_7B84E0()
{
  unsigned __int8 *v0; // esi
  int result; // eax
  int v2; // ecx
  int v3; // ecx

  v0 = &OB_RendererGlobalState_010201A0.pad_00D[0x1A]; /*0x7b84e1*/
  do /*0x7b851f*/
  {
    result = *(_DWORD *)v0; /*0x7b84e6*/
    if ( *(_DWORD *)v0 ) /*0x7b84e6*/
    {
      v2 = *(_DWORD *)(result + 4); /*0x7b84ec*/
      if ( v2 ) /*0x7b84f1*/
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x1C))(v2); /*0x7b84f8*/
        if ( result == 0xFFFFFFFF ) /*0x7b84fd*/
        {
          v3 = 0; /*0x7b84ff*/
        }
        else
        {
          result = *(_DWORD *)v0; /*0x7b8503*/
          v3 = *(_DWORD *)(*(_DWORD *)v0 + 4); /*0x7b8505*/
        }
        if ( v3 ) /*0x7b850a*/
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x90))(v3); /*0x7b8514*/
      }
    }
    v0 += 4; /*0x7b8516*/
  }
  while ( (int)v0 < (int)&OB_RendererGlobalState_010201A0.pad_00D[0x8A] ); /*0x7b851f*/
  return result; /*0x7b8521*/
}
