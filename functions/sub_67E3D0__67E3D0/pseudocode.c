// Verified route-surface consumer follows the graph-node predecessor pointer at +0x0C, emits TeleportData at each connected point's +0x14 position, and transfers water/SubSpace flags to route-node metadata.
void __thiscall sub_67E3D0(char *this, NiDX92DBufferData **a2, void *a3)
{
  float *v4; // esi
  float *v5; // eax
  TESConnectedPoint *CastingType; // edi
  NiPoint3 *Position; // eax
  TeleportData *v8; // eax
  TeleportData *v9; // esi
  Actor *v10; // ecx
  char v11; // al
  char v12; // al
  char v13; // al
  NiPoint3 *v14; // eax
  float z; // edx
  float v16; // ecx
  double v17; // st6
  NiDX92DBufferData *Health; // eax
  int x_low; // [esp+10h] [ebp-30h] BYREF
  float y; // [esp+14h] [ebp-2Ch]
  float v21; // [esp+18h] [ebp-28h]
  NiPoint3 v22; // [esp+1Ch] [ebp-24h] BYREF
  NiPoint3 v23; // [esp+28h] [ebp-18h] BYREF
  int v24; // [esp+34h] [ebp-Ch] BYREF
  float v25; // [esp+38h] [ebp-8h]
  float v26; // [esp+3Ch] [ebp-4h]

  if ( a2 ) /*0x67e3dd*/
  {
    sub_68C6E0(a2); /*0x67e3e6*/
    v4 = (float *)(this + 0xC); /*0x67e3eb*/
    if ( NiPoint3__NotEqual((const NiPoint3 *)this, (const NiPoint3 *)this + 1) /*0x67e41d*/
      && NiPoint3__NotEqual((const NiPoint3 *)this, &stru_B15450)
      && NiPoint3__NotEqual((const NiPoint3 *)this + 1, &stru_B15450) )
    {
      v5 = (float *)sub_68C280((TeleportData **)a2, (NiPoint3 *)this + 1, 0); /*0x67e430*/
      sub_68CB40(v5, a3); /*0x67e43c*/
      if ( *((_DWORD *)this + 7) && (CastingType = *((TESConnectedPoint **)this + 9)) != 0 ) /*0x67e450*/
      {
        do /*0x67e4c7*/
        {
          Position = PathGraphNode_GetPosition(CastingType); /*0x67e45a*/
          v8 = sub_68C280((TeleportData **)a2, Position, 0); /*0x67e462*/
          v9 = v8; /*0x67e467*/
          if ( v8 ) /*0x67e46b*/
          {
            sub_68CA30(v8, 1); /*0x67e471*/
            v10 = *((Actor **)this + 0xA); /*0x67e476*/
            if ( !v10 || !Actor_IsCreature(v10) ) /*0x67e47d*/
            {
              v11 = sub_4E8040((float *)CastingType->totalEstimateCost); /*0x67e488*/
              sub_68CA60(v9, v11); /*0x67e490*/
            }
            v12 = GraphNode_IsBelowWaterFlagSet(CastingType); /*0x67e497*/
            sub_68CA90(v9, v12); /*0x67e49f*/
            v13 = PathGraphNode_IsUnderwaterCacheSet(CastingType); /*0x67e4a6*/
            sub_68CAC0(v9, v13); /*0x67e4ae*/
            sub_68CB10(v9, 1); /*0x67e4b7*/
          }
          CastingType = (TESConnectedPoint *)TESEnchantableForm_GetCastingType(CastingType); /*0x67e4c3*/
        }
        while ( CastingType ); /*0x67e4c7*/
        v14 = PathGraphNode_GetPosition(*((TESConnectedPoint **)this + 9)); /*0x67e4cc*/
        v4 = (float *)(this + 0xC); /*0x67e4d3*/
        x_low = SLODWORD(v14->x); /*0x67e4d7*/
        y = v14->y; /*0x67e4de*/
        z = v14->z; /*0x67e4e2*/
      }
      else
      {
        v16 = *((float *)this + 1); /*0x67e4e9*/
        z = *((float *)this + 2); /*0x67e4ec*/
        x_low = *(int *)this; /*0x67e4ef*/
        y = v16; /*0x67e4f3*/
      }
      v21 = z; /*0x67e4fc*/
      sub_68C280((TeleportData **)a2, (NiPoint3 *)this, 0); /*0x67e500*/
      if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x67e50b*/
      {
        if ( sub_43F7C0((int *)MEMORY[0xB333A0], (float *)&x_low, v4, (float *)&v24, 1.0) ) /*0x67e527*/
        {
          v22.x = *v4 - *(float *)&x_low; /*0x67e53e*/
          v22.y = v4[1] - y; /*0x67e549*/
          v22.z = 0.0; /*0x67e54f*/
          Vector3_NormalizeInPlace(&v22.x); /*0x67e553*/
          v17 = dbl_A3F3E8; /*0x67e560*/
          v23.x = v22.x * v17; /*0x67e56a*/
          v23.y = v22.y * v17; /*0x67e574*/
          v23.z = v17 * v22.z; /*0x67e57c*/
          v26 = v21; /*0x67e584*/
          v22.x = *(float *)&v24 - v23.x; /*0x67e598*/
          v22.y = v25 - v23.y; /*0x67e5ac*/
          v22.z = v21 - v23.z; /*0x67e5bc*/
          v23.x = *(float *)&v24 + v23.x; /*0x67e5c6*/
          v23.y = v23.y + v25; /*0x67e5ce*/
          v23.z = v21 + v23.z; /*0x67e5d4*/
          Health = (NiDX92DBufferData *)TESHealthForm_GetHealth((TESHealthForm *)a2); /*0x67e5d8*/
          sub_68C3A0((TeleportData **)a2, &v22, &v23, Health); /*0x67e5ea*/
        }
      }
    }
  }
}
