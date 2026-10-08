void __thiscall sub_4C80F0(int this, TESObjectCELL ***a2, signed int *a3)
{
  signed int i; // ebx
  signed int v8; // esi
  int j; // edi
  TESObjectLAND *v10[8]; // [esp+8h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(this + 0x1C) & 8) != 0 ) /*0x4c80fa*/
  {
    if ( !a2 ) /*0x4c8105*/
    {
      a2 = (TESObjectCELL ***)v10; /*0x4c8114*/
      sub_4C7A30(this, v10, 0, 0); /*0x4c8118*/
    }
    for ( i = 0; i < 4; ++i ) /*0x4c8120*/
    {
      v8 = 0; /*0x4c8122*/
      for ( j = 0; j < 0xD8C; j += 0xC ) /*0x4c8124*/
      {
        if ( ((unsigned int)(v8 - 0x11) > 0xFF || !(v8 % 0x11) || !((v8 + 1) % 0x11)) /*0x4c8185*/
          && (!a3
           || sub_4C1080(
                (TESObjectCELL **)this,
                a3,
                (float *)(j + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4) + 4 * i)))) )
        {
          sub_4C3C90( /*0x4c81a3*/
            (TESObjectCELL **)this,
            i,
            v8,
            (float *)(j + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 8) + 4 * i)),
            a2);
        }
        ++v8; /*0x4c81a8*/
      }
    }
    if ( a2[2] ) /*0x4c81cb*/
    {
      if ( a2[1] ) /*0x4c81d4*/
      {
        if ( *a2 ) /*0x4c81da*/
        {
          if ( a2[7] ) /*0x4c81df*/
          {
            if ( a2[6] ) /*0x4c81e5*/
            {
              if ( a2[5] ) /*0x4c81eb*/
              {
                if ( a2[4] ) /*0x4c81f1*/
                {
                  if ( a2[3] ) /*0x4c81f7*/
                    *(_DWORD *)(this + 0x1C) |= 0x10u; /*0x4c81fd*/
                }
              }
            }
          }
        }
      }
    }
  }
}
