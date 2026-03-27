int __cdecl sub_4D9800(int a1)
{
  int v1; // esi
  int result; // eax

  v1 = a1;
  if ( a1 )
    InterlockedIncrement((volatile LONG *)(a1 + 4));
  result = sub_4B24F0((int)&off_B082F0, &a1);
  if ( v1 )
  {
    result = InterlockedDecrement((volatile LONG *)(v1 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))v1)(v1, 1);
  }
  return result;
}
