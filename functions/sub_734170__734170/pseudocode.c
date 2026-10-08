int __thiscall sub_734170(unsigned __int8 **this, _BYTE *a2)
{
  unsigned __int8 *v3; // eax
  __int16 v4; // dx
  __int16 v5; // si
  unsigned __int16 v6; // dx
  unsigned __int16 v8; // si
  int v9; // ebp
  unsigned __int8 v10; // dl
  int v11; // eax
  char v12; // bl
  char *v13; // eax
  char v14; // bl
  unsigned int v15; // esi
  char v16; // bl
  char *v17; // eax
  char v18; // dl
  char v19; // dl
  char v20; // dl
  int v21; // esi
  char v22; // dl
  int result; // eax
  _BYTE v24[2]; // [esp+18h] [ebp-14h] BYREF
  unsigned __int8 v25; // [esp+1Ah] [ebp-12h]
  char v26; // [esp+1Bh] [ebp-11h]
  unsigned __int8 v27; // [esp+1Ch] [ebp-10h]
  unsigned __int8 v28; // [esp+1Dh] [ebp-Fh]
  unsigned __int8 v29; // [esp+1Eh] [ebp-Eh]
  char v30; // [esp+1Fh] [ebp-Dh]
  char v31; // [esp+20h] [ebp-Ch]
  unsigned __int8 v32; // [esp+21h] [ebp-Bh]
  char v33; // [esp+22h] [ebp-Ah]
  char v34; // [esp+23h] [ebp-9h]
  char v35; // [esp+24h] [ebp-8h]
  unsigned __int16 v36; // [esp+25h] [ebp-7h]
  char v37; // [esp+27h] [ebp-5h]

  v3 = *(this + 2); /*0x734184*/
  v4 = v3[1]; /*0x734187*/
  v5 = *v3; /*0x73418c*/
  v3 += 2; /*0x73418f*/
  v6 = v5 + (v4 << 8); /*0x734196*/
  *(this + 2) = v3; /*0x734199*/
  v8 = *v3 + (v3[1] << 8); /*0x7341b6*/
  *(this + 2) = v3 + 2; /*0x7341bd*/
  v24[0] = HIBYTE(v6) & 0xF8; /*0x7341cb*/
  v25 = 8 * v6; /*0x7341cf*/
  v27 = HIBYTE(v8) & 0xF8; /*0x7341d9*/
  v28 = (v8 >> 3) & 0xFE; /*0x7341eb*/
  v24[1] = (v6 >> 3) & 0xFE; /*0x734200*/
  v26 = 0xFF; /*0x734204*/
  v29 = 8 * v8; /*0x734209*/
  v30 = 0xFF; /*0x73420d*/
  v34 = 0xFF; /*0x734212*/
  if ( v6 <= v8 ) /*0x734217*/
  {
    v31 = (v24[0] + (unsigned int)v27) >> 1; /*0x7342d8*/
    v32 = (((v6 >> 3) & 0xFE) + (unsigned int)v28) >> 1; /*0x7342dc*/
    v33 = (v25 + (unsigned int)v29) >> 1; /*0x7342e0*/
    v35 = v31; /*0x7342e4*/
    v36 = __PAIR16__((v25 + (unsigned int)v29) << 7 >> 0x18, v32); /*0x7342e8*/
    v37 = 0; /*0x7342f0*/
  }
  else
  {
    v31 = (v27 + 2 * (unsigned int)v24[0]) / 3; /*0x734239*/
    v32 = (v28 + 2 * ((v6 >> 3) & 0xFEu)) / 3; /*0x734251*/
    v33 = (v29 + 2 * (unsigned int)v25) / 3; /*0x734266*/
    v35 = (v24[0] + 2 * (unsigned int)v27) / 3; /*0x73427b*/
    LOBYTE(v36) = (((v6 >> 3) & 0xFE) + 2 * (unsigned int)v28) / 3; /*0x734290*/
    HIBYTE(v36) = (v25 + 2 * (unsigned int)v29) / 3; /*0x7342a5*/
    v37 = 0xFF; /*0x7342a9*/
  }
  v9 = 4; /*0x7342f5*/
  do /*0x7343c1*/
  {
    v10 = **(this + 2); /*0x734303*/
    v11 = v10 & 3; /*0x734308*/
    v12 = v24[4 * v11]; /*0x73430b*/
    v13 = &v24[4 * v11 + 2]; /*0x734317*/
    *a2 = v12; /*0x73431a*/
    a2[1] = v13[0xFFFFFFFF]; /*0x734320*/
    v14 = *v13; /*0x734323*/
    a2[3] = v13[1]; /*0x73432a*/
    v10 >>= 2; /*0x73432d*/
    a2[2] = v14; /*0x73433d*/
    v15 = v10 >> 2; /*0x73434a*/
    a2[4] = v24[4 * (v10 & 3)]; /*0x73434d*/
    a2[5] = v24[4 * (v10 & 3) + 1]; /*0x734354*/
    v16 = v24[4 * (v10 & 3) + 2]; /*0x734357*/
    a2[7] = *(&v26 + 4 * (v10 & 3)); /*0x73435e*/
    v17 = &v24[4 * ((v10 >> 2) & 3)]; /*0x734366*/
    v18 = *v17++; /*0x73436a*/
    a2[8] = v18; /*0x734370*/
    v19 = *v17++; /*0x734373*/
    a2[9] = v19; /*0x734379*/
    v20 = *v17; /*0x73437c*/
    a2[0xB] = v17[1]; /*0x734383*/
    a2[0xA] = v20; /*0x734389*/
    v21 = (v15 >> 2) & 3; /*0x73438c*/
    a2[0xC] = v24[4 * v21]; /*0x73439b*/
    a2[0xD] = v24[4 * v21 + 1]; /*0x7343a4*/
    v22 = v24[4 * v21 + 2]; /*0x7343a7*/
    result = (unsigned __int8)*(&v26 + 4 * v21); /*0x7343aa*/
    a2[6] = v16; /*0x7343ae*/
    a2[0xE] = v22; /*0x7343b1*/
    a2[0xF] = result; /*0x7343b4*/
    ++*(this + 2); /*0x7343b7*/
    a2 += 0x10; /*0x7343bb*/
    --v9; /*0x7343be*/
  }
  while ( v9 ); /*0x7343c1*/
  return result; /*0x7343c7*/
}
