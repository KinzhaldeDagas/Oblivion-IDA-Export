bool *__stdcall sub_954D70(bool *a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  bool v6; // cc
  bool *result; // eax

  v4 = *(_DWORD *)(a4 + 8) - 8; /*0x954d77*/
  if ( v4 <= 0 ) /*0x954d7c*/
    v4 = 0; /*0x954d7e*/
  v5 = *(_DWORD *)(a3 + 0x24) - v4; /*0x954d8a*/
  if ( v5 > *(_DWORD *)(a3 + 0x24) ) /*0x954d8e*/
    v5 = *(_DWORD *)(a3 + 0x24); /*0x954d90*/
  v6 = v5 <= 2; /*0x954d92*/
  result = a1; /*0x954d95*/
  *a1 = !v6; /*0x954da2*/
  return result; /*0x954d9f*/
}
