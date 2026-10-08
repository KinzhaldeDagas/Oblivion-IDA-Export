int __userpurge EffectSetting_LoadForm_::SetNewFlags@<eax>(
        int a1@<ebp>,
        _DWORD *a2@<esi>,
        int ebx0@<ebx>,
        int a4@<edi>,
        int a5)
{
  bool v5; // zf
  int v6; // ecx

  v5 = *(_BYTE *)(a1 - 5) == 0; /*0x41620a*/
  *a2 = a4; /*0x41620e*/
  if ( !v5 ) /*0x416210*/
  {
    v6 = *(_DWORD *)(a1 - 0xC); /*0x416212*/
    *a2 = a4 | 0x1000000; /*0x41621b*/
    *(_DWORD *)(ebx0 + 0x60) = v6; /*0x41621d*/
  }
  return EffectSetting_LoadForm_::Clear_UnkM(a1, a2, a5);
}
