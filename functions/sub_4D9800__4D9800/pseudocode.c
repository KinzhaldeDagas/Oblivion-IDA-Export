int __cdecl sub_4D9800(int a1)
{
  int v1; // esi
  int result; // eax

  v1 = a1; /*0x4d9821*/
  if ( a1 ) /*0x4d982b*/
    InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x4d9831*/
  result = sub_4B24F0((int)&off_B082F0, &a1); /*0x4d9849*/
  if ( v1 ) /*0x4d9858*/
  {
    result = InterlockedDecrement((volatile LONG *)(v1 + 4)); /*0x4d985e*/
    if ( !result ) /*0x4d9866*/
      return (**(int (__thiscall ***)(int, int))v1)(v1, 1); /*0x4d9870*/
  }
  return result; /*0x4d9872*/
}
