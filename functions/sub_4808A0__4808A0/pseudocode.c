char __cdecl sub_4808A0(int a1)
{
  NiRTTI *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int i; // eax

  if ( !a1 ) /*0x4808a7*/
    return 0; /*0x4808a9*/
  v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x4808b4*/
  if ( v2 ) /*0x4808b8*/
  {
    while ( v2 != &stru_B40864 ) /*0x4808c5*/
    {
      v2 = v2->parent; /*0x4808c7*/
      if ( !v2 ) /*0x4808cc*/
        goto LABEL_6; /*0x4808cc*/
    }
    return 1; /*0x4808f3*/
  }
  else
  {
LABEL_6:
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x4808ce*/
    v4 = v3; /*0x4808d8*/
    if ( v3 && (v5 = *(unsigned __int16 *)(v3 + 0xB6), v6 = 0, *(_WORD *)(v4 + 0xB6)) ) /*0x4808de*/
    {
      if ( v5 ) /*0x4808ed*/
        goto LABEL_11; /*0x4808ed*/
      for ( i = 0; !sub_4808A0(i); i = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v6) ) /*0x4808ef*/
      {
        if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v6 ) /*0x480919*/
          return 0; /*0x480919*/
LABEL_11:
        ; /*0x4808f7*/
      }
      return 1; /*0x480921*/
    }
    else
    {
      return 0; /*0x48091b*/
    }
  }
}
