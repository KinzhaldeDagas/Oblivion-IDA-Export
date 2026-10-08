// Pass205: Water displacement setup; writes WaterShaderProperty +0x70=1 and +0x6C=rendered texture inner texture.
void __stdcall DisplacementMapConstructor____(Ni2DBuffer **a1)
{
  Ni2DBuffer *v1; // eax
  Ni2DBuffer *v2; // eax
  NiAVObject *v3; // eax
  NiProperty *NiPropertyByID; // esi

  if ( *(_DWORD *)&MEMORY[0xB33E90][0x13A0] ) /*0x49e7f0*/
  {
    if ( byte_B07090 ) /*0x49e7fc*/
    {
      v1 = (Ni2DBuffer *)sub_49CB40(); /*0x49e807*/
      NiSmartPointer_Set__(a1 + 2, v1); /*0x49e814*/
      v2 = (Ni2DBuffer *)sub_7C2420( /*0x49e833*/
                           *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
                           unk_B43104,
                           0x100,
                           6u,
                           0,
                           0);
      NiSmartPointer_Set__(a1 + 3, v2); /*0x49e83b*/
      v3 = sub_49E750(*(_DWORD *)&MEMORY[0xB33E90][0x13A0], flt_A3F514); /*0x49e853*/
      a1[1] = (Ni2DBuffer *)v3; /*0x49e85c*/
      NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v3, 4); /*0x49e864*/
      LOBYTE(NiPropertyByID[4].members.m_extraDataList) = 1; /*0x49e866*/
      NiPropertyByID[4].members.m_controller = (NiInterpController *)BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)a1[3]); /*0x49e872*/
    }
  }
}
