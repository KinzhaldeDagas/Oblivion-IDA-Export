void __stdcall sub_7ABBC0(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // ecx

  if ( a1 ) /*0x7abbca*/
  {
    if ( a1[4] ) /*0x7abbcc*/
    {
      v1 = (_DWORD *)a1[1]; /*0x7abbd3*/
      while ( v1 ) /*0x7abbd8*/
      {
        v2 = v1[2]; /*0x7abbe0*/
        v1 = (_DWORD *)*v1; /*0x7abbf4*/
        (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v2 + 0x84))(v2, renderer); /*0x7abbf7*/
      }
      BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)a1); /*0x7abbff*/
      a1[3] = a1[1]; /*0x7abc07*/
      a1[1] = 0; /*0x7abc0a*/
      a1[2] = 0; /*0x7abc11*/
      a1[4] = 0; /*0x7abc18*/
    }
    BSShaderAccumulator_DrainRenderPassList(a1 + 5, 0);// Pass249 runtime correction: decoded native RenderPassListDrain call, but do not patch this callsite. Activating all six drain-call shims plus the ShadowPass pre-partition shim after PostLoad reproduced the world-load 0xC0000005 / WER 0x5724738B / StackHash_1dca failure before any completed static admission. Preserve the native call. /*0x7abc28*/
  }
}
