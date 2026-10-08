// Hot Reload OBSE decode: ScriptEventList var-list destructor. Frees m_vars head, nodes, and Var payloads, then clears m_vars.
void __thiscall sub_4FA080(ScriptEventList *this)
{
  VarEntry *m_vars; // eax
  unsigned int *v3; // eax
  unsigned int *v4; // ecx
  unsigned int v5; // edi

  m_vars = this->m_vars; /*0x4fa083*/
  if ( m_vars ) /*0x4fa088*/
  {
    if ( m_vars->var ) /*0x4fa08a*/
    {
      do /*0x4fa0c3*/
      {
        v3 = (unsigned int *)this->m_vars; /*0x4fa090*/
        v4 = (unsigned int *)v3[1]; /*0x4fa093*/
        v5 = *v3; /*0x4fa098*/
        if ( v4 ) /*0x4fa09a*/
        {
          v3[1] = v4[1]; /*0x4fa09f*/
          *v3 = *v4; /*0x4fa0a5*/
          FormHeapFree((unsigned int)v4); /*0x4fa0a7*/
        }
        else
        {
          *v3 = 0; /*0x4fa0b1*/
        }
        FormHeapFree(v5); /*0x4fa0b8*/
      }
      while ( this->m_vars->var ); /*0x4fa0c3*/
    }
    FormHeapFree((unsigned int)this->m_vars); /*0x4fa0cd*/
    this->m_vars = 0; /*0x4fa0d5*/
  }
}
