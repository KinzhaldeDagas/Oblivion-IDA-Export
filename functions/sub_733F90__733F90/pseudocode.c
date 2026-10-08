int __thiscall sub_733F90(unsigned __int8 **this, char *a2)
{
  unsigned __int8 *v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebp
  int v7; // ebx
  int v9; // ebp
  unsigned __int8 v10; // al
  char *v11; // edi
  char *v12; // edi
  unsigned int v13; // eax
  char *v14; // edi
  char *v15; // eax
  char v16; // dl
  char v17; // dl
  int result; // eax
  _BYTE v19[2]; // [esp+10h] [ebp-10h] BYREF
  unsigned __int8 v20; // [esp+12h] [ebp-Eh]
  char v21; // [esp+13h] [ebp-Dh]
  unsigned __int8 v22; // [esp+14h] [ebp-Ch]
  unsigned __int8 v23; // [esp+15h] [ebp-Bh]
  char v24; // [esp+16h] [ebp-Ah]
  char v25; // [esp+17h] [ebp-9h]
  char v26; // [esp+18h] [ebp-8h]
  char v27; // [esp+19h] [ebp-7h]
  char v28; // [esp+1Ah] [ebp-6h]
  char v29; // [esp+1Bh] [ebp-5h]

  v3 = *(this + 2); /*0x733fa4*/
  v4 = (unsigned __int16)(*v3 + (v3[1] << 8)); /*0x733fb6*/
  v3 += 2; /*0x733fb9*/
  *(this + 2) = v3; /*0x733fbc*/
  v5 = (unsigned __int16)(*v3 + (v3[1] << 8)); /*0x733fd0*/
  v19[0] = BYTE1(v4) & 0xF8; /*0x733fd6*/
  v20 = 8 * v4; /*0x733fe2*/
  v21 = BYTE1(v5) & 0xF8; /*0x733fea*/
  v6 = BYTE1(v5) & 0xF8; /*0x733fee*/
  v23 = 8 * v5; /*0x734000*/
  v22 = (v5 >> 3) & 0xFE; /*0x734004*/
  *(this + 2) = v3 + 2; /*0x73400b*/
  v24 = (v6 + 2 * (unsigned int)v19[0]) / 3; /*0x734025*/
  v19[1] = (v4 >> 3) & 0xFE; /*0x73402f*/
  v7 = (v4 >> 3) & 0xFE; /*0x734033*/
  v25 = ((unsigned int)v22 + 2 * v7) / 3; /*0x734047*/
  v26 = (v23 + 2 * (unsigned int)v20) / 3; /*0x73405c*/
  v27 = ((unsigned int)v19[0] + 2 * v6) / 3; /*0x734071*/
  v28 = (v7 + 2 * (unsigned int)v22) / 3; /*0x73408a*/
  v29 = (v20 + 2 * (unsigned int)v23) / 3; /*0x73409f*/
  v9 = 4; /*0x7340a3*/
  do /*0x734150*/
  {
    v10 = **(this + 2); /*0x7340b3*/
    v11 = &v19[2 * (v10 & 3) + (v10 & 3)]; /*0x7340bf*/
    *a2 = *v11; /*0x7340c5*/
    a2[1] = v11[1]; /*0x7340cb*/
    a2[2] = v11[2]; /*0x7340d5*/
    v10 >>= 2; /*0x7340d8*/
    v12 = &v19[2 * (v10 & 3) + (v10 & 3)]; /*0x7340e5*/
    a2[4] = *v12; /*0x7340eb*/
    a2[5] = v12[1]; /*0x7340f4*/
    a2[6] = v12[2]; /*0x7340fe*/
    v13 = v10 >> 2; /*0x734101*/
    v14 = &v19[2 * (v13 & 3) + (v13 & 3)]; /*0x73410d*/
    a2[8] = *v14; /*0x734113*/
    a2[9] = v14[1]; /*0x73411c*/
    a2[0xA] = v14[2]; /*0x734129*/
    v15 = &v19[2 * ((v13 >> 2) & 3) + ((v13 >> 2) & 3)]; /*0x734130*/
    v16 = *v15++; /*0x734133*/
    a2[0xC] = v16; /*0x734138*/
    v17 = *v15; /*0x73413b*/
    result = (unsigned __int8)v15[1]; /*0x73413e*/
    a2[0xD] = v17; /*0x734142*/
    a2[0xE] = result; /*0x734145*/
    ++*(this + 2); /*0x734148*/
    a2 += 0x10; /*0x73414b*/
    --v9; /*0x73414e*/
  }
  while ( v9 ); /*0x734150*/
  return result; /*0x734156*/
}
