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

  unk14 = this->members.unk14; /*0x43d539*/
  a2a = unk14->maxThread; /*0x43d542*/
  if ( unk14 ) /*0x43d546*/
  {
    sub_4330A0(&unk14->maxThread); /*0x43d54a*/
    FormHeapFree((unsigned int)unk14); /*0x43d550*/
  }
  v4 = this->members.unk04 == 0; /*0x43d558*/
  this->members.unk18 = 0; /*0x43d55b*/
  if ( !v4 ) /*0x43d55e*/
  {
    do /*0x43d5cb*/
    {
      unk04 = (void **)this->members.unk04; /*0x43d560*/
      v6 = (volatile LONG *)unk04[1]; /*0x43d563*/
      v12 = *unk04; /*0x43d56a*/
      if ( v6 ) /*0x43d56e*/
      {
        if ( !InterlockedDecrement(v6 + 2) ) /*0x43d574*/
          (**(void (__thiscall ***)(void *, int))v6)((void *)v6, 1); /*0x43d58a*/
        unk04[1] = 0; /*0x43d58c*/
      }
      v7 = this->members.unk04; /*0x43d58f*/
      if ( v7 ) /*0x43d594*/
      {
        v8 = v7[1]; /*0x43d596*/
        if ( v8 ) /*0x43d59b*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 8)) ) /*0x43d5a1*/
            (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x43d5b7*/
        }
        FormHeapFree((unsigned int)v7); /*0x43d5ba*/
      }
      this->members.unk04 = v12; /*0x43d5c8*/
    }
    while ( v12 ); /*0x43d5cb*/
  }
  if ( !a2 ) /*0x43d5d1*/
  {
    v9 = (_DWORD *)FormHeapAlloc(8u); /*0x43d5d5*/
    if ( v9 ) /*0x43d5df*/
    {
      *v9 = 0; /*0x43d5e1*/
      v9[1] = 0; /*0x43d5e3*/
    }
    else
    {
      v9 = 0; /*0x43d5e8*/
    }
    this->members.unk04 = v9; /*0x43d5ec*/
    this->members.numBuckets = (UInt32)v9; /*0x43d5ef*/
    v10 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x43d5f2*/
    if ( v10 ) /*0x43d604*/
      v11 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v10, a2a); /*0x43d60d*/
    else
      v11 = 0; /*0x43d614*/
    this->members.unk14 = v11; /*0x43d616*/
  }
}
