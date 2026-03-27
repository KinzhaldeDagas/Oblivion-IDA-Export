// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn sub_6F2580(unsigned int *a1, int a2, _DWORD *a3)
{
  unsigned int *v3; // edi
  unsigned int *i; // esi
  int v6; // [esp-4h] [ebp-28h] BYREF
  unsigned int *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = a1;
  v7 = a1;
  v9 = 0;
  while ( a2 )
  {
    sub_6F16F0(v3, a3);
    --a2;
    v3 += 0xB;
    a1 = v3;
  }
  for ( i = v7; i != a1; i += 0xB )
    sub_556F40(i);
  ThrowException__(0, 0);
}
