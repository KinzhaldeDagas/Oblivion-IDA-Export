void __thiscall bhkWorld::~bhkWorld(bhkWorld *this)
{
  void (__thiscall ***unk18)(_DWORD, int); // ecx
  bhkWorldSubUnk *threadingUnkStruct; // edi
  signed int i; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // edi
  _DWORD *ThreadLocalStoragePointer; // ebp
  signed int unk78; // eax
  int v9; // ecx
  signed int unk6C; // eax
  int v11; // ecx

  this->__vftable = (NiObjectVtbl *)&bhkWorld::`vftable';
  --dword_BA7900;
  this->__vftable[1].Unk_03(this);
  unk18 = (void (__thiscall ***)(_DWORD, int))this->unk18;
  if ( unk18 )
    (**unk18)(unk18, 1);
  this->__vftable[1].Unk_03(this);
  threadingUnkStruct = this->threadingUnkStruct;
  this->unk18 = 0;
  if ( threadingUnkStruct )
  {
    sub_8BACC0(threadingUnkStruct);
    FormHeapFree((unsigned int)threadingUnkStruct);
    this->threadingUnkStruct = 0;
  }
  this->__vftable[1].Unk_03(this);
  sub_89D700(this);
  this->__vftable[1].Unk_03(this);
  FormHeapFree((unsigned int)this->unk2C->unk00);
  FormHeapFree((unsigned int)this->unk34->unk00);
  FormHeapFree((unsigned int)this->unk3C->unk00);
  FormHeapFree((unsigned int)this->unk44->unk00);
  FormHeapFree((unsigned int)this->unk4C->unk00);
  for ( i = 0; i < (signed int)this->unk68; ++i )
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(this->unk64 + 4 * i);
    if ( v5 )
      (**v5)(v5, 1);
  }
  v6 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  this->unk68 = 0;
  unk78 = this->unk78;
  if ( unk78 >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, (_DWORD *)this->unk70, 8 * unk78, 0x14);
  }
  unk6C = this->unk6C;
  if ( unk6C >= 0 )
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    sub_8A75D0(v11, (_DWORD *)this->unk64, 4 * unk6C, 0x14);
  }
  bhkSerializable::~bhkSerializable((bhkSerializable *)this);
}
