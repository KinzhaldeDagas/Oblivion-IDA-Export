void __thiscall sub_68C4E0(NiDX92DBufferData **this, char *a2, NiDX92DBufferData *a3, _DWORD *a4)
{
  char *CastingType; // edi
  NiDX92DBufferData *v5; // esi
  int v6; // ebp
  char v7; // bl
  _DWORD *v8; // eax
  TeleportData *v9; // esi
  char *v10; // eax
  char v11; // al
  char v12; // al
  char v13; // al

  CastingType = a2;
  if ( a2 )
  {
    v5 = a3;
    v6 = 0;
    a2 = (char *)*(this + 1);
    if ( a3 )
    {
      if ( sub_68BF60(this, a3, (NiDX92DBufferData **)&a2) )
        v6 = (int)v5;
    }
    v7 = (char)a4;
    do
    {
      v8 = (_DWORD *)FormHeapAlloc(0x14u);
      a4 = v8;
      v9 = 0;
      if ( v8 )
        v9 = (TeleportData *)sub_68CB30(v8);
      v10 = sub_4BEF40(CastingType);
      TeleportData::SetTeleportPosition(v9, (NiPoint3 *)v10);
      sub_68CA30(v9, 1);
      if ( !v7 )
      {
        v11 = sub_4E8040((float *)CastingType);
        sub_68CA60(v9, v11);
      }
      v12 = sub_67ECF0(CastingType);
      sub_68CA90(v9, v12);
      v13 = sub_67ED20(CastingType);
      sub_68CAC0(v9, v13);
      sub_68CB10(v9, 1);
      sub_6A2FD0(v9, v6);
      if ( !v6 )
        *(this + 1) = (NiDX92DBufferData *)v9;
      v6 = (int)v9;
      CastingType = (char *)TESEnchantableForm_GetCastingType(CastingType);
    }
    while ( CastingType );
    if ( a2 )
      sub_6A2FD0(a2, (int)v9);
    else
      *this = (NiDX92DBufferData *)v9;
  }
}
