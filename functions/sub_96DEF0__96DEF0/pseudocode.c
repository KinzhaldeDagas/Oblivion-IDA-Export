void __thiscall sub_96DEF0(int *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // ebp
  NiRTTI *v5; // eax
  int v6; // ecx
  NiRTTI *v7; // eax
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

  v3 = *(this + 2); /*0x96def9*/
  v4 = 0; /*0x96defc*/
  if ( v3 && (v5 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3)) != 0 )
  {
    while ( v5 != &stru_B3FCD4 ) /*0x96df16*/
    {
      v5 = v5->parent; /*0x96df18*/
      if ( !v5 ) /*0x96df1d*/
        goto LABEL_5; /*0x96df1d*/
    }
    if ( !*(this + 0xD) ) /*0x96df58*/
    {
      if ( !*(this + 0x10) ) /*0x96df61*/
      {
        sub_96DCD0(this); /*0x96df68*/
        sub_96DD40(this); /*0x96df6f*/
      }
      v8 = *(this + 2); /*0x96df74*/
      v9 = (NiOBBRoot *)FormHeapAlloc(0x54u); /*0x96df79*/
      if ( v9 ) /*0x96df83*/
        *(this + 0xD) = (int)NiOBBRoot::NiOBBRoot( /*0x96dfa8*/
                               v9,
                               *(_WORD *)(*(_DWORD *)(v8 + 0xB4) + 0x40),
                               *(_DWORD *)(*(_DWORD *)(v8 + 0xB4) + 0x48),
                               *(_DWORD *)(*(_DWORD *)(v8 + 0xB4) + 0x1C),
                               *(this + 0x10),
                               a2);
      else
        *(this + 0xD) = 0; /*0x96dfb7*/
    }
  }
  else
  {
LABEL_5:
    v6 = *(this + 2); /*0x96df1f*/
    if ( v6 )
    {
      v7 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6); /*0x96df2f*/
      if ( v7 )
      {
        while ( v7 != &stru_B3FD04 ) /*0x96df45*/
        {
          v7 = v7->parent; /*0x96df47*/
          if ( !v7 ) /*0x96df4c*/
            return; /*0x96df4c*/
        }
        if ( !*(this + 0xD) )
        {
          if ( !*(this + 0x10) ) /*0x96dfcd*/
          {
            sub_96DCD0(this); /*0x96dfd4*/
            sub_96DD40(this); /*0x96dfdb*/
          }
          v10 = *(this + 2); /*0x96dfe0*/
          v18 = v10; /*0x96dffc*/
          v17 = 0; /*0x96e000*/
          v20 = *(unsigned __int16 *)(*(_DWORD *)(v10 + 0xB4) + 0x40); /*0x96e004*/
          v11 = FormHeapAlloc((unsigned __int64)(3 * v20) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * v20);
          v19 = v11; /*0x96e017*/
          if ( v20 ) /*0x96e01b*/
          {
            v12 = (_WORD *)(v11 + 2); /*0x96e01d*/
            do /*0x96e062*/
            {
              v13 = *(_DWORD *)(v10 + 0xB4); /*0x96e020*/
              v14 = v12 + 1; /*0x96e02b*/
              (*(void (__thiscall **)(int, unsigned int, _WORD *, _WORD *, _WORD *))(*(_DWORD *)v13 + 0x60))( /*0x96e035*/
                v13,
                v4,
                v12 + 0xFFFFFFFF,
                v12,
                v12 + 1);
              if ( v12[0xFFFFFFFF] != *v12 && v12[0xFFFFFFFF] != *v14 && *v12 != *v14 ) /*0x96e04d*/
              {
                v12 += 3; /*0x96e04f*/
                ++v17; /*0x96e052*/
              }
              v10 = v18; /*0x96e057*/
              ++v4; /*0x96e05b*/
            }
            while ( v4 < v20 ); /*0x96e062*/
          }
          v15 = (NiOBBRoot *)FormHeapAlloc(0x54u); /*0x96e06a*/
          if ( v15 ) /*0x96e074*/
            v16 = NiOBBRoot::NiOBBRoot(v15, v17, v19, *(_DWORD *)(*(_DWORD *)(v10 + 0xB4) + 0x1C), *(this + 0x10), a2); /*0x96e095*/
          else
            v16 = 0; /*0x96e09c*/
          *(this + 0xD) = (int)v16; /*0x96e0a3*/
          FormHeapFree(v19); /*0x96e0a6*/
        }
      }
    }
  }
}
