char **__thiscall BaseProcess_UseCounterEffect__(char ****this, int a2)
{
  char ***v2; // esi
  char **v3; // ebx
  char **v4; // edi

  v2 = *(this + 0x19); /*0x613812*/
  v3 = 0; /*0x613815*/
  if ( !v2 ) /*0x613819*/
    return 0; /*0x613874*/
  do /*0x61384c*/
  {
    if ( !v2[1] && !*v2 ) /*0x613827*/
      break; /*0x61382a*/
    if ( v3 ) /*0x61382e*/
      goto LABEL_10; /*0x61382e*/
    v4 = *v2; /*0x613830*/
    if ( EffectItemList_HasEffect((_DWORD *)**v2 + 3, a2, 0x48) ) /*0x61383a*/
      v3 = v4; /*0x613843*/
    else
      v2 = (char ***)v2[1]; /*0x613847*/
  }
  while ( v2 ); /*0x61384c*/
  if ( !v3 ) /*0x613850*/
    return v3; /*0x613850*/
LABEL_10:
  if ( *v3 ) /*0x613852*/
  {
    if ( !sub_419D90(*v3) ) /*0x613858*/
      MagicItem_LoadVFXModels(*v3, 0); /*0x613865*/
  }
  return v3; /*0x61386c*/
}
