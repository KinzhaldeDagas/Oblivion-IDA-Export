// Recomputes allowed motion from the active surface set. Handles one to four active planes by projecting against plane combinations or marking incompatible surfaces.
void __usercall hkSurfaceConstraintUtil_RecomputeActiveSurfaceMotion(int solverState@<eax>)
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
  __m128 *surfaceC; // [esp+10h] [ebp-40h] BYREF
  __m128 *surfaceA; // [esp+14h] [ebp-3Ch] BYREF
  bool v30; // [esp+18h] [ebp-38h] BYREF
  bool v31; // [esp+1Ch] [ebp-34h] BYREF
  __m128 outPoint; // [esp+20h] [ebp-30h] BYREF
  __m128 v33; // [esp+30h] [ebp-20h] BYREF
  __m128 v34; // [esp+40h] [ebp-10h] BYREF

LABEL_1:
  while ( 2 ) /*0x8ec35d*/
  {
    switch ( *(_DWORD *)(solverState + 0x30) ) /*0x8ec35d*/
    {
      case 1: /*0x8ec35d*/
        hkSurfaceConstraintUtil_ProjectAgainstSinglePlane( /*0x8ec67a*/
          *(__m128 **)(solverState + 4),
          (__m128 *)(*(_DWORD *)(solverState + 0x3C) + 0x10),
          solverState,
          (__m128 *)(*(_DWORD *)(solverState + 0x38) + 0x10));
        return; /*0x8ec688*/
      case 2: /*0x8ec35d*/
        hkSurfaceConstraintUtil_ProjectAgainstSinglePlane( /*0x8ec698*/
          *(__m128 **)(solverState + 0x10),
          &outPoint,
          solverState,
          (__m128 *)(*(_DWORD *)(solverState + 0x38) + 0x10));
        v22 = *(__m128 **)(solverState + 4); /*0x8ec69d*/
        hkSurfaceConstraintUtil_IsPointBehindPlane(v22, &v31, &outPoint); /*0x8ec6ab*/
        if ( v31 ) /*0x8ec6b9*/
        {
          hkSurfaceConstraintUtil_ProjectAgainstTwoPlanes( /*0x8ec6fd*/
            solverState,
            v22,
            *(__m128 **)(solverState + 0x10),
            (__m128 *)(*(_DWORD *)(solverState + 0x38) + 0x10),
            (__m128 *)(*(_DWORD *)(solverState + 0x3C) + 0x10));
        }
        else
        {
          *(__m128 *)(*(_DWORD *)(solverState + 0x3C) + 0x10) = outPoint; /*0x8ec6c3*/
          *(_DWORD *)solverState = *(_DWORD *)(solverState + 0xC); /*0x8ec6ce*/
          v23 = *(_DWORD *)(solverState + 0x14); /*0x8ec6d3*/
          *(_DWORD *)(solverState + 4) = *(_DWORD *)(solverState + 0x10); /*0x8ec6d6*/
          *(_DWORD *)(solverState + 8) = v23; /*0x8ec6d9*/
          *(_DWORD *)(solverState + 0x30) = 1; /*0x8ec6dc*/
        }
        return; /*0x8ec6e9*/
      case 3: /*0x8ec35d*/
        hkSurfaceConstraintUtil_ProjectAgainstSinglePlane( /*0x8ec373*/
          *(__m128 **)(solverState + 0x1C),
          &outPoint,
          solverState,
          (__m128 *)(*(_DWORD *)(solverState + 0x38) + 0x10));
        v2 = (__m128 **)(solverState + 4); /*0x8ec37d*/
        hkSurfaceConstraintUtil_IsPointBehindPlane(*(__m128 **)(solverState + 4), (bool *)&surfaceA, &outPoint); /*0x8ec385*/
        if ( (_BYTE)surfaceA /*0x8ec3ad*/
          || (hkSurfaceConstraintUtil_IsPointBehindPlane(*(__m128 **)(solverState + 0x10), (bool *)&surfaceC, &outPoint),
              (_BYTE)surfaceC) )
        {
          v3 = 0; /*0x8ec3b6*/
          v26 = (__m128 **)(solverState + 0x10); /*0x8ec3b8*/
          do /*0x8ec40f*/
          {
            if ( *(int *)(solverState + 0x30) < 3 ) /*0x8ec3c4*/
              goto LABEL_1; /*0x8ec3c4*/
            hkSurfaceConstraintUtil_ProjectAgainstTwoPlanes( /*0x8ec3d9*/
              solverState,
              *v2,
              *(__m128 **)(solverState + 0x1C),
              (__m128 *)(*(_DWORD *)(solverState + 0x38) + 0x10),
              &v33);
            hkSurfaceConstraintUtil_IsPointBehindPlane(*v26, &v30, &v33); /*0x8ec3ed*/
            if ( !v30 ) /*0x8ec3fb*/
            {
              v4 = (_DWORD *)(solverState - 0xC * v3 + 0xC); /*0x8ec453*/
              *v4 = *(_DWORD *)(solverState + 0xC); /*0x8ec45a*/
              v4[1] = *(_DWORD *)(solverState + 0x10); /*0x8ec45f*/
              v4[2] = *(_DWORD *)(solverState + 0x14); /*0x8ec465*/
              *(_DWORD *)(solverState + 0xC) = *(_DWORD *)(solverState + 0x18); /*0x8ec46d*/
              v5 = *(_DWORD *)(solverState + 0x20); /*0x8ec472*/
              *(_DWORD *)(solverState + 0x10) = *(_DWORD *)(solverState + 0x1C); /*0x8ec475*/
              *(_DWORD *)(solverState + 0x14) = v5; /*0x8ec478*/
              *(_DWORD *)(solverState + 0x30) = 2; /*0x8ec47b*/
              goto LABEL_1; /*0x8ec482*/
            }
            ++v3; /*0x8ec401*/
            v2 += 3; /*0x8ec405*/
            v26 += 0xFFFFFFFD; /*0x8ec40b*/
          }
          while ( v3 < 2 ); /*0x8ec40f*/
          if ( *(int *)(solverState + 0x30) >= 3 ) /*0x8ec415*/
          {
            hkSurfaceConstraintUtil_ProjectAgainstThreePlanes( /*0x8ec437*/
              *(__m128 **)(solverState + 0x10),
              (_DWORD *)solverState,
              *(__m128 **)(solverState + 4),
              *(__m128 **)(solverState + 0x1C),
              1,
              (__m128 *)(*(_DWORD *)(solverState + 0x38) + 0x10),
              (__m128 *)(*(_DWORD *)(solverState + 0x3C) + 0x10));
            return; /*0x8ec445*/
          }
          continue; /*0x8ec415*/
        }
        *(__m128 *)(*(_DWORD *)(solverState + 0x3C) + 0x10) = outPoint; /*0x8ec714*/
        *(_DWORD *)solverState = *(_DWORD *)(solverState + 0x18); /*0x8ec71f*/
        v24 = *(_DWORD *)(solverState + 0x20); /*0x8ec724*/
        *(_DWORD *)(solverState + 4) = *(_DWORD *)(solverState + 0x1C); /*0x8ec727*/
        *(_DWORD *)(solverState + 8) = v24; /*0x8ec72a*/
        *(_DWORD *)(solverState + 0x30) = 1; /*0x8ec72d*/
        return;
      case 4: /*0x8ec35d*/
        hkSurfaceConstraintUtil_SortActiveConstraints(solverState); /*0x8ec488*/
        for ( i = 0; i < 3; ++i ) /*0x8ec490*/
        {
          hkSurfaceConstraintUtil_ProjectAgainstThreePlanes( /*0x8ec4ca*/
            *(__m128 **)(solverState + 0xC * ((i + 2) % 3) + 4),
            (_DWORD *)solverState,
            *(__m128 **)(solverState + 0xC * ((i + 1) % 3) + 4),
            *(__m128 **)(solverState + 0x28),
            0,
            (__m128 *)(*(_DWORD *)(solverState + 0x38) + 0x10),
            &v34);
          v7 = solverState + 0xC * i; /*0x8ec4d2*/
          hkSurfaceConstraintUtil_IsPointBehindPlane(*(__m128 **)(v7 + 4), &v31, &v34); /*0x8ec4e1*/
          if ( !v31 ) /*0x8ec4ef*/
          {
            *(_DWORD *)v7 = *(_DWORD *)(solverState + 0x18); /*0x8ec4f8*/
            *(_DWORD *)(v7 + 4) = *(_DWORD *)(solverState + 0x1C); /*0x8ec4fd*/
            *(_DWORD *)(v7 + 8) = *(_DWORD *)(solverState + 0x20); /*0x8ec503*/
            *(_DWORD *)(solverState + 0x18) = *(_DWORD *)(solverState + 0x24); /*0x8ec50b*/
            v8 = *(_DWORD *)(solverState + 0x2C); /*0x8ec510*/
            *(_DWORD *)(solverState + 0x1C) = *(_DWORD *)(solverState + 0x28); /*0x8ec513*/
            *(_DWORD *)(solverState + 0x20) = v8; /*0x8ec516*/
            *(_DWORD *)(solverState + 0x30) = 3; /*0x8ec519*/
            i = 0xA; /*0x8ec520*/
          }
        }
        if ( i >= 0xA ) /*0x8ec532*/
          continue; /*0x8ec532*/
        v9 = *(__m128 **)(solverState + 4); /*0x8ec53b*/
        v10 = *(__m128 **)(solverState + 0x10); /*0x8ec53e*/
        v11 = (__int32 *)(*(_DWORD *)(solverState + 0x38) + 0x10); /*0x8ec541*/
        v12 = *(_DWORD *)(*(_DWORD *)(solverState + 0x38) + 0x14); /*0x8ec546*/
        outPoint.m128_i32[0] = *v11; /*0x8ec549*/
        *(unsigned __int64 *)((char *)outPoint.m128_u64 + 4) = __PAIR64__(v11[2], v12); /*0x8ec550*/
        v13 = v11[3]; /*0x8ec554*/
        v14 = *(__m128 **)(solverState + 0x1C); /*0x8ec557*/
        v15 = *(__m128 **)(solverState + 0x28); /*0x8ec55e*/
        outPoint.m128_i32[3] = v13; /*0x8ec561*/
        v16 = *(_DWORD *)(solverState + 0x30); /*0x8ec565*/
        surfaceC = v15; /*0x8ec568*/
        v27 = v16; /*0x8ec571*/
        surfaceA = v14; /*0x8ec57a*/
        hkSurfaceConstraintUtil_ProjectAgainstThreePlanes(v10, (_DWORD *)solverState, v9, v14, 0, &outPoint, &outPoint); /*0x8ec585*/
        if ( v27 == *(_DWORD *)(solverState + 0x30) ) /*0x8ec596*/
          hkSurfaceConstraintUtil_ProjectAgainstThreePlanes( /*0x8ec5ad*/
            v10,
            (_DWORD *)solverState,
            v9,
            surfaceC,
            0,
            &outPoint,
            &outPoint);
        if ( v27 == *(_DWORD *)(solverState + 0x30) ) /*0x8ec5bc*/
          hkSurfaceConstraintUtil_ProjectAgainstThreePlanes( /*0x8ec5d5*/
            surfaceA,
            (_DWORD *)solverState,
            v9,
            surfaceC,
            0,
            &outPoint,
            &outPoint);
        if ( v27 == *(_DWORD *)(solverState + 0x30) ) /*0x8ec5e4*/
          hkSurfaceConstraintUtil_ProjectAgainstThreePlanes( /*0x8ec5fd*/
            surfaceA,
            (_DWORD *)solverState,
            v10,
            surfaceC,
            0,
            &outPoint,
            &outPoint);
        *(__m128 *)(*(_DWORD *)(solverState + 0x3C) + 0x10) = outPoint; /*0x8ec60d*/
        v17 = *(_DWORD *)(solverState + 8); /*0x8ec611*/
        v18 = 0; /*0x8ec61a*/
        if ( *(int *)(v17 + 0xC) >= 0 ) /*0x8ec61e*/
          v18 = *(_DWORD *)(v17 + 0xC); /*0x8ec620*/
        if ( v18 <= *(_DWORD *)(*(_DWORD *)(solverState + 0x14) + 0xC) ) /*0x8ec62a*/
          v18 = *(_DWORD *)(*(_DWORD *)(solverState + 0x14) + 0xC); /*0x8ec62c*/
        v19 = *(_DWORD *)(solverState + 0x20); /*0x8ec62e*/
        if ( v18 <= *(_DWORD *)(v19 + 0xC) ) /*0x8ec636*/
          v18 = *(_DWORD *)(v19 + 0xC); /*0x8ec638*/
        if ( v18 <= *(_DWORD *)(*(_DWORD *)(solverState + 0x2C) + 0xC) ) /*0x8ec642*/
          v18 = *(_DWORD *)(*(_DWORD *)(solverState + 0x2C) + 0xC); /*0x8ec644*/
        v20 = 0; /*0x8ec646*/
        v21 = solverState + 8; /*0x8ec648*/
        while ( v18 != *(_DWORD *)(*(_DWORD *)v21 + 0xC) ) /*0x8ec655*/
        {
          ++v20; /*0x8ec65b*/
          v21 += 0xC; /*0x8ec65c*/
          if ( v20 >= 4 ) /*0x8ec662*/
            goto LABEL_40; /*0x8ec662*/
        }
        v25 = (_DWORD *)(solverState + 0xC * v20); /*0x8ec73e*/
        *v25 = *(_DWORD *)(solverState + 0x24); /*0x8ec746*/
        v25[1] = *(_DWORD *)(solverState + 0x28); /*0x8ec74b*/
        v25[2] = *(_DWORD *)(solverState + 0x2C); /*0x8ec751*/
LABEL_40:
        --*(_DWORD *)(solverState + 0x30); /*0x8ec754*/
        *(_DWORD *)(*(_DWORD *)(solverState + 8) + 0xC) = 0; /*0x8ec75b*/
        *(_DWORD *)(*(_DWORD *)(solverState + 0x14) + 0xC) = 0; /*0x8ec761*/
        *(_DWORD *)(*(_DWORD *)(solverState + 0x20) + 0xC) = 0; /*0x8ec767*/
        def_8EC35D(); /*0x8ec768*/
        return; /*0x8ec768*/
      default:
        JUMPOUT(0x8EC76A); /*0x8ec76a*/
    }
  }
}
