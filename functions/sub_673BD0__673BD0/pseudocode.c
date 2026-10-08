void __thiscall sub_673BD0(_DWORD *this, int a2)
{
  switch ( a2 ) /*0x673bd9*/
  {
    case 0: /*0x673bd9*/
      this += 0x1A; /*0x673be0*/
      goto LABEL_5; /*0x673be3*/
    case 1: /*0x673bd9*/
      goto LABEL_5;
    case 2: /*0x673bd9*/
      this += 3; /*0x673be5*/
      goto LABEL_5; /*0x673be8*/
    case 3: /*0x673bd9*/
      this += 6; /*0x673bea*/
LABEL_5:
      if ( !this ) /*0x673bef*/
        goto LABEL_7; /*0x673bef*/
      sub_67B430(this); /*0x673bf1*/
      def_673BD9(a2); /*0x673bf2*/
      return;
    default:
LABEL_7:
      JUMPOUT(0x673BF6); /*0x673bf6*/
  }
}
