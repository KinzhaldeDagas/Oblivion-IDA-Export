bhkRefObject *__cdecl sub_8905E0(int a1, int a2, float a3)
{
  bhkRefObject *v3; // eax

  v3 = (bhkRefObject *)FormHeapAlloc(0x14u);
  if ( v3 )
    return sub_8B6A40(v3, a1, a2, a3);
  else
    return 0;
}
