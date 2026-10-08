int __thiscall sub_906860(int *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int result; // eax
  int i; // esi

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "BvTreeAgt", 8, this); /*0x906875*/
  v3 = *(this + 5); /*0x906877*/
  if ( v3 >= 0 ) /*0x90687c*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x9068a3*/
      a2,
      "AgentPtrs",
      8,
      *(this + 3),
      0xC * *(this + 4),
      0xC * (v3 & 0x3FFFFFFF));
  v4 = *(this + 3); /*0x9068a6*/
  result = *(this + 4); /*0x9068a9*/
  for ( i = v4 + 0xC * result; v4 != i; v4 += 0xC ) /*0x9068b6*/
  {
    result = *(_DWORD *)(v4 + 8); /*0x9068b8*/
    if ( result ) /*0x9068bd*/
      result = (*(int (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))( /*0x9068cb*/
                 a2,
                 "Agent",
                 8,
                 *(_DWORD *)(v4 + 8));
  }
  return result; /*0x9068d5*/
}
