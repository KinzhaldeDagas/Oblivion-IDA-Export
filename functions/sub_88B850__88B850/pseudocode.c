// TES4 authoritative bhkWorld/bhkWorldM raycast implementation. On hit, output normal lives at data+0x30, hitFraction at +0x44, root collidable at +0x50; layer is low 6 bits of filter info at data+0x24.
bool __thiscall sub_88B850(void *this, __m128 *a2)
{
  unsigned int v2; // eax
  bool result; // al
  int v4; // ebx
  _DWORD *v5; // edi
  unsigned __int64 v6; // rax
  hkWorld *v7; // edi
  int *v8; // ebx
  int v9; // ecx
  __m128 *v10; // ebx
  int v11; // ebx
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int *m_broadPhase; // [esp-14h] [ebp-A8h]
  int *v16; // [esp-14h] [ebp-A8h]
  int m_collisionFilter; // [esp-Ch] [ebp-A0h]
  int v18; // [esp-Ch] [ebp-A0h]
  bool v19; // [esp+1Bh] [ebp-79h]
  int v20; // [esp+20h] [ebp-74h]
  _DWORD v21[16]; // [esp+24h] [ebp-70h] BYREF
  int v22; // [esp+64h] [ebp-30h]
  int v23; // [esp+68h] [ebp-2Ch]
  int v24; // [esp+90h] [ebp-4h]

  if ( MEMORY[0xBA790A] )
  {
LABEL_9:
    v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x88b928*/
    v5 = *(_DWORD **)(v4 + 0x1A4); /*0x88b937*/
    v20 = v4; /*0x88b943*/
    if ( (unsigned int)v5 < *(_DWORD *)(v4 + 0x1A8) ) /*0x88b94c*/
    {
      *v5 = "TtPickObject"; /*0x88b94e*/
      v6 = __rdtsc(); /*0x88b954*/
      v5[1] = v6; /*0x88b95e*/
      *(_DWORD *)(v4 + 0x1A4) = v5 + 3; /*0x88b964*/
    }
    v19 = 0; /*0x88b96f*/
    v7 = (hkWorld *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this); /*0x88b976*/
    if ( v7 )
    {
      sub_43F450(a2); /*0x88b982*/
      a2[4].m128_f32[1] = 1.0; /*0x88b98c*/
      a2[5].m128_i32[0] = 0; /*0x88b98f*/
      v8 = (int *)a2[7].m128_i32[2]; /*0x88b996*/
      if ( v8 ) /*0x88b99d*/
      {
        v9 = a2[7].m128_i32[0]; /*0x88b9a3*/
        if ( v9 ) /*0x88b9aa*/
        {
          v21[0] = &hkWorldRayCaster::`vftable'; /*0x88b9ac*/
          v22 = 0; /*0x88b9b4*/
          v23 = 0; /*0x88b9b8*/
          m_collisionFilter = (int)v7->m_collisionFilter; /*0x88b9c4*/
          m_broadPhase = (int *)v7->m_broadPhase; /*0x88b9c6*/
          v24 = 0; /*0x88b9cb*/
          sub_8BA1B0(v21, m_broadPhase, (__int128 *)a2, m_collisionFilter, v9, (int)v8); /*0x88b9d2*/
          v24 = 0xFFFFFFFF; /*0x88b9d7*/
        }
        else
        {
          sub_8987E0(v7, (int)a2, a2[7].m128_i32[2]); /*0x88b9e8*/
        }
        if ( v8[5] ) /*0x88b9ed*/
        {
          sub_8B22F0(v8); /*0x88b9f9*/
          v10 = (__m128 *)v8[4]; /*0x88b9fe*/
          a2[3] = *v10; /*0x88ba04*/
          a2[4].m128_u64[0] = v10[1].m128_u64[0]; /*0x88ba0b*/
          a2[5].m128_i32[0] = v10[2].m128_i32[0]; /*0x88ba17*/
          v19 = 1; /*0x88ba1a*/
        }
      }
      else
      {
        v11 = a2[7].m128_i32[1]; /*0x88ba24*/
        if ( v11 ) /*0x88ba2b*/
        {
          *(float *)(v11 + 0x24) = 1.0; /*0x88ba30*/
          *(_DWORD *)(v11 + 0x30) = 0; /*0x88ba33*/
          *(float *)(v11 + 4) = 1.0; /*0x88ba36*/
          v12 = a2[7].m128_i32[0]; /*0x88ba3d*/
          if ( v12 ) /*0x88ba42*/
          {
            v21[0] = &hkWorldRayCaster::`vftable'; /*0x88ba44*/
            v22 = 0; /*0x88ba4c*/
            v23 = 0; /*0x88ba50*/
            v18 = (int)v7->m_collisionFilter; /*0x88ba59*/
            v16 = (int *)v7->m_broadPhase; /*0x88ba5e*/
            v24 = 1; /*0x88ba63*/
            sub_8BA1B0(v21, v16, (__int128 *)a2, v18, v12, v11); /*0x88ba6e*/
            v24 = 0xFFFFFFFF; /*0x88ba73*/
          }
          else
          {
            sub_8987E0(v7, (int)a2, v11); /*0x88ba84*/
          }
          if ( *(_DWORD *)(v11 + 0x30) ) /*0x88ba89*/
          {
            sub_88A630(a2[3].m128_f32, v11 + 0x10); /*0x88ba97*/
            v19 = 1; /*0x88ba9c*/
          }
        }
        else
        {
          hkWorld::CastRay(v7, (hkWorldRayCastInput *)a2, (hkWorldRayCastOutput *)&a2[3]);// TES4 authoritative: direct ray path calls hkWorld::CastRay and reports a hit when output root collidable at ray data +0x50 is non-null. /*0x88baa9*/
          v19 = a2[5].m128_i32[0] != 0; /*0x88bab2*/
        }
      }
      sub_8A78E0(
        (LPCRITICAL_SECTION *)unk_BA7DA0,
        (int)a2,
        (int)&a2[1],
        v19 ? (int)&loc_767877 + 0xFF888888 : 0xFF888888,
        0);
      v4 = v20; /*0x88badc*/
    }
    v13 = *(_DWORD **)(v4 + 0x1A4); /*0x88bae0*/
    if ( (unsigned int)v13 < *(_DWORD *)(v4 + 0x1A8) ) /*0x88baec*/
    {
      *v13 = "Et"; /*0x88baee*/
      v14 = __rdtsc(); /*0x88baf4*/
      v13[1] = v14; /*0x88bafe*/
      *(_DWORD *)(v4 + 0x1A4) = v13 + 3; /*0x88bb04*/
    }
    return v19; /*0x88bb0a*/
  }
  else
  {
    switch ( a2[2].m128_i32[1] & 0x3F ) /*0x88b8af*/
    {
      case 0x14: /*0x88b8af*/
        goto LABEL_8;                           // TES4 authoritative: bhkWorld raycast throttles/counts by input filter layer low 6 bits before running the ray query.
      case 0x15: /*0x88b8af*/
      case 0x1B: /*0x88b8af*/
        v2 = unk_BA7928; /*0x88b8b6*/
        ++unk_BA7924; /*0x88b8bb*/
        unk_BA7928 = ++v2; /*0x88b8c8*/
        if ( v2 > 0x1E ) /*0x88b8cd*/
          goto LABEL_4; /*0x88b8cd*/
        goto LABEL_8; /*0x88b8cd*/
      case 0x1A: /*0x88b8af*/
        ++unk_BA7924; /*0x88b8e7*/
        ++unk_BA792C; /*0x88b8ed*/
        goto LABEL_8; /*0x88b8f3*/
      case 0x1D: /*0x88b8af*/
        ++unk_BA7924; /*0x88b8fa*/
        ++unk_BA7930; /*0x88b900*/
        goto LABEL_8; /*0x88b906*/
      default:
        ++unk_BA7924; /*0x88b908*/
        unk_BA7934 = a2[2].m128_i32[1] & 0x3F; /*0x88b915*/
LABEL_8:
        if ( unk_BA7924 <= (unsigned int)fromiMaxPickHavok ) /*0x88b926*/
          goto LABEL_9; /*0x88b926*/
LABEL_4:
        a2[5].m128_i32[0] = 0; /*0x88b8cf*/
        a2[4].m128_f32[1] = 1.0; /*0x88b8d8*/
        result = 0; /*0x88b8db*/
        break; /*0x88b8dd*/
    }
  }
  return result; /*0x88bb0e*/
}
