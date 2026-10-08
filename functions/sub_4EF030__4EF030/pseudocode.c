void __thiscall sub_4EF030(TESWorldSpace *this, int a2)
{
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  int IndexForCellCoord; // eax
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  if ( this->cellOffsetsArray ) /*0x4ef036*/
  {
    if ( a2 ) /*0x4ef048*/
    {
      v3 = Double_To_SInt32(this->unknown0AC[1]) >> 0xC; /*0x4ef064*/
      v7 = v3; /*0x4ef067*/
      v8 = Double_To_SInt32(this->unknown0AC[2]) >> 0xC; /*0x4ef079*/
      v4 = Double_To_SInt32(this->unknown0AC[3]) >> 0xC; /*0x4ef08a*/
      v5 = Double_To_SInt32(this->unknown0AC[0]) >> 0xC; /*0x4ef094*/
      if ( v5 <= v8 ) /*0x4ef09b*/
      {
        while ( 1 ) /*0x4ef0a4*/
        {
          if ( v7 <= v4 ) /*0x4ef0a8*/
          {
            do /*0x4ef0da*/
            {
              IndexForCellCoord = TESWorldSpace::GetIndexForCellCoord(this, v5, v3); /*0x4ef0b4*/
              if ( IndexForCellCoord >= 0 ) /*0x4ef0bb*/
              {
                if ( this->cellOffsetsArray[IndexForCellCoord] ) /*0x4ef0c3*/
                  this->cellOffsetsArray[IndexForCellCoord] += a2; /*0x4ef0cf*/
              }
              ++v3; /*0x4ef0d5*/
            }
            while ( v3 <= v4 ); /*0x4ef0da*/
          }
          if ( ++v5 > v8 ) /*0x4ef0e3*/
            break; /*0x4ef0e3*/
          v3 = v7; /*0x4ef0a0*/
        }
      }
    }
  }
}
