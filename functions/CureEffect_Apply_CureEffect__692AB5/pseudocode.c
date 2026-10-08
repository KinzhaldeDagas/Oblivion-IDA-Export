void __usercall CureEffect_Apply_::CureEffect(unsigned int a1@<eax>, int a2@<ecx>)
{
  MagicTarget_RemoveActiveEffectsByCode(*(MagicTarget **)(a2 + 0x20), a1, 0); /*0x692abb*/
}
