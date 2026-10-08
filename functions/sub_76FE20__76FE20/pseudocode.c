// Oblivion-authoritative vertex-stream packer: ensures declaration state, updates GeometryBufferData declaration/stride/software-VP metadata, allocates or refreshes the vertex-buffer chip, maps it, packs enabled semantics, then unlocks.
NiVBChip *__thiscall sub_76FE20(int *this, int a2, _DWORD *a3, int a4, char a5, NiVBChip *a6, UInt32 a7, int a8)
{
  int v8; // ebx
  unsigned __int8 (__thiscall *v10)(int *, IDirect3DVertexDeclaration9 **, int *); // edx
  NiGeometryBufferData *v12; // edi
  int *v14; // ebx
  IDirect3DVertexBuffer9 *VB; // eax
  int v16; // eax
  int v17; // eax
  UInt32 v18; // esi
  int v19; // esi
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

  v8 = a2; /*0x76fe24*/
  if ( a4 ) /*0x76fe35*/
    v29 = *(unsigned __int16 *)(a4 + 0x1C); /*0x76fe3b*/
  else
    v29 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a2 + 0x50))(a2); /*0x76fe4d*/
  if ( (_WORD)v29 ) /*0x76fe56*/
  {
    v10 = *(unsigned __int8 (__thiscall **)(int *, IDirect3DVertexDeclaration9 **, int *))(*this + 0x70); /*0x76fe5f*/
    v30 = 0; /*0x76fe6e*/
    v36 = 0; /*0x76fe72*/
    if ( !v10(this, &v30, &v36) ) /*0x76fe76*/
      return 0; /*0x76fe85*/
    if ( a4 ) /*0x76fe8a*/
      v12 = *(NiGeometryBufferData **)(a4 + 0x28); /*0x76fe8c*/
    else
      v12 = *(NiGeometryBufferData **)(a2 + 0x38); /*0x76fe91*/
    sub_7780D0(v12, v30); /*0x76fe9b*/
    if ( a7 < v12->StreamCount ) /*0x76fea7*/
      v12->VertexStride[a7] = *(_DWORD *)(0x10 * a7 + *(this + 9) + 0xC); /*0x76feb8*/
    if ( *(_BYTE *)(*(this + 2) + 0x5C8) ) /*0x76febe*/
      v12->SoftwareVP = (*(int (__thiscall **)(int *))(*this + 0x68))(this); /*0x76fed1*/
    v39 = 1; /*0x76feda*/
    if ( a8 ) /*0x76fedf*/
    {
      v39 = 0; /*0x76fee9*/
    }
    else
    {
      v14 = (int *)a6; /*0x76fef2*/
      if ( !a6 /*0x76ff40*/
        || (VB = a6->VB) == 0
        || (*(_WORD *)(a2 + 0x2E) & 0xF000) == 0x8000
        || (VB->lpVtbl->GetDesc(VB, (D3DVERTEXBUFFER_DESC *)v37), v37[0] != 0x64)
        || (v16 = (*(int (__thiscall **)(int *, UInt32))(*this + 0x60))(this, a7),
            v37[4] < (unsigned int)(unsigned __int16)v29 * v16) )
      {
        if ( !NiGeometryBufferData::RefreshVBChips(v12, a7) ) /*0x76ff54*/
          return 0; /*0x76ff54*/
        a6 = sub_761AC0(v12, a7); /*0x76ff62*/
        a5 = 0xFF; /*0x76ff66*/
        v14 = (int *)a6; /*0x76ff6e*/
      }
      HIDWORD(v27) = v14[4]; /*0x76ff7c*/
      LODWORD(v27) = v14[5]; /*0x76ff7d*/
      v17 = NiDX9VertexBufferManager_LockToStaging((char *)*(this + 3), v14[2], v14[3], v27, v28); /*0x76ff83*/
      v8 = a2; /*0x76ff88*/
      a8 = v17; /*0x76ff8c*/
    }
    if ( !a3 || (v38 = 1, a4) ) /*0x76ffa1*/
      v38 = 0; /*0x76ffa3*/
    v18 = 0x10 * a7; /*0x76ffa8*/
    v25 = *(this + 9) + v18 == 0; /*0x76ffab*/
    v19 = *(this + 9) + v18; /*0x76ffab*/
    v35 = 0; /*0x76ffae*/
    v34 = 0; /*0x76ffb2*/
    v33 = 0; /*0x76ffb6*/
    v32 = 0; /*0x76ffba*/
    if ( !v25 ) /*0x76ffbe*/
    {
      v25 = *(this + 7) == 0; /*0x76ffc4*/
      v31 = 0; /*0x76ffc7*/
      if ( !v25 ) /*0x76ffcb*/
      {
        v20 = 0; /*0x76ffd1*/
        do /*0x770083*/
        {
          v21 = *(_DWORD *)(v19 + 8); /*0x76ffd3*/
          v22 = *(_DWORD *)(v21 + v20 + 8); /*0x76ffda*/
          v23 = (float *)(a8 + *(_DWORD *)(v21 + v20 + 4)); /*0x76ffde*/
          v24 = v20 + v21; /*0x76ffe2*/
          switch ( v22 ) /*0x76fff0*/
          {
            case 0: /*0x76fff0*/
              if ( (a5 & 1) != 0 ) /*0x76fffc*/
              {
                if ( !v38 ) /*0x770003*/
                  goto LABEL_46; /*0x770003*/
                v35 = v23; /*0x770005*/
              }
              break; /*0x770009*/
            case 3: /*0x76fff0*/
              if ( (a5 & 2) != 0 ) /*0x770010*/
              {
                if ( !v38 ) /*0x770017*/
                  goto LABEL_46; /*0x770017*/
                v34 = v23; /*0x770019*/
              }
              break; /*0x77001d*/
            case 4: /*0x76fff0*/
              v25 = (a5 & 4) == 0; /*0x770047*/
              goto LABEL_45; /*0x77004c*/
            case 5: /*0x76fff0*/
            case 6: /*0x76fff0*/
            case 7: /*0x76fff0*/
            case 8: /*0x76fff0*/
            case 9: /*0x76fff0*/
            case 0xA: /*0x76fff0*/
            case 0xB: /*0x76fff0*/
            case 0xC: /*0x76fff0*/
              v25 = (a5 & 8) == 0; /*0x77004e*/
LABEL_45:
              if ( !v25 ) /*0x770053*/
                goto LABEL_46; /*0x770053*/
              break; /*0x770053*/
            case 0xD: /*0x76fff0*/
              if ( (a5 & 2) == 0 ) /*0x770038*/
                break; /*0x770038*/
              if ( !v38 ) /*0x77003f*/
                goto LABEL_46; /*0x77003f*/
              v32 = v23; /*0x770041*/
              break; /*0x770045*/
            case 0xE: /*0x76fff0*/
              if ( (a5 & 2) == 0 ) /*0x770024*/
                break; /*0x770024*/
              if ( v38 ) /*0x77002b*/
                v33 = v23; /*0x77002d*/
              else
LABEL_46:
                NiDX9ShaderDeclaration__PackElement( /*0x770055*/
                  v29,
                  (NiGeometry *)v8,
                  (int)a3,
                  a4,
                  v24,
                  *(_DWORD *)(v19 + 0xC),
                  (int)v23);
              break; /*0x770031*/
            default:
              goto LABEL_46;
          }
          v20 += 0x1C; /*0x770072*/
        }
        while ( ++v31 < (unsigned int)*(this + 7) ); /*0x770083*/
      }
    }
    if ( v38 ) /*0x77008e*/
      sub_72AF20( /*0x7700b9*/
        a3,
        *(_DWORD *)(v8 + 0x1C),
        *(_DWORD *)(v8 + 0x20),
        *(unsigned __int16 *)(v8 + 8),
        v35,
        v34,
        v33,
        v32,
        *(_DWORD *)(v19 + 0xC));
    if ( v39 && !sub_776D80(*(this + 3), v19, (int)a6->VB) ) /*0x7700d7*/
      return 0; /*0x7700d7*/
  }
  return a6; /*0x76fe7c*/
}
