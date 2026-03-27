_DWORD *sub_7B81A0()
{
  int *v0; // edi
  _DWORD *result; // eax
  int v2; // esi
  int v3; // eax
  char v4; // al

  v0 = dword_B42EC0;
  do
  {
    result = (_DWORD *)*v0;
    if ( *v0 )
    {
      v2 = result[1];
      if ( v2 )
      {
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
        if ( v3 )
        {
          while ( (_UNKNOWN *)v3 != &ImageSpaceShaderRTTI___ )
          {
            v3 = *(_DWORD *)(v3 + 4);
            if ( !v3 )
              goto LABEL_7;
          }
          v4 = 1;
        }
        else
        {
LABEL_7:
          v4 = 0;
        }
        result = v4 != 0 ? (_DWORD *)v2 : 0;
        if ( result )
          result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 0x8C))(result);
      }
    }
    ++v0;
  }
  while ( (int)v0 < (int)&byte_B42F30 );
  return result;
}
