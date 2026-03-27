int __usercall Actor_MagicCaster_PlayCastingAnimation_::GetAnimGroup@<eax>(
        int a1@<edi>,
        TESObjectREFR *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax
  int v12; // ebx
  int v13; // eax

  if ( !a7 || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1) )
    return Actor_MagicCaster_PlayCastingAnimation_::Done(a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1);
  if ( EffectItemList_HasOnTarget(v11 + 0xC) )
  {
    v12 = 0x24;
  }
  else
  {
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1);
    v12 = (EffectItemList_HasTouchEffect((_DWORD *)(v13 + 0xC)) != 0) + 0x22;
  }
  if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 - 4) + 0xF8))(*(_DWORD *)(a1 - 4), 1)
    || (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 - 4) + 0xF0))(*(_DWORD *)(a1 - 4), 1)
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 - 4) + 0x138))(*(_DWORD *)(a1 - 4))
    && Actor_IsWeaponOut(a2) )
  {
    return Actor_MagicCaster_PlayCastingAnimation_::LoadCastingAnim(v12 + 3, a2);
  }
  else
  {
    return Actor_MagicCaster_PlayCastingAnimation_::LoadCastingAnim(v12, a2);
  }
}
