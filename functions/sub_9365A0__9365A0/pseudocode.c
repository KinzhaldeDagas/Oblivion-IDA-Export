void __stdcall sub_9365A0(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // ebp
  int v4; // esi
  unsigned __int8 v5; // al
  int v6; // [esp+4h] [ebp-4h]

  v3 = a1; /*0x9365a2*/
  if ( *(_BYTE *)(a1 + 0x21) >= 3u ) /*0x9365ac*/
  {
    if ( *(_BYTE *)(a1 + 0x20) < 4u ) /*0x9365b6*/
    {
      if ( ((a2 >> 4) & 1) != 0 ) /*0x9365ca*/
        v6 = 0; /*0x9365cc*/
      else
        v6 = 2 - (((a2 >> 4) & 2) != 0); /*0x9365df*/
      if ( ((a3 >> 4) & 1) != 0 ) /*0x9365ec*/
        a3 = 0; /*0x9365ee*/
      else
        a3 = 2 - (((a3 >> 4) & 2) != 0); /*0x936601*/
      v4 = 0; /*0x936608*/
      a1 = 0; /*0x93660c*/
      a2 = 0; /*0x936610*/
      do /*0x936675*/
      {
        v5 = *(_BYTE *)(v3 + 4 * v4); /*0x936618*/
        if ( v5 > 2u ) /*0x93661e*/
        {
          if ( v5 > 6u ) /*0x93663a*/
          {
            sub_936540(v5, &a1); /*0x93665b*/
            sub_936540(*(unsigned __int8 *)(v3 + 4 * v4 + 1), &a2); /*0x936669*/
          }
          else
          {
            sub_9364B0(*(unsigned __int8 *)(v3 + 4 * v4 + 1), &a1, v6); /*0x93664a*/
          }
        }
        else
        {
          sub_9364B0(*(unsigned __int8 *)(v3 + 4 * v4 + 1), &a2, a3); /*0x93662e*/
        }
        ++v4; /*0x936672*/
      }
      while ( v4 < *(unsigned __int8 *)(v3 + 0x21) ); /*0x936675*/
      *(_BYTE *)(v3 + 0x22) = (int)(a1 & (unsigned int)loc_555555) <= 0 && (int)((unsigned int)loc_555555 & a2) <= 0; /*0x9366a3*/
    }
    else
    {
      *(_BYTE *)(a1 + 0x22) = 1; /*0x9365b8*/
    }
  }
}
