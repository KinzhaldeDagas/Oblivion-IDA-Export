char __thiscall MagicCaster_CastMagicItem(_DWORD *this, int a2, int a3, int a4)
{
  int v6; // eax

  if ( EffectItemList_HasIgnored(a2 + 0xC) )
  {
    *(this + 2) = 5;
    return 0;
  }
  else
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) - 1;
    if ( v6 )
    {
      if ( v6 == 3 )
      {
        return MagicCaster_CastMagicItem_::CastAbility(a2, a3, a4);
      }
      else if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x30))(this) )
      {
        *(this + 2) = 6;
        return 0;
      }
      else
      {
        return MagicCaster_CastMagicItem_::SetCastingItem(a2 + 0xC, (int)this, a2, a3, a4);
      }
    }
    else
    {
      return MagicCaster_CastMagicItem_::CastDisease(a2, a3, a4);
    }
  }
}
