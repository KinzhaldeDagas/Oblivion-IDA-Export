TESForm *__thiscall sub_4476B0(_DWORD *this, char *Str2)
{
  TESForm *result; // eax
  int v4; // ebp
  int v5; // edi
  int v6; // esi
  const char *v7; // eax
  TESWorldSpace **v8; // esi

  if ( !Str2 ) /*0x4476b8*/
    return 0; /*0x4476ba*/
  v4 = *(this + 0x33); /*0x4476c1*/
  v5 = 0; /*0x4476c9*/
  if ( v4 <= 0 ) /*0x4476cd*/
  {
LABEL_6:
    v8 = (TESWorldSpace **)(this + 3); /*0x4476fe*/
    if ( this == (_DWORD *)0xFFFFFFF4 ) /*0x447703*/
    {
      return 0; /*0x447720*/
    }
    else
    {
      while ( 1 ) /*0x447705*/
      {
        if ( *v8 ) /*0x447705*/
        {
          result = TESWorldSpace::GetCellFromEditorID(*v8, Str2); /*0x447710*/
          if ( result ) /*0x447717*/
            break; /*0x447717*/
        }
        v8 = (TESWorldSpace **)v8[1]; /*0x447719*/
        if ( !v8 ) /*0x44771e*/
          return 0; /*0x44771e*/
      }
    }
  }
  else
  {
    while ( 1 ) /*0x4476d6*/
    {
      v6 = *(_DWORD *)(*(this + 0x31) + 4 * v5); /*0x4476d6*/
      v7 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xD4))(v6); /*0x4476e8*/
      if ( !CRT_StricmpLocaleDispatch(v7, Str2) ) /*0x4476eb*/
        return (TESForm *)v6; /*0x44772a*/
      if ( ++v5 >= v4 ) /*0x4476fc*/
        goto LABEL_6; /*0x4476fc*/
    }
  }
  return result; /*0x4476bc*/
}
