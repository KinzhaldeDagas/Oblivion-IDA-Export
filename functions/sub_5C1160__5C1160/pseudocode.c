bool sub_5C1160()
{
  int v1; // esi
  int i; // eax

  if ( dword_B3B430[0] < 0 )
    return 0;
  if ( dword_B3B434 >= 0 && dword_B3B438 >= 0 )
    return 1;
  v1 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( *(int *)(4 * i + 0xB3B430) >= 0 )
    {
      if ( i )
        v1 += *(_DWORD *)(4 * i + 0xB3B424);
      else
        v1 += Seed - dword_B3B424[0];
    }
  }
  return v1 >= Double_To_SInt32(flt_B38BB0 * dbl_A2FC70);
}
