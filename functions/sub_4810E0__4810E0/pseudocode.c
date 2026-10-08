char __usercall sub_4810E0@<al>(int a1@<esi>, const char **a2, NiProperty *a3, _DWORD *a4, int a5, int a6)
{
  NiNode *v6; // eax
  NiNode *v7; // esi
  NiProperty *v8; // eax
  NiProperty *v9; // eax
  NiProperty *NiPropertyByID; // eax
  char result; // al
  const char *v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // esi
  const char **i; // eax
  size_t v18; // [esp-10h] [ebp-14h]

  if ( !a2 ) /*0x4810e7*/
    return 0; /*0x481200*/
  HIDWORD(v18) = a1; /*0x4810f4*/
  v6 = (NiNode *)(*((int (__thiscall **)(const char **))*a2 + 4))(a2); /*0x4810f7*/
  v7 = v6; /*0x481101*/
  if ( v6 ) /*0x481105*/
  {
    if ( NiNode_GetNiPropertyByID(v6, 4) /*0x481144*/
      && (v8 = NiNode_GetNiPropertyByID(v7, 4), (*((int (__thiscall **)(NiProperty *))v8->vtbl + 0x15))(v8) >= 1)
      && (v9 = NiNode_GetNiPropertyByID(v7, 4), (*((int (__thiscall **)(NiProperty *))v9->vtbl + 0x15))(v9) <= 0xA) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v7, 4); /*0x48114a*/
    }
    else
    {
      NiPropertyByID = 0; /*0x481151*/
    }
    if ( NiPropertyByID == a3 ) /*0x481157*/
      return 1; /*0x481159*/
    if ( !(_BYTE)a5 || (v12 = a2[2]) != 0 && (LODWORD(v18) = 5, strncmp(v12, "Decal", v18)) ) /*0x481176*/
    {
      if ( !(_BYTE)a6 || (LODWORD(v18) = 7, !strncmp(a2[2], "Block (", v18)) ) /*0x481191*/
        ++*a4; /*0x48119d*/
    }
  }
  v13 = (*((int (__thiscall **)(const char **))*a2 + 2))(a2); /*0x4811a8*/
  v14 = v13; /*0x4811aa*/
  if ( !v13 ) /*0x4811ae*/
    return 0; /*0x4811ae*/
  v15 = *(unsigned __int16 *)(v13 + 0xB6); /*0x4811b0*/
  v16 = 0; /*0x4811b7*/
  if ( !*(_WORD *)(v14 + 0xB6) ) /*0x4811b0*/
    return 0; /*0x4811f9*/
  if ( v15 ) /*0x4811bf*/
    goto LABEL_21; /*0x4811bf*/
  for ( i = 0; ; i = *(const char ***)(*(_DWORD *)(v14 + 0xB0) + 4 * v16) ) /*0x4811c1*/
  {
    result = sub_4810E0(v16, i, a3, a4, a5, a6); /*0x4811db*/
    if ( result ) /*0x4811e5*/
      break; /*0x4811e5*/
    if ( *(unsigned __int16 *)(v14 + 0xB6) <= (unsigned int)++v16 ) /*0x4811f7*/
      return 0; /*0x4811f7*/
LABEL_21:
    ; /*0x4811c5*/
  }
  return result; /*0x48115e*/
}
