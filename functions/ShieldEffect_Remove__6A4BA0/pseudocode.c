void __usercall ShieldEffect_Remove(float *this@<ecx>, double a2@<st0>)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // eax
  float v5; // [esp+0h] [ebp-8h]
  float v6; // [esp+0h] [ebp-8h]

  ValueModifierEffect_Remove(a2);
  if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 0x1C) + 0x58) & 2) != 0 )
  {
    v3 = *((MagicTarget **)this + 8);
    if ( v3 )
    {
      ParentActor = MagicTarget_GetParentActor(v3);
      v5 = -*(this + 6);
      ShieldEffect_ModSecondaryAV(this, (int)ParentActor, v5);
    }
    else
    {
      v6 = -*(this + 6);
      ShieldEffect_ModSecondaryAV(this, 0, v6);
    }
  }
}
