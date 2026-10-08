// positive sp value has been detected, the output may be wrong!
void __userpurge def_84567F(int a1@<ebp>, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // edi
  NiD3DPass *v7; // ebx
  bool v9; // zf
  unsigned int v10; // [esp-F4h] [ebp-F4h]
  NiD3DPass *v11; // [esp-D4h] [ebp-D4h] BYREF
  int v12; // [esp-CCh] [ebp-CCh]
  int v13; // [esp-C4h] [ebp-C4h]
  unsigned int v14; // [esp-4h] [ebp-4h]

  if ( unk_B42E8C ) /*0x84577e*/
  {
    __asm { fstp    st(1) } /*0x845789*/
    __asm { fstp    st }
    unk_B42E8C("Invalid sub texture in decal", 0); /*0x845792*/
    __asm /*0x845794*/
    {
      fld     dword ptr ds:0A3D65Ch
      fldz
    }
  }
  __asm { fxch    st(1) } /*0x84579f*/
  if ( ++v12 < OB_ShaderPassControl_010201A0.decalPassBatchSize ) /*0x8457b0*/
  {
    __asm /*0x8457c3*/
    {
      fstp    st
      fstp    st
    }
    __asm { fldz }
    a1 = sub_7EE1F0(a5); /*0x8457ce*/
    __asm { fld     dword ptr ds:0A3D65Ch } /*0x8457d0*/
  }
  v6 = v13; /*0x8457d8*/
  if ( a1 ) /*0x8457dc*/
    JUMPOUT(0x84553C); /*0x84553c*/
  v7 = v11; /*0x8457e2*/
  __asm /*0x8457e6*/
  {
    fstp    st
    fstp    st
    fild    [esp+arg_1C]
  }
  __asm { fstp    dword ptr ds:0B4615Ch }
  unk_B4615C = _ET1; /*0x8457f7*/
  ++v7->RefCount; /*0x8457fd*/
  v10 = *(_DWORD *)(v6 + 0x38); /*0x845808*/
  v14 = 0; /*0x84580c*/
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)(v6 + 0x40), v10, &v11); /*0x845817*/
  v9 = v7->RefCount-- == 1; /*0x84581f*/
  v14 = 0xFFFFFFFF; /*0x845822*/
  if ( v9 ) /*0x845829*/
    NiD3DPass_ReleaseToPool(v7); /*0x84582d*/
  ++*(_DWORD *)(v6 + 0x38); /*0x845832*/
}
