int __usercall ActiveEffect_Base_ProcessEffect_::TestApply@<eax>(
        ActiveEffect *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        float a6)
{
  bool v6; // c0
  bool v7; // c3
  double v8; // st5

  v6 = a6 < a3;
  v7 = a6 == a3;
  v8 = a6;
  if ( v6 || v7 || a1->members.bTerminated )
    return ActiveEffect_Base_ProcessEffect_::TestTerminate_();
  if ( a1->members.bApplied )
    return ActiveEffect_Base_ProcessEffect_::TestUpdate((int)a1, a2, v8, a4, a5);
  return ActiveEffect_Base_ProcessEffect_::TestMenuMode_((int)a1, a2, v8, a4, a5);
}
