int __thiscall sub_947A50(LPCRITICAL_SECTION *this, const char *a2)
{
  int v3; // ebx
  int v4; // edi

  sub_8A7720(*(this + 6)); /*0x947a59*/
  v3 = 0; /*0x947a61*/
  if ( (int)*(this + 4) <= 0 ) /*0x947a65*/
  {
LABEL_5:
    LeaveCriticalSection(*(this + 6)); /*0x947a8f*/
    return 0xFFFFFFFF; /*0x947a9c*/
  }
  else
  {
    v4 = 0; /*0x947a6b*/
    while ( sub_8B1770(*(const char **)((char *)&(*(this + 3))->DebugInfo + v4), a2) ) /*0x947a82*/
    {
      ++v3; /*0x947a87*/
      v4 += 0xC; /*0x947a88*/
      if ( v3 >= (int)*(this + 4) ) /*0x947a8d*/
        goto LABEL_5; /*0x947a8d*/
    }
    LeaveCriticalSection(*(this + 6)); /*0x947aa7*/
    return v3; /*0x947ab0*/
  }
}
