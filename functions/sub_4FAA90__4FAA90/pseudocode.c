char __thiscall sub_4FAA90(Script *this, char *Str2, UInt32 *a3)
{
  VarInfoEntry *p_varList; // esi
  VariableInfo *data; // edi

  p_varList = &this->varList;
  if ( this != (Script *)0xFFFFFFB8 )
  {
    do
    {
      data = p_varList->data;
      if ( !p_varList->data )
        break;
      p_varList = p_varList->next;
      if ( !_strcmp(data->name.m_data, Str2) )
      {
        *a3 = data->idx;
        return data->type != eVarType_Float ? 0x73 : 0x66;
      }
    }
    while ( p_varList );
  }
  *a3 = 0;
  return 0;
}
