void __cdecl NiBinaryStream_DoByteSwap(char *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ebx
  int v6; // edi
  char v7; // al
  char v8; // al
  char v9; // al
  unsigned int v10; // [esp+8h] [ebp+4h]

  v10 = 0;
  while ( v10 < a2 )
  {
    v5 = 0;
    if ( a4 )
    {
      while ( 2 )
      {
        v6 = *(_DWORD *)(a3 + 4 * v5);
        switch ( v6 )
        {
          case 1:
            if ( a4 != 1 )
              goto NiBinaryStream_DoByteSwap___def_748295;
            return;
          case 2:
            v7 = *a1;
            *a1 = a1[1];
            a1[1] = v7;
            goto NiBinaryStream_DoByteSwap___def_748295;
          case 4:
            v8 = *a1;
            *a1 = a1[3];
            a1[3] = v8;
            v9 = a1[1];
            a1[1] = a1[2];
            a1[2] = v9;
            goto NiBinaryStream_DoByteSwap___def_748295;
          case 8:
            NiBinaryStream_SwapByteHelper(a1, 1);
            goto NiBinaryStream_DoByteSwap___def_748295;
          default:
NiBinaryStream_DoByteSwap___def_748295:
            v10 += v6;
            ++v5;
            a1 += v6;
            if ( v5 >= a4 )
              break;
            continue;
        }
        break;
      }
    }
  }
}
