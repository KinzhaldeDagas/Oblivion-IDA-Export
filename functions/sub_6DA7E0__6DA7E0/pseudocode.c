LONG __thiscall sub_6DA7E0(char *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // edi
  LONG v5; // ebx

  sub_6EC2B0((int)a2); /*0x6da7ea*/
  sub_709430(this + 0xC, (signed int)a2); /*0x6da7f3*/
  result = sub_712A90(a2); /*0x6da7fa*/
  v4 = *((_DWORD *)this + 6); /*0x6da7ff*/
  v5 = result; /*0x6da802*/
  if ( v4 != result ) /*0x6da806*/
  {
    if ( v4 ) /*0x6da80a*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6da810*/
      if ( !result ) /*0x6da818*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x6da826*/
    }
    *((_DWORD *)this + 6) = v5; /*0x6da82a*/
    if ( v5 ) /*0x6da82d*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6da833*/
  }
  return result; /*0x6da839*/
}
