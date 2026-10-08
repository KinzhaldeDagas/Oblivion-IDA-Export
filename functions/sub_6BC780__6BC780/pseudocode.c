double __cdecl sub_6BC780(float *a1, int a2)
{
  int v3; // eax
  int v4; // edi
  double v5; // st7
  bool v6; // zf
  float v8; // [esp+1Ch] [ebp-4Ch]
  int v9; // [esp+20h] [ebp-48h]
  float v10; // [esp+20h] [ebp-48h]
  float v11; // [esp+20h] [ebp-48h]
  float v12; // [esp+20h] [ebp-48h]
  float v13; // [esp+20h] [ebp-48h]
  float v14; // [esp+20h] [ebp-48h]
  int v15; // [esp+24h] [ebp-44h]
  float v16; // [esp+44h] [ebp-24h]
  float v17; // [esp+48h] [ebp-20h]
  float v18; // [esp+4Ch] [ebp-1Ch]
  int v19; // [esp+50h] [ebp-18h] BYREF
  float v20; // [esp+54h] [ebp-14h]
  float v21; // [esp+58h] [ebp-10h]
  int v22; // [esp+5Ch] [ebp-Ch] BYREF
  float v23; // [esp+60h] [ebp-8h]
  float v24; // [esp+64h] [ebp-4h]

  v8 = 0.0; /*0x6bc791*/
  if ( a2 != 1 ) /*0x6bc797*/
  {
    v15 = a2 - 1; /*0x6bc7a0*/
    v3 = dword_B23D84; /*0x6bc7a4*/
    do /*0x6bc8e5*/
    {
      v4 = 0; /*0x6bc7a9*/
      v9 = 0; /*0x6bc7b0*/
      if ( v3 >= 0 ) /*0x6bc7b4*/
      {
        do /*0x6bc8d8*/
        {
          v10 = (double)v9 * unk_B3C2F4; /*0x6bc7d2*/
          sub_6BC480(v10, a1, (int)(a1 + 0x10), (float *)&v22); /*0x6bc7dd*/
          sub_6BC560(v10, a1, (int)(a1 + 0x10), (float *)&v19); /*0x6bc7f4*/
          v16 = v23 * v21 - v24 * v20; /*0x6bc81c*/
          v17 = v24 * *(float *)&v19 - v21 * *(float *)&v22; /*0x6bc838*/
          v18 = v20 * *(float *)&v22 - *(float *)&v19 * v23; /*0x6bc84a*/
          v11 = v18 * v18 + v16 * v16 + v17 * v17; /*0x6bc87a*/
          v12 = sqrt(v11); /*0x6bc887*/
          v5 = v12; /*0x6bc88b*/
          v13 = *(float *)&v22 * *(float *)&v22 + v23 * v23 + v24 * v24; /*0x6bc8a5*/
          v14 = v5 / v13; /*0x6bc8ad*/
          if ( v8 < (double)v14 ) /*0x6bc8c0*/
            v8 = v14; /*0x6bc8c2*/
          v3 = dword_B23D84; /*0x6bc8ca*/
          v9 = ++v4; /*0x6bc8d4*/
        }
        while ( v4 <= dword_B23D84 ); /*0x6bc8d8*/
      }
      v6 = v15-- == 1; /*0x6bc8de*/
      a1 += 0x10; /*0x6bc8e3*/
    }
    while ( !v6 ); /*0x6bc8e5*/
  }
  return v8; /*0x6bc8f2*/
}
