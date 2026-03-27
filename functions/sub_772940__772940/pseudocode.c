NiDX9RenderState *__cdecl sub_772940(NiDX9Renderer *a1)
{
  NiDX9RenderState *result; // eax

  result = (NiDX9RenderState *)a1;
  dword_B427A0 = a1;
  if ( a1 )
  {
    result = a1->member.renderState;
    dword_B427A4 = result;
  }
  else
  {
    dword_B427A4 = 0;
  }
  return result;
}
