// Verified machine behavior is a raw pointer load from object+0x54. Cell-side callsites use TESObjectCELL+0x54 as NiNode*. TravelPath_AddRoadSegmentsForPath passes a TESWorldSpace, for which +0x54 is the owned TESRoad*. Keep the return interpretation dependent on the receiver type.
void *__thiscall GetObjectPointerAt_054(void *object)
{
  return *((void **)object + 0x15); /*0x4ca793*/
}
