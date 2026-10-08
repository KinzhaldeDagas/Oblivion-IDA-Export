NiDX9RenderState *__cdecl sub_772940(NiDX9Renderer *a1)
{
  NiDX9RenderState *result; // eax

  result = (NiDX9RenderState *)a1; /*0x772940*/
  unk_B427A0 = a1; /*0x772946*/
  if ( a1 ) /*0x77294b*/
  {
    result = a1->member.renderState; /*0x77294d*/
    unk_B427A4 = result; /*0x772953*/
  }
  else
  {
    unk_B427A4 = 0; /*0x772959*/
  }
  return result; /*0x772958*/
}
