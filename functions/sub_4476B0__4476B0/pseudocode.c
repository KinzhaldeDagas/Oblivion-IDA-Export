TESForm *__thiscall sub_4476B0(_DWORD *this, char *Str2)
{
  TESForm *result; // eax
  int v4; // ebp
  int v5; // edi
  int v6; // esi
  char *v7; // eax
  TESWorldSpace **v8; // esi

  if ( !Str2 )
    return 0;
  v4 = *(this + 0x33);
  v5 = 0;
  if ( v4 <= 0 )
  {
LABEL_6:
    v8 = (TESWorldSpace **)(this + 3);
    if ( this == (_DWORD *)0xFFFFFFF4 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        if ( *v8 )
        {
          result = TESWorldSpace::GetCellFromEditorID(*v8, Str2);
          if ( result )
            break;
        }
        v8 = (TESWorldSpace **)v8[1];
        if ( !v8 )
          return 0;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(*(this + 0x31) + 4 * v5);
      v7 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xD4))(v6);
      if ( !_strcmp(v7, Str2) )
        return (TESForm *)v6;
      if ( ++v5 >= v4 )
        goto LABEL_6;
    }
  }
  return result;
}
