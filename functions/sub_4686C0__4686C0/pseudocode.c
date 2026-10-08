void __cdecl sub_4686C0(Actor *a1, TESPackage **a2, int a3, float a4)
{
  TESForm *ActorBaseForm; // eax
  TESForm::FormFlags *p_flags; // eax
  TESForm *v6; // eax

  if ( a1 ) /*0x4686c7*/
  {
    ActorBaseForm = Actor_GetActorBaseForm(a1, 1); /*0x4686cd*/
    if ( ActorBaseForm ) /*0x4686d4*/
    {
      p_flags = &ActorBaseForm[4].member.flags; /*0x4686d6*/
      if ( p_flags ) /*0x4686d9*/
      {
        if ( !*((_DWORD *)p_flags + 5) && !*((_DWORD *)p_flags + 4) ) /*0x4686e1*/
        {
          v6 = Actor_GetActorBaseForm(a1, 0); /*0x4686eb*/
          if ( !v6 ) /*0x4686f2*/
            return; /*0x4686f2*/
          p_flags = &v6[4].member.flags; /*0x4686f4*/
        }
        if ( p_flags ) /*0x4686f9*/
          sub_5692E0((int *)p_flags + 4, a1, a2, a3, a4); /*0x468716*/
      }
    }
  }
}
