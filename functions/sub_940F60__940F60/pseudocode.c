const char *__thiscall sub_940F60(int *this, unsigned int a2, _DWORD *a3, char *a4)
{
  const char *result; // eax
  _DWORD *v6; // esi
  unsigned int v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // [esp-10h] [ebp-14h]
  const char *v12; // [esp-10h] [ebp-14h]
  const char *v13; // [esp-10h] [ebp-14h]

  result = (const char *)sub_8B1550(this + 0x15, a2, 0xFFFFFFFF); /*0x940f6d*/
  if ( result == (const char *)0xFFFFFFFF ) /*0x940f75*/
  {
    v6 = a3; /*0x940f89*/
    result = (const char *)sub_8B1550(this + 0x18, (unsigned int)a3, 0xFFFFFFFF); /*0x940f8b*/
    if ( result == (const char *)0xFFFFFFFF ) /*0x940f93*/
    {
      while ( 1 ) /*0x940fa2*/
      {
        v7 = sub_90D1F0(v6); /*0x940fa2*/
        v6 = (_DWORD *)v7; /*0x940fa7*/
        if ( !v7 ) /*0x940fab*/
          break; /*0x940fab*/
        result = (const char *)sub_8B1550(this + 0x18, v7, 0xFFFFFFFF); /*0x940fb2*/
        if ( result != (const char *)0xFFFFFFFF ) /*0x940fba*/
          return result; /*0x940fba*/
      }
      v11 = (const char *)sub_90D1E0(unk_BA8788); /*0x940fcd*/
      v8 = (const char *)sub_90D1E0(a3); /*0x940fd0*/
      if ( !sub_8B1770(v8, v11) ) /*0x940fd6*/
        sub_940EF0(this, off_B30594); /*0x940feb*/
      v12 = (const char *)sub_90D1E0(unk_BA8764); /*0x940ffa*/
      v9 = (const char *)sub_90D1E0(a3); /*0x940ffd*/
      if ( !sub_8B1770(v9, v12) ) /*0x941003*/
        sub_940EF0(this, off_B30594); /*0x941018*/
      v13 = (const char *)sub_90D1E0(unk_BA871C); /*0x941027*/
      v10 = (const char *)sub_90D1E0(a3); /*0x94102a*/
      if ( sub_8B1770(v10, v13) ) /*0x941030*/
        return sub_940EF0(this, a4); /*0x941057*/
      else
        return sub_940EF0(this, off_B30594); /*0x941044*/
    }
  }
  return result; /*0x940fbf*/
}
