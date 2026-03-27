char **__thiscall BaseProcess_UseCounterEffect__(char ****this, int a2)
{
  char ***v2; // esi
  char **v3; // ebx
  char **v4; // edi

  v2 = *(this + 0x19);
  v3 = 0;
  if ( !v2 )
    return 0;
  do
  {
    if ( !v2[1] && !*v2 )
      break;
    if ( v3 )
      goto LABEL_10;
    v4 = *v2;
    if ( EffectItemList_HasEffect((_DWORD *)**v2 + 3, a2, 0x48) )
      v3 = v4;
    else
      v2 = (char ***)v2[1];
  }
  while ( v2 );
  if ( !v3 )
    return v3;
LABEL_10:
  if ( *v3 )
  {
    if ( !sub_419D90(*v3) )
      sub_41A610(*v3, 0);
  }
  return v3;
}
