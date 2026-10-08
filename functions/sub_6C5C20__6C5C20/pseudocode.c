void __thiscall sub_6C5C20(unsigned __int16 *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  NiControllerSequence *v4; // eax

  NiTimeController_LinkObject(this, a2); /*0x6c5c2a*/
  v3 = sub_7124D0(a2); /*0x6c5c36*/
  sub_6C4510(this + 0x1E, v3); /*0x6c5c3c*/
  for ( ; v3; --v3 ) /*0x6c5c43*/
  {
    v4 = (NiControllerSequence *)sub_7124A0(a2); /*0x6c5c47*/
    NiControllerManager_AddSequence((NiControllerManager *)this, v4, 0, 0); /*0x6c5c53*/
  }
}
