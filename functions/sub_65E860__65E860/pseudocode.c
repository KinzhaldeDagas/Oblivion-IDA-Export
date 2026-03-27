void __thiscall sub_65E860(TESObjectREFR *this)
{
  TESWorldSpace *WorldSpace; // esi
  _DWORD *v3; // ebx
  BSExtraDataVtbl *v4; // edi
  BSExtraDataVtbl **v5; // esi
  BSExtraDataVtbl *v6; // eax
  _DWORD *v7; // [esp+8h] [ebp-8h]
  TESWorldSpace *v8; // [esp+Ch] [ebp-4h]

  WorldSpace = TESObjectREFR_GetWorldSpace(this);
  v8 = WorldSpace;
  if ( *((TESWorldSpace **)this + 0x1D1) != WorldSpace )
  {
    sub_65E800(this);
    if ( WorldSpace )
    {
      v3 = sub_4F0620((int)WorldSpace);
      v7 = v3;
      if ( v3 )
      {
        do
        {
          v4 = (BSExtraDataVtbl *)*v3;
          if ( *v3 )
          {
            v5 = (BSExtraDataVtbl **)FormHeapAlloc(8u);
            v6 = sub_4D7730(v4);
            *v5 = v6;
            v5[1] = v4;
            if ( v6 )
              BSSimpleList_PushFront((_DWORD *)this + 0x1CF, (int)v5);
            else
              FormHeapFree((unsigned int)v5);
          }
          v3 = (_DWORD *)v3[1];
        }
        while ( v3 );
        v3 = v7;
        WorldSpace = v8;
      }
      BSSimpleList_Clear(v3);
      FormHeapFree((unsigned int)v3);
    }
    *((_DWORD *)this + 0x1D1) = WorldSpace;
  }
}
