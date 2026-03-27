void __stdcall sub_9365A0(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // ebp
  int v4; // esi
  unsigned __int8 v5; // al
  int v6; // [esp+4h] [ebp-4h]

  v3 = a1;
  if ( *(_BYTE *)(a1 + 0x21) >= 3u )
  {
    if ( *(_BYTE *)(a1 + 0x20) < 4u )
    {
      if ( ((a2 >> 4) & 1) != 0 )
        v6 = 0;
      else
        v6 = 2 - (((a2 >> 4) & 2) != 0);
      if ( ((a3 >> 4) & 1) != 0 )
        a3 = 0;
      else
        a3 = 2 - (((a3 >> 4) & 2) != 0);
      v4 = 0;
      a1 = 0;
      a2 = 0;
      do
      {
        v5 = *(_BYTE *)(v3 + 4 * v4);
        if ( v5 > 2u )
        {
          if ( v5 > 6u )
          {
            sub_936540(v5, &a1);
            sub_936540(*(unsigned __int8 *)(v3 + 4 * v4 + 1), &a2);
          }
          else
          {
            sub_9364B0(*(unsigned __int8 *)(v3 + 4 * v4 + 1), &a1, v6);
          }
        }
        else
        {
          sub_9364B0(*(unsigned __int8 *)(v3 + 4 * v4 + 1), &a2, a3);
        }
        ++v4;
      }
      while ( v4 < *(unsigned __int8 *)(v3 + 0x21) );
      *(_BYTE *)(v3 + 0x22) = (int)(a1 & (unsigned int)sub_555555) <= 0 && (int)((unsigned int)sub_555555 & a2) <= 0;
    }
    else
    {
      *(_BYTE *)(a1 + 0x22) = 1;
    }
  }
}
