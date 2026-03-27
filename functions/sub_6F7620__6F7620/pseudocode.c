bool __stdcall sub_6F7620(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // eax

  if ( a2[6] < 0x10u )
    v2 = a2 + 1;
  else
    v2 = (_DWORD *)a2[1];
  return sub_6F5DE0(a1, 0, a1[5], v2, a2[5]) < 0;
}
