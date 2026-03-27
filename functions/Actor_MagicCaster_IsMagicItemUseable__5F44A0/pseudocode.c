int __stdcall Actor_MagicCaster_IsMagicItemUseable(int a1, int a2, _DWORD *a3, int a4)
{
  if ( !a3 )
    return Actor_MagicCaster_IsMagicItemUseable_::GetMagicItem(a1, a2, 0, a4);
  *a3 = 0;
  return Actor_MagicCaster_IsMagicItemUseable_::GetMagicItem(a1, a2, a3, a4);
}
