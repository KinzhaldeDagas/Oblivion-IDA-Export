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

  v3 = *(this + 2);
  v4 = v3[1];
  v5 = *v3;
  v3 += 2;
  v6 = v5 + (v4 << 8);
  *(this + 2) = v3;
  v8 = *v3 + (v3[1] << 8);
  *(this + 2) = v3 + 2;
  v24[0] = HIBYTE(v6) & 0xF8;
  v25 = 8 * v6;
  v27 = HIBYTE(v8) & 0xF8;
  v28 = (v8 >> 3) & 0xFE;
  v24[1] = (v6 >> 3) & 0xFE;
  v26 = 0xFF;
  v29 = 8 * v8;
  v30 = 0xFF;
  v34 = 0xFF;
  if ( v6 <= v8 )
  {
    v31 = (v24[0] + (unsigned int)v27) >> 1;
    v32 = (((v6 >> 3) & 0xFE) + (unsigned int)v28) >> 1;
    v33 = (v25 + (unsigned int)v29) >> 1;
    v35 = v31;
    v36 = __PAIR16__((v25 + (unsigned int)v29) << 7 >> 0x18, v32);
    v37 = 0;
  }
  else
  {
    v31 = (v27 + 2 * (unsigned int)v24[0]) / 3;
    v32 = (v28 + 2 * ((v6 >> 3) & 0xFEu)) / 3;
    v33 = (v29 + 2 * (unsigned int)v25) / 3;
    v35 = (v24[0] + 2 * (unsigned int)v27) / 3;
    LOBYTE(v36) = (((v6 >> 3) & 0xFE) + 2 * (unsigned int)v28) / 3;
    HIBYTE(v36) = (v25 + 2 * (unsigned int)v29) / 3;
    v37 = 0xFF;
  }
  v9 = 4;
  do
  {
    v10 = **(this + 2);
    v11 = v10 & 3;
    v12 = v24[4 * v11];
    v13 = &v24[4 * v11 + 2];
    *a2 = v12;
    a2[1] = v13[0xFFFFFFFF];
    v14 = *v13;
    a2[3] = v13[1];
    v10 >>= 2;
    a2[2] = v14;
    v15 = v10 >> 2;
    a2[4] = v24[4 * (v10 & 3)];
    a2[5] = v24[4 * (v10 & 3) + 1];
    v16 = v24[4 * (v10 & 3) + 2];
    a2[7] = *(&v26 + 4 * (v10 & 3));
    v17 = &v24[4 * ((v10 >> 2) & 3)];
    v18 = *v17++;
    a2[8] = v18;
    v19 = *v17++;
    a2[9] = v19;
    v20 = *v17;
    a2[0xB] = v17[1];
    a2[0xA] = v20;
    v21 = (v15 >> 2) & 3;
    a2[0xC] = v24[4 * v21];
    a2[0xD] = v24[4 * v21 + 1];
    v22 = v24[4 * v21 + 2];
    result = (unsigned __int8)*(&v26 + 4 * v21);
    a2[6] = v16;
    a2[0xE] = v22;
    a2[0xF] = result;
    ++*(this + 2);
    a2 += 0x10;
    --v9;
  }
  while ( v9 );
  return result;
}
