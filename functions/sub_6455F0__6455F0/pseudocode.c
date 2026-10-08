void __thiscall sub_6455F0(HighProcess *this, int a2)
{
  UInt32 unk044; // eax
  UInt32 unk048; // eax
  int *p_unk03C; // eax
  unsigned int v6; // esi
  TESObjectREFR *unk030; // eax
  int *p_unk04C; // esi
  int *v9; // edi
  int *v10; // eax

  unk044 = this->unk044; /*0x6455f5*/
  if ( unk044 ) /*0x6455fa*/
  {
    if ( *(_DWORD *)(*(_DWORD *)unk044 + 0xC) == a2 ) /*0x645605*/
    {
      FormHeapFree(unk044); /*0x645608*/
      this->unk044 = 0; /*0x645610*/
    }
  }
  unk048 = this->unk048; /*0x645617*/
  if ( unk048 ) /*0x64561c*/
  {
    if ( *(_DWORD *)(*(_DWORD *)unk048 + 0xC) == a2 ) /*0x645627*/
    {
      FormHeapFree(this->unk048); /*0x64562a*/
      this->unk048 = 0; /*0x645632*/
    }
  }
  p_unk03C = (int *)&this->unk03C; /*0x64563c*/
  if ( this != (HighProcess *)0xFFFFFFC4 ) /*0x645640*/
  {
    do /*0x64566d*/
    {
      v6 = *p_unk03C; /*0x645642*/
      if ( !*p_unk03C ) /*0x645642*/
        break; /*0x645646*/
      if ( *(_DWORD *)(*(_DWORD *)v6 + 0xC) == a2 ) /*0x645651*/
      {
        BSSimpleList_Remove((int *)&this->unk03C, *p_unk03C); /*0x645656*/
        FormHeapFree(v6); /*0x64565c*/
        p_unk03C = (int *)&this->unk03C; /*0x645664*/
      }
      else
      {
        p_unk03C = (int *)p_unk03C[1]; /*0x645668*/
      }
    }
    while ( p_unk03C ); /*0x64566d*/
  }
  unk030 = this->unk030; /*0x64566f*/
  if ( unk030 ) /*0x645674*/
  {
    if ( unk030->member.super.refID == a2 ) /*0x64567d*/
      this->unk030 = 0; /*0x64567f*/
  }
  p_unk04C = (int *)&this->unk04C; /*0x645686*/
  v9 = 0; /*0x645689*/
  while ( p_unk04C ) /*0x64568d*/
  {
    if ( !*p_unk04C ) /*0x645690*/
      break; /*0x645694*/
    if ( *(_DWORD *)(*p_unk04C + 0xC) == a2 ) /*0x64569d*/
    {
      if ( v9 ) /*0x6456a1*/
      {
        BSSimpleList_Remove(v9, *p_unk04C); /*0x6456a6*/
        p_unk04C = (int *)v9[1]; /*0x6456ab*/
      }
      else
      {
        v10 = (int *)p_unk04C[1]; /*0x6456b0*/
        if ( v10 ) /*0x6456b5*/
        {
          p_unk04C[1] = v10[1]; /*0x6456ba*/
          *p_unk04C = *v10; /*0x6456c0*/
          FormHeapFree((unsigned int)v10); /*0x6456c2*/
        }
        else
        {
          *p_unk04C = 0; /*0x6456cc*/
        }
      }
    }
    else
    {
      v9 = p_unk04C; /*0x6456d4*/
      p_unk04C = (int *)p_unk04C[1]; /*0x6456d6*/
    }
  }
}
