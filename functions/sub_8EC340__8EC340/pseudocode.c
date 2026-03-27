void __usercall sub_8EC340(int a1@<eax>)
{
  __m128 **v2; // ebx
  int v3; // esi
  _DWORD *v4; // edx
  int v5; // edx
  int i; // esi
  int v7; // ebx
  int v8; // ecx
  __m128 *v9; // esi
  __m128 *v10; // ebx
  __int32 *v11; // eax
  unsigned int v12; // edx
  __int32 v13; // edx
  __m128 *v14; // eax
  __m128 *v15; // ecx
  int v16; // edx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // edx
  __m128 *v22; // esi
  int v23; // eax
  int v24; // edx
  _DWORD *v25; // eax
  __m128 **v26; // [esp+Ch] [ebp-44h]
  int v27; // [esp+Ch] [ebp-44h]
  __m128 *v28; // [esp+10h] [ebp-40h] BYREF
  __m128 *v29; // [esp+14h] [ebp-3Ch] BYREF
  bool v30; // [esp+18h] [ebp-38h] BYREF
  bool v31; // [esp+1Ch] [ebp-34h] BYREF
  __m128 v32; // [esp+20h] [ebp-30h] BYREF
  __m128 v33; // [esp+30h] [ebp-20h] BYREF
  __m128 v34; // [esp+40h] [ebp-10h] BYREF

LABEL_1:
  while ( 2 )
  {
    switch ( *(_DWORD *)(a1 + 0x30) )
    {
      case 1:
        sub_8EB970(
          *(__m128 **)(a1 + 4),
          (__m128 *)(*(_DWORD *)(a1 + 0x3C) + 0x10),
          a1,
          (__m128 *)(*(_DWORD *)(a1 + 0x38) + 0x10));
        return;
      case 2:
        sub_8EB970(*(__m128 **)(a1 + 0x10), &v32, a1, (__m128 *)(*(_DWORD *)(a1 + 0x38) + 0x10));
        v22 = *(__m128 **)(a1 + 4);
        sub_8EB910(v22, &v31, &v32);
        if ( v31 )
        {
          sub_8EBCD0(
            a1,
            v22,
            *(__m128 **)(a1 + 0x10),
            (__m128 *)(*(_DWORD *)(a1 + 0x38) + 0x10),
            (__m128 *)(*(_DWORD *)(a1 + 0x3C) + 0x10));
        }
        else
        {
          *(__m128 *)(*(_DWORD *)(a1 + 0x3C) + 0x10) = v32;
          *(_DWORD *)a1 = *(_DWORD *)(a1 + 0xC);
          v23 = *(_DWORD *)(a1 + 0x14);
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 0x10);
          *(_DWORD *)(a1 + 8) = v23;
          *(_DWORD *)(a1 + 0x30) = 1;
        }
        return;
      case 3:
        sub_8EB970(*(__m128 **)(a1 + 0x1C), &v32, a1, (__m128 *)(*(_DWORD *)(a1 + 0x38) + 0x10));
        v2 = (__m128 **)(a1 + 4);
        sub_8EB910(*(__m128 **)(a1 + 4), (bool *)&v29, &v32);
        if ( (_BYTE)v29 || (sub_8EB910(*(__m128 **)(a1 + 0x10), (bool *)&v28, &v32), (_BYTE)v28) )
        {
          v3 = 0;
          v26 = (__m128 **)(a1 + 0x10);
          do
          {
            if ( *(int *)(a1 + 0x30) < 3 )
              goto LABEL_1;
            sub_8EBCD0(a1, *v2, *(__m128 **)(a1 + 0x1C), (__m128 *)(*(_DWORD *)(a1 + 0x38) + 0x10), &v33);
            sub_8EB910(*v26, &v30, &v33);
            if ( !v30 )
            {
              v4 = (_DWORD *)(a1 - 0xC * v3 + 0xC);
              *v4 = *(_DWORD *)(a1 + 0xC);
              v4[1] = *(_DWORD *)(a1 + 0x10);
              v4[2] = *(_DWORD *)(a1 + 0x14);
              *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a1 + 0x18);
              v5 = *(_DWORD *)(a1 + 0x20);
              *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(a1 + 0x1C);
              *(_DWORD *)(a1 + 0x14) = v5;
              *(_DWORD *)(a1 + 0x30) = 2;
              goto LABEL_1;
            }
            ++v3;
            v2 += 3;
            v26 += 0xFFFFFFFD;
          }
          while ( v3 < 2 );
          if ( *(int *)(a1 + 0x30) >= 3 )
          {
            sub_8EC0A0(
              *(__m128 **)(a1 + 0x10),
              (_DWORD *)a1,
              *(__m128 **)(a1 + 4),
              *(__m128 **)(a1 + 0x1C),
              1,
              (__m128 *)(*(_DWORD *)(a1 + 0x38) + 0x10),
              (__m128 *)(*(_DWORD *)(a1 + 0x3C) + 0x10));
            return;
          }
          continue;
        }
        *(__m128 *)(*(_DWORD *)(a1 + 0x3C) + 0x10) = v32;
        *(_DWORD *)a1 = *(_DWORD *)(a1 + 0x18);
        v24 = *(_DWORD *)(a1 + 0x20);
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 0x1C);
        *(_DWORD *)(a1 + 8) = v24;
        *(_DWORD *)(a1 + 0x30) = 1;
        return;
      case 4:
        sub_8EB7E0(a1);
        for ( i = 0; i < 3; ++i )
        {
          sub_8EC0A0(
            *(__m128 **)(a1 + 0xC * ((i + 2) % 3) + 4),
            (_DWORD *)a1,
            *(__m128 **)(a1 + 0xC * ((i + 1) % 3) + 4),
            *(__m128 **)(a1 + 0x28),
            0,
            (__m128 *)(*(_DWORD *)(a1 + 0x38) + 0x10),
            &v34);
          v7 = a1 + 0xC * i;
          sub_8EB910(*(__m128 **)(v7 + 4), &v31, &v34);
          if ( !v31 )
          {
            *(_DWORD *)v7 = *(_DWORD *)(a1 + 0x18);
            *(_DWORD *)(v7 + 4) = *(_DWORD *)(a1 + 0x1C);
            *(_DWORD *)(v7 + 8) = *(_DWORD *)(a1 + 0x20);
            *(_DWORD *)(a1 + 0x18) = *(_DWORD *)(a1 + 0x24);
            v8 = *(_DWORD *)(a1 + 0x2C);
            *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a1 + 0x28);
            *(_DWORD *)(a1 + 0x20) = v8;
            *(_DWORD *)(a1 + 0x30) = 3;
            i = 0xA;
          }
        }
        if ( i >= 0xA )
          continue;
        v9 = *(__m128 **)(a1 + 4);
        v10 = *(__m128 **)(a1 + 0x10);
        v11 = (__int32 *)(*(_DWORD *)(a1 + 0x38) + 0x10);
        v12 = *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 0x14);
        v32.m128_i32[0] = *v11;
        *(unsigned __int64 *)((char *)v32.m128_u64 + 4) = __PAIR64__(v11[2], v12);
        v13 = v11[3];
        v14 = *(__m128 **)(a1 + 0x1C);
        v15 = *(__m128 **)(a1 + 0x28);
        v32.m128_i32[3] = v13;
        v16 = *(_DWORD *)(a1 + 0x30);
        v28 = v15;
        v27 = v16;
        v29 = v14;
        sub_8EC0A0(v10, (_DWORD *)a1, v9, v14, 0, &v32, &v32);
        if ( v27 == *(_DWORD *)(a1 + 0x30) )
          sub_8EC0A0(v10, (_DWORD *)a1, v9, v28, 0, &v32, &v32);
        if ( v27 == *(_DWORD *)(a1 + 0x30) )
          sub_8EC0A0(v29, (_DWORD *)a1, v9, v28, 0, &v32, &v32);
        if ( v27 == *(_DWORD *)(a1 + 0x30) )
          sub_8EC0A0(v29, (_DWORD *)a1, v10, v28, 0, &v32, &v32);
        *(__m128 *)(*(_DWORD *)(a1 + 0x3C) + 0x10) = v32;
        v17 = *(_DWORD *)(a1 + 8);
        v18 = 0;
        if ( *(int *)(v17 + 0xC) >= 0 )
          v18 = *(_DWORD *)(v17 + 0xC);
        if ( v18 <= *(_DWORD *)(*(_DWORD *)(a1 + 0x14) + 0xC) )
          v18 = *(_DWORD *)(*(_DWORD *)(a1 + 0x14) + 0xC);
        v19 = *(_DWORD *)(a1 + 0x20);
        if ( v18 <= *(_DWORD *)(v19 + 0xC) )
          v18 = *(_DWORD *)(v19 + 0xC);
        if ( v18 <= *(_DWORD *)(*(_DWORD *)(a1 + 0x2C) + 0xC) )
          v18 = *(_DWORD *)(*(_DWORD *)(a1 + 0x2C) + 0xC);
        v20 = 0;
        v21 = a1 + 8;
        while ( v18 != *(_DWORD *)(*(_DWORD *)v21 + 0xC) )
        {
          ++v20;
          v21 += 0xC;
          if ( v20 >= 4 )
            goto LABEL_40;
        }
        v25 = (_DWORD *)(a1 + 0xC * v20);
        *v25 = *(_DWORD *)(a1 + 0x24);
        v25[1] = *(_DWORD *)(a1 + 0x28);
        v25[2] = *(_DWORD *)(a1 + 0x2C);
LABEL_40:
        --*(_DWORD *)(a1 + 0x30);
        *(_DWORD *)(*(_DWORD *)(a1 + 8) + 0xC) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 0x14) + 0xC) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 0x20) + 0xC) = 0;
        def_8EC35D();
        return;
      default:
        JUMPOUT(0x8EC76A);
    }
  }
}
