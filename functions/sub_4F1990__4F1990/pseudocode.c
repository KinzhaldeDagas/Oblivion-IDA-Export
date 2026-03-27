void __thiscall sub_4F1990(TESForm *this, int a2, int a3, _DWORD *a4, int a5, _BYTE *a6)
{
  char v7; // al
  TESForm::ModReferenceList *p_modlist; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  Data *OverrideFile; // eax
  Data *v12; // esi
  char v13; // [esp+7h] [ebp-1h]

  if ( a4 )
  {
    while ( 1 )
    {
      v13 = 0;
      if ( externalLodFiles )
        break;
      p_modlist = &this->member.modlist;
      v9 = 0;
      if ( this != (TESForm *)0xFFFFFFF0 )
      {
        do
        {
          if ( p_modlist->data )
            ++v9;
          p_modlist = p_modlist->next;
        }
        while ( p_modlist );
      }
      v10 = 0;
      if ( v9 )
      {
        do
        {
          OverrideFile = TESForm_GetOverrideFile(this, v10);
          v12 = sub_4520F0(OverrideFile);
          if ( v12 )
          {
            if ( TESWorldSpace::FindCellInFile((TESWorldSpace *)this, v12, a2, a3) )
            {
              if ( sub_4D43F0((int)v12, (int)this, a2, a3, a4) )
                v13 = 1;
            }
          }
          ++v10;
        }
        while ( v10 < v9 );
        v7 = v13;
LABEL_15:
        if ( v7 )
          return;
      }
      this = *((TESForm **)this + 0x1F);
      if ( !this )
        return;
    }
    v7 = sub_4D16D0(a6, a4, a5);
    goto LABEL_15;
  }
}
