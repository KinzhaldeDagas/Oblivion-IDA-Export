_DWORD *__thiscall sub_7F3470(_DWORD *this, void *vtable, int a3, int a4, int a5)
{
  RenderPass_DecodedLayout *v6; // eax
  RenderPass_DecodedLayout *v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx

  if ( !*(this + 0xD) ) /*0x7f3496*/
  {
    v6 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7f349f*/
    if ( v6 ) /*0x7f34b5*/
      v7 = RenderPass_Construct(v6, vtable, 0x17Fu, 1u, 0, 0); /*0x7f34d0*/
    else
      v7 = 0; /*0x7f34d4*/
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0xA) + 4))(this + 0xA); /*0x7f34e9*/
    v8[2] = v7; /*0x7f34eb*/
    v8[1] = 0; /*0x7f34ee*/
    *v8 = *(this + 0xB); /*0x7f34f8*/
    v9 = *(this + 0xB); /*0x7f34fa*/
    if ( v9 ) /*0x7f34ff*/
      *(_DWORD *)(v9 + 4) = v8; /*0x7f3501*/
    else
      *(this + 0xC) = v8; /*0x7f3506*/
    ++*(this + 0xD); /*0x7f3509*/
    *(this + 0xB) = v8; /*0x7f350d*/
  }
  return this + 0xA; /*0x7f3513*/
}
