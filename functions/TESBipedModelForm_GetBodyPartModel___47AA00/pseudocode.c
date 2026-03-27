void __userpurge TESBipedModelForm_GetBodyPartModel____(
        char *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        void *a5,
        int a6,
        int a7)
{
  unsigned __int16 *v8; // ebp
  void *v9; // eax
  unsigned int v10; // ebx
  int *v11; // edi
  void *v12; // eax
  int v13; // edi

  v8 = (unsigned __int16 *)OblivionDynamicCast(
                             a5,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
  v9 = OblivionDynamicCast(
         a5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESRace `RTTI Type Descriptor',
         0);
  if ( v8 )
  {
    if ( a7 != 0xFFFFFFFF && (TESBipedModelForm_CoversSlot(v8, 7, 0) || TESBipedModelForm_CoversSlot(v8, 6, 0)) )
    {
      sub_478780(this, (char)v8, st5_0, st6_0, st7_0, (int)(this + 0x10 * a7 + 0x4C), 1, 0);
      *((_DWORD *)this + 4 * a7 + 0x13) = a5;
      *((_DWORD *)this + 4 * a7 + 0x14) = a6;
    }
    else
    {
      v10 = 0;
      v11 = (int *)(this + 0x4C);
      do
      {
        if ( TESBipedModelForm_CoversSlot(v8, v10, 0) )
        {
          v12 = (void *)*v11;
          if ( (void *)*v11 != a5 )
          {
            if ( v12
              && OblivionDynamicCast(
                   v12,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESRace `RTTI Type Descriptor',
                   0) )
            {
              sub_478780(this, (char)v8, st5_0, st6_0, st7_0, (int)v11, 1, 0);
            }
            else
            {
              sub_479740(this, st5_0, st6_0, st7_0, *v11);
            }
          }
        }
        ++v10;
        v11 += 4;
      }
      while ( v10 < 0x10 );
      v13 = 0;
      while ( !TESBipedModelForm_CoversSlot(v8, v13, 1) )
      {
        if ( (unsigned int)++v13 >= 0x10 )
          return;
      }
      *((_DWORD *)this + 4 * v13 + 0x14) = a6;
      *((_DWORD *)this + 4 * v13 + 0x13) = a5;
    }
  }
  else if ( v9 )
  {
    sub_478780(this, 0, st5_0, st6_0, st7_0, (int)(this + 0x10 * a7 + 0x4C), 1, 0);
    *((_DWORD *)this + 4 * a7 + 0x13) = a5;
    *((_DWORD *)this + 4 * a7 + 0x14) = a6;
  }
}
