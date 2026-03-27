unsigned int __thiscall sub_573D20(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = this + 8;
  v3 = 0;
  if ( a2 <= 0 )
  {
LABEL_4:
    if ( v2 )
      return *v2;
  }
  else
  {
    while ( v2 )
    {
      v2 = (_DWORD *)v2[1];
      if ( ++v3 >= a2 )
        goto LABEL_4;
    }
  }
  return 0xFFFFFFFF;
}
