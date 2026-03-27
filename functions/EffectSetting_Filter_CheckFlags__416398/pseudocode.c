int __userpurge EffectSetting_Filter_::CheckFlags@<eax>(
        int a1@<esi>,
        int edi0@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // eax
  bool v8; // al

  v7 = *(_DWORD *)(edi0 + 0x58);
  if ( v7 && (!(_BYTE)a6 ? (v8 = (v7 & *(_DWORD *)(a1 + 0x58)) == v7) : (v8 = (v7 & *(_DWORD *)(a1 + 0x58)) != 0), !v8) )
    return EffectSetting_Filter_::Return_0(a3, a4, a5);
  else
    return EffectSetting_Filter_::CheckForceFlags(a1, edi0, a3, a4, a5, a6, a7);
}
