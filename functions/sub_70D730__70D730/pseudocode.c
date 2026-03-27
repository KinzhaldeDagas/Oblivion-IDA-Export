NiCamera *sub_70D730()
{
  NiCamera *v0; // eax

  v0 = (NiCamera *)FormHeapAlloc(0x124u);
  if ( v0 )
    return sub_70D590(v0);
  else
    return 0;
}
