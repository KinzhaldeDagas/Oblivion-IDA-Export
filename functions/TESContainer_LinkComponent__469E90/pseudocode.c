void __thiscall TESContainer_LinkComponent(_BYTE *this, TESForm *a2)
{
  _BYTE *v3; // esi
  _DWORD *v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // eax

  if ( (*(this + 4) & 1) == 0 )
  {
    v3 = this + 8;
    v4 = 0;
    if ( this != (_BYTE *)0xFFFFFFF8 )
    {
      do
      {
        v5 = *(_DWORD **)v3;
        if ( *(_DWORD *)v3 )
        {
          TESContainer_ItemEntry_Link(v5, a2);
          if ( !v5[1] )
          {
            if ( v4 )
            {
              BSSimpleList_Remove(v4, (int)v5);
              v3 = (_BYTE *)v4[1];
              FormHeapFree((unsigned int)v5);
            }
            else
            {
              v6 = *((_DWORD **)v3 + 1);
              if ( v6 )
              {
                *((_DWORD *)v3 + 1) = v6[1];
                *(_DWORD *)v3 = *v6;
                FormHeapFree((unsigned int)v6);
              }
              else
              {
                *(_DWORD *)v3 = 0;
              }
              FormHeapFree((unsigned int)v5);
            }
            continue;
          }
          v4 = v3;
        }
        v3 = *((_BYTE **)v3 + 1);
      }
      while ( v3 );
    }
    *(this + 4) |= 1u;
  }
}
