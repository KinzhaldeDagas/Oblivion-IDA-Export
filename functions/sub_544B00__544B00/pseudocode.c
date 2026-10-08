double __thiscall sub_544B00(Sun *this)
{
  NiProperty *NiPropertyByID; // eax
  NiProperty *v3; // eax

  if ( NiNode_GetNiPropertyByID((NiNode *)this->membr.SunGlareGeometry, 4) /*0x544b3e*/
    && (NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)this->membr.SunGlareGeometry, 4),
        (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB)
    && (v3 = NiNode_GetNiPropertyByID((NiNode *)this->membr.SunGlareGeometry, 4)) != 0 )
  {
    return *(float *)&v3[5].vtbl; /*0x544b40*/
  }
  else
  {
    return 0.0; /*0x544b45*/
  }
}
