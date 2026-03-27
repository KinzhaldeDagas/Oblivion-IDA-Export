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

  if ( HavokGamePausedFlag )
  {
LABEL_9:
    v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v5 = *(_DWORD **)(v4 + 0x1A4);
    v20 = v4;
    if ( (unsigned int)v5 < *(_DWORD *)(v4 + 0x1A8) )
    {
      *v5 = "TtPickObject";
      v6 = __rdtsc();
      v5[1] = v6;
      *(_DWORD *)(v4 + 0x1A4) = v5 + 3;
    }
    v19 = 0;
    v7 = (hkWorld *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this);
    if ( v7 )
    {
      sub_43F450(a2);
      a2[4].m128_f32[1] = 1.0;
      a2[5].m128_i32[0] = 0;
      v8 = (int *)a2[7].m128_i32[2];
      if ( v8 )
      {
        v9 = a2[7].m128_i32[0];
        if ( v9 )
        {
          v21[0] = &hkWorldRayCaster::`vftable';
          v22 = 0;
          v23 = 0;
          m_collisionFilter = (int)v7->m_collisionFilter;
          m_broadPhase = (int *)v7->m_broadPhase;
          v24 = 0;
          sub_8BA1B0(v21, m_broadPhase, (int)a2, m_collisionFilter, v9, (int)v8);
          v24 = 0xFFFFFFFF;
        }
        else
        {
          sub_8987E0(v7, (int)a2, a2[7].m128_i32[2]);
        }
        if ( v8[5] )
        {
          sub_8B22F0(v8);
          v10 = (__m128 *)v8[4];
          a2[3] = *v10;
          a2[4].m128_i32[0] = v10[1].m128_i32[0];
          a2[4].m128_f32[1] = v10[1].m128_f32[1];
          a2[5].m128_i32[0] = v10[2].m128_i32[0];
          v19 = 1;
        }
      }
      else
      {
        v11 = a2[7].m128_i32[1];
        if ( v11 )
        {
          *(float *)(v11 + 0x24) = 1.0;
          *(_DWORD *)(v11 + 0x30) = 0;
          *(float *)(v11 + 4) = 1.0;
          v12 = a2[7].m128_i32[0];
          if ( v12 )
          {
            v21[0] = &hkWorldRayCaster::`vftable';
            v22 = 0;
            v23 = 0;
            v18 = (int)v7->m_collisionFilter;
            v16 = (int *)v7->m_broadPhase;
            v24 = 1;
            sub_8BA1B0(v21, v16, (int)a2, v18, v12, v11);
            v24 = 0xFFFFFFFF;
          }
          else
          {
            sub_8987E0(v7, (int)a2, v11);
          }
          if ( *(_DWORD *)(v11 + 0x30) )
          {
            sub_88A630(a2[3].m128_f32, v11 + 0x10);
            v19 = 1;
          }
        }
        else
        {
          hkWorld::CastRay(v7, (hkWorldRayCastInput *)a2, (hkWorldRayCastOutput *)&a2[3]);
          v19 = a2[5].m128_i32[0] != 0;
        }
      }
      sub_8A78E0(
        (LPCRITICAL_SECTION *)dword_BA7DA0,
        (int)a2,
        (int)&a2[1],
        v19 ? (int)&loc_767877 + 0xFF888888 : 0xFF888888,
        0);
      v4 = v20;
    }
    v13 = *(_DWORD **)(v4 + 0x1A4);
    if ( (unsigned int)v13 < *(_DWORD *)(v4 + 0x1A8) )
    {
      *v13 = "Et";
      v14 = __rdtsc();
      v13[1] = v14;
      *(_DWORD *)(v4 + 0x1A4) = v13 + 3;
    }
    return v19;
  }
  else
  {
    switch ( a2[2].m128_i32[1] & 0x3F )
    {
      case 0x14:
        goto LABEL_8;
      case 0x15:
      case 0x1B:
        v2 = dword_BA7928;
        ++dword_BA7924;
        dword_BA7928 = ++v2;
        if ( v2 > 0x1E )
          goto LABEL_4;
        goto LABEL_8;
      case 0x1A:
        ++dword_BA7924;
        ++dword_BA792C;
        goto LABEL_8;
      case 0x1D:
        ++dword_BA7924;
        ++dword_BA7930;
        goto LABEL_8;
      default:
        ++dword_BA7924;
        dword_BA7934 = a2[2].m128_i32[1] & 0x3F;
LABEL_8:
        if ( dword_BA7924 <= (unsigned int)fromiMaxPickHavok )
          goto LABEL_9;
LABEL_4:
        a2[5].m128_i32[0] = 0;
        a2[4].m128_f32[1] = 1.0;
        result = 0;
        break;
    }
  }
  return result;
}
