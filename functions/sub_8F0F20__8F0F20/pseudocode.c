_DWORD *__cdecl sub_8F0F20(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  v3 = *(_DWORD **)(a3 + 4); /*0x8f0f24*/
  v3[1] = a1; /*0x8f0f2b*/
  *v3 = 0x20C0F; /*0x8f0f32*/
  v3[2] = a2; /*0x8f0f38*/
  result = v3 + 3; /*0x8f0f3b*/
  *(_DWORD *)(a3 + 4) = result; /*0x8f0f3e*/
  return result; /*0x8f0f41*/
}
