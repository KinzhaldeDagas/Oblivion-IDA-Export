int __thiscall sub_918080(_DWORD **this, int a2, int a3)
{
  int v3; // esi
  int v5; // eax

  v3 = 0; /*0x918088*/
  if ( a3 <= 0 ) /*0x91808e*/
    return a3; /*0x9180af*/
  while ( 1 ) /*0x9180a2*/
  {
    v5 = (*(int (__thiscall **)(_DWORD, int, int))(**(this + 2) + 0x14))(*(this + 2), v3 + a2, a3 - v3); /*0x9180a2*/
    v3 += v5; /*0x9180a5*/
    if ( !v5 ) /*0x9180a9*/
      break; /*0x9180a9*/
    if ( v3 >= a3 ) /*0x9180ad*/
      return a3; /*0x9180ad*/
  }
  return v3; /*0x9180b1*/
}
