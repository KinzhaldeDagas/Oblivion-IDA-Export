int __usercall ActiveEffect_Base_ProcessEffect@<eax>(
        ActiveEffect *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st1>,
        double a4@<st0>,
        float a5)
{
  return ActiveEffect_Base_ProcessEffect_::TestApply(a1, a2, 0.0, a3, a4, a5);
}
