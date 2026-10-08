int *__thiscall sub_4788E0(_DWORD **this, int *a2, int a3, volatile LONG *a4)
{
  void *v5; // eax
  volatile LONG *v6; // edi
  unsigned __int8 v7; // bp
  int v8; // eax
  int *v9; // esi
  int *v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // esi
  int i; // [esp+14h] [ebp-14h]

  *a2 = 0; /*0x478913*/
  v5 = (void *)(*(int (__thiscall **)(_DWORD))(**(this + 0x54) + 0x170))(*(this + 0x54)); /*0x47893b*/
  if ( !OblivionDynamicCast( /*0x47893e*/
          v5,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESNPC `RTTI Type Descriptor',
          0) )
    return a2; /*0x478a25*/
  v6 = a4; /*0x47894e*/
  v7 = a3; /*0x478952*/
  v8 = 0; /*0x478956*/
  for ( i = 0; i < 0x10; ++i ) /*0x478958*/
  {
    v9 = *(this + 4 * v8 + 0x14); /*0x478966*/
    if ( v9 ) /*0x47896b*/
    {
      if ( v9 != (int *)0xFFFFFFFF ) /*0x478974*/
      {
        if ( v8 == 1 && bLoadHelmentsBackground && useFaceGenHeads && sub_477ED0() ) /*0x478991*/
        {
          v10 = (int *)sub_4781D0(this, (IOTask **)&a4, v7, v6); /*0x4789a3*/
          sub_4348B0(a2, v10); /*0x4789b5*/
          sub_4BDDC0((int *)&a4); /*0x4789c3*/
        }
        else
        {
          sub_43B280((int **)MEMORY[0xB33A1C], (IOTask **)&a3, v9, v7, v6, 3, 0, 1, 0); /*0x4789e0*/
          if ( a3 ) /*0x4789eb*/
          {
            v11 = (void (__thiscall ***)(_DWORD, int))a3; /*0x4789ed*/
            if ( !InterlockedDecrement((volatile LONG *)(a3 + 8)) ) /*0x4789f3*/
              (**v11)(v11, 1); /*0x478a09*/
          }
        }
      }
    }
    v8 = i + 1; /*0x478a0f*/
  }
  return a2; /*0x478a27*/
}
