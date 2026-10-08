_DWORD *__thiscall sub_7E5890(_DWORD *this, void *vtable, int a3, int a4, int a5)
{
  RenderPass_DecodedLayout *v6; // eax
  RenderPass_DecodedLayout *v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx

  if ( !*(this + 0xD) ) /*0x7e58b6*/
  {
    v6 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7e58bf*/
    if ( v6 ) /*0x7e58d5*/
      v7 = RenderPass_Construct(v6, vtable, 0x17Eu, 1u, 0, 0); /*0x7e58f0*/
    else
      v7 = 0; /*0x7e58f4*/
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0xA) + 4))(this + 0xA); /*0x7e5909*/
    v8[2] = v7; /*0x7e590b*/
    v8[1] = 0; /*0x7e590e*/
    *v8 = *(this + 0xB); /*0x7e5918*/
    v9 = *(this + 0xB); /*0x7e591a*/
    if ( v9 ) /*0x7e591f*/
      *(_DWORD *)(v9 + 4) = v8; /*0x7e5921*/
    else
      *(this + 0xC) = v8; /*0x7e5926*/
    ++*(this + 0xD); /*0x7e5929*/
    *(this + 0xB) = v8; /*0x7e592d*/
  }
  return this + 0xA; /*0x7e5933*/
}
