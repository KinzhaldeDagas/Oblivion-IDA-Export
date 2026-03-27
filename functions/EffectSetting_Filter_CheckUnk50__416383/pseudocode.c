int __userpurge EffectSetting_Filter_::CheckUnk50@<eax>(
        int a1@<esi>,
        int edi0@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  unsigned __int8 (__cdecl *v7)(int, _DWORD); // eax

  v7 = *(unsigned __int8 (__cdecl **)(int, _DWORD))(edi0 + 0x50);
  if ( v7 && !v7(a1, *(_DWORD *)(edi0 + 0x54)) )
    return EffectSetting_Filter_::Return_0(a3, a4, a5);
  else
    return EffectSetting_Filter_::CheckFlags(a1, edi0, a3, a4, a5, a6, a7);
}
