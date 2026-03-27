void *__thiscall NiDX9Renderer::CalculateBoneMatrixes(
        NiDX9Renderer *this,
        NiSkinInstance *a2,
        NiTransform *a3,
        char a4,
        int a5,
        char a6)
{
  void *v7; // edi
  void *result; // eax
  void *NiNode; // eax
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  double v16; // st7
  float *v17; // eax
  double v18; // st6
  unsigned int v19; // ecx
  double v20; // rt0
  double v21; // rt1
  double v22; // st6
  double v23; // st7
  NiTransform *v24; // eax
  bool v25; // c0
  float *v26; // eax
  int v27; // esi
  NiTransform *v28; // eax
  unsigned int v29; // ebp
  float *v30; // edi
  float *v31; // ebx
  int v32; // ecx
  double scale; // st7
  int v34; // [esp+14h] [ebp-E8h]
  NiTransform *v35; // [esp+14h] [ebp-E8h]
  int v36; // [esp+18h] [ebp-E4h]
  float *v37; // [esp+18h] [ebp-E4h]
  bool v38; // [esp+1Ch] [ebp-E0h]
  unsigned int v39; // [esp+20h] [ebp-DCh]
  int v40; // [esp+24h] [ebp-D8h]
  NiTransform v42; // [esp+2Ch] [ebp-D0h] BYREF
  NiTransform v43; // [esp+60h] [ebp-9Ch] BYREF
  NiTransform v44; // [esp+94h] [ebp-68h] BYREF
  NiTransform v45; // [esp+C8h] [ebp-34h] BYREF

  v7 = *((void **)a2 + 6);
  result = TESObjectREFR_GetNiNode((TESObjectREFR *)this->member.vertexBufferMgr);
  if ( v7 != result )
  {
    NiNode = TESObjectREFR_GetNiNode((TESObjectREFR *)this->member.vertexBufferMgr);
    v10 = *((_DWORD *)a2 + 8);
    v11 = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 6) = NiNode;
    v12 = *(_DWORD *)(*((_DWORD *)a2 + 2) + 0x40);
    v36 = *((_DWORD *)a2 + 2);
    v39 = v12;
    v34 = v10;
    if ( a5 == 3 )
      a4 = 1;
    if ( v12 > *((_DWORD *)a2 + 7) || a5 != v11 )
    {
      FormHeapFree(v10);
      v13 = 0;
      if ( a5 == 4 )
      {
        LOBYTE(v13) = (unsigned __int64)v12 >> 0x1A != 0;
        v14 = FormHeapAlloc((v12 << 6) | -v13);
        v15 = v14;
        v34 = v14;
        if ( v12 )
        {
          v16 = 1.0;
          v17 = (float *)(v14 + 0x34);
          v18 = 0.0;
          v19 = v12;
          while ( 1 )
          {
            if ( a4 )
            {
              v17[1] = v18;
              *v17 = v18;
              v17[0xFFFFFFFF] = v18;
            }
            else
            {
              v17[0xFFFFFFFE] = v18;
              v17[0xFFFFFFFA] = v18;
              v17[0xFFFFFFF6] = v18;
            }
            v21 = v18;
            v22 = v16;
            v23 = v21;
            v17 += 0x10;
            --v19;
            v17[0xFFFFFFF2] = v22;
            if ( !v19 )
              break;
            v20 = v22;
            v18 = v23;
            v16 = v20;
          }
        }
      }
      else
      {
        LOBYTE(v13) = (unsigned __int64)(0xC * v12) >> 0x1E != 0;
        v34 = FormHeapAlloc((0x30 * v12) | -v13);
        v15 = v34;
      }
      *((_DWORD *)a2 + 7) = v12;
      *((_DWORD *)a2 + 9) = a5;
      *((_DWORD *)a2 + 8) = v15;
    }
    sub_718A80((float *)(*((_DWORD *)a2 + 4) + 0x64), &v42);
    qmemcpy(&v44, sub_53D7A0((NiTransform *)(*((_DWORD *)a2 + 2) + 0xC), &v45, &v42), sizeof(v44));
    v24 = sub_53D7A0(a3, &v45, &v44);
    v25 = v44.scale < dbl_A88D40;
    qmemcpy(&v43, v24, sizeof(v43));
    v38 = 0;
    if ( v25 )
      v38 = v44.scale > (double)flt_A88D38;
    if ( a6 )
    {
      v26 = *((float **)a2 + 0xA);
      if ( !v26 )
      {
        v26 = (float *)FormHeapAlloc(0x40u);
        *((_DWORD *)a2 + 0xA) = v26;
        v26[3] = 0.0;
        v26[7] = 0.0;
        v26[0xB] = 0.0;
        v26[0xF] = 1.0;
      }
      sub_761BE0(v26, (float *)&v43, &v43.pos.x, v43.scale);
    }
    v27 = *((_DWORD *)a2 + 5);
    v28 = *(NiTransform **)(v36 + 0x44);
    v29 = 0;
    v40 = v27;
    if ( v12 )
    {
      v30 = (float *)v34;
      v37 = (float *)v34;
      v35 = v28;
      v31 = v37 + 8;
      do
      {
        sub_53D7A0((NiTransform *)(*(_DWORD *)(v27 + 4 * v29) + 0x64), &v42, v35);
        v32 = *(_DWORD *)(v27 + 4 * v29);
        if ( *(float *)(v32 + 0x94) < dbl_A88D40 && flt_A88D38 < (double)*(float *)(v32 + 0x94) )
          v38 = 1;
        if ( !a6 )
        {
          qmemcpy(&v42, sub_53D7A0(&v43, &v45, &v42), sizeof(v42));
          v30 = v37;
          v27 = v40;
        }
        if ( a5 == 4 )
        {
          if ( a4 )
            sub_761B60(v30, (float *)&v42, &v42.pos.x, v42.scale);
          else
            sub_761AE0(v30, (float *)&v42, &v42.pos.x, v42.scale);
        }
        else
        {
          scale = v42.scale;
          v31[0xFFFFFFF8] = v42.rot.data[0][0] * v42.scale;
          v31[0xFFFFFFFC] = v42.rot.data[1][0] * scale;
          *v31 = v42.rot.data[2][0] * scale;
          v31[0xFFFFFFF9] = v42.rot.data[0][1] * scale;
          v31[0xFFFFFFFD] = v42.rot.data[1][1] * scale;
          v31[1] = v42.rot.data[2][1] * scale;
          v31[0xFFFFFFFA] = v42.rot.data[0][2] * scale;
          v31[0xFFFFFFFE] = v42.rot.data[1][2] * scale;
          v31[2] = scale * v42.rot.data[2][2];
          v31[0xFFFFFFFB] = v42.pos.x - CameraWorldTranslate;
          v31[0xFFFFFFFF] = v42.pos.y - flt_B3F930;
          v31[3] = v42.pos.z - flt_B3F934;
        }
        v35 = (NiTransform *)((char *)v35 + 0x4C);
        ++v29;
        v30 += 0x10;
        v31 += 0xC;
        v37 = v30;
      }
      while ( v29 < v39 );
    }
    return (void *)((int (__thiscall *)(NiDX9RenderState *, bool))this->member.renderState->vtbl->SetVar_0FF5)(
                     this->member.renderState,
                     v38);
  }
  return result;
}
