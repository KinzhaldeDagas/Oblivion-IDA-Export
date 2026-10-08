// positive sp value has been detected, the output may be wrong!
int __userpurge def_6832F4@<eax>(int a1@<ebx>, int *a2@<edi>, _DWORD *a3@<esi>, int a4)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  void (__cdecl ***v7)(int); // ecx

  v4 = a3[2]; /*0x68339f*/
  if ( v4 ) /*0x6833a4*/
  {
    if ( *(_BYTE *)(v4 + 0x20) == 1 && !TESPackage_IsRuntimePackage((TESPackage *)v4) ) /*0x6833ac*/
    {
      v5 = *a2; /*0x6833b8*/
      a2[2] = a3[2]; /*0x6833ba*/
      v6 = (*(int (__thiscall **)(_DWORD *))(*a3 + 0xCC))(a3); /*0x6833cd*/
      (*(void (__thiscall **)(int *, int))(v5 + 0xD0))(a2, v6); /*0x6833d5*/
    }
  }
  v7 = *(void (__cdecl ****)(int))(a1 + 0x58); /*0x6833d7*/
  if ( v7 ) /*0x6833dc*/
    (**v7)(1); /*0x6833e4*/
  *(_DWORD *)(a1 + 0x58) = a2; /*0x6833e6*/
  return a1; /*0x6833fe*/
}
