int __thiscall sub_8A02C0(void *this, int a2)
{
  int v3; // eax
  int *v4; // esi
  int v5; // edx
  char v7; // [esp+Bh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v7); /*0x8a02d1*/
  if ( v3 ) /*0x8a02d5*/
    v4 = (int *)(v3 - 4); /*0x8a02d7*/
  else
    v4 = 0; /*0x8a02dc*/
  v5 = *v4; /*0x8a02e6*/
  if ( *(_DWORD *)(a2 + 4) >= 6u ) /*0x8a02ea*/
    (*(void (__thiscall **)(int *, int))(v5 + 4))(v4, a2); /*0x8a02fa*/
  else
    (*(void (__thiscall **)(int *, int, _DWORD))(v5 + 0xC))(v4, a2, 0); /*0x8a02f2*/
  *(_DWORD *)(v4[1] + 8) = 0; /*0x8a02ff*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this); /*0x8a030f*/
}
