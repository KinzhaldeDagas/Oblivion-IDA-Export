void __thiscall sub_5AD440(int *this, TESObjectCELL *a2)
{
  int v2; // ebp
  int *v3; // ecx
  TESChildCELL *v5; // ebx
  TESWorldSpace *WorldSpace; // eax
  OblivionTESFormListNode *p_loadScreenList; // eax
  int v8; // ecx
  _DWORD *v9; // esi
  int *v10; // ecx
  int v11; // esi
  int v12; // edx
  int *v13; // edi
  int v14; // eax
  int v15; // ebx
  int *j; // esi
  int *v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // esi
  int v24; // [esp+8h] [ebp-30h]
  int v25; // [esp+Ch] [ebp-2Ch]
  int v26; // [esp+10h] [ebp-28h]
  int v27; // [esp+14h] [ebp-24h]
  int *v28; // [esp+18h] [ebp-20h]
  int i; // [esp+1Ch] [ebp-1Ch]
  int v30; // [esp+20h] [ebp-18h] BYREF
  unsigned int v31; // [esp+24h] [ebp-14h]
  int v32; // [esp+28h] [ebp-10h] BYREF
  unsigned int v33; // [esp+2Ch] [ebp-Ch]
  int v34; // [esp+30h] [ebp-8h] BYREF
  unsigned int v35; // [esp+34h] [ebp-4h]
  int *v36; // [esp+3Ch] [ebp+4h]

  v2 = 0; /*0x5ad444*/
  if ( !g_TESDataHandler ) /*0x5ad446*/
  {
    Tile_SetFloat((Tile *)*(this + 1), 0xFAEu, 0.0); /*0x5ad45c*/
    return; /*0x5ad465*/
  }
  v3 = this + 0x13; /*0x5ad468*/
  v28 = v3; /*0x5ad46e*/
  if ( !v3[1] && !*v3 ) /*0x5ad478*/
  {
    v5 = 0; /*0x5ad487*/
    if ( a2 ) /*0x5ad48b*/
    {
      switch ( a2->members.super.type ) /*0x5ad499*/
      {
        case kFormType_Cell: /*0x5ad499*/
          WorldSpace = TESObjectCELL_GetWorldSpace(a2); /*0x5ad4a6*/
          goto LABEL_10; /*0x5ad4ab*/
        case kFormType_REFR: /*0x5ad499*/
        case kFormType_ACHR: /*0x5ad499*/
        case kFormType_ACRE: /*0x5ad499*/
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2); /*0x5ad4af*/
LABEL_10:
          v5 = (TESChildCELL *)WorldSpace; /*0x5ad4b4*/
          break; /*0x5ad4b4*/
        case kFormType_WorldSpace: /*0x5ad499*/
          v5 = (TESChildCELL *)a2; /*0x5ad4a0*/
          break; /*0x5ad4a2*/
        default:
          break;
      }
    }
    p_loadScreenList = &g_TESDataHandler->loadScreenList; /*0x5ad4b6*/
    v8 = 0; /*0x5ad4c0*/
    v34 = 0; /*0x5ad4c4*/
    v35 = 0; /*0x5ad4c8*/
    v30 = 0; /*0x5ad4cc*/
    v31 = 0; /*0x5ad4d0*/
    v32 = 0; /*0x5ad4d4*/
    v33 = 0; /*0x5ad4d8*/
    v25 = 0; /*0x5ad4dc*/
    v27 = 0; /*0x5ad4e0*/
    v26 = 0; /*0x5ad4e4*/
    v36 = (int *)p_loadScreenList; /*0x5ad4e8*/
    if ( p_loadScreenList ) /*0x5ad4ec*/
    {
      while ( 1 ) /*0x5ad4f4*/
      {
        v9 = (_DWORD *)*v36; /*0x5ad4f4*/
        if ( *v36 ) /*0x5ad4f4*/
        {
          if ( !sub_4F9BB0(v9, (TESChildCELL *)a2) ) /*0x5ad504*/
          {
            if ( !v5 || !sub_4F9BB0(v9, v5) ) /*0x5ad532*/
              goto LABEL_22; /*0x5ad539*/
            ++v26; /*0x5ad53b*/
            v10 = &v32; /*0x5ad540*/
            goto LABEL_21; /*0x5ad540*/
          }
          if ( sub_4F9A20(v9) ) /*0x5ad508*/
          {
            ++v25; /*0x5ad511*/
            v10 = &v34; /*0x5ad516*/
LABEL_21:
            BSSimpleList_PushFront(v10, (int)v9); /*0x5ad544*/
            goto LABEL_22; /*0x5ad545*/
          }
          if ( a2 ) /*0x5ad51e*/
          {
            ++v27; /*0x5ad520*/
            v10 = &v30; /*0x5ad525*/
            goto LABEL_21; /*0x5ad529*/
          }
        }
LABEL_22:
        v36 = (int *)v36[1]; /*0x5ad54a*/
        if ( !v36 ) /*0x5ad557*/
        {
          v8 = v25; /*0x5ad559*/
          break; /*0x5ad559*/
        }
      }
    }
    v11 = 0; /*0x5ad55d*/
    while ( 1 ) /*0x5ad56c*/
    {
      v24 = 0; /*0x5ad56c*/
      if ( !v11 ) /*0x5ad570*/
        break; /*0x5ad570*/
      if ( v11 == 1 ) /*0x5ad575*/
      {
        v2 = v26; /*0x5ad58c*/
        v36 = &v32; /*0x5ad594*/
LABEL_32:
        v24 = 1; /*0x5ad5a6*/
        goto LABEL_33; /*0x5ad5a6*/
      }
      if ( v11 == 2 ) /*0x5ad57a*/
      {
        v36 = &v34; /*0x5ad580*/
        v2 = v8; /*0x5ad584*/
        v24 = v8; /*0x5ad586*/
      }
LABEL_33:
      for ( i = ++v11; v24 > 0; --v24 ) /*0x5ad5ba*/
      {
        if ( v2 <= 0 ) /*0x5ad5c2*/
          break; /*0x5ad5c2*/
        v12 = Game_RandomLargeInteger(0) % v2; /*0x5ad5d0*/
        v13 = v36; /*0x5ad5d2*/
        v14 = 0; /*0x5ad5d9*/
        if ( v12 <= 0 ) /*0x5ad5dd*/
        {
LABEL_38:
          if ( v13 ) /*0x5ad5f0*/
          {
            if ( v13[1] || *v13 ) /*0x5ad5f8*/
            {
              v15 = *v13; /*0x5ad5fd*/
              if ( *v13 ) /*0x5ad5fd*/
              {
                for ( j = v28; j[1]; j = (int *)j[1] ) /*0x5ad607*/
                  ; /*0x5ad610*/
                if ( *j ) /*0x5ad619*/
                {
                  v17 = (int *)FormHeapAlloc(8u); /*0x5ad620*/
                  if ( v17 ) /*0x5ad62a*/
                  {
                    *v17 = v15; /*0x5ad62c*/
                    v17[1] = 0; /*0x5ad62e*/
                    j[1] = (int)v17; /*0x5ad635*/
                  }
                  else
                  {
                    j[1] = 0; /*0x5ad63c*/
                  }
                }
                else
                {
                  *j = v15; /*0x5ad641*/
                }
              }
              BSSimpleList_Remove(v36, *v13); /*0x5ad64a*/
              v11 = i; /*0x5ad64f*/
              --v2; /*0x5ad653*/
            }
          }
        }
        else
        {
          while ( 1 ) /*0x5ad5e0*/
          {
            v13 = (int *)v13[1]; /*0x5ad5e0*/
            if ( !v13 ) /*0x5ad5e5*/
              break; /*0x5ad5e5*/
            if ( ++v14 >= v12 ) /*0x5ad5ec*/
              goto LABEL_38; /*0x5ad5ec*/
          }
        }
      }
      if ( v11 >= 3 ) /*0x5ad66c*/
      {
        v18 = v31; /*0x5ad672*/
        if ( v31 ) /*0x5ad67a*/
        {
          do /*0x5ad694*/
          {
            v19 = *(_DWORD *)(v18 + 4); /*0x5ad680*/
            FormHeapFree(v18); /*0x5ad684*/
            v18 = v19; /*0x5ad68e*/
            v31 = v19; /*0x5ad690*/
          }
          while ( v19 ); /*0x5ad694*/
        }
        v20 = v33; /*0x5ad696*/
        v30 = 0; /*0x5ad69c*/
        if ( v33 ) /*0x5ad6a0*/
        {
          do /*0x5ad6b6*/
          {
            v21 = *(_DWORD *)(v20 + 4); /*0x5ad6a2*/
            FormHeapFree(v20); /*0x5ad6a6*/
            v20 = v21; /*0x5ad6b0*/
            v33 = v21; /*0x5ad6b2*/
          }
          while ( v21 ); /*0x5ad6b6*/
        }
        v22 = v35; /*0x5ad6b8*/
        v32 = 0; /*0x5ad6be*/
        if ( v35 ) /*0x5ad6c2*/
        {
          do /*0x5ad6d8*/
          {
            v23 = *(_DWORD *)(v22 + 4); /*0x5ad6c4*/
            FormHeapFree(v22); /*0x5ad6c8*/
            v22 = v23; /*0x5ad6d2*/
            v35 = v23; /*0x5ad6d4*/
          }
          while ( v23 ); /*0x5ad6d8*/
        }
        return; /*0x5ad6d8*/
      }
      v8 = v25; /*0x5ad561*/
      v2 = 0; /*0x5ad565*/
    }
    v2 = v27; /*0x5ad59a*/
    v36 = &v30; /*0x5ad5a2*/
    goto LABEL_32; /*0x5ad5a2*/
  }
}
