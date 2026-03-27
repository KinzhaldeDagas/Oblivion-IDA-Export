_BYTE *sub_70E870()
{
  _BYTE *v0; // eax

  v0 = (_BYTE *)FormHeapAlloc(0x70u);
  if ( v0 )
    return sub_70E340(v0);
  else
    return 0;
}
