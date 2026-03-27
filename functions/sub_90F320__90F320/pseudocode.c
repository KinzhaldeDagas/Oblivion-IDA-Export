int *__thiscall sub_90F320(_DWORD *this, int a2)
{
  int *result; // eax
  int v4; // esi
  _DWORD v5[4]; // [esp+8h] [ebp-10h] BYREF

  result = *(int **)(*(this + 2) + 0x74);
  v4 = *(this + 0x49) - 1;
  v5[0] = *result;
  v5[1] = result[1];
  v5[2] = result[2];
  for ( v5[3] = result[3]; v4 >= 0; --v4 )
    result = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD *, int))(**(_DWORD **)(*(this + 0x48)
                                                                                                 + 8 * v4)
                                                                                   + 0xC))(
                      *(_DWORD *)(*(this + 0x48) + 8 * v4),
                      this + 5,
                      *(_DWORD *)(*(this + 0x48) + 8 * v4 + 4),
                      v5,
                      a2);
  return result;
}
