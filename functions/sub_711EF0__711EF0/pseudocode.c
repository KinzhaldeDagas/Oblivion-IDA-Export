_DWORD *sub_711EF0()
{
  _DWORD *v1; // eax

  if ( dword_B40334 )
    return (_DWORD *)dword_B40334();
  v1 = (_DWORD *)FormHeapAlloc(0x210u);
  if ( v1 )
    return sub_7478C0(v1);
  else
    return 0;
}
