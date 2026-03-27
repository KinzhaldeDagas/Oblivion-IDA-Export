void __thiscall sub_57DD90(void *this, char a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // kr00_4

  if ( *(_BYTE *)this )
  {
    *(_BYTE *)this = a2;
  }
  else
  {
    if ( a2 )
    {
      v2 = *((_WORD *)this + 0xE);
      if ( v2 == 0xFFFF )
      {
        v3 = strlen(*((const char **)this + 6));
        *(_BYTE *)this = a2;
        *((_DWORD *)this + 1) = v3;
        return;
      }
      *((_DWORD *)this + 1) = v2;
    }
    *(_BYTE *)this = a2;
  }
}
