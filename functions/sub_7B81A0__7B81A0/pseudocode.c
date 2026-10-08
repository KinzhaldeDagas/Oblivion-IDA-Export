_DWORD *sub_7B81A0()
{
  unsigned __int8 *v0; // edi
  _DWORD *result; // eax
  int v2; // esi
  NiRTTI *v3; // eax
  char v4; // al

  v0 = &OB_RendererGlobalState_010201A0.pad_00D[0x1A]; /*0x7b81a2*/
  do
  {
    result = *(_DWORD **)v0; /*0x7b81a7*/
    if ( *(_DWORD *)v0 )
    {
      v2 = result[1]; /*0x7b81ad*/
      if ( v2 )
      {
        v3 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x7b81bb*/
        if ( v3 ) /*0x7b81bf*/
        {
          while ( v3 != &MEMORY[0xB4257C] ) /*0x7b81c6*/
          {
            v3 = v3->parent; /*0x7b81c8*/
            if ( !v3 ) /*0x7b81cd*/
              goto LABEL_7; /*0x7b81cd*/
          }
          v4 = 1; /*0x7b81f3*/
        }
        else
        {
LABEL_7:
          v4 = 0; /*0x7b81cf*/
        }
        result = v4 != 0 ? (_DWORD *)v2 : 0;
        if ( result ) /*0x7b81d7*/
          result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 0x8C))(result); /*0x7b81e3*/
      }
    }
    v0 += 4; /*0x7b81e5*/
  }
  while ( (int)v0 < (int)&OB_RendererGlobalState_010201A0.pad_00D[0x8A] );
  return result; /*0x7b81f0*/
}
