char __usercall sub_515D20@<al>(
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
  BSExtraDataVtbl *v12; // eax
  char *v13; // ebx
  TESWorldSpace *v14; // edi
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectREFR **v16; // esi
  TESObjectCELL *v17; // eax
  int v18; // esi
  char v19; // bl
  UInt16 v21[2]; // [esp+14h] [ebp-24h] BYREF
  char *v22; // [esp+18h] [ebp-20h]
  unsigned int v23; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v24; // [esp+34h] [ebp-4h]

  v11 = 0;
  *(_DWORD *)v21 = 0;
  if ( !Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v21) )
    return 0;
  if ( !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
  {
    v12 = sub_4D8E40(TESDataHandler_g_PlayerRef);
    v13 = (char *)v12;
    v22 = (char *)v12;
    if ( v12 )
    {
      v14 = 0;
      TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(v12);
      v16 = TeleportExtraData;
      if ( TeleportExtraData )
      {
        v14 = sub_42B470(TeleportExtraData);
        if ( !v14 )
        {
          if ( sub_42B460(v16) )
          {
            v17 = sub_42B460(v16);
            if ( TESObjectCELL_IsInterior(v17) )
              v11 = sub_42B460(v16);
          }
        }
      }
      sub_4B8420(&v23, 0x25u);
      v24 = 0;
      if ( v14 )
      {
        sub_4F2770(v14);
      }
      else if ( v11 )
      {
        sub_4CC070(v11, &v23);
      }
      NiTMap_Clear(&v23);
      TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_46((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      if ( !*(_DWORD *)v21 )
      {
        v18 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
        v19 = *(_BYTE *)(v18 + 0x185);
        *(_BYTE *)(v18 + 0x185) = 0;
        if ( v14 )
        {
          sub_4F2630((int)v14, st5_0, a2, st7_0);
        }
        else if ( v11 )
        {
          sub_4CBE50(v11, st5_0, a2, st7_0, &v23);
        }
        NiTMap_Clear(&v23);
        *(_BYTE *)(v18 + 0x185) = v19;
        v13 = v22;
      }
      sub_4B7DB0(st5_0, a2, st7_0, v13, 0);
      ++TESDataHandler_g_PlayerRef->miscStats[0xD];
      v24 = 0xFFFFFFFF;
      NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(&v23);
      return 0;
    }
  }
  return 1;
}
