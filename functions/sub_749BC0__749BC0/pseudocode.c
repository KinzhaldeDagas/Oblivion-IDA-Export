TESForm *__thiscall sub_749BC0(unsigned __int16 *this, _DWORD *a2)
{
  TESForm *result; // eax
  TESForm *v4; // ebx
  volatile LONG *v5; // eax

  sub_717900(this, a2); /*0x749bc9*/
  result = (TESForm *)sub_7124D0(a2); /*0x749bd0*/
  if ( result ) /*0x749bd7*/
  {
    v4 = result; /*0x749bda*/
    do /*0x749bf2*/
    {
      v5 = (volatile LONG *)sub_7124A0(a2); /*0x749be2*/
      result = sub_749990(this, v5); /*0x749bea*/
      v4 = (TESForm *)((char *)v4 + 0xFFFFFFFF); /*0x749bef*/
    }
    while ( v4 ); /*0x749bf2*/
  }
  return result; /*0x749bf5*/
}
