void sub_4814C0()
{
  BSShaderAccumulator *Global; // eax
  NiNode *ModelData; // eax
  NiAVObject *v2; // esi
  NiAVObject *ChildAtIndex; // eax
  int v4; // eax

  Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x4814c0*/
  if ( Global ) /*0x4814c7*/
  {
    if ( !*((_DWORD *)Global + 0x88A) ) /*0x4814cd*/
    {
      if ( MEMORY[0xB33A1C] ) /*0x4814da*/
      {
        if ( MEMORY[0xB33A04] ) /*0x4814e3*/
        {
          if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], "Meshes\\TestSphere.NIF", 0, 0, 0xFFFFFFFF) ) /*0x4814fd*/
          {
            ModelData = (NiNode *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], "Meshes\\TestSphere.NIF", 0, 0, 1); /*0x481515*/
            v2 = (NiAVObject *)ModelData; /*0x48151a*/
            if ( ModelData ) /*0x48151e*/
            {
              ChildAtIndex = NiNode_GetChildAtIndex(ModelData, 0); /*0x481524*/
              while ( ChildAtIndex ) /*0x48152b*/
              {
                v4 = (int)ChildAtIndex->vtbl->super.Unk_02((NiObject *)ChildAtIndex); /*0x481537*/
                if ( v4 && *(_WORD *)(v4 + 0xB6) ) /*0x48153d*/
                  ChildAtIndex = **(NiAVObject ***)(v4 + 0xB0); /*0x48154d*/
                else
                  ChildAtIndex = 0; /*0x481551*/
              }
              NiAVObject_InitializePropertyState(v2); /*0x48155a*/
            }
          }
        }
      }
    }
  }
}
