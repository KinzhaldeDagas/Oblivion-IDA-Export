// Internal temporary-pose transition: activates the generated pose sequence, activates the destination with ease-in, deactivates the pose over that interval, and aligns normalized timing fields. Called by NiControllerManager_BlendFromPose.
char __thiscall sub_6C9D30(
        NiControllerSequence *this,
        NiControllerSequence *arg0,
        float easeInTime,
        float a4,
        NiD3DPass *a2,
        float a6,
        float weight,
        NiControllerSequence *timeSyncSequence)
{
  char v9; // di
  bool v10; // zf
  int v11; // ecx
  char v13; // [esp+Ch] [ebp-Ch]

  NiControllerSequence_Deactivate(this, 0.0, 1); /*0x6c9d3c*/
  if ( easeInTime <= 0.0 ) /*0x6c9d4c*/
    easeInTime = flt_A79DB4; /*0x6c9d54*/
  if ( *((_DWORD *)this + 0x11) ) /*0x6c9d58*/
    return 0; /*0x6c9d58*/
  v9 = (char)a2; /*0x6c9d62*/
  v13 = (char)a2; /*0x6c9d66*/
  *((_DWORD *)this + 0x16) = 0; /*0x6c9d69*/
  sub_6C6A50(this, v13); /*0x6c9d70*/
  v10 = *((_DWORD *)this + 0x11) == 0; /*0x6c9d79*/
  *((float *)this + 7) = a6; /*0x6c9d7d*/
  *((_DWORD *)this + 0x11) = 1; /*0x6c9d80*/
  if ( v10 ) /*0x6c9d8c*/
  {
    v11 = *((_DWORD *)this + 0x10); /*0x6c9d8e*/
    a2 = (NiD3DPass *)this; /*0x6c9d99*/
    sub_73A5E0((unsigned int *)(v11 + 0x4C), &a2); /*0x6c9d9d*/
  }
  if ( !NiControllerSequence_Activate(arg0, v9, 0, weight, easeInTime, timeSyncSequence, 1) ) /*0x6c9dc4*/
    return 0; /*0x6c9df9*/
  NiControllerSequence_Deactivate(this, easeInTime, 1); /*0x6c9dd9*/
  *((float *)this + 0x15) = *((float *)this + 0xF) / *((float *)this + 0xA); /*0x6c9de6*/
  *((float *)arg0 + 0x15) = a4 / *((float *)arg0 + 0xA); /*0x6c9df0*/
  return 1; /*0x6c9df3*/
}
