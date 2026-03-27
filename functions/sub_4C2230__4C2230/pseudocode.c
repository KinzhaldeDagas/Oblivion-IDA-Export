char __userpurge sub_4C2230@<al>(int a1@<ebx>, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  char result; // al
  _WORD *v5; // eax
  _WORD *v6; // eax
  int v7; // esi
  const void **v8; // edi
  int v9; // eax
  int v10; // eax
  size_t v11; // [esp-10h] [ebp-14h]

  result = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        HIDWORD(v11) = a1;
        v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x30, 0x25);
        v5[2] = 0x30;
        v6 = sub_4C1750(v5);
        *a4 = v6;
        if ( a3 <= 0x10 )
        {
          if ( v6 )
            (**(void (__thiscall ***)(_WORD *, int))v6)(v6, 1);
          *a4 = 0;
          return 0;
        }
        else
        {
          v7 = a3 - 0x10;
          *((_DWORD *)v6 + 4) = *a2;
          *((_DWORD *)v6 + 5) = a2[1];
          *((_DWORD *)v6 + 6) = a2[2];
          *((_DWORD *)v6 + 7) = a2[3];
          v8 = (const void **)(v6 + 0x10);
          v9 = *((_DWORD *)v6 + 0xA) & 0x3FFFFFFF;
          if ( v9 < v7 )
          {
            v10 = 2 * v9;
            if ( v7 >= v10 )
              v10 = a3 - 0x10;
            sub_8A6E40(v8, v10, 1);
          }
          LODWORD(v11) = a3 - 0x10;
          v8[1] = (const void *)v7;
          memcpy((void *)*v8, a2 + 4, v11);
          return 1;
        }
      }
    }
  }
  return result;
}
