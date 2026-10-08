void __thiscall sub_68A250(float ***this)
{
  float ***v1; // eax
  float ***v2; // edx
  const TravelPathNode *v3; // eax

  v1 = this + 1; /*0x68a250*/
  if ( this != (float ***)0xFFFFFFFC ) /*0x68a255*/
  {
    do /*0x68a257*/
    {
      v2 = (float ***)v1[1]; /*0x68a257*/
      if ( !v2 && !*v1 ) /*0x68a25e*/
        break; /*0x68a25e*/
      v3 = (const TravelPathNode *)*v1; /*0x68a262*/
      if ( v3 && !v2 ) /*0x68a26a*/
      {
        TravelPathNode_GetPosition(v3); /*0x68a27a*/
        return; /*0x68a27a*/
      }
      v1 = v2; /*0x68a26c*/
    }
    while ( v2 ); /*0x68a257*/
  }
}
