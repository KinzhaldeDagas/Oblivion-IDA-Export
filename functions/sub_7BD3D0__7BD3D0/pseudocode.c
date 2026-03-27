int __thiscall sub_7BD3D0(SkyShader *this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  double v9; // st7
  _DWORD *v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // ebp
  int v14; // eax
  UInt32 Unk070; // esi
  int v16; // ecx
  NiD3DPixelShader *v17; // eax
  NiD3DPass *v18; // ecx
  NiD3DPass *v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  NiDX9RenderState *v32; // eax
  char v35; // [esp+17h] [ebp-31h]
  int v36; // [esp+1Ch] [ebp-2Ch]
  int v37; // [esp+20h] [ebp-28h]
  int v38; // [esp+24h] [ebp-24h]
  int v39; // [esp+28h] [ebp-20h]

  this->super.__vftable->super.RemoveShaderPassesMaybe((NiD3DShader *)this);
  *(float *)&v37 = *(float *)&dword_B46658 - CameraWorldTranslate;
  *(float *)&v38 = *(float *)&dword_B4665C - flt_B3F930;
  *(float *)&v39 = *(float *)&dword_B46660 - flt_B3F934;
  dword_B43168 = v37;
  dword_B4316C = v38;
  v9 = 0.0;
  dword_B43170 = v39;
  v10 = a5;
  *(float *)&dword_B43174 = 0.0;
  v11 = v10[6];
  v12 = *(_DWORD *)(v11 + 0x88);
  if ( v12 == 2 || v12 == 4 )
    v13 = 0;
  else
    v13 = **(_DWORD **)(v10[8] + 0x20);
  v36 = v10[2];
  v14 = dword_B42E90;
  Unk070 = 0;
  if ( dword_B42E90 == 0x17D || (v35 = 0, v14 == 0x19C) )
    v35 = 1;
  if ( v14 == 0x19D && v12 != 2 )
  {
    LOBYTE(a5) = 1;
    if ( v12 )
    {
      v16 = v12 - 3;
      if ( v16 )
      {
        if ( v16 == 1 )
          Unk070 = this->unkAC[3];
      }
      else
      {
        Unk070 = this->unkAC[5];
      }
    }
    else
    {
      Unk070 = this->unkAC[4];
    }
    goto LABEL_42;
  }
  LOBYTE(a5) = 0;
  if ( v14 == 3 )
  {
    Unk070 = this->unkAC[2];
    goto LABEL_42;
  }
  if ( v12 == 1 )
  {
    Unk070 = this->unkAC[0];
    goto LABEL_42;
  }
  Unk070 = this->super.member.Unk070;
  if ( v12 == 5 )
  {
    sub_7AECB0((NiD3DPass *)Unk070, this->Vertex[3]);
    v17 = this->Pixel[4];
LABEL_29:
    sub_7AEC60((NiD3DPassVtbl **)this->super.member.Unk070, v17);
    goto LABEL_30;
  }
  if ( v12 != 3 )
  {
    v19 = (NiD3DPass *)this->super.member.Unk070;
    if ( v13 )
    {
      sub_7AECB0(v19, this->Vertex[1]);
      v17 = this->Pixel[0];
    }
    else
    {
      sub_7AECB0(v19, this->Vertex[0]);
      v17 = this->Pixel[2];
    }
    goto LABEL_29;
  }
  v18 = (NiD3DPass *)this->super.member.Unk070;
  this->unkDC[0] = *(UInt32 *)(4 * *(unsigned __int16 *)(v11 + 0x84) + 0xB4315C);
  if ( !IsSkyShaderFade )
  {
    sub_7AECB0(v18, this->Vertex[5]);
    v17 = this->Pixel[0];
    goto LABEL_29;
  }
  sub_7AECB0(v18, this->Vertex[6]);
  sub_7AEC60((NiD3DPassVtbl **)this->super.member.Unk070, this->Pixel[1]);
  *(float *)&dword_B43170 = -flt_B4314C / dbl_A49318;
LABEL_30:
  if ( !*(_DWORD *)(Unk070 + 0x30) )
    *(_DWORD *)(Unk070 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(Unk070 + 0x30), 0x1B, 1, 0);
  v20 = *(_DWORD *)(v11 + 0x88);
  if ( v20 == 5 || !v20 || v20 == 6 )
  {
    if ( !*(_DWORD *)(Unk070 + 0x30) )
      *(_DWORD *)(Unk070 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(Unk070 + 0x30), 0x13, 5, 0);
    if ( !*(_DWORD *)(Unk070 + 0x30) )
      *(_DWORD *)(Unk070 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(Unk070 + 0x30), 0x14, 2, 0);
  }
  else
  {
    sub_76C730((_DWORD *)Unk070, 0x13, 5, 0);
    sub_76C730((_DWORD *)Unk070, 0x14, 6, 0);
  }
  v9 = 0.0;
LABEL_42:
  if ( *(_DWORD *)(v11 + 0x88) == 3 )
    this->unkDC[1] = *(UInt32 *)(v11 + 0x80);
  else
    *(float *)&this->unkDC[1] = v9;
  if ( UseHDR )
    *(float *)&this->unkDC[2] = flt_B2C73C + (flt_B2C740 - flt_B2C73C) * ((*(float *)(v11 + 0x80) - 0.0) / (1.0 - 0.0));
  switch ( *(_DWORD *)(v11 + 0x88) )
  {
    case 0:
    case 1:
    case 3:
    case 5:
    case 6:
    case 7:
      LODWORD(qword_B43178) = *(_DWORD *)(v11 + 0x6C);
      HIDWORD(qword_B43178) = *(_DWORD *)(v11 + 0x70);
      dword_B43180 = *(_DWORD *)(v11 + 0x74);
      dword_B43184 = *(_DWORD *)(v11 + 0x78);
      break;
    case 2:
      v21 = HIDWORD(qword_B431A8);
      v22 = dword_B431B0;
      LODWORD(qword_B43178) = qword_B431A8;
      v23 = dword_B431B4;
      HIDWORD(qword_B43178) = v21;
      v24 = qword_B431B8;
      dword_B43180 = v22;
      v25 = HIDWORD(qword_B431B8);
      dword_B43184 = v23;
      v26 = dword_B431C0;
      LODWORD(qword_B43188) = v24;
      v27 = dword_B431C4;
      HIDWORD(qword_B43188) = v25;
      v28 = qword_B431C8;
      dword_B43190 = v26;
      v29 = HIDWORD(qword_B431C8);
      dword_B43194 = v27;
      v30 = dword_B431D0;
      LODWORD(qword_B43198) = v28;
      v31 = dword_B431D4;
      HIDWORD(qword_B43198) = v29;
      dword_B431A0 = v30;
      dword_B431A4 = v31;
      break;
    default:
      *(float *)&qword_B43178 = v9;
      *((float *)&qword_B43178 + 1) = v9;
      *(float *)&dword_B43180 = v9;
      *(float *)&dword_B43184 = 1.0;
      *(float *)&qword_B43188 = v9;
      *((float *)&qword_B43188 + 1) = v9;
      *(float *)&dword_B43190 = v9;
      *(float *)&qword_B43198 = v9;
      *((float *)&qword_B43198 + 1) = v9;
      *(float *)&dword_B431A0 = v9;
      break;
  }
  this->super.__vftable->Unk094((BSShader *)this, Unk070);
  if ( v13 )
  {
    sub_76C910(**(_DWORD ***)(Unk070 + 0x24), *(NiRenderedTexture **)(v13 + 8));
    sub_771640(**(_DWORD ****)(Unk070 + 0x24), *(_BYTE *)(v13 + 5) & 0xF);
    sub_7715E0(**(_DWORD ****)(Unk070 + 0x24), (*(unsigned __int16 *)(v13 + 4) >> 0xC) & 3);
    if ( !(_BYTE)a5 && *(_DWORD *)(v11 + 0x88) == 3 )
    {
      sub_76C910(*(_DWORD **)(*(_DWORD *)(Unk070 + 0x24) + 4), *(NiRenderedTexture **)(v11 + 0x7C));
      sub_771640(*(_DWORD ***)(*(_DWORD *)(Unk070 + 0x24) + 4), *(_BYTE *)(v13 + 5) & 0xF);
      sub_7715E0(*(_DWORD ***)(*(_DWORD *)(Unk070 + 0x24) + 4), (*(unsigned __int16 *)(v13 + 4) >> 0xC) & 3);
    }
  }
  if ( v35 )
  {
    v32 = sub_75F9D0();
    ((void (__thiscall *)(NiDX9RenderState *, int))v32->vtbl->SetAlpha)(v32, v36);
  }
  a5 = (_DWORD *)Unk070;
  if ( Unk070 )
    ++*(_DWORD *)(Unk070 + 0x60);
  sub_76CE40(&this->super.member.super.Passes, (NiD3DPass *)this->super.member.super.PassCount, (NiD3DPass **)&a5);
  if ( Unk070 )
  {
    if ( (*(_DWORD *)(Unk070 + 0x60))-- == 1 )
      sub_7604D0((NiD3DPass *)Unk070);
  }
  ++this->super.member.super.PassCount;
  return 0;
}
