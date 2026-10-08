// Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
char __thiscall NiControllerSequence_Deactivate(NiControllerSequence *this, float easeOutTime, char transition)
{
  if ( !*((_DWORD *)this + 0x11) ) /*0x6c9cb2*/
    return 0; /*0x6c9cb7*/
  if ( easeOutTime <= 0.0 ) /*0x6c9ccb*/
  {
    if ( -flt_A7DEB4 != *((float *)this + 0xD) ) /*0x6c9d03*/
      *((float *)this + 0x12) = *((float *)this + 0xE) / *((float *)this + 0xA) /*0x6c9d11*/
                              - *((float *)this + 0xD)
                              + *((float *)this + 0x12);
    *((_DWORD *)this + 0x11) = 0; /*0x6c9d14*/
    *((_DWORD *)this + 0x16) = 0; /*0x6c9d17*/
    *((float *)this + 0x15) = -flt_A7DEB4; /*0x6c9d22*/
    sub_6C6AC0(this); /*0x6c9d25*/
    return 1; /*0x6c9d2a*/
  }
  else
  {
    *((_DWORD *)this + 0x11) = (transition != 0) + 3; /*0x6c9cd9*/
    *((float *)this + 0x13) = -flt_A7DEB4; /*0x6c9ce6*/
    *((float *)this + 0x14) = easeOutTime; /*0x6c9ce9*/
    return 1; /*0x6c9ce4*/
  }
}
