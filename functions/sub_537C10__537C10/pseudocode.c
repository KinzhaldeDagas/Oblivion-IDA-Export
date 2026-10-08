_DWORD *__stdcall sub_537C10(int a1)
{
  _DWORD *v1; // esi
  NiRTTI *v2; // eax
  char v3; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *result; // eax

  if ( a1 ) /*0x537c17*/
    v1 = *(_DWORD **)(a1 + 0xC); /*0x537c19*/
  else
    v1 = 0; /*0x537c1e*/
  if ( v1 )
  {
    v2 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*v1 + 4))(v1); /*0x537c2b*/
    if ( v2 ) /*0x537c2f*/
    {
      while ( v2 != &stru_BA7D84 ) /*0x537c36*/
      {
        v2 = v2->parent; /*0x537c38*/
        if ( !v2 ) /*0x537c3d*/
          goto LABEL_8; /*0x537c3d*/
      }
      v3 = 1; /*0x537c72*/
    }
    else
    {
LABEL_8:
      v3 = 0; /*0x537c3f*/
    }
    v1 = v3 != 0 ? v1 : 0;
  }
  if ( sub_535AC0(v1) == *(float *)&SrcStr || !v1 ) /*0x537c5f*/
    return 0; /*0x537c97*/
  v4 = v1[2]; /*0x537c61*/
  if ( v4 && (v5 = v4 + 0x14) != 0 ) /*0x537c6b*/
    v6 = *(_DWORD *)(v5 + 0x1C); /*0x537c6d*/
  else
    LOBYTE(v6) = 0; /*0x537c76*/
  switch ( v6 & 0x3F ) /*0x537c8a*/
  {
    case 4: /*0x537c8a*/
    case 5: /*0x537c8a*/
    case 6: /*0x537c8a*/
    case 8: /*0x537c8a*/
    case 0xA: /*0x537c8a*/
    case 0xC: /*0x537c8a*/
    case 0xD: /*0x537c8a*/
    case 0xE: /*0x537c8a*/
      result = v1; /*0x537c91*/
      break; /*0x537c94*/
    default:
      return 0;
  }
  return result; /*0x537c93*/
}
