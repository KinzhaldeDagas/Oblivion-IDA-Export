int __thiscall sub_92AD10(int this, unsigned int a2)
{
  _DWORD *v2; // edx
  int v3; // eax

  v2 = *(_DWORD **)(this + 0x10); /*0x92ad10*/
  if ( a2 >= v2[6] ) /*0x92ad1b*/
    v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x10) + 0x20) /*0x92ad37*/
                   + 4 * (a2 - *(_DWORD *)(*(_DWORD *)(this + 0x10) + 0x18)));
  else
    v3 = *(_DWORD *)(v2[2] + 4 * *(_DWORD *)(v2[5] + 4 * a2) + 4); /*0x92ad26*/
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 0x14) + 0x2C))(*(_DWORD *)(this + 0x14), v3);
}
