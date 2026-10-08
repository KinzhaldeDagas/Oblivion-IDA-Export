void __usercall sub_61FE90(float *this@<ecx>, double a2@<st0>)
{
  char v4; // al

  sub_6150E0(this, a2, 0); /*0x61fe95*/
  if ( !v4 ) /*0x61fe9c*/
  {
    *((_BYTE *)this + 0x17E) = 1; /*0x61fea0*/
    if ( !ActorMovement_BuildPathGridWaypointList(this) ) /*0x61fea7*/
    {
      *(this + 0x35) = *(this + 0x11); /*0x61feb5*/
      *(this + 0x36) = *(float *)&dword_A46C30; /*0x61fec3*/
      *(this + 0x37) = kTerrainLODQuadRayDirectionZ; /*0x61fecf*/
      sub_619920((int)this, 0xA); /*0x61fed5*/
      sub_6160B0((Actor **)this); /*0x61fedd*/
    }
  }
}
