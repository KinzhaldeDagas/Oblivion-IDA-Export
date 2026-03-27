SInt16 __thiscall HighProcess::GetFurnitureMarkerHeading(HighProcess *this)
{
  NiObjectNET *v2; // eax
  BSFurnitureMarker *BSFornitureMarker; // eax

  if ( this->furniture
    && this->furnitureMarkerIndex != 0x7F
    && (v2 = (NiObjectNET *)this->furniture->vtbl->GetNiNode(this->furniture),
        (BSFornitureMarker = NiObjectNET::GetBSFornitureMarker(v2)) != 0) )
  {
    return (unsigned __int8)BYTE2(*(_DWORD *)&BSFornitureMarker->markers.data[this->furnitureMarkerIndex].heading);
  }
  else
  {
    return 0;
  }
}
