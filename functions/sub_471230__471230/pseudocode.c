// Samples the actor scene graph while extracting accumulation/root motion. Seeds AccumNode +0x54 from ActorAnimData +0x18, updates RootNode at the requested time, optionally copies the resulting AccumNode translation to the caller, then zeroes AccumNode +0x54. Used after forced play, animation-state restore, and explicit play-group paths.
int __thiscall ActorAnimData_SampleAndExtractRootMotion(int this, float a2, _DWORD *a3, int a4)
{
  int v5; // eax
  _DWORD *v6; // eax
  int result; // eax
  float *v8; // esi

  v5 = *(_DWORD *)(this + 8); /*0x471233*/
  if ( v5 ) /*0x471238*/
  {
    v6 = (_DWORD *)(v5 + 0x54); /*0x47123d*/
    *v6 = *(_DWORD *)(this + 0x18); /*0x471240*/
    v6[1] = *(_DWORD *)(this + 0x1C); /*0x471245*/
    v6[2] = *(_DWORD *)(this + 0x20); /*0x47124b*/
  }
  sub_47C990(*(_DWORD **)(this + 4), a2, *(_DWORD **)(this + 8)); /*0x47125d*/
  result = *(_DWORD *)(this + 8); /*0x471262*/
  if ( result ) /*0x471267*/
  {
    if ( a3 ) /*0x47126f*/
    {
      *a3 = *(_DWORD *)(result + 0x54); /*0x471274*/
      a3[1] = *(_DWORD *)(result + 0x58); /*0x471279*/
      a3[2] = *(_DWORD *)(result + 0x5C); /*0x47127f*/
    }
    v8 = (float *)(*(_DWORD *)(this + 8) + 0x54); /*0x47128b*/
    *v8 = g_zeroNiPoint3; /*0x47128e*/
    v8[1] = *(&g_zeroNiPoint3 + 1); /*0x471296*/
    result = LODWORD(MEMORY[0xB3F9B0][0]); /*0x471299*/
    v8[2] = MEMORY[0xB3F9B0][0]; /*0x47129e*/
  }
  return result; /*0x4712a1*/
}
