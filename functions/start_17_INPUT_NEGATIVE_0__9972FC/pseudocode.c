int __cdecl start_17_::INPUT_NEGATIVE_0(__int64 a1)
{
  __int16 v1; // cx

  if ( ((v1 + 1) & 0x7FFu) >= 0x7FF )
    return start_17_::NEG_INF_NAN_0(a1);
  else
    return start_17_::NEG_NORMAL_INFINITY_0();
}
