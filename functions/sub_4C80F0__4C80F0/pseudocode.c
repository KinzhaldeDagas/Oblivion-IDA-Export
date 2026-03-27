void __userpurge sub_4C80F0(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectCELL ***a5,
        signed int *a6)
{
  signed int i; // ebx
  signed int v8; // esi
  int j; // edi
  TESObjectLAND *v10[8]; // [esp+8h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(a1 + 0x1C) & 8) != 0 )
  {
    if ( !a5 )
    {
      a5 = (TESObjectCELL ***)v10;
      sub_4C7A30(a1, a2, a3, a4, v10, 0, 0);
    }
    for ( i = 0; i < 4; ++i )
    {
      v8 = 0;
      for ( j = 0; j < 0xD8C; j += 0xC )
      {
        if ( ((unsigned int)(v8 - 0x11) > 0xFF || !(v8 % 0x11) || !((v8 + 1) % 0x11))
          && (!a6
           || sub_4C1080(
                (TESObjectCELL **)a1,
                a6,
                (float *)(j + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4) + 4 * i)))) )
        {
          sub_4C3C90(
            (TESObjectCELL **)a1,
            i,
            v8,
            (float *)(j + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + 4 * i)),
            a5);
        }
        ++v8;
      }
    }
    if ( a5[2] )
    {
      if ( a5[1] )
      {
        if ( *a5 )
        {
          if ( a5[7] )
          {
            if ( a5[6] )
            {
              if ( a5[5] )
              {
                if ( a5[4] )
                {
                  if ( a5[3] )
                    *(_DWORD *)(a1 + 0x1C) |= 0x10u;
                }
              }
            }
          }
        }
      }
    }
  }
}
