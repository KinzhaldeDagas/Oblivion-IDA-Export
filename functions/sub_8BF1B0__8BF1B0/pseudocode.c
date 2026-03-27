int __thiscall sub_8BF1B0(_DWORD *this, int a2, int *a3)
{
  int *v3; // esi
  int result; // eax
  int v6; // edi
  _DWORD v7[6]; // [esp+4h] [ebp-18h] BYREF

  v3 = a3;
  *(float *)&v7[3] = flt_A34BA0;
  *(float *)&v7[4] = flt_A37080;
  memset(v7, 0, 0xC);
  v7[5] = 0;
  if ( !a3 )
  {
    v3 = v7;
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))(
      *(_DWORD *)(a2 + 0x21C),
      v7,
      0x18,
      0,
      0);
  }
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x10))(this);
  v6 = *(this + 1);
  *(float *)(v6 + 0x10) = *((float *)v3 + 3);
  *(float *)(v6 + 0x14) = *((float *)v3 + 4);
  return result;
}
