_DWORD *__cdecl sub_557C80(char *Src)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)FormHeapAlloc(0x24u);
  if ( v1 )
    return sub_557BB0(v1, Src);
  else
    return 0;
}
