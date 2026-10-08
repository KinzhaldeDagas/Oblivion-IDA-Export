// Lighting30 helper that emits selector 0xA or 0xB into the secondary pass list when emit mode is active.
void __thiscall Lighting30__AppendPassSelectorAOrB(
        _DWORD *this,
        void *vtable,
        int a3,
        RenderPass_DecodedLayout *a4,
        char a5)
{
  RenderPass_DecodedLayout *v6; // eax
  RenderPass_DecodedLayout *v7; // eax
  RenderPass_DecodedLayout *v8; // eax

  if ( a5 ) /*0x855198*/
  {
    if ( (_BYTE)a4 != 1 ) /*0x8551dc*/
      return; /*0x8551dc*/
    v8 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8551e0*/
    a4 = v8; /*0x8551e8*/
    if ( v8 ) /*0x8551f6*/
    {
      v7 = RenderPass_Construct(v8, vtable, 0xBu, 0, 0, 0); /*0x855206*/
      goto LABEL_9; /*0x85520e*/
    }
LABEL_8:
    v7 = 0; /*0x855210*/
    goto LABEL_9; /*0x855210*/
  }
  if ( (_BYTE)a4 != 1 ) /*0x85519f*/
    return; /*0x85519f*/
  v6 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8551a7*/
  a4 = v6; /*0x8551af*/
  if ( !v6 ) /*0x8551bd*/
    goto LABEL_8; /*0x8551bd*/
  v7 = RenderPass_Construct(v6, vtable, 0xAu, 0, 0, 0); /*0x8551cd*/
LABEL_9:
  a4 = v7; /*0x855212*/
  NiTPointerList__AddTail((BSTextureManager *)(this + 0x16), (void **)&a4); /*0x855226*/
}
