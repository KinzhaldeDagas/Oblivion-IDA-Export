// AchievementsNative evidence: navigation trait resolver handles prev/next/xlist cases by listindex and target eligibility; use for inventory-style row navigation semantics, not as proof of mouse wheel dispatch.
// Verified descriptive name: resolves navigation trait by walking Tile ancestors until trait exists. Constants105/104 choose nearest strictly greater/smaller integer listindex among visible siblings with xdefault trait. No sibling candidate => ascend to parent and resolve same trait there. Constants106/107 choose min/max child index, with default-focus fallback. Candidate scans do not directly check target; caller applies eligibility.
Tile *__thiscall Tile::ResolveNavigationTrait(Tile *this, unsigned int trait, unsigned int *resolvedTrait)
{
  _DWORD *v4; // eax
  int v5; // ecx
  signed int v6; // edx
  int v8; // ebp
  double Float; // st7
  int v10; // eax
  Tile *v11; // esi
  _DWORD *v12; // ebx
  Tile *v13; // esi
  _DWORD *v14; // eax
  int v15; // edx
  unsigned __int16 v16; // cx
  _DWORD *v17; // eax
  unsigned __int16 v18; // cx
  double v19; // st7
  int v20; // eax
  signed int v21; // ebp
  double v22; // st7
  int v23; // eax
  Tile *v24; // esi
  _DWORD *v25; // ebx
  Tile *v26; // esi
  _DWORD *v27; // eax
  int v28; // edx
  unsigned __int16 v29; // cx
  _DWORD *v30; // eax
  unsigned __int16 v31; // cx
  double v32; // st7
  int v33; // eax
  _DWORD *v34; // ebx
  int v35; // ebp
  _DWORD *v36; // edi
  double v37; // st7
  int v38; // eax
  Tile *v39; // esi
  InterfaceManager *Singleton; // eax
  _DWORD *v41; // ebx
  signed int v42; // ebp
  _DWORD *v43; // edi
  double v44; // st7
  int v45; // eax
  int v46; // ecx
  int i; // eax
  Tile *v48; // [esp-4h] [ebp-24h]
  Tile *v49; // [esp+10h] [ebp-10h]
  Tile *v50; // [esp+14h] [ebp-Ch]
  int v51; // [esp+18h] [ebp-8h]
  int v52; // [esp+1Ch] [ebp-4h]

  while ( 1 ) /*0x58e3fd*/
  {
    while ( 1 ) /*0x58e3c5*/
    {
      while ( 1 ) /*0x58e3c0*/
      {
        v4 = *((_DWORD **)this + 6); /*0x58e3c0*/
        if ( v4 ) /*0x58e3c5*/
          break; /*0x58e3c5*/
LABEL_5:
        this = *((Tile **)this + 4); /*0x58e3dc*/
        if ( !this ) /*0x58e3e1*/
          return 0; /*0x58e3e1*/
      }
      while ( 1 ) /*0x58e3ca*/
      {
        v5 = v4[2]; /*0x58e3ca*/
        v6 = *(unsigned __int16 *)(v5 + 0x18); /*0x58e3cc*/
        v4 = (_DWORD *)*v4; /*0x58e3d2*/
        if ( v6 == trait ) /*0x58e3d4*/
          break; /*0x58e3d4*/
        if ( v6 > (int)trait || !v4 ) /*0x58e3da*/
          goto LABEL_5; /*0x58e3da*/
      }
      if ( *(float *)(v5 + 4) != dbl_A6AE78 ) /*0x58e3fd*/
        break; /*0x58e3fd*/
      v50 = 0; /*0x58e40a*/
      v8 = 0x7FFFFFFF; /*0x58e412*/
      Float = Tile_GetFloat(this, 0xFAA); /*0x58e417*/
      v10 = Double_To_SInt32(Float); /*0x58e41c*/
      v11 = *((Tile **)this + 4); /*0x58e421*/
      v12 = *((_DWORD **)v11 + 0xD); /*0x58e424*/
      v52 = v10; /*0x58e429*/
      v49 = v11; /*0x58e42d*/
      if ( v12 ) /*0x58e431*/
      {
        do /*0x58e4c2*/
        {
          v13 = (Tile *)v12[2]; /*0x58e437*/
          v12 = (_DWORD *)*v12; /*0x58e440*/
          v14 = *((_DWORD **)v13 + 6); /*0x58e442*/
          if ( !v14 ) /*0x58e446*/
            goto LABEL_15; /*0x58e446*/
          while ( 1 ) /*0x58e450*/
          {
            v15 = v14[2]; /*0x58e450*/
            v16 = *(_WORD *)(v15 + 0x18); /*0x58e456*/
            v14 = (_DWORD *)*v14; /*0x58e45f*/
            if ( v16 == 0xFA1 ) /*0x58e461*/
              break; /*0x58e461*/
            if ( v16 > 0xFA1u || !v14 ) /*0x58e467*/
              goto LABEL_15; /*0x58e467*/
          }
          if ( 1.0 != *(float *)(v15 + 4) ) /*0x58e47d*/
          {
LABEL_15:
            v17 = *((_DWORD **)v13 + 6); /*0x58e47f*/
            if ( v17 ) /*0x58e483*/
            {
              while ( 1 ) /*0x58e48a*/
              {
                v18 = *(_WORD *)(v17[2] + 0x18); /*0x58e48a*/
                v17 = (_DWORD *)*v17; /*0x58e493*/
                if ( v18 == 0xFF0 ) /*0x58e495*/
                  break; /*0x58e495*/
                if ( v18 > 0xFF0u || !v17 ) /*0x58e49b*/
                  goto LABEL_23; /*0x58e49b*/
              }
              v19 = Tile_GetFloat(v13, 0xFAA); /*0x58e4a6*/
              v20 = Double_To_SInt32(v19); /*0x58e4ab*/
              if ( v20 > v52 && v20 < v8 ) /*0x58e4b8*/
              {
                v50 = v13; /*0x58e4ba*/
                v8 = v20; /*0x58e4be*/
              }
            }
          }
LABEL_23:
          ; /*0x58e4c0*/
        }
        while ( v12 ); /*0x58e4c2*/
        if ( v50 ) /*0x58e4cc*/
          goto LABEL_45; /*0x58e4cc*/
      }
LABEL_25:
      this = v49; /*0x58e4d2*/
    }
    if ( *(float *)(v5 + 4) != dbl_A6AE70 ) /*0x58e4e9*/
      break; /*0x58e4e9*/
    v50 = 0; /*0x58e4f6*/
    v21 = 0x80000000; /*0x58e4fe*/
    v22 = Tile_GetFloat(this, 0xFAA); /*0x58e503*/
    v23 = Double_To_SInt32(v22); /*0x58e508*/
    v24 = *((Tile **)this + 4); /*0x58e50d*/
    v25 = *((_DWORD **)v24 + 0xD); /*0x58e510*/
    v51 = v23; /*0x58e515*/
    v49 = v24; /*0x58e519*/
    if ( !v25 ) /*0x58e51d*/
      goto LABEL_25; /*0x58e51d*/
    do /*0x58e5a3*/
    {
      v26 = (Tile *)v25[2]; /*0x58e520*/
      v25 = (_DWORD *)*v25; /*0x58e529*/
      v27 = *((_DWORD **)v26 + 6); /*0x58e52b*/
      if ( !v27 ) /*0x58e52f*/
        goto LABEL_34; /*0x58e52f*/
      while ( 1 ) /*0x58e531*/
      {
        v28 = v27[2]; /*0x58e531*/
        v29 = *(_WORD *)(v28 + 0x18); /*0x58e537*/
        v27 = (_DWORD *)*v27; /*0x58e540*/
        if ( v29 == 0xFA1 ) /*0x58e542*/
          break; /*0x58e542*/
        if ( v29 > 0xFA1u || !v27 ) /*0x58e548*/
          goto LABEL_34; /*0x58e548*/
      }
      if ( 1.0 != *(float *)(v28 + 4) ) /*0x58e55e*/
      {
LABEL_34:
        v30 = *((_DWORD **)v26 + 6); /*0x58e560*/
        if ( v30 ) /*0x58e564*/
        {
          while ( 1 ) /*0x58e56b*/
          {
            v31 = *(_WORD *)(v30[2] + 0x18); /*0x58e56b*/
            v30 = (_DWORD *)*v30; /*0x58e574*/
            if ( v31 == 0xFF0 ) /*0x58e576*/
              break; /*0x58e576*/
            if ( v31 > 0xFF0u || !v30 ) /*0x58e57c*/
              goto LABEL_42; /*0x58e57c*/
          }
          v32 = Tile_GetFloat(v26, 0xFAA); /*0x58e587*/
          v33 = Double_To_SInt32(v32); /*0x58e58c*/
          if ( v33 < v51 && v33 > v21 ) /*0x58e599*/
          {
            v50 = v26; /*0x58e59b*/
            v21 = v33; /*0x58e59f*/
          }
        }
      }
LABEL_42:
      ; /*0x58e5a1*/
    }
    while ( v25 ); /*0x58e5a3*/
    if ( v50 ) /*0x58e5ad*/
    {
LABEL_45:
      Tile::RequestNavigationScroll(v50); /*0x58e5b8*/
      return v50; /*0x58e5cc*/
    }
    this = v49; /*0x58e5af*/
  }
  if ( *(float *)(v5 + 4) == dbl_A6AE68 ) /*0x58e5dd*/
  {
    v34 = *((_DWORD **)this + 0xD); /*0x58e5e3*/
    trait = 0; /*0x58e5e8*/
    v35 = 0x7FFFFFFF; /*0x58e5f0*/
    if ( v34 ) /*0x58e5f5*/
    {
      do /*0x58e645*/
      {
        v36 = (_DWORD *)v34[2]; /*0x58e5f7*/
        v34 = (_DWORD *)*v34; /*0x58e5fd*/
        if ( Tile_GetFloat(v36, 0xFA1) != fConstant_1 ) /*0x58e616*/
        {
          if ( sub_588B50(v36, 0xFF0) ) /*0x58e61f*/
          {
            v37 = Tile_GetFloat(v36, 0xFAA); /*0x58e62f*/
            v38 = Double_To_SInt32(v37); /*0x58e634*/
            if ( v38 < v35 ) /*0x58e63b*/
            {
              trait = (unsigned int)v36; /*0x58e63d*/
              v35 = v38; /*0x58e641*/
            }
          }
        }
      }
      while ( v34 ); /*0x58e645*/
      if ( trait ) /*0x58e64b*/
        goto LABEL_54; /*0x58e64b*/
    }
    if ( sub_588B50(this, 0xFF0) ) /*0x58e66b*/
      sub_578ED0(this, (Tile *)0xFF0, 0); /*0x58e67d*/
LABEL_57:
    trait = 0x80000000; /*0x58e682*/
    v48 = (Tile *)sub_589390(this); /*0x58e691*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x58e69b*/
    return InterfaceManager::ScanForMaxFocus(Singleton, (int *)&trait, v48); /*0x58e6a5*/
  }
  else if ( *(float *)(v5 + 4) == dbl_A6AE60 ) /*0x58e6c2*/
  {
    v41 = *((_DWORD **)this + 0xD); /*0x58e6c8*/
    trait = 0; /*0x58e6cd*/
    v42 = 0x80000000; /*0x58e6d5*/
    if ( !v41 ) /*0x58e6da*/
      goto LABEL_78; /*0x58e6da*/
    do /*0x58e72e*/
    {
      v43 = (_DWORD *)v41[2]; /*0x58e6e0*/
      v41 = (_DWORD *)*v41; /*0x58e6e6*/
      if ( Tile_GetFloat(v43, 0xFA1) != fConstant_1 ) /*0x58e6ff*/
      {
        if ( sub_588B50(v43, 0xFF0) ) /*0x58e708*/
        {
          v44 = Tile_GetFloat(v43, 0xFAA); /*0x58e718*/
          v45 = Double_To_SInt32(v44); /*0x58e71d*/
          if ( v45 > v42 ) /*0x58e724*/
          {
            trait = (unsigned int)v43; /*0x58e726*/
            v42 = v45; /*0x58e72a*/
          }
        }
      }
    }
    while ( v41 ); /*0x58e72e*/
    if ( !trait ) /*0x58e734*/
    {
LABEL_78:
      if ( sub_588B50(this, 0xFF0) ) /*0x58e741*/
        sub_578ED0(this, (Tile *)0xFF0, 0); /*0x58e753*/
      goto LABEL_57; /*0x58e753*/
    }
LABEL_54:
    v39 = (Tile *)trait; /*0x58e64d*/
    Tile::RequestNavigationScroll((Tile *)trait); /*0x58e653*/
    return v39; /*0x58e659*/
  }
  else
  {
    v46 = *(_DWORD *)(v5 + 0x10); /*0x58e772*/
    if ( !v46 ) /*0x58e777*/
      return 0; /*0x58e3ec*/
    while ( *(_DWORD *)(v46 + 0xC) != 0x7EB ) /*0x58e785*/
    {
      v46 = *(_DWORD *)(v46 + 4); /*0x58e787*/
      if ( !v46 ) /*0x58e78c*/
        return 0; /*0x58e797*/
    }
    for ( i = *(_DWORD *)(v46 + 0x10); i; i = *(_DWORD *)(i + 0x10) ) /*0x58e79f*/
      v46 = i; /*0x58e7a1*/
    *resolvedTrait = *(unsigned __int16 *)(*(_DWORD *)(v46 + 8) + 0x18); /*0x58e7b7*/
    return **(Tile ***)(v46 + 8); /*0x58e7bc*/
  }
}
