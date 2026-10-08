char __stdcall sub_4C2230(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  char result; // al
  _WORD *v5; // eax
  _WORD *v6; // eax
  signed int v7; // esi
  const void **v8; // edi
  int v9; // eax
  int v10; // eax

  result = 0; /*0x4c2235*/
  if ( a1 ) /*0x4c2239*/
  {
    if ( a2 ) /*0x4c2246*/
    {
      if ( a3 ) /*0x4c2253*/
      {
        v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x25); /*0x4c2269*/
        v5[2] = 0x30; /*0x4c226d*/
        v6 = sub_4C1750(v5); /*0x4c2273*/
        *a3 = v6; /*0x4c227b*/
        if ( a2 <= 0x10 ) /*0x4c227e*/
        {
          if ( v6 ) /*0x4c22dd*/
            (**(void (__thiscall ***)(_WORD *, int))v6)(v6, 1); /*0x4c22e7*/
          *a3 = 0; /*0x4c22e9*/
          return 0; /*0x4c22f0*/
        }
        else
        {
          v7 = a2 - 0x10; /*0x4c2280*/
          *((_DWORD *)v6 + 4) = *a1; /*0x4c2285*/
          *((_DWORD *)v6 + 5) = a1[1]; /*0x4c228b*/
          *((_DWORD *)v6 + 6) = a1[2]; /*0x4c2291*/
          *((_DWORD *)v6 + 7) = a1[3]; /*0x4c2297*/
          v8 = (const void **)(v6 + 0x10); /*0x4c229f*/
          v9 = *((_DWORD *)v6 + 0xA) & 0x3FFFFFFF; /*0x4c22a5*/
          if ( v9 < v7 ) /*0x4c22ac*/
          {
            v10 = 2 * v9; /*0x4c22ae*/
            if ( v7 >= v10 ) /*0x4c22b2*/
              v10 = a2 - 0x10; /*0x4c22b4*/
            sub_8A6E40(v8, v10, 1); /*0x4c22ba*/
          }
          v8[1] = (const void *)v7; /*0x4c22c3*/
          memcpy((void *)*v8, a1 + 4, v7); /*0x4c22ca*/
          return 1; /*0x4c22d5*/
        }
      }
    }
  }
  return result; /*0x4c22d7*/
}
