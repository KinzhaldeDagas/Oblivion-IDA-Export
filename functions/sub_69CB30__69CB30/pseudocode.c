void __thiscall sub_69CB30(float *this)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *v4; // eax
  float v5; // ecx
  float v6; // eax
  int v7; // eax
  NiObject *v8; // eax
  NiObject *v9; // esi
  float v10; // edi
  float a2[2]; // [esp+24h] [ebp-34h] BYREF
  float v12; // [esp+2Ch] [ebp-2Ch]
  float v13; // [esp+30h] [ebp-28h]
  float v14[9]; // [esp+34h] [ebp-24h] BYREF

  v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this);
  v3 = v2;
  if ( v2 )
  {
    a2[0] = fabs(*(this + 0x23));
    *(float *)(v2 + 0x60) = a2[0];
    v4 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174))(this);
    *(_DWORD *)(v3 + 0x54) = *v4;
    *(_DWORD *)(v3 + 0x58) = v4[1];
    *(_DWORD *)(v3 + 0x5C) = v4[2];
    v5 = *(this + 8);
    v6 = *(this + 0xA);
    v12 = *(this + 9);
    a2[1] = v5;
    v13 = v6;
    sub_7117C0(v14, v6, v5, v12);
    qmemcpy((void *)(v3 + 0x30), v14, 0x24u);
    sub_6F94E0((int *)v3);
    v7 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 0x58))(v3, "AreaEffect");
    if ( v7 )
      sub_69C9A0(this, v7);
    v8 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v3 + 0xC));
    v9 = v8;
    if ( v8 )
    {
      if ( NiTMap_GetAt(&v8[0xB].__vftable, (int)"SpecialIdle_Projectile", a2) )
      {
        v10 = a2[0];
        if ( LODWORD(a2[0]) )
        {
          sub_4715C0(v9, 0.0);
          sub_6C9BA0((_DWORD *)LODWORD(v10), 0, 0, 1.0, 0.0, 0, 0);
          LOWORD(v9[1].__vftable) |= 8u;
          *(float *)(LODWORD(v10) + 0x48) = -flt_A7DEB4;
          a2[0] = flt_B33A30 - dbl_A2FC80;
          NiAVObject_UpdateNiAVObject((NiAVObject *)v3, a2[0], 1);
        }
      }
    }
  }
}
