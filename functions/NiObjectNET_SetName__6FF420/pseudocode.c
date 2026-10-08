void __thiscall NiObjectNET_SetName(NiObjectNET *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree((unsigned int)this->members.m_pcName); /*0x6ff428*/
  if ( Src ) /*0x6ff436*/
  {
    v3 = strlen(Src); /*0x6ff43a*/
    v4 = (char *)FormHeapAlloc(v3 + 1); /*0x6ff450*/
    this->members.m_pcName = v4; /*0x6ff458*/
    strcpy_s(v4, v3 + 1, Src); /*0x6ff45b*/
  }
  else
  {
    this->members.m_pcName = 0; /*0x6ff469*/
  }
}
