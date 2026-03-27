int __thiscall sub_43C8C0(_QWORD *this)
{
  IOTask **v2; // ebx
  IOTask *v3; // edi
  bool v4; // zf
  IOTask *v5; // ebx
  volatile LONG *v6; // edi
  volatile LONG *v8; // [esp+14h] [ebp-10h] BYREF
  unsigned int v9; // [esp+20h] [ebp-4h]

  v2 = sub_43B280(
         (int **)ModelLoaderPtr,
         (IOTask **)&v8,
         *(int **)(*((_DWORD *)this + 8) + 0x60),
         BYTE2(*((_DWORD *)this + 4)),
         (volatile LONG *)this,
         3,
         0,
         1,
         0);
  v3 = *((IOTask **)this + 9);
  v4 = v3 == *v2;
  v9 = 0;
  if ( !v4 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->members.unk08) )
        (*(void (__thiscall **)(IOTask *, int))v3->vtbl)(v3, 1);
    }
    v5 = *v2;
    *((_DWORD *)this + 9) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members.unk08);
  }
  v6 = v8;
  v9 = 0xFFFFFFFF;
  if ( v8 )
  {
    if ( !InterlockedDecrement(v8 + 2) )
    {
      if ( v6 )
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
    }
  }
  return (*((int (__thiscall **)(IOManager *, _QWORD *))ioManager->vtbl + 0xF))(ioManager, this);
}
