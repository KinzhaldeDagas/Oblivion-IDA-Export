void __cdecl NiBinaryStream_DoByteSwap(char *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ebx
  int v6; // edi
  char v7; // al
  char v8; // al
  char v9; // al
  unsigned int v10; // [esp+8h] [ebp+4h]

  v10 = 0; /*0x74826a*/
  while ( v10 < a2 ) /*0x748272*/
  {
    v5 = 0; /*0x748280*/
    if ( a4 ) /*0x748284*/
    {
      while ( 2 ) /*0x74828a*/
      {
        v6 = *(_DWORD *)(a3 + 4 * v5); /*0x74828a*/
        switch ( v6 ) /*0x748295*/
        {
          case 1: /*0x748295*/
            if ( a4 != 1 ) /*0x7482d0*/
              goto NiBinaryStream_DoByteSwap___def_748295; /*0x7482d0*/
            return; /*0x7482d0*/
          case 2: /*0x748295*/
            v7 = *a1; /*0x74829f*/
            *a1 = a1[1]; /*0x7482a1*/
            a1[1] = v7; /*0x7482a3*/
            goto NiBinaryStream_DoByteSwap___def_748295; /*0x7482a6*/
          case 4: /*0x748295*/
            v8 = *a1; /*0x7482a8*/
            *a1 = a1[3]; /*0x7482ad*/
            a1[3] = v8; /*0x7482af*/
            v9 = a1[1]; /*0x7482b5*/
            a1[1] = a1[2]; /*0x7482b8*/
            a1[2] = v9; /*0x7482bb*/
            goto NiBinaryStream_DoByteSwap___def_748295; /*0x7482be*/
          case 8: /*0x748295*/
            NiBinaryStream_SwapByteHelper(a1, 1); /*0x7482c3*/
            goto NiBinaryStream_DoByteSwap___def_748295; /*0x7482cb*/
          default:
NiBinaryStream_DoByteSwap___def_748295:
            v10 += v6; /*0x7482d2*/
            ++v5; /*0x7482d6*/
            a1 += v6; /*0x7482d9*/
            if ( v5 >= a4 ) /*0x7482dd*/
              break; /*0x7482dd*/
            continue; /*0x7482dd*/
        }
        break;
      }
    }
  }
}
