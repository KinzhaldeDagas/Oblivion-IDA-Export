void __thiscall sub_4DE460(_BYTE *this, float arg0, char a3)
{
  int v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // eax
  NiObject *v8; // ebp
  char v9; // al
  int v10; // ebx
  char v11; // al
  int v12; // eax
  int v13; // edi
  NiAVObject *v14; // eax
  int v15; // eax
  NiAVObject *v16; // eax
  float v17; // [esp+0h] [ebp-20h]
  float a2; // [esp+4h] [ebp-1Ch]
  float a2a; // [esp+4h] [ebp-1Ch]
  int v20; // [esp+1Ch] [ebp-4h] BYREF
  float v21; // [esp+24h] [ebp+4h]

  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x18 )
    {
      if ( LOBYTE(arg0) )
        sub_4D8270(this, 4);
      else
        sub_4D82E0(this, 4);
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x154))(this)
        && (v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x154))(this), *(_WORD *)(v4 + 0xB6)) )
      {
        v5 = **(_DWORD **)(v4 + 0xB0);
      }
      else
      {
        v5 = 0;
      }
      if ( v5 )
        v6 = *(NiObject **)(v5 + 0xC);
      else
        v6 = 0;
      v7 = NiRTTI_Cast(&stru_B3CAC0, v6);
      v8 = v7;
      if ( v7 )
      {
        v9 = NiTMap_GetAt(&v7[0xB].__vftable, (int)"Open", &v20);
        v10 = v9 != 0 ? v20 : 0;
        v11 = NiTMap_GetAt(&v8[0xB].__vftable, (int)"Close", &v20);
        v12 = v11 != 0 ? v20 : 0;
        if ( v10 )
        {
          if ( v12 )
          {
            if ( LOBYTE(arg0) )
            {
              v13 = v10;
              v10 = v12;
            }
            else
            {
              v13 = v12;
            }
            LOWORD(v8[1].__vftable) |= 8u;
            sub_6C9CB0(v10, 0.0, 0);
            a2 = 0.0;
            v17 = 1.0;
            if ( a3 )
            {
              sub_470B20((_DWORD *)v10, 0, 0, v17, a2, 0);
              *(float *)(v10 + 0x48) = -flt_A7DEB4;
              a2a = *(float *)(v13 + 0x2C);
              v14 = (NiAVObject *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x154))(this);
              NiAVObject_UpdateNiAVObject(v14, a2a, 1);
              sub_6C9CB0(v10, 0.0, 0);
              sub_4D90D0(this, *(const char **)(v13 + 8));
              v15 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x154))(this);
              sub_897A20(v15, 1);
            }
            else
            {
              sub_470B20((_DWORD *)v13, 0, 0, v17, a2, 0);
              *(float *)(v13 + 0x48) = -flt_A7DEB4;
              v21 = *(float *)(v13 + 0x2C);
              v16 = (NiAVObject *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x154))(this);
              NiAVObject_UpdateNiAVObject(v16, v21, 1);
            }
          }
        }
      }
      else if ( LOBYTE(arg0) )
      {
        sub_4D90D0(this, "Open");
      }
      else
      {
        sub_4D90D0(this, "Close");
      }
    }
  }
}
