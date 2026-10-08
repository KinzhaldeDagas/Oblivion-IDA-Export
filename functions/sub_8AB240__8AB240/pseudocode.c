void __cdecl sub_8AB240(float a1, float a2)
{
  int v2; // ebp
  int BhkBlendCollisionObject; // eax
  _DWORD *v4; // ecx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // esi
  bool v11; // zf
  int v12; // ebx
  NiPoint3 *v13; // edi
  __int16 v14; // cx
  float v15; // edx
  void (__thiscall *v16)(_DWORD *, _DWORD); // eax
  int BhkCollisionObject; // eax
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // esi
  float i; // eax
  float v24; // [esp+4h] [ebp-34h]
  float v25; // [esp+18h] [ebp-20h]
  float v26; // [esp+1Ch] [ebp-1Ch]
  float v27[6]; // [esp+20h] [ebp-18h] BYREF

  v2 = LODWORD(a1); /*0x8ab244*/
  if ( a1 != 0.0 ) /*0x8ab24a*/
  {
    BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(SLODWORD(a1)); /*0x8ab254*/
    if ( BhkBlendCollisionObject ) /*0x8ab25e*/
    {
      v4 = *(_DWORD **)(BhkBlendCollisionObject + 0x10); /*0x8ab264*/
      v5 = 0; /*0x8ab267*/
      if ( v4 ) /*0x8ab26b*/
      {
        v6 = v4[2]; /*0x8ab26d*/
        if ( !v6 || v6 == 0xFFFFFFEC ) /*0x8ab279*/
          v7 = 0; /*0x8ab280*/
        else
          v7 = *(_DWORD *)(v6 + 0x30); /*0x8ab27b*/
        v5 = v7 & 0xFFFFFFC0 | 8; /*0x8ab285*/
        if ( v6 ) /*0x8ab28a*/
        {
          v8 = v6 + 0x14; /*0x8ab28c*/
          if ( v8 ) /*0x8ab28f*/
            *(_DWORD *)(v8 + 0x1C) = v5; /*0x8ab291*/
        }
        (*(void (__thiscall **)(_DWORD *))(*v4 + 0x80))(v4); /*0x8ab29c*/
      }
      v9 = (v5 >> 8) & 0x1F; /*0x8ab2a4*/
      a1 = *(float *)(4 * v9 + 0xB2EE68); /*0x8ab2b4*/
      v10 = sub_700010((_DWORD *)v2, (int)&MEMORY[0xBA7F3C]); /*0x8ab2bd*/
      if ( v10 ) /*0x8ab2c1*/
      {
        if ( a1 >= 0.0 ) /*0x8ab2d2*/
        {
          v25 = *(float *)(8 * v9 + 0xB2E660); /*0x8ab2e1*/
          v26 = *(float *)(8 * v9 + 0xB2E664); /*0x8ab2ec*/
          sub_8AA7F0((float *)v10); /*0x8ab2f0*/
          v11 = v10[0x14] == 0; /*0x8ab2f5*/
          v12 = 2; /*0x8ab2f9*/
          v10[0x18] = 2; /*0x8ab2fe*/
          if ( v11 ) /*0x8ab301*/
          {
            sub_401080(v27, 0xC, 2, (void *(__thiscall *)(void *))sub_8AA460); /*0x8ab314*/
            v27[1] = 0.0; /*0x8ab31b*/
            v27[2] = 0.0; /*0x8ab320*/
            v27[0] = 0.0; /*0x8ab327*/
            v27[4] = v25; /*0x8ab32f*/
            v27[5] = v26; /*0x8ab337*/
            v27[3] = a1; /*0x8ab33f*/
            sub_8AA480(v10 + 0x10, 2u); /*0x8ab343*/
            v13 = (NiPoint3 *)v27; /*0x8ab348*/
            do /*0x8ab35e*/
            {
              sub_8AB000(v10, v13++); /*0x8ab353*/
              --v12; /*0x8ab35b*/
            }
            while ( v12 ); /*0x8ab35e*/
            v14 = *((_WORD *)v10 + 4); /*0x8ab360*/
            v15 = *(float *)v10; /*0x8ab368*/
            *((float *)v10 + 5) = a2; /*0x8ab36a*/
            v16 = *(void (__thiscall **)(_DWORD *, _DWORD))(LODWORD(v15) + 0x4C); /*0x8ab371*/
            *((float *)v10 + 6) = a1; /*0x8ab374*/
            *((float *)v10 + 4) = 0.0; /*0x8ab383*/
            *((_WORD *)v10 + 4) = v14 & 0xFE30 | 0xC5; /*0x8ab386*/
            *((float *)v10 + 3) = 1.0; /*0x8ab38c*/
            v24 = -flt_A7DEB4; /*0x8ab398*/
            v16(v10, LODWORD(v24)); /*0x8ab39d*/
          }
        }
      }
    }
    else
    {
      BhkCollisionObject = NiAVObject_GetBhkCollisionObject(v2); /*0x8ab3a2*/
      if ( BhkCollisionObject ) /*0x8ab3ac*/
      {
        v18 = *(_DWORD **)(BhkCollisionObject + 0x10); /*0x8ab3ae*/
        if ( v18 ) /*0x8ab3b3*/
        {
          if ( (*sub_497340(v18, &a1) & 0x1F00) == 0x1600 ) /*0x8ab3cf*/
            (*(void (__thiscall **)(_DWORD *, int))(*v18 + 0x9C))(v18, 6); /*0x8ab3dd*/
        }
      }
    }
    v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x8ab3e7*/
    v20 = v19; /*0x8ab3e9*/
    if ( v19 ) /*0x8ab3ed*/
    {
      v21 = *(unsigned __int16 *)(v19 + 0xB6); /*0x8ab3ef*/
      v22 = 0; /*0x8ab3f6*/
      if ( *(_WORD *)(v20 + 0xB6) ) /*0x8ab3ef*/
      {
        if ( v21 ) /*0x8ab3fe*/
          goto LABEL_26; /*0x8ab3fe*/
        for ( i = 0.0; ; i = *(float *)(*(_DWORD *)(v20 + 0xB0) + 4 * v22) ) /*0x8ab400*/
        {
          sub_8AB240(i, a2); /*0x8ab416*/
          if ( *(unsigned __int16 *)(v20 + 0xB6) <= (unsigned int)++v22 ) /*0x8ab42a*/
            break; /*0x8ab42a*/
LABEL_26:
          ; /*0x8ab404*/
        }
      }
    }
  }
}
