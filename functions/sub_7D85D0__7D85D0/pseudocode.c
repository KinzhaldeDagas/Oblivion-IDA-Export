NiTPointerList__BSImageSpaceShader *__thiscall sub_7D85D0(
        NiTPointerList__BSImageSpaceShader *this,
        NiGeometry *a2,
        int a3,
        _WORD *a4,
        int a5)
{
  volatile LONG *v7; // ebx
  volatile LONG *v8; // edi
  int v9; // ecx
  int v10; // eax
  NiProperty *NiPropertyByID; // eax
  int v13; // eax
  int v14; // ecx
  double v15; // st7
  bool v16; // bl
  float x; // eax
  float y; // ecx
  float z; // edx
  double v20; // st7
  double v21; // st7
  double v22; // st6
  double v23; // st5
  double v24; // st4
  double v25; // st3
  double v26; // st2
  double v27; // st5
  double v28; // st5
  double v29; // st5
  double v30; // st4
  double v31; // st4
  double v32; // rt0
  double v33; // st4
  double v34; // st3
  double v35; // st6
  double v36; // st6
  double v37; // st6
  double v38; // st7
  double v39; // rtt
  double v40; // rt0
  double v41; // st6
  double v42; // st7
  NiProperty *v43; // ecx
  NiProperty *v44; // eax
  int v45; // eax
  float v46; // [esp+18h] [ebp-40h]
  float v47; // [esp+1Ch] [ebp-3Ch]
  volatile LONG *v48; // [esp+20h] [ebp-38h]
  int v49; // [esp+24h] [ebp-34h]
  volatile LONG *v50; // [esp+28h] [ebp-30h] BYREF
  float v51; // [esp+2Ch] [ebp-2Ch]
  int v52; // [esp+30h] [ebp-28h]
  float v53; // [esp+34h] [ebp-24h]
  float v54; // [esp+38h] [ebp-20h]
  float v55; // [esp+3Ch] [ebp-1Ch]
  float v56; // [esp+40h] [ebp-18h]
  float v57; // [esp+44h] [ebp-14h]
  float v58; // [esp+48h] [ebp-10h]
  float v59; // [esp+4Ch] [ebp-Ch]
  float v60; // [esp+50h] [ebp-8h]
  float Radius; // [esp+54h] [ebp-4h]
  char v62; // [esp+5Ch] [ebp+4h]
  float v63; // [esp+5Ch] [ebp+4h]

  v7 = *sub_405760(a2, &v50);
  v48 = v7;
  if ( v50 )
  {
    v8 = v50;
    if ( !InterlockedDecrement(v50 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
  }
  v9 = a3 | (LOWORD(dword_B42EAC) << 8);
  v49 = v9;
  if ( LOWORD(dword_B42EAC) == 5 )
  {
    sub_7ED1A0(this);
    if ( !*((_DWORD *)this + 0x11) )
      goto LABEL_9;
    v10 = *(_DWORD *)(*((_DWORD *)this + 0xF) + 8);
    if ( *(_BYTE *)(v10 + 8) )
      **(_DWORD **)(v10 + 0xC) = dword_B42EB0;
    if ( !*((_DWORD *)this + 0x11) )
    {
LABEL_9:
      if ( (_BYTE)a5 )
      {
        if ( v7 )
        {
          NiTPointerList::FreeAllNodes(this + 2);
          NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a2, 0);
          if ( !NiPropertyByID && (NiPropertyByID = *((NiProperty **)v7 + 2)) == 0
            || (LOBYTE(a3) = 1, ((int)NiPropertyByID[1].vtbl & 0x200) == 0) )
          {
            LOBYTE(a3) = 0;
          }
          sub_85AAC0(this, (int)a2, a2->member.skinData != 0, a3);
        }
      }
    }
    return this + 2;
  }
  if ( LOWORD(dword_B42EAC) != 6 )
  {
    v14 = *((_DWORD *)this + 7);
    v47 = *((float *)this + 0x27);
    v46 = *((float *)this + 0x29);
    v15 = 0.0;
    if ( (v14 & 0x80) == 0 || (v62 = 1, flt_B430A0 <= 0.0) )
      v62 = 0;
    v16 = (v14 & 1) != 0 && flt_B43090 > 0.0;
    if ( !v62 && !v16 )
      goto LABEL_55;
    x = a2->member.super.m_kWorldBound.Center.x;
    y = a2->member.super.m_kWorldBound.Center.y;
    v52 = dword_B46658;
    z = a2->member.super.m_kWorldBound.Center.z;
    v20 = *(float *)&dword_B4665C;
    v58 = x;
    v53 = v20;
    v59 = y;
    v21 = *(float *)&dword_B46660;
    v60 = z;
    v54 = v21;
    Radius = a2->member.super.m_kWorldBound.Radius;
    v55 = x - *(float *)&v52;
    v56 = y - v53;
    v57 = z - v54;
    v51 = v56 * v56 + v55 * v55 + v57 * v57;
    v51 = sqrt(v51);
    v51 = v51 - Radius;
    v22 = v51;
    if ( !v62 )
    {
      v27 = 0.0;
      goto LABEL_44;
    }
    if ( (*(_DWORD *)(this + 1) & 0x20000) != 0 )
    {
      v23 = flt_B4309C;
      if ( v23 <= v22 )
      {
        v24 = 0.0;
        v25 = 0.0;
        v26 = flt_B430A0;
LABEL_38:
        if ( v26 != v25 )
        {
          v28 = (v22 - v23) / (v26 - v23);
          v15 = v24;
          if ( v28 <= 1.0 )
          {
            v31 = v28;
            v29 = 1.0;
            v30 = 1.0 - v31;
          }
          else
          {
            v29 = 1.0;
            v30 = 1.0 - 1.0;
          }
          v46 = v30;
LABEL_45:
          if ( v16 )
          {
            v33 = flt_B4308C;
            if ( v33 > v22 )
            {
              v47 = 1.0;
              goto LABEL_58;
            }
            v34 = flt_B43090;
            if ( v34 == v15 )
            {
              v47 = 1.0;
              goto LABEL_58;
            }
            if ( v34 < v22 )
            {
              v47 = v15;
              goto LABEL_56;
            }
            v35 = (v22 - v33) / (v34 - v33);
            if ( v29 >= v35 )
              v47 = v29 - v35;
            else
              v47 = v29 - v29;
          }
LABEL_55:
          if ( v15 != v47 )
          {
LABEL_57:
            if ( v15 >= v47 )
              goto LABEL_59;
LABEL_58:
            if ( v15 != *((float *)this + 0x27) )
            {
LABEL_59:
              v36 = v46;
              if ( v46 == v15 )
              {
                v37 = v15;
                v38 = v46;
                if ( v37 < *((float *)this + 0x29) )
                {
                  *((_DWORD *)this + 9) = 0;
                  goto LABEL_68;
                }
                v39 = v37;
                v36 = v46;
                v15 = v39;
              }
              if ( v36 <= v15 )
              {
                v38 = v36;
              }
              else
              {
                v40 = v36;
                v41 = v15;
                v38 = v40;
                if ( v41 == *((float *)this + 0x29) )
                  *((_DWORD *)this + 9) = 0;
              }
LABEL_68:
              *((float *)this + 0x27) = v47;
              *((float *)this + 0x29) = v38;
              if ( v48 )
                sub_7E2430((int)this, *(float *)(*((_DWORD *)v48 + 4) + 0x50));
              if ( (*(_DWORD *)(this + 1) & 0x80000) == 0 )
              {
LABEL_84:
                if ( *((_DWORD *)this + 9) == v49 && (_BYTE)a5 )
                  return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x28);
                if ( (_BYTE)a5 == 1 )
                {
                  sub_7E24C0((BSShaderProperty *)this);
                  if ( 0.0 == *((float *)this + 8) )
                    return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x28);
                  *((_DWORD *)this + 9) = v49;
                }
                else
                {
                  *a4 = 0;
                }
                if ( ShaderPackage == 1 )
                {
                  ((void (__thiscall *)(NiTPointerList__BSImageSpaceShader *, NiGeometry *, int, _WORD *, int))this->__vftable[0xC].FreeNode)(
                    this,
                    a2,
                    a3,
                    a4,
                    a5);
                }
                else if ( ShaderPackage >= 2 )
                {
                  ((void (__thiscall *)(NiTPointerList__BSImageSpaceShader *, NiGeometry *, int, _WORD *, int))this->__vftable[0xD].Destructor)(
                    this,
                    a2,
                    a3,
                    a4,
                    a5);
                }
                if ( ShaderPackage < 3 || (dword_B42F40 & 0x10) == 0 )
                  goto LABEL_103;
                if ( (_BYTE)a5 )
                {
                  if ( v48 )
                  {
                    v44 = NiNode_GetNiPropertyByID((NiNode *)a2, 0);
                    if ( !v44 && (v44 = *((NiProperty **)v48 + 2)) == 0
                      || (LOBYTE(a3) = 1, ((int)v44[1].vtbl & 0x200) == 0) )
                    {
                      LOBYTE(a3) = 0;
                    }
                    sub_85AAC0(this, (int)a2, a2->member.skinData != 0, a3);
                  }
LABEL_103:
                  if ( (_BYTE)a5 )
                  {
                    if ( *((_DWORD *)this + 0xD) )
                    {
                      v45 = *(_DWORD *)(*((_DWORD *)this + 0xC) + 8);
                      if ( v45 )
                        *(_BYTE *)(v45 + 7) = 1;
                    }
                  }
                }
                return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x28);
              }
              if ( v48 )
                v42 = *(float *)(*((_DWORD *)v48 + 4) + 0x50);
              else
                v42 = 1.0;
              v63 = v42;
              v43 = NiNode_GetNiPropertyByID((NiNode *)a2, 0);
              if ( v63 == 1.0 )
              {
                if ( !v43 || ((int)v43[1].vtbl & 1) == 0 )
                  goto LABEL_83;
                LOWORD(v43[1].vtbl) &= ~1u;
              }
              else
              {
                if ( v63 <= 0.0 || !v43 || ((int)v43[1].vtbl & 1) != 0 )
                  goto LABEL_83;
                LOWORD(v43[1].vtbl) |= 1u;
              }
              *((_DWORD *)this + 9) = 0;
LABEL_83:
              *((float *)this + 8) = v63;
              goto LABEL_84;
            }
LABEL_65:
            v38 = v46;
            *((_DWORD *)this + 9) = 0;
            goto LABEL_68;
          }
LABEL_56:
          if ( v15 < *((float *)this + 0x27) )
            goto LABEL_65;
          goto LABEL_57;
        }
        v27 = v24;
        v46 = 1.0;
LABEL_44:
        v32 = v27;
        v29 = 1.0;
        v15 = v32;
        goto LABEL_45;
      }
    }
    else
    {
      v23 = flt_B43094;
      if ( v23 <= v22 )
      {
        v24 = 0.0;
        v25 = 0.0;
        v26 = flt_B43098;
        goto LABEL_38;
      }
    }
    v27 = 0.0;
    v46 = 1.0;
    goto LABEL_44;
  }
  if ( !*((_DWORD *)this + 0x15) )
  {
    v13 = *((_DWORD *)this + 7);
    LOBYTE(v9) = (v13 & 0x100000) != 0;
    sub_85ABD0(this, (int)a2, (v13 & 2) != 0, v9);
  }
  return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x48);
}
