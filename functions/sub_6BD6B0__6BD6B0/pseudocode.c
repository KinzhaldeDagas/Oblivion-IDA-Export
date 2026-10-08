void __cdecl sub_6BD6B0(float *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  float *v4; // esi
  float *v5; // eax
  float *v6; // eax
  bool v7; // zf
  float *v8; // esi
  float *v9; // eax
  int v10; // [esp+4h] [ebp-14h]
  float v11[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = a2; /*0x6bd6b4*/
  if ( a2 >= 2 ) /*0x6bd6bb*/
  {
    sub_6BD310((int)a1, a2, a3); /*0x6bd6cf*/
    v4 = a1 + 0xA; /*0x6bd6d4*/
    v5 = sub_714E70(v11, a1 + 1, a1 + 1, a1 + 0xA); /*0x6bd6e2*/
    a1[5] = *v5; /*0x6bd6e9*/
    a1[6] = v5[1]; /*0x6bd6ef*/
    a1[7] = v5[2]; /*0x6bd6f5*/
    a1[8] = v5[3]; /*0x6bd704*/
    if ( a2 - 1 > 1 ) /*0x6bd707*/
    {
      v10 = a2 - 2; /*0x6bd70c*/
      do /*0x6bd744*/
      {
        v6 = sub_714E70(v11, v4 + 0xFFFFFFF7, v4, v4 + 9); /*0x6bd71e*/
        v4[4] = *v6; /*0x6bd725*/
        v4[5] = v6[1]; /*0x6bd72b*/
        v4[6] = v6[2]; /*0x6bd731*/
        v7 = v10-- == 1; /*0x6bd73a*/
        v4[7] = v6[3]; /*0x6bd73f*/
        v4 += 9; /*0x6bd742*/
      }
      while ( !v7 ); /*0x6bd744*/
      v3 = a2; /*0x6bd746*/
    }
    v8 = &a1[9 * a2 - 9]; /*0x6bd74e*/
    v9 = sub_714E70(v11, &a1[9 * v3 - 0x11], v8 + 1, v8 + 1); /*0x6bd763*/
    v8[5] = *v9; /*0x6bd76a*/
    v8[6] = v9[1]; /*0x6bd770*/
    v8[7] = v9[2]; /*0x6bd779*/
    v8[8] = v9[3]; /*0x6bd780*/
  }
}
