unsigned int __cdecl sub_7459B0(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // edi
  unsigned int i; // ebx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // edi
  int v14; // ecx
  int v15; // edi
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // edi
  int v20; // ecx
  int v21; // edi
  int v22; // ecx
  int v23; // edi
  int v24; // ecx
  int v25; // edi
  int v26; // ecx
  int v27; // edi
  int v28; // ecx
  int v29; // edi
  int v30; // ecx
  int v31; // edi
  int v32; // ecx
  int v33; // edi
  int v34; // ecx
  int v35; // edi
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // edi

  v3 = a2;
  v4 = (unsigned __int16)a1;
  v5 = HIWORD(a1);
  if ( !a2 )
    return 1;
  for ( i = a3; i; v5 %= 0xFFF1u )
  {
    v8 = i;
    if ( i >= 0x15B0 )
      v8 = 0x15B0;
    i -= v8;
    if ( v8 >= 0x10 )
    {
      v9 = (unsigned int)v8 >> 4;
      v8 += 0xFFFFFFF0 * ((unsigned int)v8 >> 4);
      do
      {
        v10 = *v3 + v4;
        v11 = v10 + v5;
        v12 = v3[1] + v10;
        v13 = v12 + v11;
        v14 = v3[2] + v12;
        v15 = v14 + v13;
        v16 = v3[3] + v14;
        v17 = v16 + v15;
        v18 = v3[4] + v16;
        v19 = v18 + v17;
        v20 = v3[5] + v18;
        v21 = v20 + v19;
        v22 = v3[6] + v20;
        v23 = v22 + v21;
        v24 = v3[7] + v22;
        v25 = v24 + v23;
        v26 = v3[8] + v24;
        v27 = v26 + v25;
        v28 = v3[9] + v26;
        v29 = v28 + v27;
        v30 = v3[0xA] + v28;
        v31 = v30 + v29;
        v32 = v3[0xB] + v30;
        v33 = v32 + v31;
        v34 = v3[0xC] + v32;
        v35 = v34 + v33;
        v36 = v3[0xD] + v34;
        v37 = v36 + v35;
        v38 = v3[0xE] + v36;
        v39 = v38 + v37;
        v4 = v3[0xF] + v38;
        v5 = v4 + v39;
        v3 += 0x10;
        --v9;
      }
      while ( v9 );
    }
    for ( ; v8; --v8 )
    {
      v4 += *v3++;
      v5 += v4;
    }
    v4 %= 0xFFF1u;
  }
  return v4 | (v5 << 0x10);
}
