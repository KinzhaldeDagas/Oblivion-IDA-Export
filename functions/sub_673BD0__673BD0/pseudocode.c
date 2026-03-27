int __thiscall sub_673BD0(_DWORD *this, int a2)
{
  switch ( a2 )
  {
    case 0:
      this += 0x1A;
      goto LABEL_5;
    case 1:
      goto LABEL_5;
    case 2:
      this += 3;
      goto LABEL_5;
    case 3:
      this += 6;
LABEL_5:
      if ( !this )
        goto LABEL_7;
      sub_67B430(this);
      return def_673BD9(a2);
    default:
LABEL_7:
      JUMPOUT(0x673BF6);
  }
}
