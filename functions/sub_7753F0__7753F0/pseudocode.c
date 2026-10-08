_DWORD *__thiscall sub_7753F0(_DWORD *this, int arg0, int arg4, int a4, int a5, char a6, char a7)
{
  _DWORD *v7; // ebx
  int v8; // eax
  unsigned int v10; // edi
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // ebx
  unsigned int i; // edi
  int v15; // ebx
  char *v16; // eax
  int v17; // edi
  int v18; // edi
  int v19; // ebp
  unsigned int v21; // [esp+A8h] [ebp-4Ch]
  int a3; // [esp+C0h] [ebp-34h]
  int v23; // [esp+C4h] [ebp-30h]
  unsigned int v25; // [esp+CCh] [ebp-28h]
  int v26; // [esp+D0h] [ebp-24h]
  int v27; // [esp+D4h] [ebp-20h]
  int v28; // [esp+D8h] [ebp-1Ch]
  int v29; // [esp+DCh] [ebp-18h]
  signed int a2; // [esp+E0h] [ebp-14h]
  _BYTE v31[4]; // [esp+E4h] [ebp-10h] BYREF
  char *v32; // [esp+E8h] [ebp-Ch]
  _BYTE v33[4]; // [esp+ECh] [ebp-8h] BYREF
  _BYTE v34[4]; // [esp+F0h] [ebp-4h] BYREF
  char v35; // [esp+F8h] [ebp+4h]

  v7 = this; /*0x7753f4*/
  *(this + 3) = 0x25; /*0x7753fd*/
  *(this + 2) = &NiTMapBase<NiTPointerAllocator<unsigned int>,enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'; /*0x775411*/
  *(this + 5) = 0; /*0x775418*/
  v8 = FormHeapAlloc(0x94u); /*0x775424*/
  v21 = 4 * v7[3]; /*0x775430*/
  v7[4] = v8; /*0x775434*/
  _memset(v8, 0, v21); /*0x775437*/
  v7[2] = &NiTPointerMap<enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'; /*0x77544f*/
  v10 = 0; /*0x775456*/
  *v7 = a5; /*0x775458*/
  *((_BYTE *)v7 + 5) = a6; /*0x77545a*/
  *((_BYTE *)v7 + 4) = a7; /*0x77545d*/
  v25 = 0; /*0x775460*/
  do /*0x7756de*/
  {
    if ( v10 ) /*0x775466*/
    {
      v11 = a4; /*0x775472*/
      a2 = sub_4979E0(v10); /*0x775487*/
      if ( (*(int (__stdcall **)(int, int, int, int, int, int, signed int))(*(_DWORD *)arg0 + 0x28))( /*0x775497*/
             arg0,
             arg4,
             a4,
             a5,
             1,
             1,
             a2) >= 0 )
      {
        v12 = (_DWORD *)FormHeapAlloc(0x48u); /*0x77549f*/
        if ( v12 ) /*0x7754ab*/
        {
          *v12 = 0; /*0x7754ad*/
          v12[1] = 0; /*0x7754af*/
          v12[2] = 0; /*0x7754b2*/
          v12[3] = 0; /*0x7754b5*/
          v12[4] = 0; /*0x7754b8*/
          v12[5] = 0; /*0x7754bb*/
          v12[6] = 0; /*0x7754be*/
          v12[7] = 0; /*0x7754c1*/
          v12[8] = 0; /*0x7754c4*/
          v12[9] = 0; /*0x7754c7*/
          v12[0xA] = 0; /*0x7754ca*/
          v12[0xB] = 0; /*0x7754cd*/
          v12[0xC] = 0; /*0x7754d0*/
          v12[0xD] = 0; /*0x7754d3*/
          v12[0xE] = 0; /*0x7754d6*/
          v12[0xF] = 0; /*0x7754d9*/
          v12[0x10] = 0; /*0x7754dc*/
          v12[0x11] = 0; /*0x7754df*/
          a3 = (int)v12; /*0x7754e2*/
        }
        else
        {
          a3 = 0; /*0x7754e8*/
        }
        v13 = 0; /*0x7754ec*/
        v23 = 0; /*0x7754ee*/
        for ( i = 0; i < 0x10; ++i ) /*0x7754f2*/
        {
          if ( a7 ) /*0x7754f9*/
          {
            if ( (*(int (__stdcall **)(int, int, int, int, int, unsigned int, _BYTE *))(*(_DWORD *)arg0 + 0x2C))( /*0x77551b*/
                   arg0,
                   arg4,
                   a4,
                   a5,
                   1,
                   i + 1,
                   v31) >= 0 )
              v23 |= 1 << i; /*0x775526*/
          }
          if ( a6 ) /*0x77552f*/
          {
            if ( (*(int (__stdcall **)(int, int, int, int, _DWORD, unsigned int, _BYTE *))(*(_DWORD *)arg0 + 0x2C))( /*0x775551*/
                   arg0,
                   arg4,
                   a4,
                   a5,
                   0,
                   i + 1,
                   v31) >= 0 )
              v13 |= 1 << i; /*0x77555c*/
          }
        }
        v26 = v13; /*0x775566*/
        v15 = a3; /*0x77556a*/
        v16 = (char *)D3DDepthStencilFormatCandidates - a3; /*0x775573*/
        v35 = 0; /*0x775575*/
        v32 = (char *)D3DDepthStencilFormatCandidates - a3; /*0x77557a*/
        v29 = 9; /*0x77557e*/
        while ( 1 ) /*0x775594*/
        {
          v17 = *(_DWORD *)&v16[v15]; /*0x775594*/
          v27 = v17; /*0x7755ad*/
          if ( (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)arg0 + 0x28))( /*0x7755d6*/
                 arg0,
                 arg4,
                 v11,
                 a5,
                 2,
                 1,
                 v17) >= 0
            && (*(int (__stdcall **)(int, int, int, int, signed int, int))(*(_DWORD *)arg0 + 0x30))(
                 arg0,
                 arg4,
                 v11,
                 a5,
                 a2,
                 v17) >= 0 )
          {
            *(_BYTE *)v15 = a7; /*0x7755e4*/
            v35 = 1; /*0x7755e6*/
            *(_BYTE *)(v15 + 0x24) = a6; /*0x7755eb*/
            v18 = 1; /*0x7755ee*/
            v28 = 0x10; /*0x7755f3*/
            do /*0x775688*/
            {
              v19 = 1 << (v18 - 1); /*0x775608*/
              if ( v23 | v19 ) /*0x77560c*/
              {
                if ( (*(int (__stdcall **)(int, int, int, int, int, int, _BYTE *))(*(_DWORD *)arg0 + 0x2C))( /*0x775633*/
                       arg0,
                       arg4,
                       a4,
                       v27,
                       1,
                       v18,
                       v33) >= 0 )
                {
                  if ( v18 == 1 ) /*0x775638*/
                    *(_BYTE *)(v15 + 1) = v33[0]; /*0x77563e*/
                  *(_WORD *)(v15 + 2) |= v19; /*0x775641*/
                }
              }
              if ( v26 | v19 ) /*0x775647*/
              {
                if ( (*(int (__stdcall **)(int, int, int, int, _DWORD, int, _BYTE *))(*(_DWORD *)arg0 + 0x2C))( /*0x77566e*/
                       arg0,
                       arg4,
                       a4,
                       v27,
                       0,
                       v18,
                       v34) >= 0 )
                {
                  if ( v18 == 1 ) /*0x775673*/
                    *(_BYTE *)(v15 + 0x25) = v34[0]; /*0x775679*/
                  *(_WORD *)(v15 + 0x26) |= v19; /*0x77567c*/
                }
              }
              ++v18; /*0x775680*/
              --v28; /*0x775683*/
            }
            while ( v28 ); /*0x775688*/
            v11 = a4; /*0x77568e*/
          }
          v15 += 4; /*0x775692*/
          if ( !--v29 ) /*0x77569a*/
            break; /*0x77569a*/
          v16 = v32; /*0x775590*/
        }
        if ( v35 ) /*0x7756a5*/
          NiTMap_SetAt(this + 2, a2, a3); /*0x7756b8*/
        else
          FormHeapFree(a3); /*0x7756c4*/
        v7 = this; /*0x7756cc*/
        v10 = v25; /*0x7756d0*/
      }
    }
    v25 = ++v10; /*0x7756da*/
  }
  while ( v10 < 0x12 ); /*0x7756de*/
  return v7; /*0x7756e4*/
}
