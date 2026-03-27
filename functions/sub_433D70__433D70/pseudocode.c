// Or LockFreeQueue
void __thiscall sub_433D70(LockFreeMap *this, char a2)
{
  ThreadSpecificInterfaceManager *unk14; // esi
  UInt32 v4; // edx
  bool v5; // zf
  _DWORD *v6; // esi
  int v7; // ebp
  int v8; // edi
  unsigned int v9; // ebp
  int v10; // edi
  ThreadSpecificInterfaceManager *v11; // eax
  ThreadSpecificInterfaceManager *v12; // eax
  UInt32 v13; // [esp+14h] [ebp-14h]
  unsigned int a2a; // [esp+18h] [ebp-10h]

  unk14 = this->members.unk14;
  if ( unk14 )
  {
    a2a = unk14->maxThread;
    sub_433110(&this->members.unk14->maxThread);
    FormHeapFree((unsigned int)unk14);
    v4 = 0;
    v5 = this->members.numBuckets == 0;
    this->members.unk14 = 0;
    this->members.unk18 = 0;
    v13 = 0;
    if ( !v5 )
    {
      do
      {
        v6 = (_DWORD *)(*((_DWORD *)this->members.buckets + v4) & 0xFFFFFFFE);
        *((_DWORD *)this->members.buckets + v4) = 0;
        if ( v6 )
        {
          do
          {
            v7 = v6[3];
            v6[3] = 0;
            v8 = v6[2];
            v9 = v7 & 0xFFFFFFFE;
            if ( v8 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v8 + 8)) )
                (**(void (__thiscall ***)(int, int))v8)(v8, 1);
              v6[2] = 0;
            }
            (*((void (__thiscall **)(LockFreeMap *, _DWORD, _DWORD))this->vtbl + 8))(this, *v6, v6[1]);
            v10 = v6[2];
            if ( v10 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v10 + 8)) )
                (**(void (__thiscall ***)(int, int))v10)(v10, 1);
            }
            FormHeapFree((unsigned int)v6);
            v6 = (_DWORD *)v9;
          }
          while ( v9 );
          v4 = v13;
        }
        v13 = ++v4;
      }
      while ( v4 < this->members.numBuckets );
    }
    if ( !a2 )
    {
      v11 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u);
      if ( v11 )
        v12 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v11, a2a);
      else
        v12 = 0;
      this->members.unk14 = v12;
    }
  }
}
