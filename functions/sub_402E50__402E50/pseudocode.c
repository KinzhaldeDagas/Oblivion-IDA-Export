BSStringT *__userpurge sub_402E50@<eax>(int *this@<ecx>, double a2@<st0>, BSStringT *a3)
{
  const char *v3; // edi
  double v4; // st6
  int v5; // eax
  const char **v6; // eax
  char v7; // al
  float v9; // [esp+Ch] [ebp-20h]

  v3 = 0;
  a3->m_data = 0;
  a3->m_dataLen = 0;
  a3->m_bufLen = 0;
  if ( *this )
    v4 = *(float *)(*this + 0x24);
  else
    v4 = 427.0;
  if ( *(this + 1) )
    v5 = (char)Double_To_SInt32(a2);
  else
    v5 = 7;
  v6 = (const char **)*(&off_B06FA4 + v5);
  if ( v6 )
    v3 = *v6;
  v7 = Double_To_SInt32(a2);
  v9 = v4;
  BSStringT_Static_Format(a3, "%s %d, 3E%d", v3, v7, (unsigned int)(__int64)v9);
  return a3;
}
