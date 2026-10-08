unsigned int __cdecl sub_614190(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x614198*/
  v3 = *(_DWORD *)(a2 + 4); /*0x61419b*/
  if ( v2 <= v3 )                               // TargetInfo +0x04 is compared as signed SInt32 (JLE/SETL); larger values sort first. /*0x6141a0*/
    return v2 < v3; /*0x6141ad*/
  else
    return 0xFFFFFFFF; /*0x6141a2*/
}
