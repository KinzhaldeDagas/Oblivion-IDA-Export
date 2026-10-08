void __thiscall bhkEntity::~bhkEntity(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkEntity::`vftable'; /*0x8affc8*/
  sub_89D700(this); /*0x8affd6*/
  --unk_BA7F8C; /*0x8affdb*/
  bhkWorldObject::~bhkWorldObject(this); /*0x8affec*/
}
