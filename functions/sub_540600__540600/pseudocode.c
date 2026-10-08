void __thiscall sub_540600(void ***this, float a2)
{
  void **v3; // edi
  void **v4; // ebx
  double v5; // st6
  double v6; // st7
  float v7; // [esp+0h] [ebp-8h]
  float v8; // [esp+Ch] [ebp+4h]
  float v9; // [esp+Ch] [ebp+4h]

  if ( !InterfaceManager_IsMenuMode() && !sub_5AD410() ) /*0x540610*/
  {
    if ( *this ) /*0x54061d*/
    {
      if ( !sub_6B73A0((int *)*this) ) /*0x540627*/
      {
        v3 = (void **)OSGLobals_PlaySound((int *)MEMORY[0xB33398]->sound, **this, 0x21, 0); /*0x540648*/
        if ( v3 ) /*0x54064c*/
        {
          v4 = *this; /*0x54064f*/
          if ( *this ) /*0x54064f*/
          {
            sub_6B73E0(*this); /*0x540657*/
            FormHeapFree((unsigned int)v4); /*0x54065d*/
          }
          *this = v3; /*0x540665*/
        }
      }
      if ( *this ) /*0x540669*/
      {
        if ( *(this + 2) == (void **)3 ) /*0x540673*/
        {
          if ( !SoundHandle::IsPlaying((UInt32 *)*this) ) /*0x540675*/
            sub_6B7190((int *)*this, 0); /*0x540680*/
        }
        else if ( sub_53FD20(this, 0x3E8) ) /*0x540689*/
        {
          if ( !SoundHandle::IsPlaying((UInt32 *)*this) ) /*0x540694*/
            sub_6B7190((int *)*this, 1); /*0x5406a1*/
        }
        v5 = sub_6B72E0((int *)*this) - a2; /*0x5406b5*/
        v6 = a2; /*0x5406b5*/
        v8 = v5; /*0x5406b7*/
        v9 = fabs(v8); /*0x5406c1*/
        if ( v9 > (double)flt_A34BA0 ) /*0x5406d4*/
        {
          v7 = v6; /*0x5406d9*/
          sub_6B7280((int *)*this, v7); /*0x5406dc*/
        }
      }
    }
  }
}
