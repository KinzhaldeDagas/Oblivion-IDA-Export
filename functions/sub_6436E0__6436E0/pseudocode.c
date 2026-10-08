void __thiscall sub_6436E0(void *this, void *a2, float a3)
{
  void *v4; // edi

  if ( a2 ) /*0x6436ea*/
  {
    v4 = OblivionDynamicCast( /*0x643701*/
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( v4 ) /*0x643708*/
    {
      if ( a3 > dbl_A2F938 ) /*0x643719*/
        (*(void (__thiscall **)(void *, void *, int))(*(_DWORD *)this + 0x14))(this, a2, 1); /*0x643725*/
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v4 + 0x1C0))(v4, 0.0); /*0x643737*/
    }
  }
}
