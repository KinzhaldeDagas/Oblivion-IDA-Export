void __thiscall ShieldEffect_Apply(float *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  float v4; // [esp+4h] [ebp-4h]

  ValueModifierEffect_Apply(this, v4);
  if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 0x1C) + 0x58) & 2) != 0 || 0.0 == *(this + 7) )
  {
    v2 = *((MagicTarget **)this + 8);
    if ( v2 )
    {
      ParentActor = MagicTarget_GetParentActor(v2);
      ShieldEffect_ModSecondaryAV(this, (int)ParentActor, *(this + 6));
      return;
    }
    ShieldEffect_ModSecondaryAV(this, 0, *(this + 6));
  }
  ShieldEffect_Apply_::Done();
}
