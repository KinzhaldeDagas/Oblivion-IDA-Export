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

  unk044 = this->unk044;
  if ( unk044 )
  {
    if ( *(_DWORD *)(*(_DWORD *)unk044 + 0xC) == a2 )
    {
      FormHeapFree(unk044);
      this->unk044 = 0;
    }
  }
  unk048 = this->unk048;
  if ( unk048 )
  {
    if ( *(_DWORD *)(*(_DWORD *)unk048 + 0xC) == a2 )
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
      v6 = *p_unk03C;
      if ( !*p_unk03C )
        break;
      if ( *(_DWORD *)(*(_DWORD *)v6 + 0xC) == a2 )
      {
        BSSimpleList_Remove(&this->unk03C, *p_unk03C);
        FormHeapFree(v6);
        p_unk03C = (int *)&this->unk03C;
      }
      else
      {
        p_unk03C = (int *)p_unk03C[1];
      }
    }
    while ( p_unk03C );
  }
  unk030 = this->unk030;
  if ( unk030 )
  {
    if ( unk030->member.super.refID == a2 )
      this->unk030 = 0;
  }
  p_unk04C = (int *)&this->unk04C;
  v9 = 0;
  while ( p_unk04C )
  {
    if ( !*p_unk04C )
      break;
    if ( *(_DWORD *)(*p_unk04C + 0xC) == a2 )
    {
      if ( v9 )
      {
        BSSimpleList_Remove(v9, *p_unk04C);
        p_unk04C = (int *)v9[1];
      }
      else
      {
        v10 = (int *)p_unk04C[1];
        if ( v10 )
        {
          p_unk04C[1] = v10[1];
          *p_unk04C = *v10;
          FormHeapFree((unsigned int)v10);
        }
        else
        {
          *p_unk04C = 0;
        }
      }
    }
    else
    {
      v9 = p_unk04C;
      p_unk04C = (int *)p_unk04C[1];
    }
  }
}
