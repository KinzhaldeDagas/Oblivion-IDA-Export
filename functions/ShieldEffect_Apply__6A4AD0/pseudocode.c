void __thiscall ShieldEffect_Apply(float *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  float v4; // [esp+4h] [ebp-4h]

  ValueModifierEffect_Apply(this, v4); /*0x6a4ad3*/
  if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 0x1C) + 0x58) & 2) != 0 || 0.0 == *(this + 7) ) /*0x6a4af2*/
  {
    v2 = *((MagicTarget **)this + 8); /*0x6a4af4*/
    if ( v2 ) /*0x6a4af9*/
    {
      ParentActor = MagicTarget_GetParentActor(v2); /*0x6a4afb*/
      ShieldEffect_ModSecondaryAV(this, (int)ParentActor, *(this + 6)); /*0x6a4b0a*/
      return; /*0x6a4b10*/
    }
    ShieldEffect_ModSecondaryAV(this, 0, *(this + 6)); /*0x6a4b1d*/
  }
  ShieldEffect_Apply_::Done(); /*0x6a4b1e*/
}
