void __thiscall sub_6DF950(_WORD *this, int a2, _DWORD **a3)
{
  __int16 v4; // ax
  __int16 v5; // ax
  NiObject **v6; // edi
  char *v7; // ebp
  NiObject *v8; // ecx
  NiObject *v9; // eax
  NiObject *v10; // esi
  NiObject *v11; // ebx
  unsigned int v12; // [esp-4h] [ebp-14h]
  int v13; // [esp+18h] [ebp+8h]

  sub_733850(this, a2, a3); /*0x6df960*/
  v4 = *(this + 6); /*0x6df965*/
  *(_WORD *)(a2 + 0xC) = v4; /*0x6df969*/
  if ( (*(_BYTE *)(this + 6) & 1) != 0 ) /*0x6df971*/
    v5 = v4 | 1; /*0x6df973*/
  else
    v5 = v4 & 0xFFFE; /*0x6df978*/
  *(_WORD *)(a2 + 0xC) = v5; /*0x6df980*/
  v12 = *(_DWORD *)(a2 + 0x14); /*0x6df98a*/
  *(_WORD *)(a2 + 0xC) ^= (*((_BYTE *)this + 0xC) ^ (unsigned __int8)v5) & 6; /*0x6df98e*/
  *(_DWORD *)(a2 + 0x10) = *((_DWORD *)this + 4); /*0x6df995*/
  FormHeapFree(v12); /*0x6df998*/
  *(_DWORD *)(a2 + 0x14) = 0; /*0x6df9a8*/
  qmemcpy((void *)(a2 + 0x18), this + 0xC, 0x20u); /*0x6df9b2*/
  v6 = (NiObject **)(a2 + 0x38); /*0x6df9b4*/
  v7 = (char *)this - a2; /*0x6df9b7*/
  v13 = 3; /*0x6df9b9*/
  do /*0x6dfa0d*/
  {
    v8 = *(NiObject **)&v7[(_DWORD)v6]; /*0x6df9c1*/
    if ( v8 ) /*0x6df9c6*/
    {
      v9 = NiObject_CloneWithPointerMap(v8); /*0x6df9c8*/
      v10 = *v6; /*0x6df9cd*/
      v11 = v9; /*0x6df9cf*/
      if ( *v6 != v9 ) /*0x6df9d3*/
      {
        if ( v10 ) /*0x6df9d7*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v10->members) ) /*0x6df9dd*/
            v10->__vftable->super.Destructor((NiRefObject *)v10, 1); /*0x6df9f3*/
        }
        *v6 = v11; /*0x6df9f7*/
        if ( v11 ) /*0x6df9f9*/
          InterlockedIncrement((volatile LONG *)&v11->members); /*0x6df9ff*/
      }
    }
    ++v6; /*0x6dfa05*/
    --v13; /*0x6dfa08*/
  }
  while ( v13 ); /*0x6dfa0d*/
}
