void _CIpow()
{
  if ( dword_BAABDC )
  {
    _CIpow_::jnedef_2();
    _mm_getcsr();
  }
  else
  {
    _CIpow_::__CIpow_default();
  }
}
