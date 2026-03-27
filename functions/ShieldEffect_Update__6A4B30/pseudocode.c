void __thiscall ShieldEffect_Update(MagicTarget **this, int a2)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // ecx
  float v5; // [esp+10h] [ebp+4h]

  ValueModifierEffect_UpdateEffect(this, a2);
  if ( (*(_DWORD *)(*(_DWORD *)&(*(this + 3))[3].unk04 + 0x58) & 2) == 0 )
  {
    v3 = *(this + 8);
    if ( v3 )
      ParentActor = MagicTarget_GetParentActor(v3);
    else
      ParentActor = 0;
    if ( *((float *)this + 7) > 0.0 || *(this + 0xA) == (MagicTarget *)4 )
    {
      v5 = *((float *)this + 6) * *(float *)&a2;
      ShieldEffect_ModSecondaryAV(this, (int)ParentActor, v5);
    }
  }
}
