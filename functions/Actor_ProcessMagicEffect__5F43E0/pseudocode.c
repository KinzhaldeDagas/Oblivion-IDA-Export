void __thiscall Actor_ProcessMagicEffect(Actor *this, int a2)
{
  MagicCaster *p_magicCaster; // edi
  BSAnimGroupSequence *v4; // eax
  LowProcess *process; // ecx

  p_magicCaster = &this->members.magicCaster; /*0x5f43ea*/
  if ( this->members.magicCaster.vtbl->GetActiveMagicItem(&this->members.magicCaster) ) /*0x5f43ef*/
  {
    v4 = this->members.super.process->GetCurrentActionAnimSequence(this->members.super.process); /*0x5f4400*/
    if ( v4 ) /*0x5f4404*/
    {
      switch ( TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v4 + 0x1A)) ) /*0x5f441d*/
      {
        case 0x14: /*0x5f441d*/
        case 0x15: /*0x5f441d*/
        case 0x16: /*0x5f441d*/
        case 0x22: /*0x5f441d*/
        case 0x23: /*0x5f441d*/
        case 0x24: /*0x5f441d*/
        case 0x25: /*0x5f441d*/
        case 0x26: /*0x5f441d*/
        case 0x27: /*0x5f441d*/
          break;
        default:
          goto Actor_ProcessMagic????___def_5F441D;
      }
    }
    else
    {
Actor_ProcessMagic????___def_5F441D:
      p_magicCaster->vtbl->SetActiveMagicItem(p_magicCaster, 0); /*0x5f4424*/
    }
  }
  process = this->members.super.process; /*0x5f442f*/
  if ( process ) /*0x5f4434*/
  {
    if ( ((unsigned __int8 (__thiscall *)(LowProcess *))process->Unk_AD)(process) ) /*0x5f443e*/
      sub_5F4190(this); /*0x5f4446*/
  }
  if ( this->members.magicCaster.magicNode ) /*0x5f444b*/
    sub_699C10(p_magicCaster, *(float *)&a2); /*0x5f445b*/
  MagicCaster_GetActiveMagicItem_wrapper(p_magicCaster, a2); /*0x5f446a*/
  MagicTarget_ProcessEffects(&this->members.magicTarget, *(float *)&a2); /*0x5f447a*/
}
