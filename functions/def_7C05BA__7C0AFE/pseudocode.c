// positive sp value has been detected, the output may be wrong!
int __userpurge def_7C05BA@<eax>(
        NiD3DTextureStage *a1@<ecx>,
        NiD3DPass *a2@<ebx>,
        NiD3DTextureStage *a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  bool v10; // zf

  if ( a1 != a3 )
  {
    v10 = a1[7].Unk08-- == 1;
    if ( v10 )
      sub_772560(a1);
  }
  if ( a2 != (NiD3DPass *)a3 )
  {
    v10 = a2->RefCount-- == 1;
    if ( v10 )
      sub_7604D0(a2);
  }
  return 0;
}
