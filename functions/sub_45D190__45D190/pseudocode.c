void __thiscall sub_45D190(_DWORD *this)
{
  _DWORD *v1; // edi
  void **v2; // ebx
  unsigned int *v3; // eax
  unsigned int *v4; // esi
  unsigned int v5; // eax
  int v6; // eax
  NiAVObject *v7; // eax
  int v8; // esi

  v1 = this + 0x19;
  v2 = (void **)(this + 0x19);
  if ( this != (_DWORD *)0xFFFFFF9C )
  {
    do
    {
      if ( *v2 )
      {
        v3 = (unsigned int *)OblivionDynamicCast(
                               *v2,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &ArrowProjectile `RTTI Type Descriptor',
                               0);
        v4 = v3;
        if ( v3 )
        {
          v5 = v3[0x17];
          if ( v5 )
          {
            v6 = *(_DWORD *)(v5 + 0x28);
            if ( v6 )
            {
              v7 = *(NiAVObject **)(v6 + 0x3C);
              if ( v7 )
                NiAVObject_UpdateNiAVObject(v7, 0.0, 0);
            }
          }
          sub_60BE90(v4);
        }
      }
      v2 = (void **)v2[1];
    }
    while ( v2 );
  }
  if ( v1[1] )
  {
    do
    {
      v8 = *(_DWORD *)(v1[1] + 4);
      FormHeapFree(v1[1]);
      v1[1] = v8;
    }
    while ( v8 );
  }
  *v1 = 0;
}
