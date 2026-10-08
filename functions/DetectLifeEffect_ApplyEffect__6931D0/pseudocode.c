char __thiscall DetectLifeEffect_ApplyEffect(float *this)
{
  PlayerCharacter *v2; // eax
  float v4; // [esp+0h] [ebp-4h]

  ValueModifierEffect_Apply(this, v4); /*0x6931d3*/
  v2 = (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 4))(*((_DWORD *)this + 8)); /*0x6931e0*/
  if ( v2 == reference ) /*0x6931eb*/
  {
    LOBYTE(v2) = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_DetectLifeRange) > 0; /*0x6931fb*/
    unk_B3C0AB = (char)v2; /*0x6931fe*/
  }
  return (char)v2; /*0x6931ea*/
}
