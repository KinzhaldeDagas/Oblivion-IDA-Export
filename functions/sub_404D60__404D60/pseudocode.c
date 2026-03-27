int __cdecl sub_404D60(DWORD dwMilliseconds)
{
  volatile LONG *v1; // esi
  volatile LONG *v2; // esi

  if ( dword_B3F940 )
  {
    v1 = (volatile LONG *)(dword_B3F940 + 0x190);
    if ( WaitForSingleObject(*(HANDLE *)(dword_B3F940 + 0x198), dwMilliseconds) == 0x102
      || InterlockedDecrement(v1) == 1 )
    {
      byte_B3F944 = 1;
      v2 = (volatile LONG *)(dword_B3F940 + 0x190);
      if ( WaitForSingleObject(*(HANDLE *)(dword_B3F940 + 0x198), 0xFFFFFFFF) != 0x102 )
        InterlockedDecrement(v2);
    }
  }
  return 0;
}
