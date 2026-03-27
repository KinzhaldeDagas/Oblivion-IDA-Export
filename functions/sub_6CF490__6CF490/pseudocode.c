int __thiscall sub_6CF490(float *this, int a2, _DWORD **a3)
{
  int v4; // edi
  int result; // eax
  int v6; // esi
  unsigned __int8 v7; // dl

  sub_6CD3D0(this, a2, a3);
  v4 = *((unsigned __int8 *)this + 0xD);
  result = FormHeapAlloc((0x68 * (unsigned __int64)*((unsigned __int8 *)this + 0xD)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x68 * v4);
  v6 = result;
  if ( result )
    result = sub_401080((void *)result, 0x68, v4, (void *(__thiscall *)(void *))sub_6C3730);
  else
    v6 = 0;
  v7 = 0;
  *(_DWORD *)(a2 + 0x50) = v6;
  while ( v7 < *((_BYTE *)this + 0xD) )
  {
    result = 0x68 * v7++;
    qmemcpy((void *)(result + *(_DWORD *)(a2 + 0x50)), (const void *)(result + *((_DWORD *)this + 0x14)), 0x68u);
  }
  qmemcpy((void *)(a2 + 0x30), this + 0xC, 0x20u);
  return result;
}
