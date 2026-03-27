int __userpurge EffectSetting_LoadForm_::SetNewFlags@<eax>(
        int a1@<ebp>,
        _DWORD *a2@<esi>,
        int ebx0@<ebx>,
        int a4@<edi>,
        int a5)
{
  bool v5; // zf
  int v6; // ecx

  v5 = *(_BYTE *)(a1 - 5) == 0;
  *a2 = a4;
  if ( !v5 )
  {
    v6 = *(_DWORD *)(a1 - 0xC);
    *a2 = a4 | 0x1000000;
    *(_DWORD *)(ebx0 + 0x60) = v6;
  }
  return EffectSetting_LoadForm_::Clear_UnkM(a1, a2, a5);
}
