// positive sp value has been detected, the output may be wrong!
int __userpurge def_7C05BA@<eax>(
        NiD3DPass *a1@<ecx>,
        NiD3DPass *a2@<ebx>,
        NiD3DPass *a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  bool v10; // zf

  if ( a1 != a3 ) /*0x7c0b08*/
  {
    v10 = (*(_DWORD *)&a1->SoftwareVP)-- == 1; /*0x7c0b0a*/
    if ( v10 ) /*0x7c0b0d*/
      sub_772560((NiD3DTextureStage *)a1); /*0x7c0b0f*/
  }
  if ( a2 != a3 ) /*0x7c0b1a*/
  {
    v10 = a2->RefCount-- == 1; /*0x7c0b1c*/
    if ( v10 ) /*0x7c0b1f*/
      NiD3DPass_ReleaseToPool(a2); /*0x7c0b23*/
  }
  return 0; /*0x7c0b3d*/
}
