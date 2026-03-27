void __thiscall sub_69C100(MagicFogProjectile *this)
{
  UInt32 unk094; // [esp-4h] [ebp-8h]

  while ( this->unk094 )
  {
    unk094 = this->unk094;
    this->unk094 = *(_DWORD *)(unk094 + 8);
    FormHeapFree(unk094);
  }
  this->unk094 = 0;
}
