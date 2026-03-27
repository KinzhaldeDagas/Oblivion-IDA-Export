void __thiscall sub_5AD440(int *this, TESObjectCELL *a2)
{
  int v2; // ebp
  int *v3; // ecx
  TESChildCELL *v5; // ebx
  TESWorldSpace *WorldSpace; // eax
  int v7; // eax
  int v8; // ecx
  TESFormVtbl *vtbl; // esi
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
  TESObjectCELL *v36; // [esp+3Ch] [ebp+4h]

  v2 = 0;
  if ( !TESDataHandler )
  {
    Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFAE, 0.0);
    return;
  }
  v3 = this + 0x13;
  v28 = v3;
  if ( !v3[1] && !*v3 )
  {
    v5 = 0;
    if ( a2 )
    {
      switch ( a2->members.super.type )
      {
        case kFormType_Cell:
          WorldSpace = TESObjectCELL_GetWorldSpace(a2);
          goto LABEL_10;
        case kFormType_REFR:
        case kFormType_ACHR:
        case kFormType_ACRE:
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2);
LABEL_10:
          v5 = (TESChildCELL *)WorldSpace;
          break;
        case kFormType_WorldSpace:
          v5 = (TESChildCELL *)a2;
          break;
        default:
          break;
      }
    }
    v7 = TESDataHandler + 0x9C;
    v8 = 0;
    v34 = 0;
    v35 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v25 = 0;
    v27 = 0;
    v26 = 0;
    v36 = (TESObjectCELL *)v7;
    if ( v7 )
    {
      while ( 1 )
      {
        vtbl = v36->vtbl;
        if ( v36->vtbl )
        {
          if ( !sub_4F9BB0(vtbl, (TESChildCELL *)a2) )
          {
            if ( !v5 || !sub_4F9BB0(vtbl, v5) )
              goto LABEL_22;
            ++v26;
            v10 = &v32;
            goto LABEL_21;
          }
          if ( sub_4F9A20(vtbl) )
          {
            ++v25;
            v10 = &v34;
LABEL_21:
            BSSimpleList_PushFront(v10, (int)vtbl);
            goto LABEL_22;
          }
          if ( a2 )
          {
            ++v27;
            v10 = &v30;
            goto LABEL_21;
          }
        }
LABEL_22:
        v36 = *(TESObjectCELL **)&v36->members.super.type;
        if ( !v36 )
        {
          v8 = v25;
          break;
        }
      }
    }
    v11 = 0;
    while ( 1 )
    {
      v24 = 0;
      if ( !v11 )
        break;
      if ( v11 == 1 )
      {
        v2 = v26;
        v36 = (TESObjectCELL *)&v32;
LABEL_32:
        v24 = 1;
        goto LABEL_33;
      }
      if ( v11 == 2 )
      {
        v36 = (TESObjectCELL *)&v34;
        v2 = v8;
        v24 = v8;
      }
LABEL_33:
      for ( i = ++v11; v24 > 0; --v24 )
      {
        if ( v2 <= 0 )
          break;
        v12 = GetRandomLargeInteger_(0) % v2;
        v13 = (int *)v36;
        v14 = 0;
        if ( v12 <= 0 )
        {
LABEL_38:
          if ( v13 )
          {
            if ( v13[1] || *v13 )
            {
              v15 = *v13;
              if ( *v13 )
              {
                for ( j = v28; j[1]; j = (int *)j[1] )
                  ;
                if ( *j )
                {
                  v17 = (int *)FormHeapAlloc(8u);
                  if ( v17 )
                  {
                    *v17 = v15;
                    v17[1] = 0;
                    j[1] = (int)v17;
                  }
                  else
                  {
                    j[1] = 0;
                  }
                }
                else
                {
                  *j = v15;
                }
              }
              BSSimpleList_Remove(v36, *v13);
              v11 = i;
              --v2;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v13 = (int *)v13[1];
            if ( !v13 )
              break;
            if ( ++v14 >= v12 )
              goto LABEL_38;
          }
        }
      }
      if ( v11 >= 3 )
      {
        v18 = v31;
        if ( v31 )
        {
          do
          {
            v19 = *(_DWORD *)(v18 + 4);
            FormHeapFree(v18);
            v18 = v19;
            v31 = v19;
          }
          while ( v19 );
        }
        v20 = v33;
        v30 = 0;
        if ( v33 )
        {
          do
          {
            v21 = *(_DWORD *)(v20 + 4);
            FormHeapFree(v20);
            v20 = v21;
            v33 = v21;
          }
          while ( v21 );
        }
        v22 = v35;
        v32 = 0;
        if ( v35 )
        {
          do
          {
            v23 = *(_DWORD *)(v22 + 4);
            FormHeapFree(v22);
            v22 = v23;
            v35 = v23;
          }
          while ( v23 );
        }
        return;
      }
      v8 = v25;
      v2 = 0;
    }
    v2 = v27;
    v36 = (TESObjectCELL *)&v30;
    goto LABEL_32;
  }
}
