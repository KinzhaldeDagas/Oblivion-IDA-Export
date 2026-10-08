void __userpurge MagicItemObject_LoadForm_::EffectLoopBody(
        _DWORD *a1@<eax>,
        int a2@<ecx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5)
{
  if ( *a1 ) /*0x41b720*/
    MagicItemObject_LoadForm_::EffectLoopContinue(a3, a4, (int)a1, a2 + 1, a5); /*0x41b726*/
  else
    MagicItemObject_LoadForm_::EffectLoopContinue(a3, a4, (int)a1, a2, a5); /*0x41b723*/
}
