// NiTPointerList free-node virtual. Clears node+0x08 payload, then returns the node to the synchronized global NiTList node pool. It does not destroy the payload.
void __stdcall sub_4B2ED0(_DWORD *a1)
{
  a1[2] = 0;                                    // NiTPointerList node release clears node+0x08 payload before returning the 12-byte node to the global pool. /*0x4b2ed4*/
  NiTListNodePool_Release(a1);                  // Return the cleared NiTList node to the synchronized global node pool; payload lifetime is not handled here. /*0x4b2ee2*/
}
