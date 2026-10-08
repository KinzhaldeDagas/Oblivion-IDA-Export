bool __thiscall sub_5E3DE0(TESObjectREFR *this, void *a2, int a3)
{
  TESObjectREFR *v3; // edi
  bool v4; // bl
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // esi
  char v9; // al
  char v10; // al
  int v11; // eax
  int v12; // ebp
  int i; // esi
  int v14; // edi
  UInt32 j; // edi
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // esi
  char v19; // al
  int v20; // esi
  _DWORD *v22; // [esp+14h] [ebp+4h]

  v3 = this; /*0x5e3de8*/
  v4 = 1; /*0x5e3df2*/
  if ( sub_6A1E20((char *)this + 0x68, a2) ) /*0x5e3df4*/
    return 0; /*0x5e3dff*/
  v6 = OblivionDynamicCast( /*0x5e3e15*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( v6 ) /*0x5e3e1f*/
    v7 = v6[1]; /*0x5e3e21*/
  else
    v7 = 0; /*0x5e3e26*/
  if ( v7 ) /*0x5e3e2a*/
  {
    if ( *(_DWORD *)(v7 + 0x34) == 3 ) /*0x5e3e34*/
    {
      v8 = (_DWORD *)(v7 + 0x24); /*0x5e3e3a*/
      EffectItemList_HasEffectWithFlags((_DWORD *)(v7 + 0x24), 0x20000); /*0x5e3e44*/
      if ( v9 || (EffectItemList_HasEffectWithFlags(v8, 0x10000), v10) ) /*0x5e3e5b*/
      {
        if ( v8 ) /*0x5e3e63*/
        {
          while ( (v8[2] || v8[1]) && v4 ) /*0x5e3e78*/
          {
            v11 = v8[2]; /*0x5e3e90*/
            v12 = v8[1]; /*0x5e3e95*/
            if ( v11 ) /*0x5e3e98*/
              v22 = (_DWORD *)(v11 - 4); /*0x5e3e9d*/
            else
              v22 = 0; /*0x5e3ea3*/
            if ( v12 ) /*0x5e3ead*/
            {
              for ( i = ((int (__thiscall *)(TESForm::ModReferenceList *))v3[1].member.super.modlist.data->unk008)(&v3[1].member.super.modlist); /*0x5e3ec2*/
                    i;
                    i = *(_DWORD *)(i + 4) )
              {
                if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i ) /*0x5e3eca*/
                  break; /*0x5e3ecd*/
                if ( !v4 ) /*0x5e3ed1*/
                  goto LABEL_47; /*0x5e3ed1*/
                v14 = *(_DWORD *)i; /*0x5e3ed7*/
                if ( *(_DWORD *)i ) /*0x5e3ed7*/
                {
                  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(*(_DWORD **)i) ) /*0x5e3edf*/
                    v4 = Magic_BoundItemSlotOverlap(v12, *(_DWORD *)(v14 + 0xC)) == 0; /*0x5e3ef7*/
                }
              }
              if ( v4 && this == (TESObjectREFR *)reference ) /*0x5e3f12*/
              {
                for ( j = reference->unk1FC; j; j = *(_DWORD *)(j + 4) ) /*0x5e3f20*/
                {
                  if ( !*(_DWORD *)(j + 4) && !*(_DWORD *)j ) /*0x5e3f2c*/
                    break; /*0x5e3f2f*/
                  if ( !v4 ) /*0x5e3f33*/
                    break; /*0x5e3f33*/
                  if ( *(_DWORD *)j /*0x5e3f54*/
                    && (v16 = OblivionDynamicCast(
                                *(void **)j,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESEnchantableForm `RTTI Type Descriptor',
                                0)) != 0 )
                  {
                    v17 = v16[1]; /*0x5e3f56*/
                  }
                  else
                  {
                    v17 = 0; /*0x5e3f5b*/
                  }
                  if ( v17 ) /*0x5e3f5f*/
                  {
                    if ( *(_DWORD *)(v17 + 0x34) == 3 ) /*0x5e3f65*/
                    {
                      v18 = v17 + 0x24; /*0x5e3f67*/
                      if ( v17 != 0xFFFFFFDC ) /*0x5e3f6c*/
                      {
                        do /*0x5e3f9c*/
                        {
                          if ( !*(_DWORD *)(v18 + 8) && !*(_DWORD *)(v18 + 4) ) /*0x5e3f76*/
                            break; /*0x5e3f7a*/
                          if ( !v4 ) /*0x5e3f7e*/
                            break; /*0x5e3f7e*/
                          v19 = Magic_BoundItemSlotOverlap(v12, *(_DWORD *)(v18 + 4)); /*0x5e3f85*/
                          v20 = *(_DWORD *)(v18 + 8); /*0x5e3f8a*/
                          v4 = v19 == 0; /*0x5e3f92*/
                          if ( !v20 ) /*0x5e3f97*/
                            break; /*0x5e3f97*/
                          v18 = v20 - 4; /*0x5e3f99*/
                        }
                        while ( v18 ); /*0x5e3f9c*/
                      }
                    }
                  }
                }
              }
            }
LABEL_47:
            if ( !v22 ) /*0x5e3faa*/
              break; /*0x5e3faa*/
            v8 = v22; /*0x5e3e70*/
            v3 = this; /*0x5e3e74*/
          }
        }
      }
    }
  }
  return v4; /*0x5e3dfd*/
}
