char __stdcall MagicCaster_IsMagicItemUseable(int a1, float *a2, _DWORD *a3, int a4)
{
  if ( a2 )
    *a2 = 1.0;
  if ( a3 )
    *a3 = 0;
  return 1;
}
