int __thiscall sub_6BE490(int *this)
{
  int *v1; // esi
  int v2; // ebx
  int result; // eax

  v1 = this + 0xC;
  v2 = 3;
  do
  {
    result = *v1;
    if ( *v1 )
      result = (*(int (__cdecl **)(int))(4 * v1[0xFFFFFFFC] + 0xB3D2C8))(*v1);
    *v1 = 0;
    v1[0xFFFFFFF9] = 0;
    v1[0xFFFFFFFC] = 0;
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
