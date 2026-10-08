char __thiscall sub_716530(NiRenderTargetGroup *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  Ni2DBuffer *v5; // eax
  unsigned int *RenderTargets; // esi
  unsigned int keyOut; // [esp+8h] [ebp-8h] BYREF
  void *valueOut; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x716535*/
  if ( !sub_731E80(this, (int)a2) ) /*0x71653c*/
    return 0; /*0x71653c*/
  v5 = this->members.RenderTargets[3]; /*0x71654f*/
  if ( (Ni2DBuffer *)v2[5] != v5 ) /*0x716555*/
    return 0; /*0x71654c*/
  if ( v5 ) /*0x716559*/
  {
    RenderTargets = (unsigned int *)this->members.RenderTargets; /*0x71655b*/
    a2 = (_DWORD *)NiTMapBase_GetFirstNode(RenderTargets); /*0x716567*/
    if ( a2 ) /*0x71656b*/
    {
      while ( 1 ) /*0x716581*/
      {
        NiTMap_U32Pointer_GetNextEntry( /*0x716581*/
          (MEF_U32PointerMapLayout32 *)RenderTargets,
          (MEF_U32PointerMapEntry32 **)&a2,
          &keyOut,
          &valueOut);
        if ( !(*(int (__thiscall **)(_DWORD *, unsigned int))(*v2 + 0x4C))(v2, keyOut) ) /*0x716592*/
          break; /*0x716592*/
        if ( !a2 ) /*0x71659d*/
          return 1; /*0x71659d*/
      }
      return 0; /*0x716596*/
    }
  }
  return 1; /*0x716545*/
}
