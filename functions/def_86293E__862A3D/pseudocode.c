// positive sp value has been detected, the output may be wrong!
void __userpurge def_86293E(int a1@<ebx>, _DWORD *a2)
{
  int v2; // [esp-C4h] [ebp-C4h]
  int v3; // [esp-C4h] [ebp-C4h]

  if ( unk_B42E8C ) /*0x862a3d*/
  {
    __asm { fstp    st(1) } /*0x862a48*/
    __asm { fstp    st }
    unk_B42E8C("Invalid sub texture in decal", 0); /*0x862a51*/
    __asm /*0x862a53*/
    {
      fld     dword ptr ds:0A3D65Ch
      fldz
    }
  }
  __asm { fxch    st(1) } /*0x862a5e*/
  v3 = v2 + 1; /*0x862a75*/
  if ( v3 < OB_ShaderPassControl_010201A0.decalPassBatchSize ) /*0x862a79*/
  {
    __asm /*0x862a82*/
    {
      fstp    st
      fstp    st
    }
    __asm { fldz }
    a1 = sub_7EE1F0(a2); /*0x862a8d*/
    __asm { fld     dword ptr ds:0A3D65Ch } /*0x862a8f*/
  }
  if ( a1 ) /*0x862a97*/
    JUMPOUT(0x862805); /*0x862805*/
  __asm { fstp    st } /*0x862a9d*/
  __asm
  {
    fstp    st
    fild    [esp-4+arg_C]
  }
}
