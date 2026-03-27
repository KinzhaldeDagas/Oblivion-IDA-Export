BOOL __userpurge sub_66DFD0@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  InputGlobal *input; // edi
  double v7; // st6
  float v9; // [esp+Ch] [ebp-4h]

  if ( *(_DWORD *)&a1[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 2 )
  {
    input = OSGlobals->input;
    if ( *(_DWORD *)a1[0xF].member.baseExtraList.members.m_presenceBitfield
      || (v7 = ((double (__usercall *)@<st0>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a1->vtbl->GetScale)(
                 a1,
                 a4,
                 a3),
          v9 = a4 * flt_B37D28,
          sub_66D120(
            (int)a1,
            a2,
            v7,
            v9,
            *(TESObjectREFR **)&a1[0xF].member.baseExtraList.members.m_presenceBitfield[4],
            2,
            v9),
          *(_DWORD *)a1[0xF].member.baseExtraList.members.m_presenceBitfield) )
    {
      if ( !InputGlobals::QueryControlState(input, 4, 2)
        && (InputGlobals::QueryControlState(input, 4, 1) || InputGlobals::QueryControlState(input, 4, 0)) )
      {
        sub_66D930(a1, a5);
        return *(_DWORD *)&a1[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 2;
      }
      sub_66A670(a1);
    }
  }
  return *(_DWORD *)&a1[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 2;
}
