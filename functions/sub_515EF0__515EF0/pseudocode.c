char __usercall sub_515EF0@<al>(
        double st5_0@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  TESObjectCELL *v11; // ebp
  TESForm *v13; // eax
  _BYTE *v14; // eax
  TESWorldSpace *v15; // edi
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectREFR **v17; // esi
  TESObjectCELL *v18; // eax
  char v19; // bl
  char v20; // al
  int v21; // esi
  char v22; // [esp+17h] [ebp-21h]
  UInt16 v23[2]; // [esp+18h] [ebp-20h] BYREF
  unsigned int v24; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v25; // [esp+34h] [ebp-4h]

  v11 = 0;
  if ( a4 )
  {
    *(_DWORD *)v23 = 0;
    if ( !Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v23) )
      return 0;
    v13 = a4->vtbl->GetBaseForm(a4);
    v14 = OblivionDynamicCast(
            v13,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectDOOR `RTTI Type Descriptor',
            0);
    if ( v14 )
    {
      if ( sub_4B6CF0(v14) )
      {
        v15 = 0;
        TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(a4);
        v17 = TeleportExtraData;
        if ( TeleportExtraData )
        {
          v15 = sub_42B470(TeleportExtraData);
          if ( !v15 )
          {
            if ( sub_42B460(v17) )
            {
              v18 = sub_42B460(v17);
              if ( TESObjectCELL_IsInterior(v18) )
                v11 = sub_42B460(v17);
            }
          }
        }
        v19 = 0;
        sub_4B8420(&v24, 0x25u);
        v25 = 0;
        if ( v15 )
        {
          v20 = sub_4F2770(v15);
        }
        else
        {
          if ( !v11 )
            goto LABEL_16;
          v20 = sub_4CC070(v11, &v24);
        }
        v19 = v20;
LABEL_16:
        NiTMap_Clear(&v24);
        if ( !*(_DWORD *)v23 )
        {
          if ( v19 )
            TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_46((TESObjectREFR *)TESDataHandler_g_PlayerRef);
          v21 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
          v22 = *(_BYTE *)(v21 + 0x185);
          *(_BYTE *)(v21 + 0x185) = 0;
          if ( v15 )
          {
            sub_4F2630((int)v15, st5_0, a2, st7_0);
          }
          else if ( v11 )
          {
            sub_4CBE50(v11, st5_0, a2, st7_0, &v24);
          }
          NiTMap_Clear(&v24);
          *(_BYTE *)(v21 + 0x185) = v22;
        }
        sub_4B7DB0(st5_0, a2, st7_0, (char *)a4, 0);
        v25 = 0xFFFFFFFF;
        NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(&v24);
        if ( v19 )
          return 0;
      }
    }
  }
  return 1;
}
