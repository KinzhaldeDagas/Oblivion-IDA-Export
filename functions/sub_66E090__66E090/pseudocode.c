void __userpurge sub_66E090(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  double v6; // st6
  float v7; // [esp+8h] [ebp-4h]

  if ( !a1[0x15F] ) /*0x66e094*/
  {
    v6 = ((double (__usercall *)@<st0>(_DWORD *@<ecx>, double@<st0>, double@<st1>))*(_DWORD *)(*a1 + 0xEC))(a1, a4, a3); /*0x66e0a5*/
    v7 = a4 * unk_B37D28; /*0x66e0b2*/
    sub_66D120((int)a1, a2, v6, v7, a5, 2, v7); /*0x66e0c2*/
  }
}
