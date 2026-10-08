_DWORD *__cdecl sub_8F0F50(int a1)
{
  _DWORD *v1; // eax
  _DWORD *result; // eax

  v1 = *(_DWORD **)(a1 + 4); /*0x8f0f54*/
  *v1 = 0x20410; /*0x8f0f57*/
  result = v1 + 1; /*0x8f0f5d*/
  *(_DWORD *)(a1 + 4) = result; /*0x8f0f60*/
  return result; /*0x8f0f63*/
}
