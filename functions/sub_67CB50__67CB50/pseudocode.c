char __thiscall sub_67CB50(int *this, Actor *a2)
{
  TESForm *ActorBaseForm; // eax
  char v4; // al
  int i; // esi
  int *j; // eax
  int v8; // ecx

  ActorBaseForm = Actor_GetActorBaseForm(a2, 0);
  TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID);
  if ( v4 )
    return 1;
  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    if ( !*(_DWORD *)i )
      break;
    for ( j = **(int ***)i; j; j = (int *)j[1] )
    {
      v8 = *j;
      if ( !*j )
        break;
      if ( *(Actor **)v8 == a2 )
      {
        if ( v8 && *(_BYTE *)(v8 + 4) )
          return 1;
        break;
      }
    }
  }
  return 0;
}
