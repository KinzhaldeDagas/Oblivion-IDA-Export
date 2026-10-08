void __usercall MsgBox_ServeSentenceCallback(
        TESSkill_RecordView *a1@<ebx>,
        signed int a2@<edi>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>)
{
  if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x671607*/
    ServeSentence((Actor *)reference, a1, a2, a3, a6, a7, a8, a9, a10, a4, a5);// Medium Armor sidecar boundary: prison message-box callback returns from native ServeSentence path; apply plugin-owned Medium Armor loss without extending native skill arrays. /*0x67160f*/
}
