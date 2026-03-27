void __stdcall DisplacementMapConstructor____(Ni2DBuffer **a1)
{
  Ni2DBuffer *v1; // eax
  Ni2DBuffer *v2; // eax
  NiAVObject *v3; // eax
  NiProperty *NiPropertyByID; // esi

  if ( value )
  {
    if ( byte_B07090 )
    {
      v1 = (Ni2DBuffer *)sub_49CB40();
      NiSmartPointer_Set__(a1 + 2, v1);
      v2 = (Ni2DBuffer *)sub_7C2420(g_textureManager, dword_B43104, 0x100, 6u, 0, 0);
      NiSmartPointer_Set__(a1 + 3, v2);
      v3 = sub_49E750(value, flt_A3F514);
      a1[1] = (Ni2DBuffer *)v3;
      NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v3, 4);
      LOBYTE(NiPropertyByID[4].members.m_extraDataList) = 1;
      NiPropertyByID[4].members.m_controller = (NiInterpController *)BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)a1[3]);
    }
  }
}
