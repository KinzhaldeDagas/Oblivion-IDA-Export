void *__stdcall sub_7362E0(
        void *a1,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  switch ( HIBYTE(a2) ) /*0x7362ea*/
  {
    case 0x10: /*0x7362ea*/
      if ( sub_700B60((char *)&a2, 3) ) /*0x736320*/
      {
        sub_70F010(a1, &unk_B25E00); /*0x736334*/
        return a1; /*0x73633c*/
      }
      goto LABEL_9; /*0x736327*/
    case 0x18: /*0x7362ea*/
LABEL_9:
      sub_70F010(a1, &unk_B25E48); /*0x73633f*/
      return a1; /*0x73634f*/
    case 0x20: /*0x7362ea*/
      sub_70F010(a1, &unk_B25E00); /*0x73630f*/
      break;
    default:
      sub_70F010(a1, &a2); /*0x7362ff*/
      break;
  }
  return a1; /*0x736306*/
}
