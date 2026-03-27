void sub_49E280()
{
  bool v0; // zf
  NiNode *v1; // eax
  NiNode *v2; // eax

  v0 = LodWaterRoot == 0;
  byte_B35229 = 1;
  if ( v0 )
  {
    if ( !TES->currentInteriorCell )
    {
      v1 = (NiNode *)FormHeapAlloc(0xDCu);
      if ( v1 )
        v2 = NiNode::NiNode(v1, 0);
      else
        v2 = 0;
      NiSmartPointer_Set__((Ni2DBuffer **)&LodWaterRoot, (Ni2DBuffer *)v2);
      NiObjectNET_SetName((NiObjectNET *)LodWaterRoot, "LODWaterRoot");
      ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))LODRoot->vtbl->AddObject)(LODRoot, LodWaterRoot, 0);
      JUMPOUT(0x49E408);
    }
    JUMPOUT(0x49E4D6);
  }
  JUMPOUT(0x49E4D0);
}
