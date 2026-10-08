void __cdecl sub_8AB040(_DWORD *a1, int a2, char a3)
{
  int BhkBlendCollisionObject; // eax
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  double v11; // st7
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  double v15; // st7
  bool v16; // c0
  bool v17; // c3
  double v18; // st7
  float *v19; // eax
  float *v20; // esi
  bool v21; // zf
  NiPoint3 *v22; // edi
  int v23; // ebp
  __int16 v24; // cx
  unsigned int v25; // edx
  void (__thiscall *v26)(float *, _DWORD); // eax
  int v27; // eax
  int v28; // edi
  int v29; // eax
  int v30; // esi
  _DWORD *i; // eax
  float v32; // [esp+4h] [ebp-44h]
  float v33; // [esp+18h] [ebp-30h]
  float v34; // [esp+1Ch] [ebp-2Ch]
  float v35; // [esp+20h] [ebp-28h]
  float v36[9]; // [esp+24h] [ebp-24h] BYREF
  float v37; // [esp+4Ch] [ebp+4h]

  if ( a1 ) /*0x8ab04a*/
  {
    BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject((int)a1); /*0x8ab053*/
    v5 = BhkBlendCollisionObject; /*0x8ab058*/
    if ( BhkBlendCollisionObject ) /*0x8ab05f*/
    {
      v6 = *(_DWORD *)(BhkBlendCollisionObject + 0x10); /*0x8ab065*/
      v7 = 0; /*0x8ab068*/
      if ( v6 ) /*0x8ab06c*/
      {
        v8 = *(_DWORD *)(v6 + 8); /*0x8ab06e*/
        if ( !v8 || v8 == 0xFFFFFFEC ) /*0x8ab07a*/
          v7 = 0; /*0x8ab081*/
        else
          v7 = *(_DWORD *)(v8 + 0x30); /*0x8ab07c*/
      }
      v9 = (v7 >> 8) & 0x1F; /*0x8ab086*/
      if ( a3 ) /*0x8ab08e*/
      {
        v37 = *(float *)(8 * v9 + 0xB2ED68); /*0x8ab097*/
        v10 = *(float *)(8 * v9 + 0xB2ED6C); /*0x8ab09b*/
      }
      else
      {
        v37 = *(float *)(8 * v9 + 0xB2EC68); /*0x8ab0ab*/
        v10 = *(float *)(8 * v9 + 0xB2EC6C); /*0x8ab0af*/
      }
      v33 = v10; /*0x8ab0b6*/
      v11 = *(float *)(v5 + 0x14); /*0x8ab0ba*/
      v12 = v37 < v11; /*0x8ab0c1*/
      v13 = v37 == v11; /*0x8ab0c1*/
      v14 = v37; /*0x8ab0c5*/
      if ( !v12 && !v13 ) /*0x8ab0c7*/
        v14 = *(float *)(v5 + 0x14); /*0x8ab0ce*/
      v34 = v14; /*0x8ab0d1*/
      v15 = *(float *)(v5 + 0x18); /*0x8ab0d5*/
      v16 = v33 < v15; /*0x8ab0dc*/
      v17 = v33 == v15; /*0x8ab0dc*/
      v18 = v33; /*0x8ab0e0*/
      if ( !v16 && !v17 ) /*0x8ab0e2*/
        v18 = *(float *)(v5 + 0x18); /*0x8ab0e9*/
      v19 = (float *)sub_700010(a1, (int)&MEMORY[0xBA7F3C]); /*0x8ab0f7*/
      v20 = v19; /*0x8ab0fc*/
      if ( v19 ) /*0x8ab100*/
      {
        if ( *((_DWORD *)v19 + 0x18) <= 1u ) /*0x8ab10e*/
        {
          sub_8AA7F0(v19); /*0x8ab116*/
          v21 = *((_DWORD *)v20 + 0x14) == 0; /*0x8ab11b*/
          *((_DWORD *)v20 + 0x18) = 1; /*0x8ab11f*/
          if ( v21 ) /*0x8ab122*/
          {
            sub_401080(v36, 0xC, 3, (void *(__thiscall *)(void *))sub_8AA460); /*0x8ab137*/
            v36[1] = v34; /*0x8ab140*/
            v35 = v18; /*0x8ab0f1*/
            v36[2] = v35; /*0x8ab14d*/
            v36[0] = 0.0; /*0x8ab153*/
            v36[4] = v37; /*0x8ab15b*/
            v36[5] = v33; /*0x8ab163*/
            v36[3] = flt_A57F50; /*0x8ab16d*/
            v36[7] = 1.0; /*0x8ab173*/
            v36[8] = 1.0; /*0x8ab177*/
            v36[6] = kHeadBodyNormalMatchRadius; /*0x8ab181*/
            sub_8AA480((unsigned int *)v20 + 0x10, 3u); /*0x8ab185*/
            v22 = (NiPoint3 *)v36; /*0x8ab18a*/
            v23 = 3; /*0x8ab18e*/
            do /*0x8ab1a1*/
            {
              sub_8AB000((unsigned int *)v20, v22++); /*0x8ab196*/
              --v23; /*0x8ab19e*/
            }
            while ( v23 ); /*0x8ab1a1*/
            v24 = *((_WORD *)v20 + 4); /*0x8ab1a3*/
            v25 = *(_DWORD *)v20; /*0x8ab1a9*/
            v20[5] = 0.0; /*0x8ab1ab*/
            v26 = *(void (__thiscall **)(float *, _DWORD))(v25 + 0x4C); /*0x8ab1b0*/
            v20[6] = 1.0; /*0x8ab1b8*/
            v20[3] = 1.0; /*0x8ab1c0*/
            *((_WORD *)v20 + 4) = v24 & 0xFE30 | 0x1C5; /*0x8ab1c3*/
            v20[4] = 0.0; /*0x8ab1c7*/
            v32 = -flt_A7DEB4; /*0x8ab1d5*/
            v26(v20, LODWORD(v32)); /*0x8ab1d8*/
          }
        }
      }
    }
    v27 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x8ab1e2*/
    v28 = v27; /*0x8ab1e4*/
    if ( v27 ) /*0x8ab1e8*/
    {
      v29 = *(unsigned __int16 *)(v27 + 0xB6); /*0x8ab1ea*/
      v30 = 0; /*0x8ab1f1*/
      if ( *(_WORD *)(v28 + 0xB6) ) /*0x8ab1ea*/
      {
        if ( v29 ) /*0x8ab1f9*/
          goto LABEL_25; /*0x8ab1f9*/
        for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v28 + 0xB0) + 4 * v30) ) /*0x8ab1fb*/
        {
          sub_8AB040(i, a2, a3); /*0x8ab216*/
          if ( *(unsigned __int16 *)(v28 + 0xB6) <= (unsigned int)++v30 ) /*0x8ab22a*/
            break; /*0x8ab22a*/
LABEL_25:
          ; /*0x8ab1ff*/
        }
      }
    }
  }
}
