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

  bhkRefObject::bhkRefObject(this); /*0x88aee5*/
  this->unk10 = 0; /*0x88aeec*/
  this->__vftable = (NiObjectVtbl *)&bhkWorld::`vftable'; /*0x88aeef*/
  this->threadingUnkStruct = 0; /*0x88aef5*/
  this->unk64 = 0; /*0x88af01*/
  this->unk68 = 0; /*0x88af04*/
  this->unk6C = 0x80000000; /*0x88af07*/
  this->unk70 = 0; /*0x88af0a*/
  this->unk74 = 0; /*0x88af0d*/
  this->unk78 = 0x80000000; /*0x88af10*/
  ++unk_BA7900; /*0x88af13*/
  this->unk1C = 0; /*0x88af24*/
  this->unk18 = 0; /*0x88af27*/
  this->unk1D = 0; /*0x88af2a*/
  this->unk1E = 0; /*0x88af2d*/
  this->unk28 = 0; /*0x88af30*/
  this->unk20 = 0; /*0x88af33*/
  this->unk24 = 0; /*0x88af36*/
  this->unk30 = 0; /*0x88af39*/
  v3 = (bhkWorldUnk2C *)FormHeapAlloc(0x2EE0u); /*0x88af3c*/
  this->unk2C = v3; /*0x88af48*/
  _memset((int)v3, 0, sizeof(bhkWorldUnk2C)); /*0x88af4b*/
  this->unk38 = 0; /*0x88af55*/
  v4 = (bhkWorldUnk34 *)FormHeapAlloc(0x320u); /*0x88af58*/
  this->unk34 = v4; /*0x88af64*/
  _memset((int)v4, 0, sizeof(bhkWorldUnk34)); /*0x88af67*/
  this->unk40 = 0; /*0x88af71*/
  v5 = (bhkWorldUnk3C *)FormHeapAlloc(0x190u); /*0x88af74*/
  this->unk3C = v5; /*0x88af80*/
  _memset((int)v5, 0, sizeof(bhkWorldUnk3C)); /*0x88af83*/
  this->unk48 = 0; /*0x88af8d*/
  v6 = (bhkWorldUnk34 *)FormHeapAlloc(0x320u); /*0x88af90*/
  this->unk44 = v6; /*0x88af9c*/
  _memset((int)v6, 0, sizeof(bhkWorldUnk34)); /*0x88af9f*/
  this->unk50 = 0; /*0x88afac*/
  v7 = (bhkWorldUnk2C *)FormHeapAlloc(0x2EE0u); /*0x88afaf*/
  this->unk4C = v7; /*0x88afbb*/
  _memset((int)v7, 0, sizeof(bhkWorldUnk2C)); /*0x88afbe*/
  *(_OWORD *)&this->unk54 = 0; /*0x88afcb*/
  if ( a2 ) /*0x88afcf*/
    v8 = a2 + 0xA0; /*0x88afd1*/
  else
    v8 = 0; /*0x88afd9*/
  sub_889A70(this, v8); /*0x88afde*/
  v9 = (UInt16 *)this->__vftable[1].Unk_03(this); /*0x88afec*/
  if ( *(_DWORD *)(this->__vftable[1].Unk_03(this) + 0xB4) == 9 ) /*0x88affe*/
  {
    v10 = (bhkWorldSubUnk *)FormHeapAlloc(0x108u); /*0x88b005*/
    if ( v10 ) /*0x88b018*/
      Threads = bhkWorldSubUnk::InitAndCreateThreads(v10, v9, havokThreads); /*0x88b024*/
    else
      Threads = 0; /*0x88b02b*/
    this->threadingUnkStruct = Threads; /*0x88b02d*/
  }
  return this; /*0x88b032*/
}
