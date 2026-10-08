Actor *__thiscall MagicTarget_GetParentActor(MagicTarget *this)
{
  if ( ((unsigned __int8 (__thiscall *)(MagicTarget *))this->vtbl->IsActor)(this) ) /*0x6a1d78*/
    return (Actor *)(this - 0xD);               // MAgic Target is at position 0x68 inside an Actor, so this function pratically get the original actor from a MagicTarget pointer. /*0x6a1d7e*/
                                                //
  else
    return 0; /*0x6a1d83*/
}
