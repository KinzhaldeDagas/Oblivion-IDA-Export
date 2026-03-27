double GetMagicTrackingLimitForScene()
{
  if ( byte_B333B8 )
    return fMagicTrackingLimitComplex;
  else
    return fMagicTrackingLimit;
}
