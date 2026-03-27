void __thiscall sub_55F3C0(LockFreeMap *this, char a2)
{
  Unk14 *unk14; // esi
  UInt32 v4; // ebx
  bool v5; // zf
  _DWORD *v6; // esi
  int v7; // edi
  ThreadSpecificInterfaceManager *v8; // eax
  ThreadSpecificInterfaceManager *v9; // eax
  UInt32 a2a; // [esp+14h] [ebp-10h]

  unk14 = (Unk14 *)this->members.unk14;
  v4 = 0;
  if ( unk14 )
  {
    a2a = unk14->unk00;
    sub_55F0B0((Unk14 *)this->members.unk14);
    FormHeapFree((unsigned int)unk14);
    v5 = this->members.numBuckets == 0;
    this->members.unk14 = 0;
    this->members.unk18 = 0;
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
            v7 = v6[2];
            v6[2] = 0;
            v6[1] = 0;
            (*((void (__thiscall **)(LockFreeMap *, _DWORD))this->vtbl + 8))(this, *v6);
            FormHeapFree((unsigned int)v6);
            v6 = (_DWORD *)(v7 & 0xFFFFFFFE);
          }
          while ( (v7 & 0xFFFFFFFE) != 0 );
        }
        ++v4;
      }
      while ( v4 < this->members.numBuckets );
    }
    if ( !a2 )
    {
      v8 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u);
      if ( v8 )
        v9 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v8, a2a);
      else
        v9 = 0;
      this->members.unk14 = v9;
    }
  }
}
