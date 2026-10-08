int __thiscall sub_703EC0(unsigned __int16 *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int result; // eax
  unsigned int v5; // ebx
  int v6; // ebx
  int v7; // esi
  int v8; // ebx
  int *v9; // esi
  int v10; // ebp
  unsigned int v11; // ebx
  int v12; // ebx
  int v13; // esi
  int v14; // ebx
  int *v15; // esi
  int v16; // ebp
  unsigned int i; // [esp+10h] [ebp-8h]
  unsigned int j; // [esp+10h] [ebp-8h]
  unsigned int v19; // [esp+14h] [ebp-4h]
  unsigned int v20; // [esp+14h] [ebp-4h]

  v2 = a2; /*0x703ec6*/
  sub_6D7DF0(this, a2); /*0x703ece*/
  result = sub_7124D0(a2); /*0x703ed5*/
  *(this + 0xC) &= 0xF00Fu; /*0x703eda*/
  v5 = 0; /*0x703ee0*/
  v19 = result; /*0x703ee4*/
  for ( i = 0; i < v19; ++i ) /*0x703eec*/
  {
    result = sub_7124D0(v2); /*0x703ef4*/
    if ( result ) /*0x703efb*/
    {
      v6 = *((_DWORD *)this + 8) + 4 * v5; /*0x703f02*/
      result = sub_7124A0(v2); /*0x703f05*/
      v7 = *(_DWORD *)v6; /*0x703f0a*/
      v8 = *(_DWORD *)(*(_DWORD *)v6 + 8); /*0x703f0c*/
      v9 = (int *)(v7 + 8); /*0x703f0f*/
      v10 = result; /*0x703f12*/
      if ( v8 != result ) /*0x703f16*/
      {
        if ( v8 ) /*0x703f1a*/
        {
          result = InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x703f20*/
          if ( !result ) /*0x703f28*/
            result = (**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x703f36*/
        }
        *v9 = v10; /*0x703f3a*/
        if ( v10 ) /*0x703f3c*/
          result = InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x703f42*/
      }
      v2 = a2; /*0x703f4d*/
      if ( i >= 6 ) /*0x703f51*/
      {
        result = *(this + 0xC) & 0xF00F; /*0x703f68*/
        *(this + 0xC) = result | (0x10 * ((unsigned __int8)(*(this + 0xC) >> 4) + 1)); /*0x703f6f*/
      }
    }
    v5 = i + 1; /*0x703f77*/
  }
  if ( v2[0x36] >= 0x5000011u ) /*0x703f92*/
  {
    result = sub_7124D0(v2); /*0x703f9a*/
    v11 = 0; /*0x703f9f*/
    v20 = result; /*0x703fa3*/
    for ( j = 0; j < v20; ++j ) /*0x703fab*/
    {
      result = sub_7124D0(v2); /*0x703fb2*/
      if ( result ) /*0x703fb9*/
      {
        v12 = *(_DWORD *)(*((_DWORD *)this + 0xB) + 4) + 4 * v11; /*0x703fc3*/
        result = sub_7124A0(v2); /*0x703fc6*/
        v13 = *(_DWORD *)v12; /*0x703fcb*/
        v14 = *(_DWORD *)(*(_DWORD *)v12 + 8); /*0x703fcd*/
        v15 = (int *)(v13 + 8); /*0x703fd0*/
        v16 = result; /*0x703fd3*/
        if ( v14 != result ) /*0x703fd7*/
        {
          if ( v14 ) /*0x703fdb*/
          {
            result = InterlockedDecrement((volatile LONG *)(v14 + 4)); /*0x703fe1*/
            if ( !result ) /*0x703fe9*/
              result = (**(int (__thiscall ***)(int, int))v14)(v14, 1); /*0x703ff7*/
          }
          *v15 = v16; /*0x703ffb*/
          if ( v16 ) /*0x703ffd*/
            result = InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x704003*/
        }
        v2 = a2; /*0x704009*/
      }
      v11 = j + 1; /*0x704011*/
    }
  }
  return result; /*0x70401e*/
}
