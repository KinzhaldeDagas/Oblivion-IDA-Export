int __thiscall sub_42C600(_RTL_CRITICAL_SECTION_0 **this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v6; // eax
  _DWORD *v7; // ecx
  char *v8; // edx
  int v9; // edi
  _RTL_CRITICAL_SECTION_0 *v10; // esi

  v4 = (int)*(this + 0x55); /*0x42c603*/
  if ( v4 ) /*0x42c60c*/
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 0x200), v4 + 0x3C); /*0x42c618*/
  v5 = (int)*(this + 0xC); /*0x42c61d*/
  if ( v5 == 0xFFFFFFFF ) /*0x42c623*/
    v5 = (int)*(this + 0x52); /*0x42c625*/
  v6 = (char *)*(this + 0x56) + v5; /*0x42c631*/
  v7 = *(this + 0x55); /*0x42c633*/
  v8 = (char *)v7[0xC]; /*0x42c639*/
  if ( v8 == (char *)0xFFFFFFFF ) /*0x42c63f*/
    v8 = (char *)v7[0x52]; /*0x42c641*/
  if ( v8 != v6 ) /*0x42c649*/
    (*(void (__thiscall **)(_DWORD *, char *, _DWORD))(*v7 + 0xC))(v7, v6, 0); /*0x42c653*/
  v9 = (*(int (__thiscall **)(_DWORD, int, _DWORD))&(*(this + 0x55))->DebugInfo[1].Type)( /*0x42c66e*/
         *(this + 0x55),
         a2,
         *(this + 0x54));
  *(this + 0x52) = (_RTL_CRITICAL_SECTION_0 *)((char *)*(this + 0x52) + v9); /*0x42c670*/
  v10 = *(this + 0x55); /*0x42c676*/
  if ( v10 ) /*0x42c67e*/
    NiLeaveCriticalSection_0(v10 + 0x10); /*0x42c686*/
  return v9; /*0x42c68d*/
}
