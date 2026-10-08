// ODismemberment: recursive post-death Havok force/blend helper. Finds bhkBlendCollisionObject, bhkBlendController, bhkForceController, and bhkConstraint objects; suitable only for existing collision-enabled subtrees, not arbitrary detached art.
unsigned int __cdecl sub_8AB440(NiObjectNET *a1, float *a2, int a3, float a4, int a5)
{
  unsigned int result; // eax
  NiObjectNET *v6; // ebx
  float *BhkBlendCollisionObject; // eax
  float *v8; // edi
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  _DWORD *v12; // esi
  bool v13; // zf
  NiPoint3 *v14; // edi
  int v15; // ebx
  __int16 v16; // dx
  float v17; // eax
  void (__thiscall *v18)(_DWORD *, _DWORD); // edx
  __m128 *v19; // eax
  int BhkCollisionObject; // eax
  _DWORD *v21; // esi
  float *v22; // eax
  unsigned int v23; // edi
  int v24; // esi
  _DWORD *i; // eax
  float v26; // [esp+8h] [ebp-64h]
  float v27; // [esp+8h] [ebp-64h]
  float v28; // [esp+1Ch] [ebp-50h]
  float v29; // [esp+24h] [ebp-48h]
  NiObjectNET *v30; // [esp+28h] [ebp-44h] BYREF
  float v31; // [esp+2Ch] [ebp-40h]
  int v32[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v33[11]; // [esp+3Ch] [ebp-30h] BYREF

  result = (unsigned int)a2; /*0x8ab454*/
  v6 = a1; /*0x8ab458*/
  v30 = a1; /*0x8ab45f*/
  if ( a1 ) /*0x8ab46f*/
  {
    BhkBlendCollisionObject = (float *)NiAVObject_GetBhkBlendCollisionObject((int)a1); /*0x8ab476*/
    v8 = BhkBlendCollisionObject; /*0x8ab47b*/
    if ( BhkBlendCollisionObject ) /*0x8ab482*/
    {
      sub_88F040(BhkBlendCollisionObject); /*0x8ab48a*/
      v9 = *((_DWORD *)v8 + 4); /*0x8ab48f*/
      v10 = 0; /*0x8ab492*/
      if ( v9 ) /*0x8ab496*/
      {
        v11 = *(_DWORD *)(v9 + 8); /*0x8ab498*/
        if ( !v11 || v11 == 0xFFFFFFEC ) /*0x8ab4a4*/
          v10 = 0; /*0x8ab4ab*/
        else
          v10 = *(_DWORD *)(v11 + 0x30); /*0x8ab4a6*/
      }
      v28 = *(float *)(4 * ((v10 >> 8) & 0x1F) + 0xB2EEE8); /*0x8ab4c1*/
      v12 = sub_700010(a1, (int)&MEMORY[0xBA7F3C]); /*0x8ab4ca*/
      if ( v12 ) /*0x8ab4ce*/
      {
        if ( v28 >= 0.0 ) /*0x8ab4df*/
        {
          if ( (_BYTE)a5 ) /*0x8ab4e9*/
          {
            (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v8 + 0x70))(v8, 1, 0); /*0x8ab615*/
          }
          else
          {
            v31 = v8[5]; /*0x8ab4f4*/
            v29 = v8[6]; /*0x8ab4fb*/
            sub_8AA7F0((float *)v12); /*0x8ab4ff*/
            v13 = v12[0x14] == 0; /*0x8ab504*/
            v12[0x18] = 2; /*0x8ab508*/
            if ( v13 ) /*0x8ab50f*/
            {
              sub_401080(v33, 0xC, 2, (void *(__thiscall *)(void *))sub_8AA460); /*0x8ab523*/
              v33[1] = v31; /*0x8ab52c*/
              v33[2] = v29; /*0x8ab539*/
              v33[0] = 0.0; /*0x8ab53f*/
              v33[4] = 0.0; /*0x8ab543*/
              v33[5] = 0.0; /*0x8ab547*/
              v33[3] = v28; /*0x8ab54f*/
              sub_8AA480(v12 + 0x10, 2u); /*0x8ab553*/
              v14 = (NiPoint3 *)v33; /*0x8ab558*/
              v15 = 2; /*0x8ab55c*/
              do /*0x8ab56f*/
              {
                sub_8AB000(v12, v14++); /*0x8ab564*/
                --v15; /*0x8ab56c*/
              }
              while ( v15 ); /*0x8ab56f*/
              v16 = *((_WORD *)v12 + 4); /*0x8ab574*/
              v17 = *(float *)v12; /*0x8ab578*/
              *((float *)v12 + 5) = a4; /*0x8ab57a*/
              *((float *)v12 + 6) = v28; /*0x8ab586*/
              *((_WORD *)v12 + 4) = v16 & 0xFE30 | 0xC5; /*0x8ab590*/
              v18 = *(void (__thiscall **)(_DWORD *, _DWORD))(LODWORD(v17) + 0x4C); /*0x8ab594*/
              *((float *)v12 + 4) = 0.0; /*0x8ab597*/
              *((float *)v12 + 3) = 1.0; /*0x8ab59d*/
              v26 = -flt_A7DEB4; /*0x8ab5aa*/
              v18(v12, LODWORD(v26)); /*0x8ab5ad*/
              v6 = v30; /*0x8ab5af*/
            }
            if ( !sub_700010(v6, (int)&MEMORY[0xBA8000]) ) /*0x8ab5ba*/
            {
              sub_4707B0(a2, (float *)v32, flt_B2EC5C); /*0x8ab5da*/
              v27 = flt_B2EC60; /*0x8ab5ea*/
              v19 = (__m128 *)sub_4529E0(v33, (float *)v32); /*0x8ab5f3*/
              sub_8B8590(v6, v19, v27); /*0x8ab5fd*/
            }
          }
        }
      }
    }
    else
    {
      BhkCollisionObject = NiAVObject_GetBhkCollisionObject((int)a1); /*0x8ab61d*/
      if ( BhkCollisionObject ) /*0x8ab627*/
      {
        v21 = *(_DWORD **)(BhkCollisionObject + 0x10); /*0x8ab629*/
        if ( v21 ) /*0x8ab62e*/
        {
          if ( (*sub_497340(v21, &v30) & 0x1F00) == 0x1600 ) /*0x8ab64a*/
          {
            (*(void (__thiscall **)(_DWORD *, int))(*v21 + 0x9C))(v21, 1); /*0x8ab658*/
            if ( !(_BYTE)a5 ) /*0x8ab65e*/
            {
              sub_4707B0(a2, (float *)v32, flt_B2EC5C); /*0x8ab673*/
              v22 = sub_4529E0(v33, (float *)v32); /*0x8ab682*/
              sub_5377B0((_DWORD **)v21[2], flt_B2E2E0, (int)v22); /*0x8ab698*/
            }
          }
        }
      }
    }
    result = (*((int (__thiscall **)(NiObjectNET *))v6->vtbl + 2))(v6); /*0x8ab6a4*/
    v23 = result; /*0x8ab6a6*/
    if ( result ) /*0x8ab6aa*/
    {
      result = *(unsigned __int16 *)(result + 0xB6); /*0x8ab6ac*/
      v24 = 0; /*0x8ab6b3*/
      if ( *(_WORD *)(v23 + 0xB6) ) /*0x8ab6ac*/
      {
        if ( result ) /*0x8ab6be*/
          goto LABEL_27; /*0x8ab6be*/
        for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v23 + 0xB0) + 4 * v24) ) /*0x8ab6c0*/
        {
          sub_8AB440(i, a2, a3, a4, a5); /*0x8ab6df*/
          result = *(unsigned __int16 *)(v23 + 0xB6); /*0x8ab6e4*/
          if ( result <= ++v24 ) /*0x8ab6f3*/
            break; /*0x8ab6f3*/
LABEL_27:
          ; /*0x8ab6c4*/
        }
      }
    }
  }
  return result; /*0x8ab6f5*/
}
