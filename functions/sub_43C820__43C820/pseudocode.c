int __thiscall sub_43C820(volatile LONG *this)
{
  int i; // ebx
  int *v3; // eax
  int v4; // eax
  int *v5; // edi
  IOTask *v6; // edi
  IOTask *v8; // [esp+4h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 0xD) ) /*0x43c824*/
  {
    for ( i = 0x14; i < 0x1C; i += 4 ) /*0x43c833*/
    {
      v3 = (int *)(i + *((_DWORD *)this + 0xD)); /*0x43c83b*/
      if ( *v3 ) /*0x43c83d*/
      {
        v4 = *v3; /*0x43c842*/
        if ( v4 ) /*0x43c846*/
          v5 = (int *)(v4 + 0x18); /*0x43c848*/
        else
          v5 = 0; /*0x43c84d*/
        sub_43B280((int **)MEMORY[0xB33A1C], &v8, v5, BYTE2(*((_DWORD *)this + 4)), this, 2, 0, 1, 0); /*0x43c875*/
        if ( v8 ) /*0x43c880*/
        {
          v6 = v8; /*0x43c882*/
          if ( !InterlockedDecrement((volatile LONG *)&v8->members.unk08) ) /*0x43c888*/
            (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1); /*0x43c89a*/
        }
      }
    }
  }
  return (*((int (__thiscall **)(IOManager *, volatile LONG *))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], this); /*0x43c8b5*/
}
