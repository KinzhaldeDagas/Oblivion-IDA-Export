int __thiscall sub_6CF490(float *this, int a2, _DWORD **a3)
{
  int v4; // edi
  int result; // eax
  int v6; // esi
  unsigned __int8 v7; // dl

  sub_6CD3D0(this, a2, a3); /*0x6cf4c0*/
  v4 = *((unsigned __int8 *)this + 0xD); /*0x6cf4c5*/
  result = FormHeapAlloc((0x68 * (unsigned __int64)*((unsigned __int8 *)this + 0xD)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x68 * v4);
  v6 = result; /*0x6cf4e1*/
  if ( result ) /*0x6cf4f4*/
    result = sub_401080((void *)result, 0x68, v4, (void *(__thiscall *)(void *))sub_6C3730); /*0x6cf4ff*/
  else
    v6 = 0; /*0x6cf506*/
  v7 = 0; /*0x6cf508*/
  *(_DWORD *)(a2 + 0x50) = v6; /*0x6cf50a*/
  while ( v7 < *((_BYTE *)this + 0xD) ) /*0x6cf50d*/
  {
    result = 0x68 * v7++; /*0x6cf51b*/
    qmemcpy((void *)(result + *(_DWORD *)(a2 + 0x50)), (const void *)(result + *((_DWORD *)this + 0x14)), 0x68u); /*0x6cf52a*/
  }
  qmemcpy((void *)(a2 + 0x30), this + 0xC, 0x20u); /*0x6cf53c*/
  return result; /*0x6cf53e*/
}
