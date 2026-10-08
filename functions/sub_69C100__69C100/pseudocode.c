void __thiscall sub_69C100(MagicFogProjectile *this)
{
  UInt32 unk094; // [esp-4h] [ebp-8h]

  while ( this->unk094 ) /*0x69c103*/
  {
    unk094 = this->unk094; /*0x69c119*/
    this->unk094 = *(_DWORD *)(unk094 + 8); /*0x69c11a*/
    FormHeapFree(unk094); /*0x69c120*/
  }
  this->unk094 = 0; /*0x69c131*/
}
