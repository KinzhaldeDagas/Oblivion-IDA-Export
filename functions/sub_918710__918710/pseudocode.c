int __thiscall sub_918710(char *this, int a2)
{
  int v3; // eax
  int *v4; // edi
  int v5; // ecx
  int v6; // edx

  v3 = sub_9186D0((int *)this + 0xFFFFFFFE, a2); /*0x91871b*/
  if ( v3 < 0 ) /*0x918722*/
    return 0; /*0x918757*/
  v4 = *(int **)(*((_DWORD *)this + 0xC) + 4 * v3); /*0x91872b*/
  v5 = *((_DWORD *)this + 0xC); /*0x91872e*/
  v6 = *((_DWORD *)this + 0xD) - 1; /*0x918731*/
  *((_DWORD *)this + 0xD) = v6; /*0x918732*/
  *(_DWORD *)(v5 + 4 * v3) = *(_DWORD *)(v5 + 4 * v6); /*0x918738*/
  sub_947F40(this + 0x1C, v4); /*0x91873f*/
  if ( v4 ) /*0x918746*/
    (*(void (__thiscall **)(int *, int))*v4)(v4, 1); /*0x91874e*/
  return 0; /*0x918753*/
}
