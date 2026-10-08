// ScriptEventList::GetVariableValue scans `m_vars` for Var.id == variableID and returns Var.data. A single global last-list/last-ID/Var cache accelerates repeated CTDA and script lookups; a cache miss with no variable logs an error and returns 0.
float __thiscall ScriptEventList::GetVariableValue(ScriptEventList *this, UInt32 variableID, Script *sourceScript)
{
  Var *v3; // esi
  VarEntry *m_vars; // eax
  VarEntry *next; // edx
  Var *var; // eax
  const char *v8; // eax

  v3 = 0; /*0x4fa111*/
  if ( unk_B361BC != this || dword_B09E20 != variableID || (v3 = unk_B361C0) == 0 ) /*0x4fa128*/
  {
    m_vars = this->m_vars; /*0x4fa132*/
    if ( m_vars ) /*0x4fa137*/
    {
      do /*0x4fa140*/
      {
        next = m_vars->next; /*0x4fa140*/
        if ( !next && !m_vars->var ) /*0x4fa147*/
          break; /*0x4fa147*/
        var = m_vars->var; /*0x4fa14b*/
        if ( var->id == variableID ) /*0x4fa14f*/
        {
          v3 = var; /*0x4fa159*/
          break; /*0x4fa159*/
        }
        m_vars = next; /*0x4fa151*/
      }
      while ( next ); /*0x4fa140*/
    }
  }
  unk_B361BC = this; /*0x4fa15b*/
  dword_B09E20 = variableID; /*0x4fa163*/
  unk_B361C0 = v3; /*0x4fa169*/
  if ( v3 ) /*0x4fa16f*/
  {
    return v3->data; /*0x4fa171*/
  }
  else
  {
    if ( sourceScript ) /*0x4fa17f*/
      v8 = sourceScript->super.vtbl->GetEditorName(sourceScript); /*0x4fa189*/
    else
      v8 = "UNKNOWN"; /*0x4fa18d*/
    PrintError( /*0x4fa1a0*/
      "Variable ID %08X not found. Try to recompile script '%s'. The script may also have a bad reference variable in an "
      "if statement on line %d.",
      variableID,
      v8,
      dword_B361CC[0xE]);
    return 0.0; /*0x4fa1a5*/
  }
}
