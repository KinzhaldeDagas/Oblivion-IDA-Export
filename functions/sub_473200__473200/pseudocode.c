void __thiscall sub_473200(_DWORD *this, char a2)
{
  unsigned int v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  NiObject *v7; // eax
  Ni2DBuffer *v8; // edi
  int v9; // eax
  int v10; // edi
  NiObject *v11; // eax
  NiObject *v12; // edi

  v3 = 0;
  if ( *(this + 0x26) )
  {
    sub_470FC0(this, 4, 0.0);
    sub_470FC0(this, 0, 0.0);
    sub_470FC0(this, 1, 0.0);
    sub_470FC0(this, 2, 0.0);
    if ( *(this + 0x26) )
    {
      v4 = *(this + 0x2B);
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 0x44) )
        {
          v5 = *(_DWORD *)(v4 + 0x58);
          if ( v5 )
            sub_470B50(v5, 0.0);
          if ( *(_DWORD *)(*(this + 0x2B) + 0x44) == 5 )
            sub_6C4480((_DWORD *)*(this + 0x26), 0.0);
          sub_6C9CB0(*(this + 0x2B), 0.0, 0);
        }
      }
    }
    *(this + 0x2B) = 0;
    *((_WORD *)this + 0x21) = 0xFF;
    *((_WORD *)this + 0x3B) = 0xFF;
    *(this + 0x15) = 0xFFFFFFFF;
    v6 = *(this + 0x26);
    if ( *(_DWORD *)(v6 + 0x7C) )
    {
      v7 = NiRTTI_Cast((BSStringT *)&stru_B3FCA0.SpinCount, *(NiObject **)(v6 + 0x7C));
      if ( v7 )
        sub_716690(v7);
    }
    v8 = (Ni2DBuffer *)sub_700010((_DWORD *)*(this + 1), (int)dword_B3CD7C);
    if ( v8 )
    {
      sub_4715C0((_DWORD *)*(this + 0x26), 0.0);
      sub_6FFE90((Ni2DBuffer **)*(this + 1), v8);
    }
    v9 = *(this + 0x26);
    if ( *(_WORD *)(v9 + 0x46) )
    {
      do
      {
        v10 = *(_DWORD *)(*(_DWORD *)(v9 + 0x40) + 4 * v3);
        if ( v10 )
        {
          if ( _strcmp("__TempBlendSequence__", *(char **)(v10 + 8)) )
          {
            if ( a2 )
            {
              sub_6C9590((_DWORD *)v10, (_DWORD *)*(this + 1));
            }
            else
            {
              v11 = NiRTTI_Cast((BSStringT *)dword_B35270, (NiObject *)v10);
              v12 = v11;
              if ( v11 )
              {
                sub_49F880(v11);
                sub_49F860(v12, (_DWORD *)*(this + 1));
              }
            }
          }
        }
        v9 = *(this + 0x26);
        ++v3;
      }
      while ( v3 < *(unsigned __int16 *)(v9 + 0x46) );
    }
  }
}
