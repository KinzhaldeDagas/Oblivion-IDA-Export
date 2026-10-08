// Verified scans the TESPathGrid point array for pointer identity and returns its u16 array index; returns 0xFFFFFFFF if no point array or no matching point.
int __thiscall TESPathGrid_GetPointIndex(TESPathGrid *this, TESPathGridPoint *point)
{
  NiTArray_TESPathGridPoint *pointArray; // edi
  int result; // eax
  int pointCount; // esi
  int v5; // edx
  TESPathGridPoint **i; // ecx

  pointArray = this->pointArray; /*0x4e4e91*/
  result = 0xFFFFFFFF; /*0x4e4e94*/
  if ( pointArray ) /*0x4e4e99*/
  {
    if ( point ) /*0x4e4ea2*/
    {
      pointCount = this->pointCount; /*0x4e4ea5*/
      v5 = 0; /*0x4e4ea9*/
      if ( this->pointCount ) /*0x4e4ea5*/
      {
        for ( i = pointArray->data; *i != point; ++i ) /*0x4e4eaf*/
        {
          if ( ++v5 >= pointCount ) /*0x4e4ebe*/
            return result; /*0x4e4ebe*/
        }
        return v5; /*0x4e4ec6*/
      }
    }
  }
  return result; /*0x4e4ec2*/
}
