void __userpurge SummonCreatureEffect_Update_::DispelThis(
        ActiveEffect *a1@<esi>,
        char a2@<bpl>,
        double a3@<st0>,
        int a4)
{
  ActiveEffect_Base_Remove(a1, a2, a3, 0); /*0x6a5ee4*/
  SummonCreatureEffect_Update_::Done(a4); /*0x6a5ee5*/
}
