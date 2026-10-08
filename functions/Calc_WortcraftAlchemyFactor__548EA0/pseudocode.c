// AVU decode: Calc_WortcraftAlchemyFactor(effectiveAlchemy) returns fWortalchmult * effectiveAlchemy * fWortStrMult.
double __cdecl Calc_WortcraftAlchemyFactor(float a1)
{
  return (float)(flt_B37ED0[0x2C] * a1 * flt_B37ED0[0x2E]); /*0x548eb8*/
}
