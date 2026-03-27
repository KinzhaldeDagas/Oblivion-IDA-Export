int sub_7D6B70()
{
  int *v0; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  if ( dword_B45D74 )
  {
    v0 = (int *)(4 * dword_B45D74 + 0xB45D74);
  }
  else
  {
    v2 = 0;
    v0 = &v2;
  }
  return *v0;
}
