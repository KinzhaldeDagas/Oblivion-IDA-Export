int __usercall EffectItem_Initialize_::AllocateSCIT@<eax>(
        int a1@<ebx>,
        _DWORD *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26)
{
  int v26; // eax
  int v27; // ecx
  BSStringT v29; // [esp-8h] [ebp-8h] BYREF

  __asm { fstp    st }
  v26 = FormHeapAlloc(0x18u);
  if ( v26 == a1 )
  {
    v26 = 0;
  }
  else
  {
    *(_DWORD *)(v26 + 8) = a1;
    *(_WORD *)(v26 + 0xC) = a1;
    *(_WORD *)(v26 + 0xE) = a1;
  }
  v27 = a2[7];
  a2[6] = v26;
  EffectSetting_GetName(v27, &v29);
  EffectItem_SetSCITName(a2, v29.m_data, *(int *)&v29.m_dataLen);
  return EffectItem_Initialize_::InitSCIT_School(a1, (int)a2, a3);
}
