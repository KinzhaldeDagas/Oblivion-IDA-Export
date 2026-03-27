char __cdecl sub_8AF8C0(float *a1, __m128 *a2, int a3, int a4)
{
  char result; // al
  NiObject *v5; // eax
  NiObjectVtbl *vftable; // esi
  NiObject *(__thiscall *Unk_02)(NiObject *); // eax
  int v8; // eax
  unsigned int v9; // eax
  NiObject *v10; // eax
  NiObject *v11; // edi
  int v12; // eax
  __m128 v13; // xmm0
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // esi
  float *i; // eax
  char v19; // [esp+13h] [ebp-FDh]
  NiObject *v20; // [esp+1Ch] [ebp-F4h]
  __m128 v21[4]; // [esp+20h] [ebp-F0h] BYREF
  __m128 v22; // [esp+60h] [ebp-B0h] BYREF
  __int128 v23; // [esp+70h] [ebp-A0h]
  __m128 v24[4]; // [esp+80h] [ebp-90h] BYREF
  __m128 v25[2]; // [esp+C0h] [ebp-50h] BYREF
  _DWORD v26[5]; // [esp+ECh] [ebp-24h]

  result = 0;
  v19 = 0;
  if ( !a1 )
    return result;
  v5 = (NiObject *)sub_47FAC0((int)a1);
  v20 = v5;
  if ( v5 )
  {
    vftable = v5[2].__vftable;
    if ( vftable )
    {
      Unk_02 = vftable->Unk_02;
      if ( Unk_02 && (v8 = (int)Unk_02 + 0x14) != 0 )
        v9 = *(_DWORD *)(v8 + 0x1C);
      else
        v9 = 0;
      if ( (v9 & 0x3F) == 8 )
      {
        switch ( (v9 >> 8) & 0x1F )
        {
          case 1u:
            if ( !(_BYTE)a4 )
              goto LABEL_11;
            break;
          case 2u:
          case 3u:
          case 4u:
          case 5u:
          case 6u:
          case 7u:
          case 0xBu:
          case 0xCu:
          case 0xDu:
LABEL_11:
            v10 = (NiObject *)sub_494F10(vftable);
            if ( !v10 )
              break;
            v11 = NiRTTI_Cast((BSStringT *)dword_BA7FD8, v10);
            if ( !v11 )
              break;
            (*((void (__thiscall **)(NiObjectVtbl *, __m128 *))vftable->super.Destructor + 0x2B))(vftable, v21);
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_BA7A20, v20) )
            {
              if ( !sub_607840(vftable) || 1.0 == *(float *)&v20[2].members.m_uiRefCount )
              {
                sub_5398E0((int)v21, a1 + 0x19);
                if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_BA8018, (NiObject *)vftable) )
                {
                  v24[0] = v21[0];
                  v24[1] = v21[1];
                  v24[2] = v21[2];
                  v24[3] = v21[3];
                  sub_8B1DD0(v25[0].m128_f32, (float *)&vftable->PostLoad);
                  *(_OWORD *)&v26[1] = *(_OWORD *)&vftable->DumpAttributes;
                  sub_8B1F70(v21, v24, v25);
                }
              }
            }
            else
            {
              (*((void (__thiscall **)(NiObjectVtbl *, __m128 *))vftable->super.Destructor + 0x2B))(vftable, v21);
            }
            if ( !sub_8B6DC0(v11, a2, v21, &v22) )
              break;
            v12 = a3;
            if ( !*(_DWORD *)a3 )
              goto LABEL_23;
            if ( *((float *)&v23 + 3) < (double)*(float *)(a3 + 0x2C) )
            {
              v12 = a3;
LABEL_23:
              v13 = v22;
              *(_DWORD *)v12 = vftable;
              *(__m128 *)(v12 + 0x10) = v13;
              *(__int128 *)(v12 + 0x20) = v23;
            }
            break;
          default:
            break;
        }
      }
    }
  }
  v14 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 8))(a1);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned __int16 *)(v14 + 0xB6);
    v17 = 0;
    if ( *(_WORD *)(v15 + 0xB6) )
    {
      if ( v16 )
        goto LABEL_28;
      for ( i = 0; ; i = *(float **)(*(_DWORD *)(v15 + 0xB0) + 4 * v17) )
      {
        v19 |= sub_8AF8C0(i, a2, a3, a4);
        if ( *(unsigned __int16 *)(v15 + 0xB6) <= (unsigned int)++v17 )
          break;
LABEL_28:
        ;
      }
    }
  }
  return v19;
}
