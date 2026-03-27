int __thiscall sub_8067F0(unsigned int *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  float *v10; // esi
  BOOL v11; // eax
  NiRenderedTexture *v12; // edi
  BOOL v13; // edi
  int result; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  unsigned __int16 v18; // ax
  int *v19; // eax
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // si
  int v22; // edi
  _DWORD **v23; // esi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  _DWORD *v28; // ecx
  char v29; // [esp+1Bh] [ebp-39h]
  unsigned int v30; // [esp+1Ch] [ebp-38h]
  int v31; // [esp+20h] [ebp-34h]
  _DWORD *v32; // [esp+64h] [ebp+10h]

  (*(void (__thiscall **)(unsigned int *))(*this + 0x80))(this);
  v30 = dword_B42E90;
  v10 = *(float **)(a5 + 0x18);
  v29 = 0;
  v11 = v10
     && (*(int (__thiscall **)(float *))(*(_DWORD *)v10 + 0x54))(v10) >= 1
     && (*(int (__thiscall **)(float *))(*(_DWORD *)v10 + 0x54))(v10) <= 0xA;
  v32 = v11 ? (_DWORD *)v10 : 0;
  v12 = 0;
  if ( v32 )
  {
    v13 = v10
       && (*(int (__thiscall **)(float *))(*(_DWORD *)v10 + 0x54))(v10) >= 5
       && (*(int (__thiscall **)(float *))(*(_DWORD *)v10 + 0x54))(v10) <= 0xA;
    v12 = v13 ? (NiRenderedTexture *)v10 : 0;
  }
  if ( !v10 )
  {
    if ( dword_B42E8C )
      dword_B42E8C("Attempting to render geometry with a shader, but no shader property", 0);
    return 0;
  }
  v15 = *(_DWORD *)(a5 + 8);
  if ( v15 && (*(_BYTE *)(v15 + 0x18) & 1) != 0 && v10[8] < 1.0 )
  {
    v31 = *((int *)v10 + 8);
    v16 = dword_B4649C;
    v17 = dword_B464A0;
    dword_B46498 = dword_B46498;
    dword_B4649C = v16;
    dword_B464A0 = v17;
    dword_B464A4 = v31;
    v29 = 1;
  }
  else
  {
    sub_7E2430((int)v10, 1.0);
  }
  if ( v32 )
  {
    if ( LOWORD(dword_B42EAC) == 1 )
    {
      v20 = sub_7ED5D0(v32);
      if ( v20 > 0xAu )
        v20 = 0xA;
      v19 = (int *)((char *)&unk_B2DD50 + 0x10 * v20);
    }
    else
    {
      if ( LOWORD(dword_B42EAC) != 2 )
        goto LABEL_32;
      v18 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v32 + 0x60))(v32, a2);
      if ( v18 > 0x10u )
        v18 = 0x10;
      v19 = (int *)((char *)&unk_B2DE00 + 0x10 * v18);
    }
    sub_7ECAE0(0, *v19, v19[1], v19[2], v19[3]);
    sub_7ECAE0(0x19u, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC);
  }
LABEL_32:
  switch ( v30 )
  {
    case 0x4Cu:
      sub_8736F0(this, (int)a2, a3, a5, v12);
      v21 = 0;
      goto LABEL_93;
    case 0x4Du:
      sub_8738A0(this, (int)a2, a3, a5, (int *)v12);
      v21 = 1;
      goto LABEL_93;
    case 0x50u:
      sub_873AA0(this, (int)a2, a3, a5, v12);
      v21 = 2;
      goto LABEL_93;
    case 0x52u:
      sub_873C50(this, (int)a2, a3, a5, (int *)v12);
      v21 = 3;
      goto LABEL_93;
    case 0x57u:
      sub_873E50(this, (int)a2, a3, a5, v12);
      v21 = 4;
      goto LABEL_93;
    case 0x58u:
      sub_874090(this, (int)a2, a3, a5, v12);
      v21 = 5;
      goto LABEL_93;
    case 0x5Bu:
      sub_874310(this, (int)a2, a3, a5, v12);
      v21 = 6;
      goto LABEL_93;
    case 0x5Du:
      sub_874550(this, (int)a2, a3, a5, v12);
      v21 = 7;
      goto LABEL_93;
    case 0x62u:
      sub_8747D0(this, (int)a2, a3, a5, v12);
      v21 = 8;
      goto LABEL_93;
    case 0x63u:
      sub_874980(this, (int)a2, a3, a5, (int *)v12);
      v21 = 9;
      goto LABEL_93;
    case 0x66u:
      sub_874B80(this, (int)a2, a3, a5, v12);
      v21 = 0xA;
      goto LABEL_93;
    case 0x68u:
      sub_874D30(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0xB;
      goto LABEL_93;
    case 0x6Du:
      sub_874F30(this, (int)a2, a3, a5, v12);
      v21 = 0xC;
      goto LABEL_93;
    case 0x6Eu:
      sub_875170(this, (int)a2, a3, a5, v12);
      v21 = 0xD;
      goto LABEL_93;
    case 0x71u:
      sub_8753F0(this, (int)a2, a3, a5, v12);
      v21 = 0xE;
      goto LABEL_93;
    case 0x73u:
      sub_875630(this, (int)a2, a3, a5, v12);
      v21 = 0xF;
      goto LABEL_93;
    case 0x7Au:
      sub_8758B0(this, (int)a2, a3, a5, v12);
      v21 = 0x10;
      goto LABEL_93;
    case 0x7Bu:
      sub_875A10(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x11;
      goto LABEL_93;
    case 0x80u:
      sub_875BD0(this, (int)a2, a3, a5, v12);
      v21 = 0x12;
      goto LABEL_93;
    case 0x81u:
      sub_875D30(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x13;
      goto LABEL_93;
    case 0x88u:
      sub_875EF0(this, (int)a2, a3, a5, v12);
      v21 = 0x14;
      goto LABEL_93;
    case 0x89u:
      sub_8760F0(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x15;
      goto LABEL_93;
    case 0x8Eu:
      sub_876340(this, (int)a2, a3, a5, v12);
      v21 = 0x16;
      goto LABEL_93;
    case 0x8Fu:
      sub_876540(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x17;
      goto LABEL_93;
    case 0x95u:
      sub_876790(this, (int)a2, a3, a5, v12);
      v21 = 0x18;
      goto LABEL_93;
    case 0x96u:
      sub_876940(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x19;
      goto LABEL_93;
    case 0x9Bu:
      sub_876B40(this, (int)a2, a3, a5, v12);
      v21 = 0x1A;
      goto LABEL_93;
    case 0x9Cu:
      sub_876CF0(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x1B;
      goto LABEL_93;
    case 0xA2u:
      sub_876EF0(this, (int)a2, a3, a5, v12);
      v21 = 0x1C;
      goto LABEL_93;
    case 0xA3u:
      sub_877130(this, (int)a2, a3, a5, v12);
      v21 = 0x1D;
      goto LABEL_93;
    case 0xA8u:
      sub_8773B0(this, (int)a2, a3, a5, v12);
      v21 = 0x1E;
      goto LABEL_93;
    case 0xA9u:
      sub_8775F0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v21 = 0x1F;
      goto LABEL_93;
    case 0xB0u:
      sub_877870(this, (int)a2, a3, a5, v12);
      v21 = 0x20;
      goto LABEL_93;
    case 0xB1u:
      sub_877A20(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x21;
      goto LABEL_93;
    case 0xB6u:
      sub_877C30(this, (int)a2, a3, a5, v12);
      v21 = 0x22;
      goto LABEL_93;
    case 0xB7u:
      sub_877DE0(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x23;
      goto LABEL_93;
    case 0xBDu:
      sub_877FF0(this, (int)a2, a3, a5, v12);
      v21 = 0x24;
      goto LABEL_93;
    case 0xBEu:
      sub_878240((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v21 = 0x25;
      goto LABEL_93;
    case 0xC3u:
      sub_8784C0(this, (int)a2, a3, a5, v12);
      v21 = 0x26;
      goto LABEL_93;
    case 0xC4u:
      sub_878710((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v21 = 0x27;
      goto LABEL_93;
    case 0xCAu:
      sub_878990(this, (int)a2, a3, a5, v12);
      v21 = 0x28;
      goto LABEL_93;
    case 0xCBu:
      sub_878B40(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x29;
      goto LABEL_93;
    case 0xD0u:
      sub_878D50(this, (int)a2, a3, a5, v12);
      v21 = 0x2A;
      goto LABEL_93;
    case 0xD1u:
      sub_878F00(this, (int)a2, a3, a5, (int *)v12);
      v21 = 0x2B;
      goto LABEL_93;
    case 0xD7u:
      sub_879110(this, (int)a2, a3, a5, v12);
      v21 = 0x2C;
      goto LABEL_93;
    case 0xD8u:
      sub_879360(this, (int)a2, a3, a5, v12);
      v21 = 0x2D;
      goto LABEL_93;
    case 0xDDu:
      sub_8795E0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v21 = 0x2E;
      goto LABEL_93;
    case 0xDEu:
      sub_879830(this, (int)a2, a3, a5, v12);
      v21 = 0x2F;
      goto LABEL_93;
    case 0xEAu:
      sub_879AB0(this, (int)a2, a3, a5, v12);
      v21 = 0x30;
      goto LABEL_93;
    case 0xEDu:
      sub_879C40(this, (int)a2, a3, a5, v12);
      v21 = 0x31;
      goto LABEL_93;
    case 0xF8u:
      sub_879DD0(this, (int)a2, a3, a5, v12);
      v21 = 0x32;
      goto LABEL_93;
    case 0xFBu:
      sub_879F60(this, (int)a2, a3, a5, v12);
      v21 = 0x33;
      goto LABEL_93;
    case 0x10Du:
      sub_87A0F0(this, (int)a2, a3, a5, (int)v12);
      v21 = 0x34;
      goto LABEL_93;
    case 0x10Eu:
      sub_87A1E0(this, (int)a2, a3, a5, (int)v12);
      v21 = 0x35;
      goto LABEL_93;
    case 0x117u:
      sub_87A2D0(this, (int)a2, a3, a5, v12);
      v21 = 0x36;
      goto LABEL_93;
    case 0x11Au:
      sub_87A420(this, (int)a2, a3, a5, v12);
      v21 = 0x37;
      goto LABEL_93;
    case 0x11Eu:
      sub_87A570((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v21 = 0x38;
      goto LABEL_93;
    case 0x121u:
      sub_87A750(this, (int)a2, a3, a5, v12);
      v21 = 0x39;
      goto LABEL_93;
    case 0x125u:
      sub_87A930(this, (int)a2, a3, a5, v12);
      v21 = 0x3A;
      goto LABEL_93;
    case 0x128u:
      sub_87AAC0(this, (int)a2, a3, a5, v12);
      v21 = 0x3B;
LABEL_93:
      if ( v30 <= 0x1A2 )
      {
        sub_76C730(*(_DWORD **)(4 * v21 + 0xB47620), 0x1C, 0, 0);
        if ( v30 - 0x10F > 0x1A )
        {
          if ( v30 == 0x19E || v30 == 0x19F || v30 == 0xA || v30 == 0xB )
          {
            sub_76C730(*(_DWORD **)(4 * v21 + 0xB47620), 0xA8, 8, 0);
          }
          else if ( v30 )
          {
            if ( v30 == 1 )
              sub_76C730((_DWORD *)dword_B47668, 0xA8, 0, 0);
            else
              sub_76C730(*(_DWORD **)(4 * v21 + 0xB47620), 0xA8, 7, 0);
          }
          else
          {
            sub_76C730((_DWORD *)dword_B47660, 0xA8, 0, 0);
          }
        }
        else
        {
          sub_76C730(*(_DWORD **)(4 * v21 + 0xB47620), 0xA8, 0xF, 0);
        }
      }
      v22 = *(_DWORD *)(4 * v21 + 0xB47620);
      v23 = (_DWORD **)(4 * v21 + 0xB47620);
      if ( LOWORD(dword_B42EAC) == 4 )
      {
        if ( !*(_DWORD *)(v22 + 0x30) )
          *(_DWORD *)(v22 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v22 + 0x30), 0x34, 1, 0);
        v24 = (int)*v23;
        if ( !(*v23)[0xC] )
          *(_DWORD *)(v24 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v24 + 0x30), 0x38, 8, 0);
        v25 = (int)*v23;
        if ( !(*v23)[0xC] )
          *(_DWORD *)(v25 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v25 + 0x30), 0x37, 7, 0);
        v26 = (int)*v23;
        if ( !(*v23)[0xC] )
          *(_DWORD *)(v26 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v26 + 0x30), 0x35, 1, 0);
        v27 = (int)*v23;
        if ( !(*v23)[0xC] )
          *(_DWORD *)(v27 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v27 + 0x30), 0x36, 1, 0);
      }
      else
      {
        if ( !*(_DWORD *)(v22 + 0x30) )
          *(_DWORD *)(v22 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v22 + 0x30), 0x34, 0, 0);
      }
      if ( v30 - 0x33 > 0x15F )
      {
        if ( v30 - 2 <= 0xDC )
          sub_76C730(*v23, 0x1B, v29 != 0, 0);
      }
      else if ( dword_B42EB8 && *(_BYTE *)(dword_B42EB8 + 6) )
      {
        v28 = *v23;
        if ( v29 )
        {
          sub_76C730(v28, 0x1B, 1, 0);
          (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 6) + 8))(*(this + 6), *(_DWORD *)(a5 + 8));
        }
        else
        {
          sub_76C730(v28, 0x1B, 0, 0);
        }
        sub_76C730(*v23, 0x17, 4, 0);
        sub_76C730(*v23, 0xE, 1, 0);
      }
      else
      {
        sub_76C730(*v23, 0x1B, 1, 0);
        sub_76C730(*v23, 0x17, 3, 0);
        sub_76C730(*v23, 0xE, 0, 0);
      }
      if ( dword_B42EB8 )
      {
        if ( !*(_BYTE *)(dword_B42EB8 + 7) )
          flt_B4668C = 0.0;
      }
      result = 0;
      break;
    default:
      result = sub_7C9F30((Ni2DBuffer **)this, a2, a3, a4, (NiRenderedTexture *)a5, a6, a7, a8);
      break;
  }
  return result;
}
