bool *__thiscall sub_927920(char *this, bool *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  int v9; // ecx
  int i; // edx

  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a6 + 0x2C))(a6, a7); /*0x92792f*/
  v9 = a4; /*0x927932*/
  for ( i = *(_DWORD *)(a4 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x92793b*/
    v9 = i; /*0x927940*/
  sub_927680((int)(this + 0xFFFFFFF4), a2, *(_DWORD *)(v9 + 0x1C), v8); /*0x927956*/
  return a2; /*0x92795b*/
}
