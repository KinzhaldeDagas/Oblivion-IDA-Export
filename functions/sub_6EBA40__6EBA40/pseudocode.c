// Default NiInterpolator active range for a stateless/no-key interpolator is [0,0].
float *__stdcall NiInterpolator_GetActiveTimeRangeDefault(float *a1, float *a2)
{
  *a1 = 0.0; /*0x6eba4a*/
  *a2 = 0.0; /*0x6eba4c*/
  return a1; /*0x6eba4e*/
}
