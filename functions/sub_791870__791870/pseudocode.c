// Builds global blossom and non-blossom leaf-map index vectors from compact 0x54 SIdvLeafTexture records.
unsigned int __usercall OB_CBranch_BuildBlossomVectors_010201A0@<eax>(int a1@<esi>)
{
  char *v2; // eax
  char *v3; // edi
  char *v4; // ebx
  char *v5; // eax
  char *v6; // ecx
  char *v7; // ebx
  char *v8; // edi
  int v9; // ebp
  unsigned int v10; // edi
  int v11; // esi
  unsigned int result; // eax
  int v13; // eax
  _DWORD *v14; // ebx
  bool v15; // zf
  unsigned int *v16; // ecx
  int i; // [esp+10h] [ebp-Ch]
  int v18[2]; // [esp+14h] [ebp-8h] BYREF

  v2 = (char *)MEMORY[0xB429F4]; /*0x791870*/
  v3 = (char *)MEMORY[0xB429F0]; /*0x79187c*/
  v4 = (char *)MEMORY[0xB429F4]; /*0x791884*/
  if ( MEMORY[0xB429F0] > MEMORY[0xB429F4] ) /*0x791886*/
  {
    _invalid_parameter_noinfo((int)v4, (int)v3, a1); /*0x791888*/
    v2 = (char *)MEMORY[0xB429F4]; /*0x79188d*/
    v3 = (char *)MEMORY[0xB429F0]; /*0x791892*/
  }
  if ( v3 > v2 ) /*0x79189f*/
    _invalid_parameter_noinfo((int)v4, (int)v3, (int)&firstOwner); /*0x7918a1*/
  OB_stVector4_EraseRange_010201A0(&firstOwner, (int)v4, v18, (int)&firstOwner, v3, (int)&firstOwner, v4); /*0x7918b9*/
  v5 = (char *)MEMORY[0xB429D4]; /*0x7918be*/
  v6 = (char *)MEMORY[0xB429D0]; /*0x7918c3*/
  v7 = (char *)MEMORY[0xB429D4]; /*0x7918cb*/
  if ( MEMORY[0xB429D0] > MEMORY[0xB429D4] ) /*0x7918cd*/
  {
    _invalid_parameter_noinfo((int)v7, (int)v3, (int)&firstOwner); /*0x7918cf*/
    v5 = (char *)MEMORY[0xB429D4]; /*0x7918d4*/
    v6 = (char *)MEMORY[0xB429D0]; /*0x7918d9*/
  }
  v8 = v6; /*0x7918e6*/
  if ( v6 > v5 ) /*0x7918e8*/
    _invalid_parameter_noinfo((int)v7, (int)v6, (int)&stru_B429CC); /*0x7918ea*/
  OB_stVector4_EraseRange_010201A0(&stru_B429CC, (int)v7, v18, (int)&stru_B429CC, v8, (int)&stru_B429CC, v7); /*0x7918ff*/
  v9 = 0; /*0x791904*/
  v10 = 0; /*0x791906*/
  for ( i = 0; ; i += 0x54 ) /*0x791908*/
  {
    v11 = unk_B429B8; /*0x791910*/
    result = *(_DWORD *)(unk_B429B8 + 0x14); /*0x791916*/
    if ( !result ) /*0x79191b*/
      break; /*0x79191b*/
    result = (int)(*(_DWORD *)(v11 + 0x18) - result) / 0x54; /*0x791935*/
    if ( v10 >= result ) /*0x791939*/
      break; /*0x791939*/
    v13 = *(_DWORD *)(v11 + 0x14); /*0x79193b*/
    v14 = (_DWORD *)(v11 + 0x14); /*0x791940*/
    if ( !v13 || v10 >= (*(_DWORD *)(v11 + 0x18) - v13) / 0x54 ) /*0x79195d*/
      _invalid_parameter_noinfo((int)v14, v10, v11); /*0x79195f*/
    v15 = *(_BYTE *)(i + *v14) == 0; /*0x79196a*/
    v18[0] = v9; /*0x791972*/
    if ( v15 ) /*0x791977*/
    {
      OB_stVector4_PushBack_010201A0(&stru_B429CC, v18); /*0x79198f*/
      v16 = &stru_B429CC; /*0x791994*/
    }
    else
    {
      OB_stVector4_PushBack_010201A0(&firstOwner, v18); /*0x79197e*/
      v16 = &firstOwner; /*0x791983*/
    }
    v18[0] = v9 + 1; /*0x7919a1*/
    OB_stVector4_PushBack_010201A0(v16, v18); /*0x7919a5*/
    ++v10; /*0x7919af*/
    v9 += 2; /*0x7919b2*/
  }
  return result; /*0x7919ba*/
}
