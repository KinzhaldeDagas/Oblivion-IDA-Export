int *__thiscall sub_90F320(_DWORD *this, int a2)
{
  int *result; // eax
  int v4; // esi
  _DWORD v5[4]; // [esp+8h] [ebp-10h] BYREF

  result = *(int **)(*(this + 2) + 0x74); /*0x90f32a*/
  v4 = *(this + 0x49) - 1; /*0x90f335*/
  v5[0] = *result; /*0x90f336*/
  v5[1] = result[1]; /*0x90f33d*/
  v5[2] = result[2]; /*0x90f344*/
  for ( v5[3] = result[3]; v4 >= 0; --v4 ) /*0x90f34f*/
    result = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD *, int))(**(_DWORD **)(*(this + 0x48) /*0x90f37d*/
                                                                                                 + 8 * v4)
                                                                                   + 0xC))(
                      *(_DWORD *)(*(this + 0x48) + 8 * v4),
                      this + 5,
                      *(_DWORD *)(*(this + 0x48) + 8 * v4 + 4),
                      v5,
                      a2);
  return result; /*0x90f385*/
}
