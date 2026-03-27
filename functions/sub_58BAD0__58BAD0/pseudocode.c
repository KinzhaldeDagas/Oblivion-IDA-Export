char __cdecl sub_58BAD0(_DWORD *a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  int v3; // eax
  int v5; // esi
  char *m_data; // esi
  int i; // eax
  BSStringT Format; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  Format.m_data = 0;
  Format.m_dataLen = 0;
  Format.m_bufLen = 0;
  v9 = 0;
  v1 = 0;
  while ( 1 )
  {
    v2 = *(_DWORD **)(4 * v1 + 0xB3AF10);
    if ( !v2 )
    {
LABEL_5:
      v3 = dword_B3B0AC;
      *(_DWORD *)(4 * v3 + 0xB3AF10) = a1;
      dword_B3B0AC = v3 + 1;
      FormHeapFree(0);
      return 0;
    }
    if ( v2 == a1 )
      break;
    if ( ++v1 >= 0x64 )
      goto LABEL_5;
  }
  sub_40FEC0("\n*****\n");
  sub_40FEC0("***** ERROR: Loop Detected\n");
  sub_40FEC0("***** Loop Involves Tiles:");
  v5 = 4 * v1 + 0xB3AF10;
  do
  {
    if ( !*(_DWORD *)v5 )
      break;
    BSStringT_Static_Format(&Format, "  %s", *(const char **)(**(_DWORD **)v5 + 8));
    sub_40FEC0(Format.m_data);
    v5 += 4;
  }
  while ( v5 < (int)&byte_B3B0A0 );
  BSStringT_Static_Format(
    &Format,
    "\n***** [ All references targeting %s have been nullified. ]\n",
    *(const char **)(*a1 + 8));
  m_data = Format.m_data;
  sub_40FEC0(Format.m_data);
  sub_40FEC0("*****\n\n");
  for ( i = a1[4]; i; i = *(_DWORD *)(i + 4) )
    *(_DWORD *)(i + 0xC) = 0;
  FormHeapFree((unsigned int)m_data);
  return 1;
}
