char __usercall Cmd_Cast@<al>(
        int ebx0@<ebx>,
        int a2@<ebp>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  char result; // al
  _DWORD *v11; // ebx
  int v12; // ebp
  UInt16 v13[2]; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0;
  v14 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v13, &v14);
  if ( result )
  {
    if ( a4
      && (v11 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl->Unk_48)(a4, ebx0)) != 0
      && *(_DWORD *)v13
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v13 + 0x18))(*(_DWORD *)v13) != 1
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v13 + 0x18))(*(_DWORD *)v13) != 4 )
    {
      MagicCaster_InitializeCasting___(v11);
      if ( v14 )
        v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x124))(v14, a2);
      else
        v12 = 0;
      if ( OblivionDynamicCast(
             a4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0) )
      {
        if ( EffectItemList_HasOnTarget(*(_DWORD *)v13 + 0xC) )
          return Cmd_Cast_::CastOnTarget();
        else
          return Cmd_Cast_::CheckOnTouch((int)a1, (int)arg4, (int)a4, (int)a6);
      }
      else
      {
        return Cmd_Cast_::CastNonActor(v11, v12, a4, (int)a1, (int)arg4, (int)a4, (int)a6, (TESObjectREFR *)a7);
      }
    }
    else
    {
      return Cmd_Cast_::Done();
    }
  }
  return result;
}
