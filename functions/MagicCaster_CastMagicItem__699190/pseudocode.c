char __thiscall MagicCaster_CastMagicItem(_DWORD *this, void *a2, int a3, int a4)
{
  int v6; // eax

  if ( EffectItemList_HasIgnored((int)a2 + 0xC) ) /*0x69919e*/
  {
    *(this + 2) = 5; /*0x6991a8*/
    return 0; /*0x6991b0*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x18))(a2) - 1; /*0x6991bf*/
    if ( v6 ) /*0x6991c2*/
    {
      if ( v6 == 3 ) /*0x6991cb*/
      {
        return MagicCaster_CastMagicItem_::CastAbility(a2, (void (__thiscall ***)(_DWORD, void *))this, (int)a2, a3, a4); /*0x6991cb*/
      }
      else if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x30))(this) ) /*0x6991d4*/
      {
        *(this + 2) = 6; /*0x6991db*/
        return 0; /*0x6991e3*/
      }
      else
      {
        return MagicCaster_CastMagicItem_::SetCastingItem((int)a2 + 0xC, (int)this, (int)a2, a3, a4); /*0x6991d8*/
      }
    }
    else
    {
      return MagicCaster_CastMagicItem_::CastDisease(a2, this, (int)a2, a3, a4); /*0x6991c2*/
    }
  }
}
