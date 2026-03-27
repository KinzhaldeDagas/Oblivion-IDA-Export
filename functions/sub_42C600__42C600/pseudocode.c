int __thiscall sub_42C600(_RTL_CRITICAL_SECTION_0 **this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v6; // eax
  _DWORD *v7; // ecx
  char *v8; // edx
  int v9; // edi
  _RTL_CRITICAL_SECTION_0 *v10; // esi

  v4 = (int)*(this + 0x55);
  if ( v4 )
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 0x200), v4 + 0x3C);
  v5 = (int)*(this + 0xC);
  if ( v5 == 0xFFFFFFFF )
    v5 = (int)*(this + 0x52);
  v6 = (char *)*(this + 0x56) + v5;
  v7 = *(this + 0x55);
  v8 = (char *)v7[0xC];
  if ( v8 == (char *)0xFFFFFFFF )
    v8 = (char *)v7[0x52];
  if ( v8 != v6 )
    (*(void (__thiscall **)(_DWORD *, char *, _DWORD))(*v7 + 0xC))(v7, v6, 0);
  v9 = (*(int (__thiscall **)(_DWORD, int, _DWORD))&(*(this + 0x55))->DebugInfo[1].Type)(
         *(this + 0x55),
         a2,
         *(this + 0x54));
  *(this + 0x52) = (_RTL_CRITICAL_SECTION_0 *)((char *)*(this + 0x52) + v9);
  v10 = *(this + 0x55);
  if ( v10 )
    NiLeaveCriticalSection_0(v10 + 0x10);
  return v9;
}
