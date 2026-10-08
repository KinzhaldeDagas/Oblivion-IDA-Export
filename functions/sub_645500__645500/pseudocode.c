void __thiscall sub_645500(HighProcess *this, TESObjectREFR *a2)
{
  TESObjectREFR **unk044; // eax
  TESObjectREFR **unk048; // eax
  int *p_unk03C; // eax
  TESObjectREFR **v6; // esi
  int *p_unk04C; // esi
  int *v8; // edi
  int *v9; // eax

  unk044 = (TESObjectREFR **)this->unk044; /*0x645505*/
  if ( unk044 ) /*0x64550a*/
  {
    if ( *unk044 == a2 ) /*0x645512*/
    {
      FormHeapFree((unsigned int)unk044); /*0x645515*/
      this->unk044 = 0; /*0x64551d*/
    }
  }
  unk048 = (TESObjectREFR **)this->unk048; /*0x645524*/
  if ( unk048 ) /*0x645529*/
  {
    if ( *unk048 == a2 ) /*0x645531*/
    {
      FormHeapFree(this->unk048); /*0x645534*/
      this->unk048 = 0; /*0x64553c*/
    }
  }
  p_unk03C = (int *)&this->unk03C; /*0x645546*/
  if ( this != (HighProcess *)0xFFFFFFC4 ) /*0x64554a*/
  {
    do /*0x645578*/
    {
      v6 = (TESObjectREFR **)*p_unk03C; /*0x645550*/
      if ( !*p_unk03C ) /*0x645550*/
        break; /*0x645554*/
      if ( *v6 == a2 ) /*0x64555c*/
      {
        BSSimpleList_Remove((int *)&this->unk03C, *p_unk03C); /*0x645561*/
        FormHeapFree((unsigned int)v6); /*0x645567*/
        p_unk03C = (int *)&this->unk03C; /*0x64556f*/
      }
      else
      {
        p_unk03C = (int *)p_unk03C[1]; /*0x645573*/
      }
    }
    while ( p_unk03C ); /*0x645578*/
  }
  if ( this->unk030 == a2 ) /*0x645581*/
    this->unk030 = 0; /*0x645583*/
  p_unk04C = (int *)&this->unk04C; /*0x64558a*/
  v8 = 0; /*0x64558d*/
  while ( p_unk04C ) /*0x645591*/
  {
    if ( !*p_unk04C ) /*0x645593*/
      break; /*0x645597*/
    if ( (TESObjectREFR *)*p_unk04C == a2 ) /*0x64559d*/
    {
      if ( v8 ) /*0x6455a1*/
      {
        BSSimpleList_Remove(v8, *p_unk04C); /*0x6455a6*/
        p_unk04C = (int *)v8[1]; /*0x6455ab*/
      }
      else
      {
        v9 = (int *)p_unk04C[1]; /*0x6455b0*/
        if ( v9 ) /*0x6455b5*/
        {
          p_unk04C[1] = v9[1]; /*0x6455ba*/
          *p_unk04C = *v9; /*0x6455c0*/
          FormHeapFree((unsigned int)v9); /*0x6455c2*/
        }
        else
        {
          *p_unk04C = 0; /*0x6455cc*/
        }
      }
    }
    else
    {
      v8 = p_unk04C; /*0x6455d4*/
      p_unk04C = (int *)p_unk04C[1]; /*0x6455d6*/
    }
  }
}
