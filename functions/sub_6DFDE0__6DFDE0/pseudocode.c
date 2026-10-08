int __thiscall sub_6DFDE0(char *this, signed int a2)
{
  _DWORD *v2; // ebx
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  char *v5; // ebp
  int result; // eax
  int v7; // esi
  int v8; // edi
  int v9; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2; /*0x6dfde1*/
  sub_6EBA80((NiRenderer *)this, a2); /*0x6dfdeb*/
  v9 = v2[0x87]; /*0x6dfe03*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 4); /*0x6dfe04*/
  a2 = 2; /*0x6dfe07*/
  v4(v9, this + 0xC, 2, &a2, 1); /*0x6dfe0f*/
  *((_DWORD *)this + 4) = sub_712A90(v2); /*0x6dfe21*/
  sub_713620(v2, (int)(this + 0x14)); /*0x6dfe24*/
  sub_6CB990(this + 0x18, (signed int)v2); /*0x6dfe2d*/
  v5 = this + 0x38; /*0x6dfe32*/
  a2 = 3; /*0x6dfe35*/
  do /*0x6dfe89*/
  {
    result = sub_712A90(v2); /*0x6dfe42*/
    v7 = *(_DWORD *)v5; /*0x6dfe47*/
    v8 = result; /*0x6dfe4a*/
    if ( *(_DWORD *)v5 != result ) /*0x6dfe4e*/
    {
      if ( v7 ) /*0x6dfe52*/
      {
        result = InterlockedDecrement((volatile LONG *)(v7 + 4)); /*0x6dfe58*/
        if ( !result ) /*0x6dfe60*/
          result = (**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x6dfe6e*/
      }
      *(_DWORD *)v5 = v8; /*0x6dfe72*/
      if ( v8 ) /*0x6dfe75*/
        result = InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x6dfe7b*/
    }
    v5 += 4; /*0x6dfe81*/
    --a2; /*0x6dfe84*/
  }
  while ( a2 ); /*0x6dfe89*/
  return result; /*0x6dfe8b*/
}
