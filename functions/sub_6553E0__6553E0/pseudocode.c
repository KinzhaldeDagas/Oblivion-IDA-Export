// BunkFix: sleep/eat furniture-reference scanner used by sub_62D750 and sub_62DA10. Scans around package location/actor and populates process candidate list at +0xB0/+0x2C family using sub_6505D0 predicate.
void __thiscall sub_6553E0(_DWORD *this, TESObjectREFR *arg0, float arg4)
{
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  TESPackage *v8; // ebx
  _DWORD *v9; // ebp
  TESObjectCELL *v10; // eax
  double v11; // st7
  float *v12; // eax
  TESObjectREFR **v13; // esi
  BSSimpleList_VoidPtr *next; // ebx
  TESObjectREFR *data; // edi
  TESObjectREFR **v16; // eax
  TESObjectREFR **v17; // ebx
  TESChildCELL *v18; // ecx
  TESObjectREFR **v19; // eax
  char v20; // al
  TESObjectREFR **i; // edi
  TESObjectREFR *v22; // ebp
  TESObjectREFR *v23; // esi
  bool v24; // zf
  int a2[3]; // [esp+24h] [ebp-18h] BYREF
  char v26[12]; // [esp+30h] [ebp-Ch] BYREF
  TESChildCELL *DwordAtOffset40; // [esp+40h] [ebp+4h]
  TESChildCELL *v28; // [esp+40h] [ebp+4h]
  float a3; // [esp+44h] [ebp+8h]
  char v30; // [esp+44h] [ebp+8h]

  unk_B3BA80 = LOBYTE(arg4); /*0x6553f2*/
  DwordAtOffset40 = (TESChildCELL *)Shared_GetDwordAtOffset40(arg0); /*0x6553fe*/
  v5 = (int *)arg0->vtbl->GetPos(arg0); /*0x65540a*/
  a2[0] = *v5; /*0x65540e*/
  a2[1] = v5[1]; /*0x655415*/
  v6 = *this; /*0x65541c*/
  a2[2] = v5[2]; /*0x65541e*/
  v7 = (*(int (__thiscall **)(_DWORD *))(v6 + 0x184))(this); /*0x65542a*/
  v8 = (TESPackage *)v7; /*0x65542c*/
  if ( v7 ) /*0x655430*/
  {
    v9 = *(_DWORD **)(v7 + 0x24); /*0x655437*/
    if ( v9 /*0x655453*/
      && sub_569740(*(char **)(v7 + 0x24)) == 1
      && (v10 = (TESObjectCELL *)sub_569800(v9), TESObjectCELL_IsInterior(v10)) )
    {
      v11 = flt_A32048; /*0x65545c*/
    }
    else
    {
      v11 = flt_A6DD10; /*0x655464*/
    }
    a3 = v11; /*0x65546b*/
    v12 = sub_566B30(v8, (float *)v26, (Actor *)arg0); /*0x655484*/
    sub_446B90( /*0x6554a2*/
      (TESObjectCELL *)DwordAtOffset40,
      (float *)a2,
      a3,
      v12,
      a3,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_6505D0,
      (int)arg0);
    v13 = (TESObjectREFR **)(this + 0x2C); /*0x6554a7*/
    BSSimpleList_Clear(v13); /*0x6554af*/
    next = &stru_B3BA9C; /*0x6554b4*/
    do /*0x6554f8*/
    {
      data = (TESObjectREFR *)next->firstNode.data; /*0x6554c0*/
      if ( !next->firstNode.data ) /*0x6554c0*/
        break; /*0x6554c4*/
      if ( *v13 ) /*0x6554c6*/
      {
        v16 = (TESObjectREFR **)FormHeapAlloc(8u); /*0x6554cd*/
        if ( v16 ) /*0x6554d7*/
        {
          *v16 = *v13; /*0x6554db*/
          v16[1] = 0; /*0x6554dd*/
        }
        else
        {
          v16 = 0; /*0x6554e6*/
        }
        v16[1] = v13[1]; /*0x6554eb*/
        v13[1] = (TESObjectREFR *)v16; /*0x6554ee*/
      }
      *v13 = data; /*0x6554f1*/
      next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x6554f3*/
    }
    while ( next ); /*0x6554f8*/
    BSSimpleList_Clear(&stru_B3BA9C); /*0x6554ff*/
    v17 = v13; /*0x655504*/
    if ( v13 ) /*0x655508*/
    {
      v18 = 0; /*0x65550a*/
      v19 = v13; /*0x65550c*/
      do /*0x65551d*/
      {
        if ( *v19 ) /*0x655510*/
          v18 = (TESChildCELL *)((char *)v18 + 1); /*0x655515*/
        v19 = (TESObjectREFR **)v19[1]; /*0x655518*/
      }
      while ( v19 ); /*0x65551d*/
      v28 = v18; /*0x655521*/
      v20 = 1; /*0x655525*/
      if ( v18 ) /*0x655527*/
      {
        while ( v20 ) /*0x655536*/
        {
          v30 = 0; /*0x65553a*/
          for ( i = v17; i; i = (TESObjectREFR **)i[1] ) /*0x655541*/
          {
            v22 = *v17; /*0x655543*/
            v23 = *i; /*0x655545*/
            if ( !TESObjectREFR_GetOwner(*v17) ) /*0x655549*/
            {
              if ( TESObjectREFR_GetOwner(v23) ) /*0x655554*/
              {
                if ( v23 ) /*0x65555f*/
                  *v17 = v23; /*0x655561*/
                if ( v22 ) /*0x655565*/
                  *i = v22; /*0x655567*/
                v30 = 1; /*0x655569*/
              }
            }
          }
          v24 = v28 == (TESChildCELL *)1; /*0x655575*/
          v28 = (TESChildCELL *)((char *)v28 + 0xFFFFFFFF); /*0x655575*/
          v17 = (TESObjectREFR **)v17[1]; /*0x65557a*/
          if ( v24 ) /*0x65557d*/
            break; /*0x65557d*/
          v20 = v30; /*0x655530*/
        }
      }
    }
  }
}
