void __thiscall sub_96DEF0(int *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // ebp
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  NiOBBRoot *v9; // eax
  int v10; // ebx
  int v11; // eax
  _WORD *v12; // esi
  int v13; // ecx
  _WORD *v14; // ebx
  NiOBBRoot *v15; // eax
  NiOBBRoot *v16; // eax
  unsigned __int16 v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  unsigned int v19; // [esp+18h] [ebp-Ch]
  unsigned int v20; // [esp+1Ch] [ebp-8h]

  v3 = *(this + 2);
  v4 = 0;
  if ( v3 && (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3)) != 0 )
  {
    while ( (char *)v5 != dword_B3FCD4 )
    {
      v5 = *(_DWORD *)(v5 + 4);
      if ( !v5 )
        goto LABEL_5;
    }
    if ( !*(this + 0xD) )
    {
      if ( !*(this + 0x10) )
      {
        sub_96DCD0(this);
        sub_96DD40(this);
      }
      v8 = *(this + 2);
      v9 = (NiOBBRoot *)FormHeapAlloc(0x54u);
      if ( v9 )
        *(this + 0xD) = (int)NiOBBRoot::NiOBBRoot(
                               v9,
                               *(_WORD *)(*(_DWORD *)(v8 + 0xB4) + 0x40),
                               *(_DWORD *)(*(_DWORD *)(v8 + 0xB4) + 0x48),
                               *(_DWORD *)(*(_DWORD *)(v8 + 0xB4) + 0x1C),
                               *(this + 0x10),
                               a2);
      else
        *(this + 0xD) = 0;
    }
  }
  else
  {
LABEL_5:
    v6 = *(this + 2);
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
      if ( v7 )
      {
        while ( (char *)v7 != dword_B3FD04 )
        {
          v7 = *(_DWORD *)(v7 + 4);
          if ( !v7 )
            return;
        }
        if ( !*(this + 0xD) )
        {
          if ( !*(this + 0x10) )
          {
            sub_96DCD0(this);
            sub_96DD40(this);
          }
          v10 = *(this + 2);
          v18 = v10;
          v17 = 0;
          v20 = *(unsigned __int16 *)(*(_DWORD *)(v10 + 0xB4) + 0x40);
          v11 = FormHeapAlloc((unsigned __int64)(3 * v20) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * v20);
          v19 = v11;
          if ( v20 )
          {
            v12 = (_WORD *)(v11 + 2);
            do
            {
              v13 = *(_DWORD *)(v10 + 0xB4);
              v14 = v12 + 1;
              (*(void (__thiscall **)(int, unsigned int, _WORD *, _WORD *, _WORD *))(*(_DWORD *)v13 + 0x60))(
                v13,
                v4,
                v12 + 0xFFFFFFFF,
                v12,
                v12 + 1);
              if ( v12[0xFFFFFFFF] != *v12 && v12[0xFFFFFFFF] != *v14 && *v12 != *v14 )
              {
                v12 += 3;
                ++v17;
              }
              v10 = v18;
              ++v4;
            }
            while ( v4 < v20 );
          }
          v15 = (NiOBBRoot *)FormHeapAlloc(0x54u);
          if ( v15 )
            v16 = NiOBBRoot::NiOBBRoot(v15, v17, v19, *(_DWORD *)(*(_DWORD *)(v10 + 0xB4) + 0x1C), *(this + 0x10), a2);
          else
            v16 = 0;
          *(this + 0xD) = (int)v16;
          FormHeapFree(v19);
        }
      }
    }
  }
}
