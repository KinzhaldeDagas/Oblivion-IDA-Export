int __thiscall sub_6DFDE0(char *this, signed int a2)
{
  _DWORD *v2; // ebx
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  char *v5; // ebp
  int result; // eax
  int v7; // esi
  int v8; // edi
  int v9; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2;
  sub_6EBA80((NiRenderer *)this, a2);
  v9 = v2[0x87];
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 4);
  a2 = 2;
  v4(v9, this + 0xC, 2, &a2, 1);
  *((_DWORD *)this + 4) = sub_712A90(v2);
  sub_713620(v2, (int *)this + 5);
  sub_6CB990(this + 0x18, (signed int)v2);
  v5 = this + 0x38;
  a2 = 3;
  do
  {
    result = sub_712A90(v2);
    v7 = *(_DWORD *)v5;
    v8 = result;
    if ( *(_DWORD *)v5 != result )
    {
      if ( v7 )
      {
        result = InterlockedDecrement((volatile LONG *)(v7 + 4));
        if ( !result )
          result = (**(int (__thiscall ***)(int, int))v7)(v7, 1);
      }
      *(_DWORD *)v5 = v8;
      if ( v8 )
        result = InterlockedIncrement((volatile LONG *)(v8 + 4));
    }
    v5 += 4;
    --a2;
  }
  while ( a2 );
  return result;
}
