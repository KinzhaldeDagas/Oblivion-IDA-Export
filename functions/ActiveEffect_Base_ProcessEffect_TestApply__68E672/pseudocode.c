// Verified apply/update state gate: if duration is expired or bTerminated is set, enters termination handling; otherwise bApplied selects the already-applied update path versus first-application/menu checks.
void __usercall ActiveEffect_Base_ProcessEffect_::TestApply(
        ActiveEffect *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        float a7)
{
  bool v7; // c0
  bool v8; // c3
  double v9; // st5

  v7 = *(float *)&a6 < a3; /*0x68e679*/
  v8 = *(float *)&a6 == a3; /*0x68e679*/
  v9 = *(float *)&a6; /*0x68e67d*/
  if ( v7 || v8 || a1->members.bTerminated ) /*0x68e688*/
  {
    ActiveEffect_Base_ProcessEffect_::TestTerminate_(a1, a6); /*0x68e682*/
  }
  else if ( a1->members.bApplied ) /*0x68e692*/
  {
    ActiveEffect_Base_ProcessEffect_::TestUpdate((int)a1, a2, v9, a4, a5, a6); /*0x68e696*/
  }
  else
  {
    ActiveEffect_Base_ProcessEffect_::TestMenuMode_((int)a1, a2, v9, a4, a5, a6, a7); /*0x68e697*/
  }
}
