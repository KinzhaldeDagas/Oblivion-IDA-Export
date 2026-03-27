int __thiscall sub_8098E0(Ni2DBuffer **this, _DWORD *a2, int a3, int a4, NiRenderedTexture *a5, int a6, int a7, int a8)
{
  int pixelLayout; // esi
  BOOL v11; // eax
  NiRenderedTexture *v12; // edi
  BOOL v13; // edi
  const char *m_pcName; // eax
  float v16; // eax
  float v17; // ecx
  float v18; // edx
  double v19; // st7
  int v20; // eax
  double v21; // st7
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  unsigned __int16 v25; // ax
  int *v26; // eax
  unsigned __int16 v27; // ax
  BSShader *shader; // eax
  Ni2DBuffer *m_uiRefCount; // eax
  unsigned __int16 v30; // di
  int v31; // esi
  _DWORD *v32; // ecx
  _DWORD **v33; // esi
  char v34; // al
  _DWORD *v35; // ecx
  char v36; // [esp+1Bh] [ebp-41h]
  unsigned __int16 v37; // [esp+1Ch] [ebp-40h]
  int v38; // [esp+20h] [ebp-3Ch]
  _DWORD *v39; // [esp+24h] [ebp-38h]
  int v40; // [esp+28h] [ebp-34h] BYREF
  int v41; // [esp+2Ch] [ebp-30h]
  int v42; // [esp+30h] [ebp-2Ch]
  float v43; // [esp+34h] [ebp-28h]
  int v44; // [esp+38h] [ebp-24h]
  int v45; // [esp+3Ch] [ebp-20h]
  float v46; // [esp+40h] [ebp-1Ch]
  float v47; // [esp+44h] [ebp-18h]
  float v48; // [esp+48h] [ebp-14h]
  int v49; // [esp+4Ch] [ebp-10h]
  unsigned int v50; // [esp+58h] [ebp-4h]
  bool v51; // [esp+6Ch] [ebp+10h]

  ((void (__thiscall *)(Ni2DBuffer **))(*this)[6].members.width)(this);
  v38 = dword_B42E90;
  if ( dword_B42E90 == 0x126 || dword_B42E90 == 0x123 )
    return sub_7C9F30(this, a2, a3, a4, a5, a6, a7, a8);
  v37 = 0;
  v40 = 0;
  pixelLayout = a5->member.super.formatPrefs.pixelLayout;
  v50 = 0;
  v36 = 0;
  v11 = pixelLayout
     && (*(int (__thiscall **)(int))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) >= 1
     && (*(int (__thiscall **)(int))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) <= 0xA;
  v39 = v11 ? (_DWORD *)pixelLayout : 0;
  v12 = 0;
  if ( v39 )
  {
    v13 = pixelLayout
       && (*(int (__thiscall **)(int))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) >= 5
       && (*(int (__thiscall **)(int))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) <= 0xA;
    v12 = v13 ? (NiRenderedTexture *)pixelLayout : 0;
  }
  if ( !pixelLayout )
  {
    if ( dword_B42E8C )
      dword_B42E8C("Attempting to render geometry with a shader, but no shader property", 0);
    return 0;
  }
  m_pcName = a5->member.super.super.m_pcName;
  v51 = (*(_BYTE *)(pixelLayout + 0x1C) & 2) != 0;
  if ( m_pcName && (m_pcName[0x18] & 1) != 0 )
  {
    v16 = *(float *)&dword_B46498;
    v17 = *(float *)&dword_B4649C;
    v41 = *(int *)(pixelLayout + 0x20);
    v18 = *(float *)&dword_B464A0;
    v46 = v16;
    v19 = v16;
    v20 = dword_B464A4;
    *(float *)&v42 = v19;
    v47 = v17;
    v43 = v17;
    v48 = v18;
    v21 = v18;
    v22 = LODWORD(v17);
    *(float *)&v44 = v21;
    v49 = v20;
    v23 = v44;
    v45 = v41;
    dword_B46498 = v42;
    v24 = v45;
    dword_B4649C = v22;
    dword_B464A0 = v23;
    dword_B464A4 = v24;
    v36 = 1;
  }
  else
  {
    sub_7E2430(pixelLayout, 1.0);
  }
  if ( v39 )
  {
    if ( LOWORD(dword_B42EAC) == 1 )
    {
      v27 = sub_7ED5D0(v39);
      if ( v27 > 0xAu )
        v27 = 0xA;
      v26 = (int *)((char *)&unk_B2DD50 + 0x10 * v27);
    }
    else
    {
      if ( LOWORD(dword_B42EAC) != 2 )
        goto LABEL_33;
      v25 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v39 + 0x60))(v39, a2);
      if ( v25 > 0x10u )
        v25 = 0x10;
      v26 = (int *)((char *)&unk_B2DE00 + 0x10 * v25);
    }
    sub_7ECAE0(0, *v26, v26[1], v26[2], v26[3]);
    sub_7ECAE0(0x19u, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC);
  }
LABEL_33:
  shader = GetShaderDefinition(1u)->shader;
  if ( v51 )
    m_uiRefCount = (Ni2DBuffer *)shader[1].member.super.super.super.super.m_uiRefCount;
  else
    m_uiRefCount = (Ni2DBuffer *)shader[1].__vftable;
  NiSmartPointer_Set__(this + 9, m_uiRefCount);
  if ( v38 > 0x18C )
  {
    switch ( v38 )
    {
      case 0x18D:
        sub_851E70(this, a2, a3, (int)a5, v12);
        break;
      case 0x18E:
        sub_848950(this, a2, a3, (int)a5, v12);
        break;
      case 0x18F:
        sub_848AD0(this, a2, a3, (int)a5, v12);
        break;
      default:
LABEL_66:
        v31 = sub_7C9F30(this, a2, a3, a4, a5, a6, a7, a8);
        v50 = 0xFFFFFFFF;
        sub_7016A0((NiD3DVertexShader *)&v40);
        return v31;
    }
    goto LABEL_41;
  }
  if ( v38 == 0x18C )
  {
    sub_851CA0(this, a2, a3, (int)a5, v12);
LABEL_41:
    v30 = v37;
    sub_76C730(*(_DWORD **)(4 * v37 + 0xB47718), 0x1C, 0, 0);
    if ( (unsigned int)(v38 - 0x10F) > 0x1A )
    {
      if ( v38 == 0xA || v38 == 0xB )
        sub_76C730(*(_DWORD **)(4 * v37 + 0xB47718), 0xA8, 8, 0);
      else
        sub_76C730(*(_DWORD **)(4 * v37 + 0xB47718), 0xA8, 7, 0);
    }
    else
    {
      sub_76C730(*(_DWORD **)(4 * v37 + 0xB47718), 0xA8, 0xF, 0);
    }
    goto LABEL_75;
  }
  switch ( v38 )
  {
    case 0x4E:
      sub_87FA20((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 0;
      break;
    case 0x53:
      sub_87FBD0((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 1;
      break;
    case 0x59:
      sub_87FD80((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12);
      v37 = 2;
      break;
    case 0x5E:
      sub_87FFC0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12);
      v37 = 3;
      break;
    case 0x64:
      sub_880200((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 4;
      break;
    case 0x69:
      sub_8803B0((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 5;
      break;
    case 0x6F:
      sub_880560((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12);
      v37 = 6;
      break;
    case 0x74:
      sub_8807A0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12);
      v37 = 7;
      break;
    case 0x79:
      sub_8809E0((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 8;
      break;
    case 0x7F:
      sub_880C00((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 9;
      break;
    case 0x87:
      sub_880E20((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v37 = 0xA;
      break;
    case 0x8D:
      sub_8810E0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v37 = 0xB;
      break;
    case 0x94:
      sub_8813A0((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 0xC;
      break;
    case 0x9A:
      sub_881610((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 0xD;
      break;
    case 0xA1:
      sub_881880((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v37 = 0xE;
      break;
    case 0xA7:
      sub_881B80((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, v12);
      v37 = 0xF;
      break;
    case 0xE9:
      sub_881E80((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 0x10;
      break;
    case 0xEC:
      sub_881FD0((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 0x11;
      break;
    case 0xF7:
      sub_882120((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 0x12;
      break;
    case 0xFA:
      sub_882270((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      v37 = 0x13;
      break;
    default:
      goto LABEL_66;
  }
  if ( v38 >= 0 )
    goto LABEL_41;
  v30 = v37;
LABEL_75:
  v32 = *(_DWORD **)(4 * v30 + 0xB47718);
  v33 = (_DWORD **)(4 * v30 + 0xB47718);
  if ( LOWORD(dword_B42EAC) == 4 )
  {
    sub_76C730(v32, 0x34, 1, 0);
    sub_76C730(*v33, 0x38, 8, 0);
    sub_76C730(*v33, 0x37, 7, 0);
    sub_76C730(*v33, 0x35, 1, 0);
    sub_76C730(*v33, 0x36, 1, 0);
  }
  else
  {
    sub_76C730(v32, 0x34, 0, 0);
  }
  if ( (unsigned int)(v38 - 0x33) > 0x15F )
  {
    if ( (unsigned int)(v38 - 3) <= 0xDB )
      sub_76C730(*v33, 0x1B, v36 != 0, 0);
  }
  else
  {
    v34 = sub_7C8510();
    v35 = *v33;
    if ( v34 )
    {
      if ( v36 )
      {
        sub_76C730(v35, 0x1B, 1, 0);
        (*((void (__thiscall **)(_DWORD, const char *))(*(this + 6))->__vftable + 2))(
          *(this + 6),
          a5->member.super.super.m_pcName);
      }
      else
      {
        sub_76C730(v35, 0x1B, 0, 0);
      }
      sub_76C730(*v33, 0x17, 4, 0);
      sub_76C730(*v33, 0xE, 1, 0);
    }
    else
    {
      sub_76C730(v35, 0x1B, 1, 0);
      sub_76C730(*v33, 0x17, 3, 0);
      sub_76C730(*v33, 0xE, 0, 0);
    }
  }
  if ( dword_B42EB8 )
  {
    if ( !*(_BYTE *)(dword_B42EB8 + 7) )
      flt_B4668C = 0.0;
  }
  v50 = 0xFFFFFFFF;
  sub_7016A0((NiD3DVertexShader *)&v40);
  return 0;
}
