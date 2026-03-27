int __usercall sub_69F100@<eax>(double a1@<st2>, double a2@<st1>)
{
  int result; // eax
  TESAmmo *v3; // esi
  TESAmmo *v4; // eax
  double v5; // st7
  TESWorldSpace **v6; // ecx

  result = dword_B3C0CC;
  v3 = 0;
  if ( !dword_B3C0CC )
  {
    v4 = (TESAmmo *)FormHeapAlloc(0x84u);
    if ( v4 )
      v3 = TESAmmo::TESAmmo(v4);
    v5 = ((double (__thiscall *)(char *, const char *))*(_DWORD *)(*((_DWORD *)v3 + 0xC) + 0x18))(
           (char *)v3 + 0x30,
           "marker_error.nif");
    v6 = (TESWorldSpace **)TESDataHandler;
    dword_B3C0CC = (int)v3;
    TESDataHandler_AddForm(v6, a1, a2, v5, (unsigned __int8 *)v3);
    return dword_B3C0CC;
  }
  return result;
}
