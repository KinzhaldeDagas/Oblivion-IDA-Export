int __thiscall sub_918710(char *this, int a2)
{
  int v3; // eax
  int *v4; // edi
  int v5; // ecx
  int v6; // edx

  v3 = sub_9186D0((int *)this + 0xFFFFFFFE, a2);
  if ( v3 < 0 )
    return 0;
  v4 = *(int **)(*((_DWORD *)this + 0xC) + 4 * v3);
  v5 = *((_DWORD *)this + 0xC);
  v6 = *((_DWORD *)this + 0xD) - 1;
  *((_DWORD *)this + 0xD) = v6;
  *(_DWORD *)(v5 + 4 * v3) = *(_DWORD *)(v5 + 4 * v6);
  sub_947F40(this + 0x1C, v4);
  if ( v4 )
    (*(void (__thiscall **)(int *, int))*v4)(v4, 1);
  return 0;
}
