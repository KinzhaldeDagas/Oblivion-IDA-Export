char __thiscall MagicCaster_CastingVFX_ClearSomething___(int this, char a2, float a3)
{
  *(float *)(this + 0x14) = a3;
  *(_BYTE *)(this + 0x18) = a2;
  *(float *)(this + 0x10) = 0.0;
  return a2;
}
