void __thiscall sub_565F80(_BYTE *this, UInt32 a2)
{
  _BYTE v3[8]; // [esp+8h] [ebp-14h] BYREF
  unsigned int v4; // [esp+18h] [ebp-4h]

  if ( a2 )
  {
    sub_569DD0((Time *)(this + 0x2C), a2);
  }
  else
  {
    sub_569D60(v3);
    v4 = 0;
    sub_569DD0((Time *)(this + 0x2C), (UInt32)v3);
    v4 = 0xFFFFFFFF;
    TESTexture::ClearComponentReferences(v3);
  }
}
