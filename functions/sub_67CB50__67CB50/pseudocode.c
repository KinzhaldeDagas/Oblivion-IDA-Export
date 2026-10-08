char __thiscall sub_67CB50(int *this, Actor *a2)
{
  TESForm *ActorBaseForm; // eax
  char v4; // al
  int i; // esi
  int *j; // eax
  int v8; // ecx

  ActorBaseForm = Actor_GetActorBaseForm(a2, 0); /*0x67cb5c*/
  TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID); /*0x67cb66*/
  if ( v4 ) /*0x67cb6d*/
    return 1; /*0x67cb6f*/
  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x67cb7a*/
  {
    if ( !*(_DWORD *)i ) /*0x67cb80*/
      break; /*0x67cb84*/
    for ( j = **(int ***)i; j; j = (int *)j[1] ) /*0x67cb8a*/
    {
      v8 = *j; /*0x67cb90*/
      if ( !*j ) /*0x67cb90*/
        break; /*0x67cb90*/
      if ( *(Actor **)v8 == a2 ) /*0x67cb98*/
      {
        if ( v8 && *(_BYTE *)(v8 + 4) ) /*0x67cba7*/
          return 1; /*0x67cbab*/
        break; /*0x67cbab*/
      }
    }
  }
  return 0; /*0x67cb6f*/
}
