int __userpurge EffectSetting_Filter_::CheckSchool@<eax>(int a1@<edi>, int a2@<esi>, int a3, int a4, int a5)
{
  int v5; // eax

  v5 = *(_DWORD *)(a1 + 0x64); /*0x4163e0*/
  if ( v5 == 6 || *(_DWORD *)(a2 + 0x64) == v5 ) /*0x4163f4*/
    return EffectSetting_Filter_::Return_1(a3, a4, a5); /*0x4163f5*/
  else
    return EffectSetting_Filter_::Return_0(a3, a4, a5); /*0x4163f4*/
}
