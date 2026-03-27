void __userpurge MagicItemObject_LoadForm_::EffectLoopContinue(
        int a1@<ebp>,
        int a2@<edi>,
        int eax0@<eax>,
        int a4@<ecx>,
        int a5)
{
  _DWORD *v5; // eax

  v5 = *(_DWORD **)(eax0 + 4);
  if ( v5 )
  {
    MagicItemObject_LoadForm_::EffectLoopBody(v5, a4, a1, a2, a5);
  }
  else if ( a4 )
  {
    MagicItemObject_LoadForm_::Return_1(a1, a5);
  }
  else
  {
    MagicItemObject_LoadForm_::GetItemName(a1, a2, a5);
  }
}
