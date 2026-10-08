// Pass205/206: LODWaterRoot jump-table loop creates four generated child quads under 0x00B35234 and reaches shared child-creation tail.
void sub_49E280()
{
  bool v0; // zf
  NiNode *v1; // eax
  NiNode *v2; // eax

  v0 = *(_DWORD *)&MEMORY[0xB33E90][0x13A4] == 0; /*0x49e2b0*/
  MEMORY[0xB33E90][0x1399] = 1; /*0x49e2b2*/
  if ( v0 ) /*0x49e2b9*/
  {
    if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x49e2c4*/
    {
      v1 = (NiNode *)FormHeapAlloc(0xDCu); /*0x49e2d2*/
      if ( v1 ) /*0x49e2e4*/
        v2 = NiNode::NiNode(v1, 0); /*0x49e2e9*/
      else
        v2 = 0; /*0x49e2f0*/
      NiSmartPointer_Set__((Ni2DBuffer **)&MEMORY[0xB33E90][0x13A4], (Ni2DBuffer *)v2); /*0x49e300*/
      NiObjectNET_SetName(*(NiObjectNET **)&MEMORY[0xB33E90][0x13A4], "LODWaterRoot"); /*0x49e310*/
      ((void (__thiscall *)(NiNode *, _DWORD, _DWORD))MEMORY[0xB333A8]->vtbl->AddObject)( /*0x49e32a*/
        MEMORY[0xB333A8],
        *(_DWORD *)&MEMORY[0xB33E90][0x13A4],
        0);
      JUMPOUT(0x49E408); /*0x49e408*/
    }
    JUMPOUT(0x49E4D6); /*0x49e4d6*/
  }
  JUMPOUT(0x49E4D0); /*0x49e4d0*/
}
