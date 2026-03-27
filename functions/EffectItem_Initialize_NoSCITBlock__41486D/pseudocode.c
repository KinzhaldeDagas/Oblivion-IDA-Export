int __userpurge EffectItem_Initialize_::NoSCITBlock@<eax>(int a1@<ebx>, int a2@<esi>, int a3)
{
  *(_DWORD *)(a2 + 0x18) = a1;
  return EffectItem_Initialize_::CheckOnSelf(a1, a2, a3);
}
