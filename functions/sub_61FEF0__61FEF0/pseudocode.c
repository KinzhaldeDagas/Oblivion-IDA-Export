void __usercall sub_61FEF0(float *this@<ecx>, double a2@<st0>)
{
  char v4; // al

  sub_6150E0(this, a2, 0); /*0x61fef5*/
  if ( !v4 ) /*0x61fefc*/
  {
    *((_BYTE *)this + 0x17F) = 1; /*0x61ff00*/
    if ( !ActorMovement_BuildPathGridWaypointList(this) ) /*0x61ff07*/
    {
      sub_619920((int)this, 0xF); /*0x61ff14*/
      *(this + 0x35) = *(this + 0x11); /*0x61ff1c*/
      *(this + 0x36) = *(float *)&dword_A46C30; /*0x61ff28*/
      *(this + 0x37) = kTerrainLODQuadRayDirectionZ; /*0x61ff34*/
    }
  }
}
