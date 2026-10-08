// TES4 authoritative: sorts collector contact hits by entry+0x1C when more than one hit is present.
void __thiscall hkpCdPointCollector_SortHitsByDistance(int *this)
{
  int v1; // eax
  int *flags; // [esp+0h] [ebp-4h]

  flags = this; /*0x8af890*/
  v1 = *(this + 5); /*0x8af891*/
  LOBYTE(flags) = 0; /*0x8af897*/
  if ( v1 > 1 ) /*0x8af89b*/
    hkpCdPointEntry30_QuickSortByDistance(*(this + 4), 0, v1 - 1, (int)flags); /*0x8af8a9*/
}
