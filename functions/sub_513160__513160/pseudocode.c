_DWORD *__cdecl sub_513160(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // esi
  NiRTTI *v4; // eax
  char v5; // al
  _DWORD *v6; // esi
  _DWORD **v7; // ecx
  _DWORD **v8; // ecx

  result = a1; /*0x513160*/
  v3 = a1[4]; /*0x513165*/
  if ( v3 )
  {
    v4 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 4))(a1[4]); /*0x513173*/
    if ( v4 ) /*0x513177*/
    {
      while ( v4 != &stru_BA7D84 ) /*0x513185*/
      {
        v4 = v4->parent; /*0x513187*/
        if ( !v4 ) /*0x51318c*/
          goto LABEL_5; /*0x51318c*/
      }
      v5 = 1; /*0x5131dd*/
    }
    else
    {
LABEL_5:
      v5 = 0; /*0x51318e*/
    }
    result = v5 != 0 ? (_DWORD *)v3 : 0;
    v6 = result; /*0x513196*/
    if ( result ) /*0x513198*/
    {
      v7 = (_DWORD **)result[2]; /*0x51319a*/
      if ( v7 ) /*0x5131ab*/
        result = (_DWORD *)sub_8A9900(v7); /*0x5131b5*/
      v8 = (_DWORD **)v6[2]; /*0x5131ba*/
      if ( v8 ) /*0x5131bf*/
      {
        result = (_DWORD *)sub_8A98D0(v8); /*0x5131c1*/
        if ( result ) /*0x5131c8*/
          return (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*result + 0x20))(result, *(float *)(a2 + 0xC)); /*0x5131d8*/
      }
    }
  }
  return result; /*0x5131db*/
}
