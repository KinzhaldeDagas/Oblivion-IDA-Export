// MoonSugar build 39: skinned transform upload writes renderer world/bone transform state and D3DTS_WORLD+i for small blend counts. Not a good Moon Sugar detour point; preserve this native path.
int __thiscall sub_765560(NiDX9Renderer *this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // ebp
  int i; // esi

  ((void (__thiscall *)(NiDX9RenderState *, int))this->member.renderState->vtbl->SetNormalization)( /*0x765575*/
    this->member.renderState,
    a4);
  result = (int)sub_761AE0((float *)&this->member.worldMatrix, (float *)a4, (float *)(a4 + 0x24), *(float *)(a4 + 0x30)); /*0x76558a*/
  if ( *(_WORD *)(a3 + 0x20) <= 4u ) /*0x76559b*/
  {
    v6 = *(_DWORD *)(a2 + 0x20); /*0x7655a2*/
    for ( i = 0; i < 4; ++i ) /*0x7655a5*/
      result = (int)this->member.device->lpVtbl->SetTransform( /*0x7655d3*/
                      this->member.device,
                      i + 0x100,
                      v6 + (*(unsigned __int16 *)(*(_DWORD *)(a3 + 4) + 2 * i) << 6));
  }
  return result; /*0x7655de*/
}
