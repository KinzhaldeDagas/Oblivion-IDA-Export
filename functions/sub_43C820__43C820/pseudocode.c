int __thiscall sub_43C820(volatile LONG *this)
{
  int i; // ebx
  int *v3; // eax
  int v4; // eax
  int *v5; // edi
  IOTask *v6; // edi
  IOTask *v8; // [esp+4h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 0xD) )
  {
    for ( i = 0x14; i < 0x1C; i += 4 )
    {
      v3 = (int *)(i + *((_DWORD *)this + 0xD));
      if ( *v3 )
      {
        v4 = *v3;
        if ( v4 )
          v5 = (int *)(v4 + 0x18);
        else
          v5 = 0;
        sub_43B280((int **)ModelLoaderPtr, &v8, v5, BYTE2(*((_DWORD *)this + 4)), this, 2, 0, 1, 0);
        if ( v8 )
        {
          v6 = v8;
          if ( !InterlockedDecrement((volatile LONG *)&v8->members.unk08) )
            (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1);
        }
      }
    }
  }
  return (*((int (__thiscall **)(IOManager *, volatile LONG *))ioManager->vtbl + 0xF))(ioManager, this);
}
