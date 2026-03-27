int __cdecl start_16_::INPUT_NEGATIVE(__int64 a1)
{
  __int16 v1; // cx

  if ( ((v1 + 1) & 0x7FFu) >= 0x7FF )
    return start_16_::NEG_INF_NAN(a1);
  else
    return start_16_::NEG_NORMAL_INFINITY();
}
