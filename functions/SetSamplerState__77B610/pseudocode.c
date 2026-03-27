NiRenderStateSetting *__fastcall SetSamplerState(
        NiDX9RenderState *a1,
        int a2,
        D3DSAMPLERSTATETYPE a3,
        D3DSAMPLERSTATETYPE a4,
        DWORD a5,
        char a6)
{
  NiRenderStateSetting *result; // eax

  result = (NiRenderStateSetting *)*(unsigned __int16 *)(2 * a4 + 0xB427B0);
  if ( (unsigned __int16)result < 5u )
  {
    result = &a1->member.SamplerStateSettings[5 * a3 + (unsigned __int16)result];
    if ( result->CurrentValue != a5 )
    {
      if ( a6 )
        result->PreviousValue = result->CurrentValue;
      result->CurrentValue = a5;
      return (NiRenderStateSetting *)a1->member.Device->lpVtbl->SetSamplerState(a1->member.Device, a3, a4, a5);
    }
  }
  return result;
}
