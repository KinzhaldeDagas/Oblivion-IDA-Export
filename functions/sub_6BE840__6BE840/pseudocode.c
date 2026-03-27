int __cdecl sub_6BE840(int a1)
{
  unsigned int v1; // edi
  int *v2; // esi
  int result; // eax

  v1 = 0;
  v2 = (int *)(a1 + 0x30);
  do
  {
    result = *v2;
    if ( *v2 )
      result = (*(int (__cdecl **)(int, int, _DWORD))(4 * v2[0xFFFFFFFC] + 0xB3D410))(
                 result,
                 v2[0xFFFFFFF9],
                 *(unsigned __int8 *)(v1 + a1 + 0x2C));
    ++v1;
    ++v2;
  }
  while ( v1 < 3 );
  return result;
}
