double __usercall sub_5E9A60@<st0>(void *a1@<ecx>, double result@<st0>)
{
  PlayerCharacter *v3; // esi
  void *v4; // ebp
  int v5; // eax
  char v6; // bl
  __m128 *v7; // eax
  char v8; // cl
  float *v9; // eax
  double v10; // rt0
  LowProcess *process; // ecx
  int v12; // eax
  char v13; // bl
  __m128 *v14; // eax
  char v15; // cl
  char v16; // [esp+31h] [ebp-39h]
  float v17; // [esp+32h] [ebp-38h]
  float v18; // [esp+32h] [ebp-38h]
  void *slot; // [esp+36h] [ebp-34h] BYREF
  void *v20; // [esp+3Ah] [ebp-30h] BYREF
  void *v21; // [esp+3Eh] [ebp-2Ch] BYREF
  void *v22; // [esp+42h] [ebp-28h] BYREF
  float v23; // [esp+46h] [ebp-24h] BYREF
  float v24; // [esp+4Ah] [ebp-20h]
  float v25; // [esp+4Eh] [ebp-1Ch]
  NiPoint3 v26; // [esp+52h] [ebp-18h] BYREF
  int v27; // [esp+66h] [ebp-4h]

  v3 = (PlayerCharacter *)(*(int (__usercall **)@<eax>(void *@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x388))(a1, result); /*0x5e9a99*/
  v4 = 0; /*0x5e9aa5*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x24 ) /*0x5e9aad*/
    v4 = a1; /*0x5e9aaf*/
  if ( v3 ) /*0x5e9ab5*/
  {
    if ( v4 ) /*0x5e9abd*/
    {
      if ( v3->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v3) ) /*0x5e9acd*/
      {
        if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 0x154))(v4) ) /*0x5e9ae2*/
        {
          sub_625290(v4, &v26.x); /*0x5e9af3*/
          v5 = (int)*v3->super.super.super.process->GetCharProxy( /*0x5e9b0a*/
                       v3->super.super.super.process,
                       (bhkCharacterProxy **)&v20);
          v27 = 0; /*0x5e9b0e*/
          v6 = 1; /*0x5e9b12*/
          if ( !v5 /*0x5e9b53*/
            || (v7 = *(__m128 **)((int (__usercall *)@<eax>(LowProcess *@<ecx>, void **, double@<st0>))v3->super.super.super.process->GetCharProxy)(
                                   v3->super.super.super.process,
                                   &slot,
                                   result),
                v8 = v3 != reference,
                v27 = 1,
                v6 = 3,
                v16 = 1,
                sub_8949C0(v7, &v26, v8, 0, 0)) )
          {
            v16 = 0; /*0x5e9b61*/
          }
          v27 = 0; /*0x5e9b69*/
          if ( (v6 & 2) != 0 ) /*0x5e9b71*/
          {
            v6 &= ~2u; /*0x5e9b73*/
            NiPointerSlot_Release(&slot); /*0x5e9b7e*/
          }
          v27 = 0xFFFFFFFF; /*0x5e9b89*/
          if ( (v6 & 1) != 0 ) /*0x5e9b8d*/
          {
            v6 &= ~1u; /*0x5e9b93*/
            NiPointerSlot_Release(&v20); /*0x5e9b96*/
          }
          if ( !v16 ) /*0x5e9ba0*/
          {
            v9 = (float *)(*(int (__usercall **)@<eax>(void *@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x174))(a1, result); /*0x5e9bc2*/
            *(float *)&v20 = *v9 - v26.x; /*0x5e9bce*/
            *(float *)&slot = v9[1] - v26.y; /*0x5e9bd9*/
            v17 = v9[2] - v26.z; /*0x5e9be4*/
            v23 = *(float *)&v20; /*0x5e9bec*/
            v24 = *(float *)&slot; /*0x5e9bf4*/
            v25 = v17; /*0x5e9bfc*/
            Vector3_NormalizeInPlace(&v23); /*0x5e9c00*/
            v10 = dbl_A492B0; /*0x5e9c13*/
            v23 = v23 * v10; /*0x5e9c15*/
            v24 = v24 * v10; /*0x5e9c1f*/
            v25 = v10 * v25; /*0x5e9c27*/
            *(float *)&v20 = v23 + v26.x; /*0x5e9c33*/
            *(float *)&slot = v24 + v26.y; /*0x5e9c3f*/
            v18 = v25 + v26.z; /*0x5e9c4b*/
            v23 = *(float *)&v20; /*0x5e9c53*/
            LODWORD(v26.x) = v20; /*0x5e9c5f*/
            v24 = *(float *)&slot; /*0x5e9c63*/
            result = v18; /*0x5e9c6b*/
            LODWORD(v26.y) = slot; /*0x5e9c6f*/
            process = v3->super.super.super.process; /*0x5e9c73*/
            v25 = v18; /*0x5e9c76*/
            v26.z = v18; /*0x5e9c7e*/
            v12 = (int)*process->GetCharProxy(process, (bhkCharacterProxy **)&v22); /*0x5e9c91*/
            v13 = v6 | 4; /*0x5e9c93*/
            v27 = 2; /*0x5e9c9d*/
            if ( v12 ) /*0x5e9ca5*/
            {
              v14 = *(__m128 **)((int (__usercall *)@<eax>(LowProcess *@<ecx>, void **, double@<st0>))v3->super.super.super.process->GetCharProxy)( /*0x5e9cb9*/
                                  v3->super.super.super.process,
                                  &v21,
                                  result);
              v13 |= 8u; /*0x5e9cbb*/
              v15 = v3 != reference; /*0x5e9cc6*/
              v27 = 3; /*0x5e9ccf*/
              sub_8949C0(v14, &v26, v15, 0, 0); /*0x5e9cdf*/
            }
            v27 = 2; /*0x5e9cf5*/
            if ( (v13 & 8) != 0 ) /*0x5e9cf9*/
            {
              v13 &= ~8u; /*0x5e9cfb*/
              NiPointerSlot_Release(&v21); /*0x5e9d06*/
            }
            v27 = 0xFFFFFFFF; /*0x5e9d0e*/
            if ( (v13 & 4) != 0 ) /*0x5e9d12*/
              NiPointerSlot_Release(&v22); /*0x5e9d18*/
          }
        }
      }
    }
  }
  return result; /*0x5e9ba4*/
}
