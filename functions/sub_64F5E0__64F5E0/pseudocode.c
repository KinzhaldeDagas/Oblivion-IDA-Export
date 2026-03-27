char __thiscall sub_64F5E0(HighProcess *this, _DWORD *a2)
{
  _DWORD *AnimData; // eax
  _DWORD *v5; // [esp-8h] [ebp-10h]

  if ( a2 && this->equippedWeaponData )
  {
    AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
    v5 = (_DWORD *)a2[1];
    if ( a2 == AnimData )
      dword_B3BA98 = NiObjectNET_LookupObjectByName(v5, "ArrowBone");
    else
      this->unk110 = NiObjectNET_LookupObjectByName(v5, "ArrowBone");
    return 1;
  }
  else
  {
    this->unk110 = 0;
    return 1;
  }
}
