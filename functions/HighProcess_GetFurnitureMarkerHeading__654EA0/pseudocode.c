SInt16 __thiscall HighProcess::GetFurnitureMarkerHeading(HighProcess *this)
{
  NiObjectNET *v2; // eax
  BSFurnitureMarker *BSFornitureMarker; // eax

  if ( this->furniture /*0x654ed3*/
    && this->furnitureMarkerIndex != 0x7F
    && (v2 = (NiObjectNET *)this->furniture->vtbl->GetNiNode(this->furniture),
        (BSFornitureMarker = NiObjectNET::GetBSFornitureMarker(v2)) != 0) )
  {
    return (unsigned __int8)BYTE2(*(_DWORD *)&BSFornitureMarker->markers.data[this->furnitureMarkerIndex].heading); /*0x654efc*/
  }
  else
  {
    return 0; /*0x654f03*/
  }
}
