void __thiscall sub_4FA080(ScriptEventList *this)
{
  VarEntry *m_vars; // eax
  unsigned int *v3; // eax
  unsigned int *v4; // ecx
  unsigned int v5; // edi

  m_vars = this->m_vars;
  if ( m_vars )
  {
    if ( m_vars->var )
    {
      do
      {
        v3 = (unsigned int *)this->m_vars;
        v4 = (unsigned int *)v3[1];
        v5 = *v3;
        if ( v4 )
        {
          v3[1] = v4[1];
          *v3 = *v4;
          FormHeapFree((unsigned int)v4);
        }
        else
        {
          *v3 = 0;
        }
        FormHeapFree(v5);
      }
      while ( this->m_vars->var );
    }
    FormHeapFree((unsigned int)this->m_vars);
    this->m_vars = 0;
  }
}
