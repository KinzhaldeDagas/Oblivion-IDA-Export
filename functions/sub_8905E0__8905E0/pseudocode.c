bhkRefObject *__cdecl sub_8905E0(float *a1, float *a2, float a3)
{
  bhkRefObject *v3; // eax

  v3 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x890603*/
  if ( v3 ) /*0x890619*/
    return sub_8B6A40(v3, a1, a2, a3); /*0x89062f*/
  else
    return 0; /*0x890644*/
}
