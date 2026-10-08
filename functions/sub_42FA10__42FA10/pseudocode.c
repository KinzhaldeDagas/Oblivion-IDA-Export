DWORD __thiscall sub_42FA10(int this, int a2, int a3)
{
  void *v4; // ecx
  DWORD result; // eax

  if ( !*(_BYTE *)(this + 4) ) /*0x42fa13*/
  {
    v4 = *(void **)(this + 0xC); /*0x42fa19*/
    if ( v4 ) /*0x42fa1e*/
    {
      *(_BYTE *)(this + 4) = 1; /*0x42fa20*/
      sub_47CFD0(v4); /*0x42fa24*/
      nullsub_returnvVoid_1arg(a3); /*0x42fa31*/
      sub_47CFA0(*(int **)(this + 0xC), a2); /*0x42fa3e*/
      return sub_47CF50(*(struct _RTL_CRITICAL_SECTION ***)(this + 0xC)); /*0x42fa46*/
    }
  }
  return result; /*0x42fa4b*/
}
