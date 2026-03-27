void __thiscall sub_61E980(_DWORD *this, TESObjectREFR *a2)
{
  TESObjectREFR *v2; // edi
  char v3; // bl
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  BOOL v14; // eax

  v2 = a2;
  v3 = 0;
  if ( a2 )
  {
    v3 = 1;
  }
  else
  {
    v2 = (TESObjectREFR *)sub_6135F0((int)this);
    if ( !v2 )
      return;
  }
  v5 = sub_6135F0((int)this);
  if ( !*((_BYTE *)sub_613640(this, v5) + 8) )
  {
    v6 = *(this + 0x10);
    while ( v2 )
    {
      v7 = *(this + 0x10);
      v8 = 0;
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 4) || *(_DWORD *)v7 )
        {
          if ( *(_DWORD *)v7 )
          {
            v8 = **(_DWORD **)v7;
          }
          else
          {
            v9 = *(_DWORD **)(v7 + 4);
            if ( v9 )
            {
              *(_DWORD *)(v7 + 4) = v9[1];
              *(_DWORD *)v7 = *v9;
              FormHeapFree((unsigned int)v9);
            }
            else
            {
              *(_DWORD *)v7 = 0;
            }
            v8 = sub_6135F0((int)this);
          }
        }
      }
      if ( v2 == (TESObjectREFR *)v8 )
      {
        v10 = *(this + 0x10);
        if ( !v10 )
          goto LABEL_30;
        if ( !*(_DWORD *)(v10 + 4) && !*(_DWORD *)v10 )
          goto LABEL_30;
        if ( *(_DWORD *)v10 )
        {
          v11 = **(_DWORD **)v10;
        }
        else
        {
          v12 = *(_DWORD **)(v10 + 4);
          if ( v12 )
          {
            *(_DWORD *)(v10 + 4) = v12[1];
            *(_DWORD *)v10 = *v12;
            FormHeapFree((unsigned int)v12);
          }
          else
          {
            *(_DWORD *)v10 = 0;
          }
          v11 = sub_6135F0((int)this);
        }
        if ( v11
          && (v13 = (_DWORD *)sub_6135F0((int)this), Actor_IsSwimming(v13))
          && !Actor_IsSwimming((_DWORD *)*(this + 0xF))
          && !Actor_CanFightInWater((void *)*(this + 0xF)) )
        {
          v14 = 1;
        }
        else
        {
LABEL_30:
          v14 = *((_BYTE *)this + 0x174) == 0;
        }
      }
      else
      {
        v14 = 0;
      }
      sub_619D40((int)this, v3, v2, v14, 0);
      if ( v3 )
        break;
      if ( v6 )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 || !*(_DWORD *)v6 )
          break;
        v2 = **(TESObjectREFR ***)v6;
      }
    }
  }
  sub_619C90(this);
}
