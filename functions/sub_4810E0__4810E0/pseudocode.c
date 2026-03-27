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

  if ( !a2 )
    return 0;
  HIDWORD(v18) = a1;
  v6 = (NiNode *)(*((int (__thiscall **)(const char **))*a2 + 4))(a2);
  v7 = v6;
  if ( v6 )
  {
    if ( NiNode_GetNiPropertyByID(v6, 4)
      && (v8 = NiNode_GetNiPropertyByID(v7, 4), (*((int (__thiscall **)(NiProperty *))v8->vtbl + 0x15))(v8) >= 1)
      && (v9 = NiNode_GetNiPropertyByID(v7, 4), (*((int (__thiscall **)(NiProperty *))v9->vtbl + 0x15))(v9) <= 0xA) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v7, 4);
    }
    else
    {
      NiPropertyByID = 0;
    }
    if ( NiPropertyByID == a3 )
      return 1;
    if ( !(_BYTE)a5 || (v12 = a2[2]) != 0 && (LODWORD(v18) = 5, strncmp(v12, "Decal", v18)) )
    {
      if ( !(_BYTE)a6 || (LODWORD(v18) = 7, !strncmp(a2[2], "Block (", v18)) )
        ++*a4;
    }
  }
  v13 = (*((int (__thiscall **)(const char **))*a2 + 2))(a2);
  v14 = v13;
  if ( !v13 )
    return 0;
  v15 = *(unsigned __int16 *)(v13 + 0xB6);
  v16 = 0;
  if ( !*(_WORD *)(v14 + 0xB6) )
    return 0;
  if ( v15 )
    goto LABEL_21;
  for ( i = 0; ; i = *(const char ***)(*(_DWORD *)(v14 + 0xB0) + 4 * v16) )
  {
    result = sub_4810E0(i, (int)a3, a4, a5, a6);
    if ( result )
      break;
    if ( *(unsigned __int16 *)(v14 + 0xB6) <= (unsigned int)++v16 )
      return 0;
LABEL_21:
    ;
  }
  return result;
}
