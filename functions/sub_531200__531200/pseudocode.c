int *__thiscall TESTopicInfo::GetInfoDisplayText(TESForm *this, unsigned int *a2, char a3)
{
  int *result; // eax
  int *v5; // esi
  TESResponse *v6; // ecx
  bool v7; // zf
  char *Text; // eax

  FormHeapFree(*a2); /*0x53120b*/
  *a2 = 0; /*0x531215*/
  *((_WORD *)a2 + 3) = 0; /*0x53121b*/
  *((_WORD *)a2 + 2) = 0; /*0x531221*/
  result = (int *)TESTopicInfo::GetResponseList((OblivionTopicInfo *)this); /*0x531227*/
  v5 = result; /*0x53122c*/
  if ( result ) /*0x531230*/
  {
    do /*0x531266*/
    {
      v6 = (TESResponse *)*v5; /*0x531232*/
      v7 = *v5 == 0; /*0x531234*/
      v5 = (int *)v5[1]; /*0x531236*/
      if ( !v7 ) /*0x531239*/
      {
        Text = (char *)TESResponse::GetText(v6); /*0x53123b*/
        result = (int *)BSStringT_Append((BSStringT *)a2, Text); /*0x531243*/
        if ( v5 ) /*0x53124a*/
        {
          if ( *v5 ) /*0x53124c*/
            result = (int *)BSStringT_Append((BSStringT *)a2, " | "); /*0x531258*/
        }
      }
    }
    while ( !a3 && v5 ); /*0x531266*/
  }
  return result; /*0x531268*/
}
