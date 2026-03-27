int __userpurge EffectSetting_Filter_::CheckForceFlags@<eax>(
        int a1@<esi>,
        int edi0@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  if ( a7 && (a7 & *(_DWORD *)(a1 + 0x58)) == a7 )
    return EffectSetting_Filter_::Return_0(a3, a4, a5);
  else
    return EffectSetting_Filter_::CheckMeta(a1, edi0, a3, a4, a5);
}
