void __thiscall sub_43D510(LockFreeMap *this, char a2)
{
  ThreadSpecificInterfaceManager *unk14; // esi
  bool v4; // zf
  void **unk04; // edi
  volatile LONG *v6; // esi
  _DWORD *v7; // edi
  int v8; // esi
  _DWORD *v9; // eax
  ThreadSpecificInterfaceManager *v10; // eax
  ThreadSpecificInterfaceManager *v11; // eax
  void *v12; // [esp+14h] [ebp-14h]
  unsigned int a2a; // [esp+18h] [ebp-10h]

  unk14 = this->members.unk14;
  a2a = unk14->maxThread;
  if ( unk14 )
  {
    sub_4330A0(&unk14->maxThread);
    FormHeapFree((unsigned int)unk14);
  }
  v4 = this->members.unk04 == 0;
  this->members.unk18 = 0;
  if ( !v4 )
  {
    do
    {
      unk04 = (void **)this->members.unk04;
      v6 = (volatile LONG *)unk04[1];
      v12 = *unk04;
      if ( v6 )
      {
        if ( !InterlockedDecrement(v6 + 2) )
          (**(void (__thiscall ***)(void *, int))v6)((void *)v6, 1);
        unk04[1] = 0;
      }
      v7 = this->members.unk04;
      if ( v7 )
      {
        v8 = v7[1];
        if ( v8 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 8)) )
            (**(void (__thiscall ***)(int, int))v8)(v8, 1);
        }
        FormHeapFree((unsigned int)v7);
      }
      this->members.unk04 = v12;
    }
    while ( v12 );
  }
  if ( !a2 )
  {
    v9 = (_DWORD *)FormHeapAlloc(8u);
    if ( v9 )
    {
      *v9 = 0;
      v9[1] = 0;
    }
    else
    {
      v9 = 0;
    }
    this->members.unk04 = v9;
    this->members.numBuckets = (UInt32)v9;
    v10 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u);
    if ( v10 )
      v11 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v10, a2a);
    else
      v11 = 0;
    this->members.unk14 = v11;
  }
}
