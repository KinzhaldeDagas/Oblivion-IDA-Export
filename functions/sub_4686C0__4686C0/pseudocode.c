void __cdecl sub_4686C0(Actor *a1, int a2, int a3, float a4)
{
  TESForm *ActorBaseForm; // eax
  TESForm::FormFlags *p_flags; // eax
  TESForm *v6; // eax

  if ( a1 )
  {
    ActorBaseForm = Actor_GetActorBaseForm(a1, 1);
    if ( ActorBaseForm )
    {
      p_flags = &ActorBaseForm[4].member.flags;
      if ( p_flags )
      {
        if ( !*((_DWORD *)p_flags + 5) && !*((_DWORD *)p_flags + 4) )
        {
          v6 = Actor_GetActorBaseForm(a1, 0);
          if ( !v6 )
            return;
          p_flags = &v6[4].member.flags;
        }
        if ( p_flags )
          sub_5692E0((int *)p_flags + 4, (int)a1, a2, a3, a4);
      }
    }
  }
}
