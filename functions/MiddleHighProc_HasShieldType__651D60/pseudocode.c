int __thiscall MiddleHighProc_HasShieldType(int this, _DWORD *a2, int a3)
{
  if ( !*(_BYTE *)(this + 0x161) ) /*0x651d63*/
    return MiddleHighProc_HasShieldType_::Done(this, (int)a2, a3); /*0x651d6a*/
  *(_DWORD *)(this + 0x164) = 0; /*0x651d73*/
  if ( !a2 ) /*0x651d7d*/
    JUMPOUT(0x651DAF); /*0x651daf*/
  return MiddleHighProc_HasShieldType_::EffectLoop(this, a2, (int)a2, a3);
}
