int bhkShapeProbe_ConfigureLayer1CWideMask()
{
  bhkCollisionLayer_SetInteraction(0x1C, 1, 1); // TES4 authoritative: this separate layer 0x1C setup uses a wider mask than 0x69A490, proving layer 0x1C global interactions are mutable and caller-specific. /*0x535316*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x13, 1); /*0x535321*/
  bhkCollisionLayer_SetInteraction(0x1C, 2, 1); /*0x53532c*/
  bhkCollisionLayer_SetInteraction(0x1C, 3, 1); /*0x535337*/
  bhkCollisionLayer_SetInteraction(0x1C, 4, 1); /*0x535342*/
  bhkCollisionLayer_SetInteraction(0x1C, 5, 1); /*0x53534d*/
  bhkCollisionLayer_SetInteraction(0x1C, 6, 1); /*0x53535b*/
  bhkCollisionLayer_SetInteraction(0x1C, 7, 0); /*0x535366*/
  bhkCollisionLayer_SetInteraction(0x1C, 8, 1); /*0x535371*/
  bhkCollisionLayer_SetInteraction(0x1C, 9, 1); /*0x53537c*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xA, 1); /*0x535387*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xB, 0); /*0x535392*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xC, 1); /*0x5353a0*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xD, 1); /*0x5353ab*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xE, 1); /*0x5353b6*/
  bhkCollisionLayer_SetInteraction(0x1C, 0xF, 0); /*0x5353c1*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x10, 0); /*0x5353cc*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x11, 1); /*0x5353d7*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x12, 1); /*0x5353e5*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x14, 1); /*0x5353f0*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x15, 0); /*0x5353fb*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x18, 0); /*0x535406*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1A, 0); /*0x535411*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1B, 0); /*0x53541c*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1C, 0); /*0x53542a*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1D, 0); /*0x535435*/
  bhkCollisionLayer_SetInteraction(0x1C, 0x1E, 0); /*0x535440*/
  return bhkCollisionLayer_SetInteraction(0x1C, 0x1F, 0); /*0x535453*/
}
