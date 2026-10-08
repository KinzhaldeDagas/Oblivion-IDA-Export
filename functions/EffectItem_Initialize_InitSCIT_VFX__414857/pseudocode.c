int __userpurge EffectItem_Initialize_::InitSCIT_VFX@<eax>(int a1@<ebx>, int a2@<esi>, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a2 + 0x18); /*0x414857*/
  if ( v3 != a1 ) /*0x41485c*/
    *(_DWORD *)(v3 + 0x10) = a1; /*0x41485e*/
  return EffectItem_Initialize_::InitSCIT_Flags(a1, a2, a3);
}
