int __thiscall sub_765560(NiDX9Renderer *this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // ebp
  int i; // esi

  ((void (__thiscall *)(NiDX9RenderState *, int))this->member.renderState->vtbl->SetNormalization)(
    this->member.renderState,
    a4);
  result = (int)sub_761AE0((float *)&this->member.worldMatrix, (float *)a4, (float *)(a4 + 0x24), *(float *)(a4 + 0x30));
  if ( *(_WORD *)(a3 + 0x20) <= 4u )
  {
    v6 = *(_DWORD *)(a2 + 0x20);
    for ( i = 0; i < 4; ++i )
      result = (int)this->member.device->lpVtbl->SetTransform(
                      this->member.device,
                      i + 0x100,
                      v6 + (*(unsigned __int16 *)(*(_DWORD *)(a3 + 4) + 2 * i) << 6));
  }
  return result;
}
