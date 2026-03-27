int __userpurge Actor_SetDispositionBonus_::FindEntryLoop@<eax>(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  while ( 1 )
  {
    if ( !*a1 )
      return Actor_SetDispositionBonus_::NewDispositionEntry(a2, a3);
    if ( *(_DWORD *)(*a1 + 4) == a6 )
      break;
    a1 = (_DWORD *)a1[1];
    if ( !a1 )
      return Actor_SetDispositionBonus_::NewDispositionEntry(a2, a3);
  }
  return Actor_SetDispositionBonus_::ChangeExistingModifier(a2, a3);
}
