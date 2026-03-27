int __thiscall MiddleHighProc_HasShieldType(int this, _DWORD *a2, int a3)
{
  if ( !*(_BYTE *)(this + 0x161) )
    return MiddleHighProc_HasShieldType_::Done((int)a2, a3);
  *(_DWORD *)(this + 0x164) = 0;
  if ( !a2 )
    JUMPOUT(0x651DAF);
  return MiddleHighProc_HasShieldType_::EffectLoop(this, a2, (int)a2, a3);
}
