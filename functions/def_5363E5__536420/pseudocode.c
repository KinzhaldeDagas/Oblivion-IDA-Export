// positive sp value has been detected, the output may be wrong!
void __cdecl def_5363E5(int a1)
{
  __asm
  {
    fstp    st; jumptable 005363E5 default case
    fmul    [esp+arg_4]
    fstp    [esp+arg_4]
    fld     [esp+arg_4]
  }
}
