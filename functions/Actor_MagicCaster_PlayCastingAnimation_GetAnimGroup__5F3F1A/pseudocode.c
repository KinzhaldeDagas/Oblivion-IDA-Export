void __usercall Actor_MagicCaster_PlayCastingAnimation_::GetAnimGroup(
        int a1@<edi>,
        TESObjectREFR *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  char v10; // al

  if ( a7 && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1) ) /*0x5f3f2c*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1); /*0x5f3f3d*/
    if ( EffectItemList_HasOnTarget(v7 + 0xC) ) /*0x5f3f44*/
    {
      v8 = 0x24; /*0x5f3f4d*/
    }
    else
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1); /*0x5f3f5b*/
      EffectItemList_HasTouchEffect((_DWORD *)(v9 + 0xC)); /*0x5f3f62*/
      v8 = (v10 != 0) + 0x22; /*0x5f3f70*/
    }
    if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 - 4) + 0xF8))(*(_DWORD *)(a1 - 4), 1) /*0x5f3fab*/
      || (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 - 4) + 0xF0))(*(_DWORD *)(a1 - 4), 1)
      || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 - 4) + 0x138))(*(_DWORD *)(a1 - 4))
      && Actor_IsWeaponOut(a2) )
    {
      Actor_MagicCaster_PlayCastingAnimation_::LoadCastingAnim(v8 + 3, a2); /*0x5f3fb5*/
    }
    else
    {
      Actor_MagicCaster_PlayCastingAnimation_::LoadCastingAnim(v8, a2); /*0x5f3fb2*/
    }
  }
  else
  {
    Actor_MagicCaster_PlayCastingAnimation_::Done(); /*0x5f3f1f*/
  }
}
