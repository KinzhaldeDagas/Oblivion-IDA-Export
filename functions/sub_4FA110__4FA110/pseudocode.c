float __thiscall sub_4FA110(ScriptEventList *this, int ArgList, Script *a3)
{
  Var *v3; // esi
  VarEntry *m_vars; // eax
  VarEntry *next; // edx
  Var *var; // eax
  const char *v8; // eax

  v3 = 0;
  if ( dword_B361BC != this || dword_B09E20 != ArgList || (v3 = dword_B361C0) == 0 )
  {
    m_vars = this->m_vars;
    if ( m_vars )
    {
      do
      {
        next = m_vars->next;
        if ( !next && !m_vars->var )
          break;
        var = m_vars->var;
        if ( var->id == ArgList )
        {
          v3 = var;
          break;
        }
        m_vars = next;
      }
      while ( next );
    }
  }
  dword_B361BC = this;
  dword_B09E20 = ArgList;
  dword_B361C0 = v3;
  if ( v3 )
  {
    return v3->data;
  }
  else
  {
    if ( a3 )
      v8 = a3->super.vtbl->GetEditorName(a3);
    else
      v8 = "UNKNOWN";
    PrintError(
      "Variable ID %08X not found. Try to recompile script '%s'. The script may also have a bad reference variable in an "
      "if statement on line %d.",
      ArgList,
      v8,
      dword_B36204);
    return 0.0;
  }
}
