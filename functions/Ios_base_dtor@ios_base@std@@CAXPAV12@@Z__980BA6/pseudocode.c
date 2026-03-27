void __cdecl std::ios_base::_Ios_base_dtor(int ***a1)
{
  int *v1; // esi

  if ( !a1[1] || (--byte_BA9BB4[(_DWORD)a1[1]], byte_BA9BB4[(_DWORD)a1[1]] <= 0) )
  {
    std::ios_base::_Tidy(a1);
    v1 = (int *)a1[9];
    if ( v1 )
    {
      sub_6F6E10(v1);
      FormHeapFree((unsigned int)v1);
    }
  }
}
