int __thiscall sub_8C8460(void *this, int a2)
{
  int v4[4]; // [esp+14h] [ebp-30h] BYREF
  int v5[7]; // [esp+24h] [ebp-20h] BYREF

  if ( a2 )
  {
    v4[0] = *(int *)(a2 + 0x20);
    v4[1] = *(int *)(a2 + 0x24);
    v4[2] = *(int *)(a2 + 0x28);
    v4[3] = *(int *)(a2 + 0x2C);
    v5[0] = *(int *)(a2 + 0x10);
    v5[1] = *(int *)(a2 + 0x14);
    v5[2] = *(int *)(a2 + 0x18);
    v5[3] = *(int *)(a2 + 0x1C);
    sub_8C82D0(this, (int)v5, (int)v4, *(float *)(a2 + 0x30));
  }
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
}
