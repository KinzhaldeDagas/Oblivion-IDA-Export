void __thiscall sub_645500(HighProcess *this, TESObjectREFR *a2)
{
  TESObjectREFR **unk044; // eax
  TESObjectREFR **unk048; // eax
  int *p_unk03C; // eax
  TESObjectREFR **v6; // esi
  int *p_unk04C; // esi
  int *v8; // edi
  int *v9; // eax

  unk044 = (TESObjectREFR **)this->unk044;
  if ( unk044 )
  {
    if ( *unk044 == a2 )
    {
      FormHeapFree((unsigned int)unk044);
      this->unk044 = 0;
    }
  }
  unk048 = (TESObjectREFR **)this->unk048;
  if ( unk048 )
  {
    if ( *unk048 == a2 )
    {
      FormHeapFree(this->unk048);
      this->unk048 = 0;
    }
  }
  p_unk03C = (int *)&this->unk03C;
  if ( this != (HighProcess *)0xFFFFFFC4 )
  {
    do
    {
      v6 = (TESObjectREFR **)*p_unk03C;
      if ( !*p_unk03C )
        break;
      if ( *v6 == a2 )
      {
        BSSimpleList_Remove(&this->unk03C, *p_unk03C);
        FormHeapFree((unsigned int)v6);
        p_unk03C = (int *)&this->unk03C;
      }
      else
      {
        p_unk03C = (int *)p_unk03C[1];
      }
    }
    while ( p_unk03C );
  }
  if ( this->unk030 == a2 )
    this->unk030 = 0;
  p_unk04C = (int *)&this->unk04C;
  v8 = 0;
  while ( p_unk04C )
  {
    if ( !*p_unk04C )
      break;
    if ( (TESObjectREFR *)*p_unk04C == a2 )
    {
      if ( v8 )
      {
        BSSimpleList_Remove(v8, *p_unk04C);
        p_unk04C = (int *)v8[1];
      }
      else
      {
        v9 = (int *)p_unk04C[1];
        if ( v9 )
        {
          p_unk04C[1] = v9[1];
          *p_unk04C = *v9;
          FormHeapFree((unsigned int)v9);
        }
        else
        {
          *p_unk04C = 0;
        }
      }
    }
    else
    {
      v8 = p_unk04C;
      p_unk04C = (int *)p_unk04C[1];
    }
  }
}
