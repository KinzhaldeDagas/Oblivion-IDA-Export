int __userpurge EffectItem_CopyFrom_::CopySCIT_Hostile@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4)
{
  int v4; // ecx

  v4 = *(_DWORD *)(a3 + 0x18);
  if ( v4 != a1 )
    *(_BYTE *)(v4 + 0x14) = *(_BYTE *)(*(_DWORD *)(a2 + 0x1C) + 0x58) & 1;
  return EffectItem_CopyFrom_::Done(a4);
}
