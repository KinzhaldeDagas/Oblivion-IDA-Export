int __cdecl StartUsingRenderTarget(NiRenderTargetGroup *a1, ClearFlags clearFlags)
{
  NiDX9Renderer *v2; // esi
  NiRenderTargetGroup *v3; // edi
  NiRenderTargetGroup *v4; // eax
  int result; // eax

  v2 = g_Renderer;
  v3 = a1;
  if ( !a1 )
    v3 = v2->__vftable->super.GetDefaultRTGroup((NiRenderer *)v2);
  if ( v2->member.super.IsReady )
    sub_7D6B00(v2);
  v4 = v3;
  if ( !v3 )
    v4 = g_Renderer->__vftable->super.GetDefaultRTGroup((NiRenderer *)g_Renderer);
  sub_7D6A80(g_Renderer, v4, clearFlags);
  result = dword_B45D74;
  if ( (unsigned int)dword_B45D74 < 0xA )
  {
    result = (int)NiSmartPointer_Set__((Ni2DBuffer **)(4 * result + 0xB45D78), (Ni2DBuffer *)v3);
    ++dword_B45D74;
  }
  return result;
}
