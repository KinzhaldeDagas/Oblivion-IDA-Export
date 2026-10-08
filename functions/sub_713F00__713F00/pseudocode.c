char __thiscall sub_713F00(int *this, int a2)
{
  int v3; // esi
  int *v4; // ebx
  unsigned int v6; // ebx
  int *v7; // edi

  v3 = a2; /*0x713f25*/
  v4 = this + 0x91; /*0x713f2e*/
  if ( NiTMap_GetAt(this + 0x91, a2, &a2) ) /*0x713f37*/
    return 0; /*0x713f40*/
  NiTMap_SetAt(v4, v3, *(this + 0x7E)); /*0x713f61*/
  a2 = v3; /*0x713f68*/
  if ( v3 ) /*0x713f6c*/
    InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x713f72*/
  v6 = *(this + 0x7E); /*0x713f78*/
  v7 = this + 0x7B; /*0x713f7e*/
  if ( v6 >= v7[2] ) /*0x713f8f*/
    sub_8BCA30((int **)v7, (int *)(v6 + v7[5])); /*0x713f99*/
  sub_8BCD40(v7, v6, &a2); /*0x713fa6*/
  if ( v3 ) /*0x713fb5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x713fbb*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x713fcd*/
  }
  return 1; /*0x713f42*/
}
