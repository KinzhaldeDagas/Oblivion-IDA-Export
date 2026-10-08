// Pass225: NiUnsharedGeometryGroup creation path used for renderer+0x8A4 screen-texture group.
NiGeometryGroup *sub_77DE00()
{
  NiGeometryGroup *result; // eax
  NiGeometryGroup *v1; // eax
  NiGeometryGroup *v2; // esi

  result = unk_B428A0; /*0x77de00*/
  if ( !unk_B428A0 ) /*0x77de00*/
  {
    v1 = (NiGeometryGroup *)FormHeapAlloc(0xCu); /*0x77de0c*/
    v2 = v1; /*0x77de11*/
    if ( v1 ) /*0x77de18*/
    {
      sub_7828D0(v1); /*0x77de1c*/
      v2->vtbl = (NiGeometryGroupVtbl *)&NiUnsharedGeometryGroup::`vftable'; /*0x77de23*/
      unk_B428A0 = v2; /*0x77de29*/
      return v2; /*0x77de21*/
    }
    else
    {
      unk_B428A0 = 0; /*0x77de32*/
      return 0; /*0x77de30*/
    }
  }
  return result; /*0x77de2f*/
}
