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

  __asm { fstp    st } /*0x4147fe*/
  v26 = FormHeapAlloc(0x18u); /*0x414800*/
  if ( v26 == a1 ) /*0x41480a*/
  {
    v26 = 0; /*0x414819*/
  }
  else
  {
    *(_DWORD *)(v26 + 8) = a1; /*0x41480c*/
    *(_WORD *)(v26 + 0xC) = a1; /*0x41480f*/
    *(_WORD *)(v26 + 0xE) = a1; /*0x414813*/
  }
  v27 = a2[7]; /*0x41481b*/
  a2[6] = v26; /*0x414828*/
  EffectSetting_GetName(v27, &v29); /*0x41482b*/
  EffectItem_SetSCITName(a2, v29.m_data, *(int *)&v29.m_dataLen); /*0x414832*/
  return EffectItem_Initialize_::InitSCIT_School(a1, (int)a2, a3);
}
