int __usercall EffectItem_CopyFrom_::CopyRange@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  EffectItem_SetRange(a2, *(_DWORD *)(a1 + 0x10));
  return EffectItem_CopyFrom_::CopyMagnitude(a1, a2, a3, a4, a5, a6, a7);
}
