bool sub_5C1160()
{
  int v1; // esi
  int i; // eax

  if ( *(int *)&byte_B3B418[0x18] < 0 ) /*0x5c1167*/
    return 0; /*0x5c11d2*/
  if ( *(int *)&byte_B3B418[0x1C] >= 0 && *(int *)&byte_B3B418[0x20] >= 0 ) /*0x5c1179*/
    return 1; /*0x5c117b*/
  v1 = 0; /*0x5c118b*/
  for ( i = 0; i < 3; ++i ) /*0x5c118e*/
  {
    if ( *(int *)(4 * i + 0xB3B430) >= 0 ) /*0x5c1198*/
    {
      if ( i ) /*0x5c119c*/
        v1 += *(_DWORD *)(4 * i + 0xB3B424); /*0x5c11a6*/
      else
        v1 += *(_DWORD *)&MEMORY[0xB33E90][0x10] - *(_DWORD *)&byte_B3B418[0xC]; /*0x5c11a2*/
    }
  }
  return v1 >= Double_To_SInt32(unk_B38BB0 * dbl_A2FC70); /*0x5c117d*/
}
