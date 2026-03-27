BSStringT *__thiscall sub_4A4F70(_BYTE *this)
{
  BSStringT *v2; // eax

  v2 = (BSStringT *)FormHeapAlloc(0x10u);
  if ( v2 )
    return sub_4A4EA0(v2, this);
  else
    return 0;
}
