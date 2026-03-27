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
  switch ( HIBYTE(a2) )
  {
    case 0x10:
      if ( sub_700B60((char *)&a2, 3) )
      {
        sub_70F010(a1, &unk_B25E00);
        return a1;
      }
      goto LABEL_9;
    case 0x18:
LABEL_9:
      sub_70F010(a1, &unk_B25E48);
      return a1;
    case 0x20:
      sub_70F010(a1, &unk_B25E00);
      break;
    default:
      sub_70F010(a1, &a2);
      break;
  }
  return a1;
}
