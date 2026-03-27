void sub_4027A0()
{
  unsigned int i; // esi
  unsigned int v1; // edi

  for ( i = 0; i < 0x81; ++i )
  {
    v1 = g_HeapPoolsBySize[i];
    if ( v1 )
    {
      sub_402400((_RTL_CRITICAL_SECTION_0 *)g_HeapPoolsBySize[i]);
      FormHeapFree(v1);
    }
  }
}
