void __thiscall NiObjectNET_SetName(NiObjectNET *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree((unsigned int)this->members.m_pcName);
  if ( Src )
  {
    v3 = strlen(Src);
    v4 = (char *)FormHeapAlloc(v3 + 1);
    this->members.m_pcName = v4;
    strcpy_s(v4, v3 + 1, Src);
  }
  else
  {
    this->members.m_pcName = 0;
  }
}
