char __thiscall sub_4EB370(_DWORD *this, int a2, float *a3, _DWORD *a4)
{
  int v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  char result; // al

  if ( !byte_B06AB8 )
    return 0;
  v5 = 0xFFFFFFFF - Double_To_SInt32(*(float *)a2 * dbl_A47A28);
  v6 = (_DWORD *)Double_To_SInt32(*(float *)(a2 + 4) * dbl_A47A20);
  v7 = sub_4EA580(this, v5, v6, 0);
  if ( !v7 )
    return 0;
  v8 = (_DWORD *)*v7;
  result = 0;
  if ( v8 )
    return sub_4EC990(v8, (_DWORD *)a2, a3, a4);
  return result;
}
