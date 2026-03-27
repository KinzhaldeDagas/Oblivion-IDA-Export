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

  *a2 = 0;
  v5 = (void *)(*(int (__thiscall **)(_DWORD))(**(this + 0x54) + 0x170))(*(this + 0x54));
  if ( !OblivionDynamicCast(
          v5,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESNPC `RTTI Type Descriptor',
          0) )
    return a2;
  v6 = a4;
  v7 = a3;
  v8 = 0;
  for ( i = 0; i < 0x10; ++i )
  {
    v9 = *(this + 4 * v8 + 0x14);
    if ( v9 )
    {
      if ( v9 != (int *)0xFFFFFFFF )
      {
        if ( v8 == 1 && bLoadHelmentsBackground && useFaceGenHeads && sub_477ED0() )
        {
          v10 = (int *)sub_4781D0(this, (IOTask **)&a4, v7, v6);
          sub_4348B0(a2, v10);
          sub_4BDDC0(&a4);
        }
        else
        {
          sub_43B280((int **)ModelLoaderPtr, (IOTask **)&a3, v9, v7, v6, 3, 0, 1, 0);
          if ( a3 )
          {
            v11 = (void (__thiscall ***)(_DWORD, int))a3;
            if ( !InterlockedDecrement((volatile LONG *)(a3 + 8)) )
              (**v11)(v11, 1);
          }
        }
      }
    }
    v8 = i + 1;
  }
  return a2;
}
