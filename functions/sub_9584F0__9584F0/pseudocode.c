void __cdecl sub_9584F0(unsigned int *a1, unsigned int a2, char **a3)
{
  unsigned int *v3; // esi

  v3 = a1; /*0x9584f6*/
  if ( (unsigned int)a1 < a2 ) /*0x9584fc*/
  {
    while ( 2 ) /*0x958509*/
    {
      sub_8B0E80(a3, *v3, *v3); /*0x958509*/
      switch ( *(_BYTE *)*v3 ) /*0x958522*/
      {
        case 'E': /*0x958522*/
        case 'S': /*0x958522*/
        case 'T': /*0x958522*/
        case 'l': /*0x958522*/
          v3 += 3; /*0x958529*/
          goto LABEL_7; /*0x95852c*/
        case 'L': /*0x958522*/
          sub_8B0E80(a3, v3[3], v3[3]); /*0x958535*/
          v3 += 4; /*0x95853a*/
          goto LABEL_7; /*0x95853d*/
        case 'M': /*0x958522*/
          v3 += 2; /*0x95853f*/
          goto LABEL_7; /*0x958542*/
        case 'P': /*0x958522*/
        case 'p': /*0x958522*/
          ++v3; /*0x958544*/
LABEL_7:
          if ( (unsigned int)v3 >= a2 ) /*0x958549*/
            return; /*0x958549*/
          continue; /*0x958549*/
        default:
          return;
      }
    }
  }
}
