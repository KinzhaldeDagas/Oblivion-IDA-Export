int __thiscall Actor_ProcessMagicEffect(Actor *this, int a2)
{
  MagicCaster *p_magicCaster; // edi
  BSAnimGroupSequence *v4; // eax
  LowProcess *process; // ecx

  p_magicCaster = &this->members.magicCaster;
  if ( this->members.magicCaster.vtbl->GetActiveMagicItem(&this->members.magicCaster) )
  {
    v4 = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process);
    if ( v4 )
    {
      switch ( TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v4 + 0x1A)) )
      {
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
          break;
        default:
          goto Actor_ProcessMagic????___def_5F441D;
      }
    }
    else
    {
Actor_ProcessMagic????___def_5F441D:
      p_magicCaster->vtbl->SetActiveMagicItem(p_magicCaster, 0);
    }
  }
  process = this->members.super.process;
  if ( process )
  {
    if ( ((unsigned __int8 (__thiscall *)(LowProcess *))process->Unk_AD)(process) )
      sub_5F4190(this);
  }
  if ( this->members.magicCaster.magicNode )
    sub_699C10(p_magicCaster, *(float *)&a2);
  MagicCaster_GetActiveMagicItem_wrapper(p_magicCaster, a2);
  return MagicTarget_ProcessEffects(&this->members.magicTarget, a2);
}
