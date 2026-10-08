int __thiscall sub_43C8C0(_QWORD *this)
{
  IOTask **v2; // ebx
  IOTask *v3; // edi
  bool v4; // zf
  IOTask *v5; // ebx
  volatile LONG *v6; // edi
  volatile LONG *v8; // [esp+14h] [ebp-10h] BYREF
  unsigned int v9; // [esp+20h] [ebp-4h]

  v2 = sub_43B280( /*0x43c91b*/
         (int **)MEMORY[0xB33A1C],
         (IOTask **)&v8,
         *(int **)(*((_DWORD *)this + 8) + 0x60),
         BYTE2(*((_DWORD *)this + 4)),
         (volatile LONG *)this,
         3,
         0,
         1,
         0);
  v3 = *((IOTask **)this + 9); /*0x43c91d*/
  v4 = v3 == *v2; /*0x43c920*/
  v9 = 0; /*0x43c928*/
  if ( !v4 ) /*0x43c930*/
  {
    if ( v3 ) /*0x43c934*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->members.unk08) ) /*0x43c93a*/
        (*(void (__thiscall **)(IOTask *, int))v3->vtbl)(v3, 1); /*0x43c94c*/
    }
    v5 = *v2; /*0x43c94e*/
    *((_DWORD *)this + 9) = v5; /*0x43c952*/
    if ( v5 ) /*0x43c955*/
      InterlockedIncrement((volatile LONG *)&v5->members.unk08); /*0x43c95b*/
  }
  v6 = v8; /*0x43c961*/
  v9 = 0xFFFFFFFF; /*0x43c967*/
  if ( v8 ) /*0x43c96f*/
  {
    if ( !InterlockedDecrement(v8 + 2) ) /*0x43c975*/
    {
      if ( v6 ) /*0x43c97d*/
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x43c987*/
    }
  }
  return (*((int (__thiscall **)(IOManager *, _QWORD *))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], this); /*0x43c997*/
}
