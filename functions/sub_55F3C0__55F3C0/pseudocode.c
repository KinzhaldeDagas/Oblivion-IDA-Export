// LockFreeMap teardown/clear: drains thread-local manager and all buckets; callback vtable slot +0x20 releases keys before freeing nodes.
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

  unk14 = (Unk14 *)this->members.unk14; /*0x55f3e7*/
  v4 = 0; /*0x55f3ea*/
  if ( unk14 ) /*0x55f3ee*/
  {
    a2a = unk14->unk00; /*0x55f3f8*/
    sub_55F0B0((Unk14 *)this->members.unk14); /*0x55f3fc*/
    FormHeapFree((unsigned int)unk14); /*0x55f402*/
    v5 = this->members.numBuckets == 0; /*0x55f40a*/
    this->members.unk14 = 0; /*0x55f40d*/
    this->members.unk18 = 0; /*0x55f410*/
    if ( !v5 ) /*0x55f413*/
    {
      do /*0x55f466*/
      {
        v6 = (_DWORD *)(*((_DWORD *)this->members.buckets + v4) & 0xFFFFFFFE); /*0x55f427*/
        *((_DWORD *)this->members.buckets + v4) = 0; /*0x55f42e*/
        if ( v6 ) /*0x55f434*/
        {
          do /*0x55f45e*/
          {
            v7 = v6[2]; /*0x55f436*/
            v6[2] = 0; /*0x55f43b*/
            v6[1] = 0; /*0x55f43e*/
            (*((void (__thiscall **)(LockFreeMap *, _DWORD))this->vtbl + 8))(this, *v6); /*0x55f44f*/
            FormHeapFree((unsigned int)v6); /*0x55f452*/
            v6 = (_DWORD *)(v7 & 0xFFFFFFFE); /*0x55f45c*/
          }
          while ( (v7 & 0xFFFFFFFE) != 0 ); /*0x55f45e*/
        }
        ++v4; /*0x55f460*/
      }
      while ( v4 < this->members.numBuckets ); /*0x55f466*/
    }
    if ( !a2 ) /*0x55f46d*/
    {
      v8 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x55f471*/
      if ( v8 ) /*0x55f487*/
        v9 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v8, a2a); /*0x55f490*/
      else
        v9 = 0; /*0x55f497*/
      this->members.unk14 = v9; /*0x55f499*/
    }
  }
}
