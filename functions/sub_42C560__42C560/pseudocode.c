int __thiscall sub_42C560(_RTL_CRITICAL_SECTION_0 **this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v6; // eax
  _DWORD *v7; // ecx
  char *v8; // edx
  int v9; // edi
  _RTL_CRITICAL_SECTION_0 *v10; // esi

  v4 = (int)*(this + 0x55); /*0x42c563*/
  if ( v4 ) /*0x42c56c*/
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 0x200), v4 + 0x3C); /*0x42c578*/
  v5 = (int)*(this + 0xC); /*0x42c57d*/
  if ( v5 == 0xFFFFFFFF ) /*0x42c583*/
    v5 = (int)*(this + 0x52); /*0x42c585*/
  v6 = (char *)*(this + 0x56) + v5; /*0x42c591*/
  v7 = *(this + 0x55); /*0x42c593*/
  v8 = (char *)v7[0xC]; /*0x42c599*/
  if ( v8 == (char *)0xFFFFFFFF ) /*0x42c59f*/
    v8 = (char *)v7[0x52]; /*0x42c5a1*/
  if ( v8 != v6 ) /*0x42c5a9*/
    (*(void (__thiscall **)(_DWORD *, char *, _DWORD))(*v7 + 0xC))(v7, v6, 0); /*0x42c5b3*/
  v9 = ((int (__thiscall *)(_DWORD, int, _DWORD))(*(this + 0x55))->DebugInfo[1].CriticalSection)( /*0x42c5ce*/
         *(this + 0x55),
         a2,
         *(this + 0x54));
  *(this + 0x52) = (_RTL_CRITICAL_SECTION_0 *)((char *)*(this + 0x52) + v9); /*0x42c5d0*/
  v10 = *(this + 0x55); /*0x42c5d6*/
  if ( v10 ) /*0x42c5de*/
    NiLeaveCriticalSection_0(v10 + 0x10); /*0x42c5e6*/
  return v9; /*0x42c5ed*/
}
