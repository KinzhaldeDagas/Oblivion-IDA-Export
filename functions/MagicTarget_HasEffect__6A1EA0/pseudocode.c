bool __thiscall MagicTarget_HasEffect(void *this, int a2)
{
  int *v2; // ecx
  bool result; // al
  int *v4; // edx
  int v5; // ecx

  v2 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this); /*0x6a1ea7*/
  result = 0; /*0x6a1ea9*/
  if ( v2 ) /*0x6a1ead*/
  {
    do /*0x6a1ed6*/
    {
      v4 = (int *)v2[1]; /*0x6a1eb4*/
      if ( !v4 && !*v2 ) /*0x6a1ebb*/
        break; /*0x6a1ebd*/
      if ( result ) /*0x6a1ec1*/
        break; /*0x6a1ec1*/
      v5 = *v2; /*0x6a1ec3*/
      if ( v5 ) /*0x6a1ec7*/
        result = **(_DWORD **)(v5 + 0xC) == a2; /*0x6a1ed0*/
      v2 = v4; /*0x6a1ed2*/
    }
    while ( v4 ); /*0x6a1ed6*/
  }
  return result; /*0x6a1ed9*/
}
