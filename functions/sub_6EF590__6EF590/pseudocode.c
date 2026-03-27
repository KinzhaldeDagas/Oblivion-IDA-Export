// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn sub_6EF590(int a1, int a2, int a3)
{
  int v3; // edi
  int i; // esi
  int v6; // [esp-4h] [ebp-28h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = a1;
  v7 = a1;
  v9 = 0;
  while ( a2 )
  {
    sub_557800(v3, a3);
    --a2;
    v3 += 0x40;
    a1 = v3;
  }
  for ( i = v7; i != a1; i += 0x40 )
    sub_556FC0(i);
  ThrowException__(0, 0);
}
