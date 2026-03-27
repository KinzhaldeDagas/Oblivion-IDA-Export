void __usercall sub_664C40(
        int a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        double a7@<st3>)
{
  _DWORD *v8; // ecx
  _DWORD *AnimGroup; // edi
  unsigned __int16 v10; // ax
  _DWORD *v11; // edi
  NiAVObject *v12; // ecx
  int v13; // [esp+Ch] [ebp-8h]

  sub_578CF0(a2, a4, a5, a6, a7, 0);
  v8 = *(_DWORD **)(a1 + 0x5DC);
  if ( v8 )
  {
    if ( sub_472EA0(v8) )
    {
      v13 = a3;
      AnimGroup = (_DWORD *)(unsigned __int16)Actor_LoadAnimGroup_((TESObjectREFR *)a1, 0, 0, 0);
      if ( ActorAnimData_GetAnimGroupFromField8Value(*(_WORD **)(a1 + 0x5DC), 5) != (_WORD)AnimGroup || sub_578FA0() )
        ActorAnimData_PlayAnimGroup(*(_DWORD *)(a1 + 0x5DC), AnimGroup, 1, 0xFFFFFFFF);
      if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF0))(*(_DWORD *)(a1 + 0x58), 1) )
      {
        v10 = Actor_LoadAnimGroup_((TESObjectREFR *)a1, 0x21, 0, 0);
        v11 = (_DWORD *)v10;
        if ( sub_51AA00(v10) == 0x21
          && (ActorAnimData_GetAnimGroupFromField8Value(*(_WORD **)(a1 + 0x5DC), 2) != (_WORD)v11 || sub_578FA0()) )
        {
          ActorAnimData_PlayAnimGroup(*(_DWORD *)(a1 + 0x5DC), v11, 1, 0xFFFFFFFF);
        }
      }
      a3 = v13;
    }
    sub_476D10(*(AnimSequenceSingle **)(a1 + 0x5DC), a3, a4, a5, flt_B33E9C, a1, flt_B33E9C, flt_A30634);
    sub_474510(*(ActorAnimData **)(a1 + 0x5DC), (TESObjectREFR *)a1);
    if ( *(_DWORD *)(a1 + 0x5E0) )
    {
      (*(void (__stdcall **)(float))(**(_DWORD **)(a1 + 0x5E0) + 0x50))(flt_B33E9C);
      v12 = *(NiAVObject **)(*(_DWORD *)(a1 + 0x5E0) + 0x40);
      if ( v12 )
        NiAVObject_UpdateNiAVObject(v12, flt_B33E9C, 0);
    }
  }
}
