void __thiscall ShieldEffect_Update(MagicTarget **this, int a2)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // ecx
  float v5; // [esp+10h] [ebp+4h]

  ValueModifierEffect_UpdateEffect(this, a2); /*0x6a4b3b*/
  if ( (*(_DWORD *)(*(_DWORD *)&(*(this + 3))[3].unk04 + 0x58) & 2) == 0 ) /*0x6a4b4e*/
  {
    v3 = *(this + 8); /*0x6a4b50*/
    if ( v3 ) /*0x6a4b55*/
      ParentActor = MagicTarget_GetParentActor(v3); /*0x6a4b5c*/
    else
      ParentActor = 0; /*0x6a4b60*/
    if ( *((float *)this + 7) > 0.0 || *(this + 0xA) == (MagicTarget *)4 ) /*0x6a4b72*/
    {
      v5 = *((float *)this + 6) * *(float *)&a2; /*0x6a4b7c*/
      ShieldEffect_ModSecondaryAV(this, (int)ParentActor, v5); /*0x6a4b8a*/
    }
  }
}
