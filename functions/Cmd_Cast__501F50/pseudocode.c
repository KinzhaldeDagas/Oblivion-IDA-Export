char __usercall Cmd_Cast@<al>(
        int ebx0@<ebx>,
        int a2@<ebp>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  char result; // al
  char *v12; // ebx
  int v13; // ebp
  void *v14; // edi
  UInt16 v15[2]; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)v15 = 0; /*0x501f84*/
  v16 = 0; /*0x501f88*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a7, a8, l, v15, &v16); /*0x501f8c*/
  if ( result ) /*0x501f96*/
  {
    if ( a4 /*0x501fe7*/
      && (v12 = (char *)((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl->Unk_48)(a4, ebx0)) != 0
      && *(_DWORD *)v15
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v15 + 0x18))(*(_DWORD *)v15) != 1
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v15 + 0x18))(*(_DWORD *)v15) != 4 )
    {
      MagicCaster_InitializeCasting___(v12); /*0x501ff0*/
      if ( v16 ) /*0x501ffb*/
        v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 0x124))(v16, a2); /*0x502007*/
      else
        v13 = 0; /*0x50200b*/
      v14 = OblivionDynamicCast( /*0x50201f*/
              a4,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &Actor `RTTI Type Descriptor',
              0);
      if ( v14 ) /*0x502026*/
      {
        if ( EffectItemList_HasOnTarget(*(_DWORD *)v15 + 0xC) ) /*0x502033*/
          return Cmd_Cast_::CastOnTarget((int)v12, (int)v14, st7_0); /*0x50203b*/
        else
          return Cmd_Cast_::CheckOnTouch((int)a1, (int)arg4, (int)a4, (int)a7); /*0x50203a*/
      }
      else
      {
        return Cmd_Cast_::CastNonActor(v12, v13, a4, (int)a1, (int)arg4, (int)a4, (int)a7, (TESObjectREFR *)a8); /*0x502026*/
      }
    }
    else
    {
      return Cmd_Cast_::Done(); /*0x501fa1*/
    }
  }
  return result; /*0x501f98*/
}
