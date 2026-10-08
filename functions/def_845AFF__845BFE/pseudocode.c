// positive sp value has been detected, the output may be wrong!
void __userpurge def_845AFF(int a1@<ebp>, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // edi
  NiD3DPass *v7; // ebx
  bool v9; // zf
  unsigned int v10; // [esp-F4h] [ebp-F4h]
  NiD3DPass *v11; // [esp-D4h] [ebp-D4h] BYREF
  int v12; // [esp-CCh] [ebp-CCh]
  int v13; // [esp-C4h] [ebp-C4h]
  unsigned int v14; // [esp-4h] [ebp-4h]

  if ( unk_B42E8C ) /*0x845bfe*/
  {
    __asm { fstp    st(1) } /*0x845c09*/
    __asm { fstp    st }
    unk_B42E8C("Invalid sub texture in decal", 0); /*0x845c12*/
    __asm /*0x845c14*/
    {
      fld     dword ptr ds:0A3D65Ch
      fldz
    }
  }
  __asm { fxch    st(1) } /*0x845c1f*/
  if ( ++v12 < OB_ShaderPassControl_010201A0.decalPassBatchSize ) /*0x845c30*/
  {
    __asm /*0x845c43*/
    {
      fstp    st
      fstp    st
    }
    __asm { fldz }
    a1 = sub_7EE1F0(a5); /*0x845c4e*/
    __asm { fld     dword ptr ds:0A3D65Ch } /*0x845c50*/
  }
  v6 = v13; /*0x845c58*/
  if ( a1 ) /*0x845c5c*/
    JUMPOUT(0x8459BC); /*0x8459bc*/
  v7 = v11; /*0x845c62*/
  __asm /*0x845c66*/
  {
    fstp    st
    fstp    st
    fild    [esp+arg_1C]
  }
  __asm { fstp    dword ptr ds:0B4615Ch }
  unk_B4615C = _ET1; /*0x845c77*/
  ++v7->RefCount; /*0x845c7d*/
  v10 = *(_DWORD *)(v6 + 0x38); /*0x845c88*/
  v14 = 0; /*0x845c8c*/
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)(v6 + 0x40), v10, &v11); /*0x845c97*/
  v9 = v7->RefCount-- == 1; /*0x845c9f*/
  v14 = 0xFFFFFFFF; /*0x845ca2*/
  if ( v9 ) /*0x845ca9*/
    NiD3DPass_ReleaseToPool(v7); /*0x845cad*/
  ++*(_DWORD *)(v6 + 0x38); /*0x845cb2*/
}
