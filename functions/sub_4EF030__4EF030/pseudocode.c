void __thiscall sub_4EF030(TESWorldSpace *this, int a2)
{
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  int IndexForCellCoord; // eax
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  if ( this->cellOffsetsArray )
  {
    if ( a2 )
    {
      v3 = Double_To_SInt32(this->unk0AC[1]) >> 0xC;
      v7 = v3;
      v8 = Double_To_SInt32(this->unk0AC[2]) >> 0xC;
      v4 = Double_To_SInt32(this->unk0AC[3]) >> 0xC;
      v5 = Double_To_SInt32(this->unk0AC[0]) >> 0xC;
      if ( v5 <= v8 )
      {
        while ( 1 )
        {
          if ( v7 <= v4 )
          {
            do
            {
              IndexForCellCoord = TESWorldSpace::GetIndexForCellCoord(this, v5, v3);
              if ( IndexForCellCoord >= 0 )
              {
                if ( this->cellOffsetsArray[IndexForCellCoord] )
                  this->cellOffsetsArray[IndexForCellCoord] += a2;
              }
              ++v3;
            }
            while ( v3 <= v4 );
          }
          if ( ++v5 > v8 )
            break;
          v3 = v7;
        }
      }
    }
  }
}
