int __userpurge EffectItem_Initialize_::InitSCIT_Flags@<eax>(int a1@<ebx>, int a2@<esi>, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a2 + 0x18);
  if ( v3 != a1 )
    *(_BYTE *)(v3 + 0x14) = a1;
  return EffectItem_Initialize_::CheckOnSelf(a1, a2, a3);
}
