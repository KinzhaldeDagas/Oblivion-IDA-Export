char __thiscall sub_4FAA90(Script *this, char *Str2, UInt32 *indexOut)
{
  VarInfoEntry *p_varList; // esi
  VariableInfo *data; // edi

  p_varList = &this->varList; /*0x4faa92*/
  if ( this != (Script *)0xFFFFFFB8 )
  {
    do
    {
      data = p_varList->data; /*0x4faaa0*/
      if ( !p_varList->data ) /*0x4faaa0*/
        break; /*0x4faaa0*/
      p_varList = p_varList->next; /*0x4faaa9*/
      if ( !CRT_StricmpLocaleDispatch(data->name.m_data, Str2) )
      {
        *indexOut = data->idx; /*0x4faad6*/
        return data->type != eVarType_Float ? 0x73 : 0x66;
      }
    }
    while ( p_varList );
  }
  *indexOut = 0; /*0x4faabe*/
  return 0; /*0x4faac2*/
}
