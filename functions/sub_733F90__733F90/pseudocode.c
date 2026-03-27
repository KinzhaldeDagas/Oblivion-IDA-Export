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

  v3 = *(this + 2);
  v4 = (unsigned __int16)(*v3 + (v3[1] << 8));
  v3 += 2;
  *(this + 2) = v3;
  v5 = (unsigned __int16)(*v3 + (v3[1] << 8));
  v19[0] = BYTE1(v4) & 0xF8;
  v20 = 8 * v4;
  v21 = BYTE1(v5) & 0xF8;
  v6 = BYTE1(v5) & 0xF8;
  v23 = 8 * v5;
  v22 = (v5 >> 3) & 0xFE;
  *(this + 2) = v3 + 2;
  v24 = (v6 + 2 * (unsigned int)v19[0]) / 3;
  v19[1] = (v4 >> 3) & 0xFE;
  v7 = (v4 >> 3) & 0xFE;
  v25 = ((unsigned int)v22 + 2 * v7) / 3;
  v26 = (v23 + 2 * (unsigned int)v20) / 3;
  v27 = ((unsigned int)v19[0] + 2 * v6) / 3;
  v28 = (v7 + 2 * (unsigned int)v22) / 3;
  v29 = (v20 + 2 * (unsigned int)v23) / 3;
  v9 = 4;
  do
  {
    v10 = **(this + 2);
    v11 = &v19[2 * (v10 & 3) + (v10 & 3)];
    *a2 = *v11;
    a2[1] = v11[1];
    a2[2] = v11[2];
    v10 >>= 2;
    v12 = &v19[2 * (v10 & 3) + (v10 & 3)];
    a2[4] = *v12;
    a2[5] = v12[1];
    a2[6] = v12[2];
    v13 = v10 >> 2;
    v14 = &v19[2 * (v13 & 3) + (v13 & 3)];
    a2[8] = *v14;
    a2[9] = v14[1];
    a2[0xA] = v14[2];
    v15 = &v19[2 * ((v13 >> 2) & 3) + ((v13 >> 2) & 3)];
    v16 = *v15++;
    a2[0xC] = v16;
    v17 = *v15;
    result = (unsigned __int8)v15[1];
    a2[0xD] = v17;
    a2[0xE] = result;
    ++*(this + 2);
    a2 += 0x10;
    --v9;
  }
  while ( v9 );
  return result;
}
