char **__thiscall Script_CreateEventList(char *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  double **v4; // eax

  v2 = (_DWORD *)FormHeapAlloc(0x14u);
  v3 = 0;
  if ( v2 )
  {
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
    *v2 = 0;
    v2[4] = 0;
    v3 = v2;
  }
  v4 = sub_4FA910(this);
  *v3 = this;
  v3[3] = v4;
  return (char **)v3;
}
