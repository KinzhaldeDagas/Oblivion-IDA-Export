Actor *__thiscall MagicTarget_GetParentActor(MagicTarget *this)
{
  if ( this->vtbl->GetActiveEffectList(this) )
    return (Actor *)(this - 0xD);               // MAgic Target is at position 0x68 inside an Actor, so this function pratically get the original actor from a MagicTarget pointer.
                                                // 
  else
    return 0;
}
