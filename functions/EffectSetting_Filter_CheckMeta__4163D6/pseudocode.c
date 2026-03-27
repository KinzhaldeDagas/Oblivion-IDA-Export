int __userpurge EffectSetting_Filter_::CheckMeta@<eax>(int a1@<esi>, int edi0@<edi>, int a3, int a4, int a5)
{
  if ( (*(_DWORD *)(a1 + 0x58) & 0x800000) != 0 )
    return EffectSetting_Filter_::Return_0(a3, a4, a5);
  else
    return EffectSetting_Filter_::CheckSchool(edi0, a1, a3, a4, a5);
}
