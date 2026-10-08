// positive sp value has been detected, the output may be wrong!
void __userpurge LevelUpMenu_HandleClick_::ExitButtonClicked(
        int a1@<edi>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        int a5)
{
  LevelUpMenu_ExitAndCommit(a1, a2, a3); /*0x5ac7bc*/
  sub_57DE50(1); /*0x5ac7c3*/
}
