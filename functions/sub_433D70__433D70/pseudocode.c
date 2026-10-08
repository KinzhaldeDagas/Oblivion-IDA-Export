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

  unk14 = this->members.unk14; /*0x433d99*/
  if ( unk14 ) /*0x433da0*/
  {
    a2a = unk14->maxThread; /*0x433daa*/
    sub_433110(&this->members.unk14->maxThread); /*0x433dae*/
    FormHeapFree((unsigned int)unk14); /*0x433db4*/
    v4 = 0; /*0x433db9*/
    v5 = this->members.numBuckets == 0; /*0x433dbe*/
    this->members.unk14 = 0; /*0x433dc1*/
    this->members.unk18 = 0; /*0x433dc4*/
    v13 = 0; /*0x433dc7*/
    if ( !v5 ) /*0x433dcb*/
    {
      do /*0x433e79*/
      {
        v6 = (_DWORD *)(*((_DWORD *)this->members.buckets + v4) & 0xFFFFFFFE); /*0x433de3*/
        *((_DWORD *)this->members.buckets + v4) = 0; /*0x433dea*/
        if ( v6 ) /*0x433df0*/
        {
          do /*0x433e69*/
          {
            v7 = v6[3]; /*0x433df2*/
            v6[3] = 0; /*0x433df5*/
            v8 = v6[2]; /*0x433dfc*/
            v9 = v7 & 0xFFFFFFFE; /*0x433dff*/
            if ( v8 ) /*0x433e04*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v8 + 8)) ) /*0x433e0a*/
                (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x433e20*/
              v6[2] = 0; /*0x433e22*/
            }
            (*((void (__thiscall **)(LockFreeMap *, _DWORD, _DWORD))this->vtbl + 8))(this, *v6, v6[1]); /*0x433e37*/
            v10 = v6[2]; /*0x433e39*/
            if ( v10 ) /*0x433e3e*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v10 + 8)) ) /*0x433e44*/
                (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x433e5a*/
            }
            FormHeapFree((unsigned int)v6); /*0x433e5d*/
            v6 = (_DWORD *)v9; /*0x433e67*/
          }
          while ( v9 ); /*0x433e69*/
          v4 = v13; /*0x433e6b*/
        }
        v13 = ++v4; /*0x433e75*/
      }
      while ( v4 < this->members.numBuckets ); /*0x433e79*/
    }
    if ( !a2 ) /*0x433e84*/
    {
      v11 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x433e88*/
      if ( v11 ) /*0x433e9e*/
        v12 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v11, a2a); /*0x433ea7*/
      else
        v12 = 0; /*0x433eae*/
      this->members.unk14 = v12; /*0x433eb0*/
    }
  }
}
