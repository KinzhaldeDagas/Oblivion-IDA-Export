char __thiscall sub_7121D0(void *this, int *a2, _DWORD *a3)
{
  int (__thiscall *v4)(void *, _DWORD *); // edx
  char v5; // bl
  _DWORD v7[8]; // [esp+Ch] [ebp-2Ch] BYREF
  unsigned int v8; // [esp+34h] [ebp-4h]

  sub_748860(v7);
  v4 = *(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x10);
  v8 = 0;
  v5 = v4(this, v7);
  *a3 = v7[5];
  *a2 = sub_7489A0((int)v7);
  v8 = 0xFFFFFFFF;
  sub_7488B0(v7);
  return v5;
}
