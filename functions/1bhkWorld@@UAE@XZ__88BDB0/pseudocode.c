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

  this->__vftable = (NiObjectVtbl *)&bhkWorld::`vftable'; /*0x88bddb*/
  --unk_BA7900; /*0x88bde1*/
  this->__vftable[1].Unk_03(this); /*0x88bdf5*/
  unk18 = (void (__thiscall ***)(_DWORD, int))this->unk18; /*0x88bdf7*/
  if ( unk18 ) /*0x88bdfe*/
    (**unk18)(unk18, 1); /*0x88be06*/
  this->__vftable[1].Unk_03(this); /*0x88be0f*/
  threadingUnkStruct = this->threadingUnkStruct; /*0x88be11*/
  this->unk18 = 0; /*0x88be16*/
  if ( threadingUnkStruct ) /*0x88be19*/
  {
    sub_8BACC0(threadingUnkStruct); /*0x88be1d*/
    FormHeapFree((unsigned int)threadingUnkStruct); /*0x88be23*/
    this->threadingUnkStruct = 0; /*0x88be2b*/
  }
  this->__vftable[1].Unk_03(this); /*0x88be35*/
  sub_89D700(this); /*0x88be39*/
  this->__vftable[1].Unk_03(this); /*0x88be45*/
  FormHeapFree((unsigned int)this->unk2C->unk00); /*0x88be4b*/
  FormHeapFree((unsigned int)this->unk34->unk00); /*0x88be54*/
  FormHeapFree((unsigned int)this->unk3C->unk00); /*0x88be5d*/
  FormHeapFree((unsigned int)this->unk44->unk00); /*0x88be66*/
  FormHeapFree((unsigned int)this->unk4C->unk00); /*0x88be6f*/
  for ( i = 0; i < (signed int)this->unk68; ++i ) /*0x88be7c*/
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(this->unk64 + 4 * i); /*0x88be83*/
    if ( v5 ) /*0x88be88*/
      (**v5)(v5, 1); /*0x88be90*/
  }
  v6 = MEMORY[0xBA9DE4]; /*0x88be9a*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x88bea0*/
  this->unk68 = 0; /*0x88bea7*/
  unk78 = this->unk78; /*0x88beaa*/
  if ( unk78 >= 0 ) /*0x88beb4*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x19C); /*0x88beba*/
    if ( !v9 ) /*0x88bec2*/
      v9 = unk_BA7D9C; /*0x88bec4*/
    sub_8A75D0(v9, (_DWORD *)this->unk70, 8 * unk78, 0x14); /*0x88bedc*/
  }
  unk6C = this->unk6C; /*0x88bee1*/
  if ( unk6C >= 0 ) /*0x88beea*/
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x19C); /*0x88bef0*/
    if ( !v11 ) /*0x88bef8*/
      v11 = unk_BA7D9C; /*0x88befa*/
    sub_8A75D0(v11, (_DWORD *)this->unk64, 4 * unk6C, 0x14); /*0x88bf10*/
  }
  bhkSerializable::~bhkSerializable((bhkSerializable *)this); /*0x88bf1f*/
}
