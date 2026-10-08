int __thiscall sub_7495E0(_DWORD *this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v2; // edi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  NiTMap_Entry_TESCELL *v7; // eax
  UInt32 *p_height; // ebx
  _DWORD *v9; // esi
  int v10; // ecx
  NiTMap_Entry_TESCELL *v12; // [esp+10h] [ebp-Ch] BYREF
  TESObjectCELL *v13; // [esp+14h] [ebp-8h] BYREF
  int v14; // [esp+18h] [ebp-4h] BYREF

  v2 = a2; /*0x7495e7*/
  NiGeometry_ProcessClone((NiRenderTargetGroup *)this, a2); /*0x7495ee*/
  NiTMap_GetAt(v2->__vftable, (int)this, &a2); /*0x7495fb*/
  v4 = *(this + 0x36); /*0x749600*/
  v5 = 0; /*0x74960c*/
  if ( v4 ) /*0x749610*/
  {
    v6 = (_DWORD *)*(this + 0x37); /*0x749615*/
    while ( !*v6 ) /*0x74961a*/
    {
      ++v5; /*0x749620*/
      ++v6; /*0x749623*/
      if ( v5 >= v4 ) /*0x749628*/
        goto LABEL_5; /*0x749628*/
    }
    v7 = *(NiTMap_Entry_TESCELL **)(*(this + 0x37) + 4 * v5); /*0x7496bc*/
  }
  else
  {
LABEL_5:
    v7 = 0; /*0x74962a*/
  }
  v12 = v7; /*0x74962e*/
  if ( v7 ) /*0x749632*/
  {
    p_height = &a2[0xA].members.height; /*0x749638*/
    do /*0x74967d*/
    {
      NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)(this + 0x35), &v12, (void **)&v14, &v13); /*0x749651*/
      NiTMap_GetAt(v2->__vftable, (int)v13, &a2); /*0x749662*/
      sub_412D30(p_height, v14, (TESForm *)a2); /*0x749673*/
    }
    while ( v12 ); /*0x74967d*/
  }
  v9 = (_DWORD *)*(this + 0x32); /*0x74967f*/
  while ( v9 ) /*0x749687*/
  {
    v10 = v9[2]; /*0x749690*/
    v9 = (_DWORD *)*v9; /*0x74969b*/
    (*(void (__thiscall **)(int, Ni2DBuffer *))(*(_DWORD *)v10 + 0x38))(v10, v2); /*0x74969e*/
  }
  return (*(int (__thiscall **)(_DWORD, Ni2DBuffer *))(*(_DWORD *)*(this + 0x2D) + 0x38))(*(this + 0x2D), v2); /*0x7496b2*/
}
