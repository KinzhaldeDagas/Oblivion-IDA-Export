int __cdecl sub_7459B0(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
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

  v3 = a2; /*0x7459b1*/
  v4 = (unsigned __int16)a1; /*0x7459ba*/
  v5 = HIWORD(a1); /*0x7459bd*/
  if ( !a2 ) /*0x7459c2*/
    return 1; /*0x7459c5*/
  for ( i = a3; i; v5 %= 0xFFF1u ) /*0x7459d3*/
  {
    v8 = i; /*0x7459e6*/
    if ( i >= 0x15B0 ) /*0x7459e8*/
      v8 = 0x15B0; /*0x7459ea*/
    i -= v8; /*0x7459ef*/
    if ( v8 >= 0x10 ) /*0x7459f4*/
    {
      v9 = (unsigned int)v8 >> 4; /*0x7459fc*/
      v8 += 0xFFFFFFF0 * ((unsigned int)v8 >> 4); /*0x745a06*/
      do /*0x745a95*/
      {
        v10 = *v3 + v4; /*0x745a13*/
        v11 = v10 + v5; /*0x745a19*/
        v12 = v3[1] + v10; /*0x745a1b*/
        v13 = v12 + v11; /*0x745a21*/
        v14 = v3[2] + v12; /*0x745a23*/
        v15 = v14 + v13; /*0x745a29*/
        v16 = v3[3] + v14; /*0x745a2b*/
        v17 = v16 + v15; /*0x745a31*/
        v18 = v3[4] + v16; /*0x745a33*/
        v19 = v18 + v17; /*0x745a39*/
        v20 = v3[5] + v18; /*0x745a3b*/
        v21 = v20 + v19; /*0x745a41*/
        v22 = v3[6] + v20; /*0x745a43*/
        v23 = v22 + v21; /*0x745a49*/
        v24 = v3[7] + v22; /*0x745a4b*/
        v25 = v24 + v23; /*0x745a51*/
        v26 = v3[8] + v24; /*0x745a53*/
        v27 = v26 + v25; /*0x745a59*/
        v28 = v3[9] + v26; /*0x745a5b*/
        v29 = v28 + v27; /*0x745a61*/
        v30 = v3[0xA] + v28; /*0x745a63*/
        v31 = v30 + v29; /*0x745a69*/
        v32 = v3[0xB] + v30; /*0x745a6b*/
        v33 = v32 + v31; /*0x745a71*/
        v34 = v3[0xC] + v32; /*0x745a73*/
        v35 = v34 + v33; /*0x745a79*/
        v36 = v3[0xD] + v34; /*0x745a7b*/
        v37 = v36 + v35; /*0x745a81*/
        v38 = v3[0xE] + v36; /*0x745a83*/
        v39 = v38 + v37; /*0x745a89*/
        v4 = v3[0xF] + v38; /*0x745a8b*/
        v5 = v4 + v39; /*0x745a8d*/
        v3 += 0x10; /*0x745a8f*/
        --v9; /*0x745a92*/
      }
      while ( v9 ); /*0x745a95*/
    }
    for ( ; v8; --v8 ) /*0x745a9d*/
    {
      v4 += *v3++; /*0x745aa3*/
      v5 += v4; /*0x745aa8*/
    }
    v4 %= 0xFFF1u; /*0x745abf*/
  }
  return v4 | (v5 << 0x10); /*0x7459c4*/
}
