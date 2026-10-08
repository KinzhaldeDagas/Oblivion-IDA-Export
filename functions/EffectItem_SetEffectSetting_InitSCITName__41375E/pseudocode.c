int __usercall EffectItem_SetEffectSetting_::InitSCITName@<eax>(
        int a1@<eax>,
        unsigned int a2@<ebx>,
        int a3@<ebp>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        BSStringT a9,
        int a10,
        int a11,
        unsigned int a12)
{
  BSStringT *v12; // ecx
  char *m_data; // [esp-8h] [ebp-8h]

  *(_DWORD *)(a1 + 8) = a2; /*0x41375e*/
  *(_WORD *)(a1 + 0xC) = a2; /*0x413761*/
  *(_WORD *)(a1 + 0xE) = a2; /*0x413765*/
  *(_DWORD *)(a4 + 0x18) = a1; /*0x41376d*/
  m_data = EffectSetting_GetName(a3, &a9)->m_data; /*0x413782*/
  v12 = (BSStringT *)(*(_DWORD *)(a4 + 0x18) + 8); /*0x413783*/
  a12 = a2; /*0x413786*/
  BSStringT_Set(v12, m_data, a2); /*0x41378a*/
  FormHeapFree((unsigned int)a9.m_data); /*0x413794*/
  return EffectItem_SetEffectSetting_::InitSCITData(a2, a3, a4, a5);
}
