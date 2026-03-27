void __thiscall TESContainer_CopyFrom(_BYTE *this, void *a2)
{
  _BYTE *v3; // esi
  char *v4; // edi
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESContainer `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    TESContainer_Clear(this);
    if ( (v3[4] & 1) != 0 )
      *(this + 4) |= 1u;
    else
      *(this + 4) &= ~1u;
    v4 = v3 + 8;
    if ( v3 != (_BYTE *)0xFFFFFFF8 )
    {
      do
      {
        if ( (*(this + 4) & 1) != 0 )
        {
          v5 = *(_DWORD **)v4;
          if ( *(_DWORD *)v4 )
          {
            v6 = (_DWORD *)FormHeapAlloc(8u);
            v7 = 0;
            if ( v6 )
            {
              v6[1] = 0;
              *v6 = 1;
              v7 = v6;
            }
            BSSimpleList_PushFront((_DWORD *)this + 2, (int)v7);
            *v7 = *v5;
          }
        }
        v4 = *((char **)v4 + 1);
      }
      while ( v4 );
    }
  }
}
