char __thiscall sub_7121D0(void *this, int *a2, _DWORD *a3)
{
  int (__thiscall *v4)(void *, _DWORD *); // edx
  char v5; // bl
  _DWORD v7[8]; // [esp+Ch] [ebp-2Ch] BYREF
  unsigned int v8; // [esp+34h] [ebp-4h]

  sub_748860(v7); /*0x7121fb*/
  v4 = *(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x10); /*0x712202*/
  v8 = 0; /*0x71220c*/
  v5 = v4(this, v7); /*0x71221a*/
  *a3 = v7[5]; /*0x712220*/
  *a2 = sub_7489A0((int)v7); /*0x712233*/
  v8 = 0xFFFFFFFF; /*0x712235*/
  sub_7488B0(v7); /*0x71223d*/
  return v5; /*0x712244*/
}
