int __cdecl sub_8E7740(unsigned int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  char v5; // al
  int v6; // edx
  _DWORD *v7; // esi
  bool v8; // zf
  int result; // eax

  v3 = a3; /*0x8e774b*/
  if ( *(_DWORD *)(a2 + 0x48) <= *(_DWORD *)(a3 + 0x48) ) /*0x8e775d*/
    v3 = a2; /*0x8e775f*/
  v4 = *(_DWORD *)(v3 + 0x48); /*0x8e7761*/
  v5 = 0; /*0x8e7764*/
  v6 = 0; /*0x8e7766*/
  if ( v4 > 0 ) /*0x8e776e*/
  {
    v7 = *(_DWORD **)(v3 + 0x44); /*0x8e7770*/
    while ( *v7 > a1 || a1 >= *v7 + (unsigned int)*(unsigned __int16 *)(v3 + 0x5A) ) /*0x8e7786*/
    {
      ++v6; /*0x8e7788*/
      ++v7; /*0x8e7789*/
      if ( v6 >= v4 ) /*0x8e778e*/
      {
        v5 = 0; /*0x8e7790*/
        goto LABEL_10; /*0x8e7794*/
      }
    }
    v5 = 1; /*0x8e7796*/
  }
LABEL_10:
  v8 = v5 == 0; /*0x8e7799*/
  result = a3; /*0x8e779f*/
  if ( *(_DWORD *)(a2 + 0x48) <= *(_DWORD *)(a3 + 0x48) == !v8 ) /*0x8e77ac*/
    return a2; /*0x8e77b2*/
  return result; /*0x8e77a8*/
}
