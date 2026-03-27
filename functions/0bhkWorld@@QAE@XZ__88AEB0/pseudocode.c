bhkWorld *__thiscall bhkWorld::bhkWorld(bhkWorld *this, int a2)
{
  bhkWorldUnk2C *v3; // eax
  bhkWorldUnk34 *v4; // eax
  bhkWorldUnk3C *v5; // eax
  bhkWorldUnk34 *v6; // eax
  bhkWorldUnk2C *v7; // eax
  int v8; // eax
  UInt16 *v9; // edi
  bhkWorldSubUnk *v10; // eax
  bhkWorldSubUnk *Threads; // eax

  bhkRefObject::bhkRefObject(this);
  this->unk10 = 0;
  this->__vftable = (NiObjectVtbl *)&bhkWorld::`vftable';
  this->threadingUnkStruct = 0;
  this->unk64 = 0;
  this->unk68 = 0;
  this->unk6C = 0x80000000;
  this->unk70 = 0;
  this->unk74 = 0;
  this->unk78 = 0x80000000;
  ++dword_BA7900;
  this->unk1C = 0;
  this->unk18 = 0;
  this->unk1D = 0;
  this->unk1E = 0;
  this->unk28 = 0;
  this->unk20 = 0;
  this->unk24 = 0;
  this->unk30 = 0;
  v3 = (bhkWorldUnk2C *)FormHeapAlloc(0x2EE0u);
  this->unk2C = v3;
  _memset(v3, 0, sizeof(bhkWorldUnk2C));
  this->unk38 = 0;
  v4 = (bhkWorldUnk34 *)FormHeapAlloc(0x320u);
  this->unk34 = v4;
  _memset(v4, 0, sizeof(bhkWorldUnk34));
  this->unk40 = 0;
  v5 = (bhkWorldUnk3C *)FormHeapAlloc(0x190u);
  this->unk3C = v5;
  _memset(v5, 0, sizeof(bhkWorldUnk3C));
  this->unk48 = 0;
  v6 = (bhkWorldUnk34 *)FormHeapAlloc(0x320u);
  this->unk44 = v6;
  _memset(v6, 0, sizeof(bhkWorldUnk34));
  this->unk50 = 0;
  v7 = (bhkWorldUnk2C *)FormHeapAlloc(0x2EE0u);
  this->unk4C = v7;
  _memset(v7, 0, sizeof(bhkWorldUnk2C));
  *(_OWORD *)&this->unk54 = 0;
  if ( a2 )
    v8 = a2 + 0xA0;
  else
    v8 = 0;
  sub_889A70(this, v8);
  v9 = (UInt16 *)this->__vftable[1].Unk_03(this);
  if ( *(_DWORD *)(this->__vftable[1].Unk_03(this) + 0xB4) == 9 )
  {
    v10 = (bhkWorldSubUnk *)FormHeapAlloc(0x108u);
    if ( v10 )
      Threads = bhkWorldSubUnk::InitAndCreateThreads(v10, v9, havokThreads);
    else
      Threads = 0;
    this->threadingUnkStruct = Threads;
  }
  return this;
}
