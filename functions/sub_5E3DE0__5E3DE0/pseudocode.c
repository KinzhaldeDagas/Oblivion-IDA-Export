bool __thiscall sub_5E3DE0(TESObjectREFR *this, void *a2, int a3)
{
  TESObjectREFR *v3; // edi
  bool v4; // bl
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // ebp
  int i; // esi
  int v12; // edi
  UInt32 j; // edi
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // esi
  bool v17; // al
  int v18; // esi
  _DWORD *v20; // [esp+14h] [ebp+4h]

  v3 = this;
  v4 = 1;
  if ( sub_6A1E20((char *)this + 0x68, a2) )
    return 0;
  v6 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( v6 )
    v7 = v6[1];
  else
    v7 = 0;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 0x34) == 3 )
    {
      v8 = (_DWORD *)(v7 + 0x24);
      if ( EffectItemList_HasEffectWithFlags((_DWORD *)(v7 + 0x24), 0x20000)
        || EffectItemList_HasEffectWithFlags(v8, 0x10000) )
      {
        if ( v8 )
        {
          while ( (v8[2] || v8[1]) && v4 )
          {
            v9 = v8[2];
            v10 = v8[1];
            if ( v9 )
              v20 = (_DWORD *)(v9 - 4);
            else
              v20 = 0;
            if ( v10 )
            {
              for ( i = ((int (__thiscall *)(TESForm::ModReferenceList *))v3[1].member.super.modlist.data->unk008)(&v3[1].member.super.modlist);
                    i;
                    i = *(_DWORD *)(i + 4) )
              {
                if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
                  break;
                if ( !v4 )
                  goto LABEL_47;
                v12 = *(_DWORD *)i;
                if ( *(_DWORD *)i )
                {
                  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(*(_DWORD **)i) )
                    v4 = !Magic_BoundItemSlotOverlap(v10, *(_DWORD *)(v12 + 0xC));
                }
              }
              if ( v4 && this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
              {
                for ( j = TESDataHandler_g_PlayerRef->unk1FC; j; j = *(_DWORD *)(j + 4) )
                {
                  if ( !*(_DWORD *)(j + 4) && !*(_DWORD *)j )
                    break;
                  if ( !v4 )
                    break;
                  if ( *(_DWORD *)j
                    && (v14 = OblivionDynamicCast(
                                *(void **)j,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESEnchantableForm `RTTI Type Descriptor',
                                0)) != 0 )
                  {
                    v15 = v14[1];
                  }
                  else
                  {
                    v15 = 0;
                  }
                  if ( v15 )
                  {
                    if ( *(_DWORD *)(v15 + 0x34) == 3 )
                    {
                      v16 = v15 + 0x24;
                      if ( v15 != 0xFFFFFFDC )
                      {
                        do
                        {
                          if ( !*(_DWORD *)(v16 + 8) && !*(_DWORD *)(v16 + 4) )
                            break;
                          if ( !v4 )
                            break;
                          v17 = Magic_BoundItemSlotOverlap(v10, *(_DWORD *)(v16 + 4));
                          v18 = *(_DWORD *)(v16 + 8);
                          v4 = !v17;
                          if ( !v18 )
                            break;
                          v16 = v18 - 4;
                        }
                        while ( v16 );
                      }
                    }
                  }
                }
              }
            }
LABEL_47:
            if ( !v20 )
              break;
            v8 = v20;
            v3 = this;
          }
        }
      }
    }
  }
  return v4;
}
