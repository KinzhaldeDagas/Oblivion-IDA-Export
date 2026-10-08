int __cdecl sub_6BE840(int a1)
{
  unsigned int v1; // edi
  int *v2; // esi
  int result; // eax

  v1 = 0; /*0x6be847*/
  v2 = (int *)(a1 + 0x30); /*0x6be849*/
  do /*0x6be879*/
  {
    result = *v2; /*0x6be850*/
    if ( *v2 ) /*0x6be850*/
      result = (*(int (__cdecl **)(int, int, _DWORD))(4 * v2[0xFFFFFFFC] + 0xB3D410))( /*0x6be86b*/
                 result,
                 v2[0xFFFFFFF9],
                 *(unsigned __int8 *)(v1 + a1 + 0x2C));
    ++v1; /*0x6be870*/
    ++v2; /*0x6be873*/
  }
  while ( v1 < 3 ); /*0x6be879*/
  return result; /*0x6be87b*/
}
