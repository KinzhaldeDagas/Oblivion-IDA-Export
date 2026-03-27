int __thiscall sub_947A50(LPCRITICAL_SECTION *this, const char *a2)
{
  int v3; // ebx
  int v4; // edi

  sub_8A7720(*(this + 6));
  v3 = 0;
  if ( (int)*(this + 4) <= 0 )
  {
LABEL_5:
    LeaveCriticalSection(*(this + 6));
    return 0xFFFFFFFF;
  }
  else
  {
    v4 = 0;
    while ( sub_8B1770(*(const char **)((char *)&(*(this + 3))->DebugInfo + v4), a2) )
    {
      ++v3;
      v4 += 0xC;
      if ( v3 >= (int)*(this + 4) )
        goto LABEL_5;
    }
    LeaveCriticalSection(*(this + 6));
    return v3;
  }
}
