// Oblivion stRegion destructor: invokes the no-op stVec teardown on embedded vectors at +0x18 and +0x00. RT4.1 stRegion's max/min vector composition corroborates the two 24-byte subobjects.
void __thiscall OB_stRegion_Dtor_010201A0(OB_stRegion_010201A0 *this)
{
  Shared_NoOpVirtual_60D0A0(&this->max); /*0x787023*/
  Shared_NoOpVirtual_60D0A0(this); /*0x787032*/
}
