int __thiscall sub_4A9930(int *this, char *a2, int a3, int a4)
{
  if ( this == &unk_B35788 || a3 == a4 ) /*0x4a9942*/
    return _sprintf(a2, "%d", a3); /*0x4a9966*/
  else
    return _sprintf(a2, "%d(%d)", a3, a4); /*0x4a9950*/
}
