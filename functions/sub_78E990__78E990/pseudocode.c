// Oblivion Uniform::Next thunk. Dispatches directly to the shared Random::Next shuffled-generator implementation.
// attributes: thunk
float __thiscall OB_Uniform_Next_010201A0(OB_Uniform_010201A0 *this)
{
  return OB_Random_Next_010201A0((OB_Random_010201A0 *)this);
}
