signed int __stdcall sub_4035D0(int a1, _DWORD *a2)
{
  const void *v2; // edi

  v2 = (const void *)(a1 + 4);
  if ( !memcmp((const void *)(a1 + 4), &CLSID_GUID_XAxis, 0x10u) )
    *a2 |= 1u;
  if ( !memcmp(v2, &CLSID_GUID_YAxis, 0x10u) )
    *a2 |= 2u;
  if ( !memcmp(v2, &CLSID_GUID_ZAxis, 0x10u) )
    *a2 |= 4u;
  if ( !memcmp(v2, &CLSID_GUID_RxAxis, 0x10u) )
    *a2 |= 8u;
  if ( !memcmp(v2, &CLSID_GUID_RyAxis, 0x10u) )
    *a2 |= 0x10u;
  if ( !memcmp(v2, &CLSID_GUID_RzAxis, 0x10u) )
    *a2 |= 0x20u;
  if ( (*(_BYTE *)(a1 + 0x18) & 0xC) != 0 )
    a2[1] |= 1 << BYTE1(*(_DWORD *)(a1 + 0x18));
  return 1;
}
