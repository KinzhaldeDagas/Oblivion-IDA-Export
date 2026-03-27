void __thiscall sub_6895D0(_DWORD *this, TESObjectREFR *a2, NiPoint3 *a3)
{
  float *v5; // eax
  NiPoint3 *v6; // eax
  float *v7; // eax
  float *v8; // eax
  char *Health; // eax
  int v10; // eax
  float *v11; // eax
  char v12; // dl
  _DWORD *v13; // eax
  char *v14; // eax
  NiDX92DBufferData *v15; // ebx
  int v16; // eax
  float *v17; // eax
  char v18; // bl
  float *v19; // eax
  double v20; // st7
  float *v21; // eax
  _DWORD *v22; // eax
  _BYTE *v23; // ebx
  char v24; // al
  char v25; // al
  char v26; // al
  char *v27; // ebx
  float *v28; // eax
  float v29; // [esp+0h] [ebp-7Ch]
  float v30; // [esp+0h] [ebp-7Ch]
  float *v31; // [esp+0h] [ebp-7Ch]
  int v32; // [esp+18h] [ebp-64h] BYREF
  float v33; // [esp+1Ch] [ebp-60h]
  float v34; // [esp+20h] [ebp-5Ch]
  int v35; // [esp+24h] [ebp-58h] BYREF
  int v36; // [esp+28h] [ebp-54h]
  float v37; // [esp+2Ch] [ebp-50h]
  TeleportData v38; // [esp+30h] [ebp-4Ch] BYREF
  char v39; // [esp+5Ch] [ebp-20h]
  int v40; // [esp+78h] [ebp-4h]
  char v41; // [esp+80h] [ebp+4h]

  if ( a2 )
  {
    sub_68A160(this);
    if ( sub_8AA390(v5, &a3->x) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0xC))(this) )
    {
      sub_68AFB0(this, a2, a3);
      if ( !sub_6825C0((_DWORD *)dword_B3BF80, (Actor *)a2) )
      {
        v6 = (NiPoint3 *)a2->vtbl->GetPos(a2);
        if ( sub_689230((TESChildCELL *)a2, v6, &a3->x) )
        {
          sub_68C6E0(this + 5);
          v7 = a2->vtbl->GetPos(a2);
          sub_68BED0(this + 5, v7);
          sub_68BED0(this + 5, a3);
LABEL_33:
          if ( byte_B3C08A )
            sub_685EA0(this, (int)a2);
          sub_6847B0(this);
          return;
        }
        if ( *((char *)this + 0x2C) < 0 )
          return;
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0xC))(this) )
        {
          v29 = flt_A3765C;
          v8 = a2->vtbl->GetPos(a2);
          if ( sub_480520(v8, &a3->x, v29) >= 0 )
          {
            Health = (char *)TESHealthForm_GetHealth((Sky *)(this + 5));
            if ( Health )
            {
              v10 = sub_6899C0(Health);
              v35 = *(_DWORD *)v10;
              v36 = *(_DWORD *)(v10 + 4);
              v37 = *(float *)(v10 + 8);
            }
            else
            {
              v11 = a2->vtbl->GetPos(a2);
              v35 = *(_DWORD *)v11;
              v36 = *((_DWORD *)v11 + 1);
              v37 = v11[2];
              sub_68BED0(this + 5, &v35);
            }
            sub_67D760(&v38.yRot);
            v12 = *((_BYTE *)this + 0x10);
            v40 = 1;
            v39 = v12;
            LOBYTE(v13) = sub_67EB60(&v38.yRot, (float *)&v35, &a3->x, a2, 0.0);
            sub_67E090(v13, (int)&v38.yRot, (Sky *)(this + 5));
            sub_68C1B0(this + 5);
            sub_684000(this, (Actor *)a2);
            v40 = 0xFFFFFFFF;
            TESTexture::ClearComponentReferences(&v38.yRot);
            goto LABEL_33;
          }
        }
        v14 = (char *)sub_42B410((BSExtraData *)(this + 5));
        *(float *)&v32 = flt_A32048;
        v15 = (NiDX92DBufferData *)v14;
        v33 = 0.0;
        v34 = 0.0;
        if ( v14 )
        {
          v16 = sub_6899C0(v14);
          v32 = *(int *)v16;
          v33 = *(float *)(v16 + 4);
          v34 = *(float *)(v16 + 8);
        }
        v41 = 0;
        if ( v15 )
        {
          if ( NiDX92DBufferData::GetSurfaceData(v15) || sub_480520((float *)&v32, &a3->x, flt_A34A80) >= 0 )
            goto LABEL_22;
        }
        else
        {
          v30 = flt_A34A80;
          v17 = a2->vtbl->GetPos(a2);
          if ( sub_480520(v17, &a3->x, v30) >= 0 )
            goto LABEL_22;
        }
        v41 = 1;
LABEL_22:
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, NiPoint3 *, _DWORD))(*this + 0x14))(this, a2, a3, 0);
        v18 = 0;
        if ( !v41 )
          goto LABEL_38;
        if ( !sub_68C010(this + 5, 4u) )
          goto LABEL_38;
        sub_68CB30(&v38);
        v40 = 0;
        if ( sub_686450((MobileObject *)a2, a3, &v38, 0, 0) )
        {
          v19 = a2->vtbl->GetPos(a2);
          v35 = *(_DWORD *)v19;
          v36 = *((_DWORD *)v19 + 1);
          v37 = v19[2];
          v20 = sub_5E0660(a2);
          v37 = v20 + v37;
          v21 = (float *)sub_6899C0((char *)&v38);
          if ( sub_6859A0((float *)&v35, v21) )
          {
            sub_684EC0((int **)this);
            v22 = (_DWORD *)sub_6899C0((char *)&v38);
            v23 = sub_68BED0(this + 5, v22);
            sub_68CA30(v23, 0);
            v24 = sub_68CA80(&v38);
            sub_68CA90(v23, v24);
            v25 = sub_68CAB0(&v38);
            sub_68CAC0(v23, v25);
            v26 = sub_68CAE0(&v38);
            sub_68CAF0(v23, v26);
            v18 = 1;
          }
        }
        v40 = 0xFFFFFFFF;
        TESTexture::ClearComponentReferences(&v38);
        if ( !v18 )
        {
LABEL_38:
          if ( *(float *)&v32 == dbl_A3A5B0 || !sub_68BE10(this + 5, (int)&v32, 5) )
          {
            v27 = (char *)sub_42B410((BSExtraData *)(this + 5));
            if ( v27 )
            {
              v31 = a2->vtbl->GetPos(a2);
              v28 = (float *)sub_6899C0(v27);
              if ( sub_8AA350(v28, v31) )
                sub_68BE80(this + 5, v27, 0);
            }
          }
        }
        goto LABEL_33;
      }
    }
  }
}
