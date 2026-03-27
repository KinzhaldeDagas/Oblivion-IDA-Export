int __userpurge SummonCreatureEffect_Update_::DispelThis@<eax>(
        ActiveEffect *a1@<esi>,
        char a2@<bpl>,
        double a3@<st0>,
        int a4)
{
  ActiveEffect_Base_Remove(a1, a2, a3, 0);
  return SummonCreatureEffect_Update_::Done(a4);
}
