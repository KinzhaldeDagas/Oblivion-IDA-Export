int __usercall sub_899030@<eax>(_DWORD *a1@<ebx>, _DWORD *a2@<esi>)
{
  int *v2; // edi
  int *v3; // edi
  int result; // eax

  v2 = (int *)a2[0xE];
  if ( v2 != &v2[a2[0xF]] )
  {
    do
      sub_898FE0(*v2++, a1);
    while ( v2 != (int *)(a2[0xE] + 4 * a2[0xF]) );
  }
  v3 = (int *)a2[0x11];
  result = a2[0x12];
  if ( v3 != &v3[result] )
  {
    do
    {
      sub_898FE0(*v3, a1);
      result = a2[0x12];
      ++v3;
    }
    while ( v3 != (int *)(a2[0x11] + 4 * result) );
  }
  return result;
}
