LONG __thiscall sub_713E50(_DWORD *this, int a2)
{
  int v3; // ebx
  unsigned int v4; // edi
  int **v5; // esi
  LONG result; // eax

  v3 = a2; /*0x713e75*/
  if ( a2 ) /*0x713e7f*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x713e85*/
  v4 = *(this + 0x84); /*0x713e8b*/
  v5 = (int **)(this + 0x81); /*0x713e91*/
  if ( v4 >= (unsigned int)v5[2] ) /*0x713ea2*/
    sub_8BCA30(v5, (int *)((char *)v5[5] + v4)); /*0x713eac*/
  result = sub_8BCD40(v5, v4, &a2); /*0x713eb9*/
  if ( v3 ) /*0x713ec8*/
  {
    result = InterlockedDecrement((volatile LONG *)(v3 + 4)); /*0x713ece*/
    if ( !result ) /*0x713ed6*/
      return (**(LONG (__thiscall ***)(int, int))v3)(v3, 1); /*0x713ee0*/
  }
  return result; /*0x713ee2*/
}
