NiVBChip *__thiscall sub_76FE20(int *this, int a2, _DWORD *a3, int a4, char a5, NiVBChip *a6, UInt32 a7, int a8)
{
  int v8; // ebx
  unsigned __int8 (__thiscall *v10)(int *, IDirect3DVertexDeclaration9 **, int *); // edx
  NiGeometryBufferData *v12; // edi
  int *v14; // ebx
  int VB; // eax
  int v16; // eax
  int v17; // eax
  UInt32 v18; // esi
  UInt32 v19; // esi
  int v20; // edi
  int v21; // eax
  int v22; // edx
  float *v23; // ecx
  int v24; // eax
  bool v25; // zf
  size_t v27; // [esp-4h] [ebp-50h]
  int v28; // [esp+4h] [ebp-48h]
  int v29; // [esp+14h] [ebp-38h]
  IDirect3DVertexDeclaration9 *v30; // [esp+18h] [ebp-34h] BYREF
  int v31; // [esp+1Ch] [ebp-30h]
  float *v32; // [esp+20h] [ebp-2Ch]
  float *v33; // [esp+24h] [ebp-28h]
  float *v34; // [esp+28h] [ebp-24h]
  float *v35; // [esp+2Ch] [ebp-20h]
  int v36; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v37[6]; // [esp+34h] [ebp-18h] BYREF
  char v38; // [esp+50h] [ebp+4h]
  char v39; // [esp+64h] [ebp+18h]

  v8 = a2;
  if ( a4 )
    v29 = *(unsigned __int16 *)(a4 + 0x1C);
  else
    v29 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a2 + 0x50))(a2);
  if ( (_WORD)v29 )
  {
    v10 = *(unsigned __int8 (__thiscall **)(int *, IDirect3DVertexDeclaration9 **, int *))(*this + 0x70);
    v30 = 0;
    v36 = 0;
    if ( !v10(this, &v30, &v36) )
      return 0;
    if ( a4 )
      v12 = *(NiGeometryBufferData **)(a4 + 0x28);
    else
      v12 = *(NiGeometryBufferData **)(a2 + 0x38);
    sub_7780D0(v12, v30);
    if ( a7 < v12->StreamCount )
      v12->VertexStride[a7] = *(_DWORD *)(0x10 * a7 + *(this + 9) + 0xC);
    if ( *(_BYTE *)(*(this + 2) + 0x5C8) )
      v12->SoftwareVP = (*(int (__thiscall **)(int *))(*this + 0x68))(this);
    v39 = 1;
    if ( a8 )
    {
      v39 = 0;
    }
    else
    {
      v14 = (int *)a6;
      if ( !a6
        || (VB = (int)a6->VB) == 0
        || (*(_WORD *)(a2 + 0x2E) & 0xF000) == 0x8000
        || ((*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)VB + 0x34))(VB, v37), v37[0] != 0x64)
        || (v16 = (*(int (__thiscall **)(int *, UInt32))(*this + 0x60))(this, a7),
            v37[4] < (unsigned int)(unsigned __int16)v29 * v16) )
      {
        if ( !NiGeometryBufferData::RefreshVBChips(v12, a7) )
          return 0;
        a6 = sub_761AC0(v12, a7);
        a5 = 0xFF;
        v14 = (int *)a6;
      }
      HIDWORD(v27) = v14[4];
      LODWORD(v27) = v14[5];
      v17 = sub_776C90((char *)*(this + 3), v14[2], v14[3], v27, v28);
      v8 = a2;
      a8 = v17;
    }
    if ( !a3 || (v38 = 1, a4) )
      v38 = 0;
    v18 = 0x10 * a7;
    v25 = *(this + 9) + v18 == 0;
    v19 = *(this + 9) + v18;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    if ( !v25 )
    {
      v25 = *(this + 7) == 0;
      v31 = 0;
      if ( !v25 )
      {
        v20 = 0;
        do
        {
          v21 = *(_DWORD *)(v19 + 8);
          v22 = *(_DWORD *)(v21 + v20 + 8);
          v23 = (float *)(a8 + *(_DWORD *)(v21 + v20 + 4));
          v24 = v20 + v21;
          switch ( v22 )
          {
            case 0:
              if ( (a5 & 1) != 0 )
              {
                if ( !v38 )
                  goto LABEL_46;
                v35 = v23;
              }
              break;
            case 3:
              if ( (a5 & 2) != 0 )
              {
                if ( !v38 )
                  goto LABEL_46;
                v34 = v23;
              }
              break;
            case 4:
              v25 = (a5 & 4) == 0;
              goto LABEL_45;
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
              v25 = (a5 & 8) == 0;
LABEL_45:
              if ( !v25 )
                goto LABEL_46;
              break;
            case 0xD:
              if ( (a5 & 2) == 0 )
                break;
              if ( !v38 )
                goto LABEL_46;
              v32 = v23;
              break;
            case 0xE:
              if ( (a5 & 2) == 0 )
                break;
              if ( v38 )
                v33 = v23;
              else
LABEL_46:
                sub_76F590(v29, (NiGeometry *)v8, (int)a3, a4, v24, *(_DWORD *)(v19 + 0xC), (int)v23);
              break;
            default:
              goto LABEL_46;
          }
          v20 += 0x1C;
        }
        while ( ++v31 < (unsigned int)*(this + 7) );
      }
    }
    if ( v38 )
      sub_72AF20(
        a3,
        *(_DWORD *)(v8 + 0x1C),
        *(_DWORD *)(v8 + 0x20),
        *(unsigned __int16 *)(v8 + 8),
        v35,
        v34,
        v33,
        v32,
        *(_DWORD *)(v19 + 0xC));
    if ( v39 && !sub_776D80(*(this + 3), (int)a6->VB) )
      return 0;
  }
  return a6;
}
