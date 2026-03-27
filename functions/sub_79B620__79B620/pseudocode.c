// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn sub_79B620(_DWORD *a1, int a2, int a3)
{
  int v3; // edi
  _DWORD *i; // esi
  int v6; // [esp-4h] [ebp-28h] BYREF
  _DWORD *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = (int)a1;
  v7 = a1;
  v9 = 0;
  while ( a2 )
  {
    sub_79AC40(v3, a3);
    --a2;
    v3 += 0x2C;
    a1 = (_DWORD *)v3;
  }
  for ( i = v7; i != a1; i += 0xB )
    sub_79AC10(i);
  ThrowException__(0, 0);
}
