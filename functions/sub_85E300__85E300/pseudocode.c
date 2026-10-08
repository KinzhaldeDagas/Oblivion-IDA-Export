// Branch render helper used by dword_B42E90 mode 0x129. Uses/appends branch pass dword_B477F8 (index 26) and binds texture data from the current property/helper path.
void __thiscall sub_85E300(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v7; // edi
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  UInt32 v13; // [esp+2Ch] [ebp+Ch]

  v7 = (NiD3DPass *)LODWORD(OB_ShaderConstantStorage_010201A0[0x679]); /*0x85e335*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x85e343*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v7->Stages.data->Stage; /*0x85e34c*/
  v13 = Stage; /*0x85e353*/
  v9 = sub_848FD0(a5, 0);                       // SpeedTreeOBSE 2026-05-31 branch normal map apply evidence: second branch render helper fetches property texture index 0 through 0x848FD0/vtable +0x8C, so the guarded OBSE writer targets +0xC0[0] only. /*0x85e357*/
  v10 = *(_DWORD *)(Stage + 4); /*0x85e35c*/
  v11 = v9; /*0x85e35f*/
  if ( v10 != v9 ) /*0x85e363*/
  {
    if ( v10 ) /*0x85e367*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85e36d*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85e383*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85e38b*/
    if ( v11 ) /*0x85e38e*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85e394*/
  }
  sub_848FA0((_DWORD **)v13, (int)a5); /*0x85e3a6*/
  if ( !(_BYTE)a6 ) /*0x85e3b0*/
  {
    ++v7->RefCount; /*0x85e3b7*/
    a6 = v7; /*0x85e3ba*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), &a6); /*0x85e3d2*/
    if ( v7->RefCount-- == 1 ) /*0x85e3da*/
      NiD3DPass_ReleaseToPool(v7); /*0x85e3e5*/
    ++*((_DWORD *)this + 0xE); /*0x85e3ea*/
  }
}
