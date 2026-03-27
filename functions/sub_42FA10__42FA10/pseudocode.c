int __thiscall sub_42FA10(int this, int a2, int a3)
{
  void *v4; // ecx
  int result; // eax

  if ( !*(_BYTE *)(this + 4) )
  {
    v4 = *(void **)(this + 0xC);
    if ( v4 )
    {
      *(_BYTE *)(this + 4) = 1;
      sub_47CFD0(v4);
      nullsub_returnvVoid_1arg(a3);
      sub_47CFA0(*(int **)(this + 0xC), a2);
      return sub_47CF50(*(struct _RTL_CRITICAL_SECTION ***)(this + 0xC));
    }
  }
  return result;
}
