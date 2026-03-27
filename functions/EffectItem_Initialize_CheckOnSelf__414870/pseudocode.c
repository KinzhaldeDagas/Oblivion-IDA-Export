int __userpurge EffectItem_Initialize_::CheckOnSelf@<eax>(int a1@<ebx>, int a2@<esi>, int a3)
{
  if ( (*(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x58) & 0x10) == 0 )
    return EffectItem_Initialize_::CheckOnTouch(*(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x58), a2, a3);
  *(_DWORD *)(a2 + 0x10) = a1;
  return EffectItem_Initialize_::Done(a3);
}
