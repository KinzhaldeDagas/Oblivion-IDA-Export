_DWORD *__thiscall sub_6ABC80(_DWORD *this, int a2)
{
  NiTPointerMap<int,TESGameSound *> *v3; // eax
  NiTPointerMap<int,TESGameSound *> *v4; // eax
  NiTPointerMap<int,NiPointer<NiAVObject>> *v5; // eax
  NiTPointerMap<int,NiPointer<NiAVObject>> *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int **v13; // edi
  int v14; // ebp
  int *SafeFloatPointer; // eax
  bool v16; // zf
  float v18; // [esp+68h] [ebp-98h]
  _BYTE v19[52]; // [esp+6Ch] [ebp-94h] BYREF
  int v20; // [esp+A0h] [ebp-60h]
  int v21; // [esp+CCh] [ebp-34h] BYREF
  int v22; // [esp+D0h] [ebp-30h]
  int v23; // [esp+D4h] [ebp-2Ch]
  int v24; // [esp+D8h] [ebp-28h]
  int v25; // [esp+DCh] [ebp-24h]
  int v26; // [esp+E0h] [ebp-20h]
  int v27; // [esp+E4h] [ebp-1Ch]
  int v28; // [esp+E8h] [ebp-18h]
  int v29; // [esp+ECh] [ebp-14h]
  int v30; // [esp+FCh] [ebp-4h]

  *this = 0;
  *(this + 1) = 0;
  _memset(this, 0, 0x328);
  *(this + 0x33) = Seed;
  *((_BYTE *)this + 0xA4) = 0;
  *(this + 0x2D) = 0x3B9ACA00;
  v3 = (NiTPointerMap<int,TESGameSound *> *)FormHeapAlloc(0x10u);
  v30 = 0;
  if ( v3 )
    v4 = NiTPointerMap<int,TESGameSound *>::NiTPointerMap<int,TESGameSound *>(v3, 0x25u);
  else
    v4 = 0;
  *(this + 0xC0) = v4;
  v5 = (NiTPointerMap<int,NiPointer<NiAVObject>> *)FormHeapAlloc(0x10u);
  v30 = 1;
  if ( v5 )
    v6 = NiTPointerMap<int,NiPointer<NiAVObject>>::NiTPointerMap<int,NiPointer<NiAVObject>>(v5, 0x25u);
  else
    v6 = 0;
  v30 = 0xFFFFFFFF;
  *(this + 0xC1) = v6;
  v7 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v7 )
  {
    v7[3] = 0;
    v7[1] = 0;
    v7[2] = 0;
    *v7 = &NiTList<unsigned int>::`vftable';
  }
  else
  {
    v7 = 0;
  }
  *(this + 0xC8) = v7;
  dword_B3C214 = (int)this;
  v8 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v8 )
  {
    v8[3] = 0;
    v8[1] = 0;
    v8[2] = 0;
    *v8 = &NiTPointerList<AudioManager::SoundMessage *>::`vftable';
  }
  else
  {
    v8 = 0;
  }
  v9 = this + 2;
  *(this + 0xC2) = v8;
  *((_BYTE *)this + 0xA6) = 0;
  flt_B161B8 = 0.0;
  if ( !DSOUND_11(0, (int)(this + 2), 0)
    && (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*v9 + 0x18))(*v9, a2, 2) >= 0 )
  {
    v10 = *v9;
    *(this + 4) = 0x60;
    *(this + 0x1C) = 0;
    if ( (*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)v10 + 0x10))(v10, this + 4) >= 0 )
    {
      *(this + 0x2B) |= 1u;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v11 = *v9;
      v21 = 0x24;
      (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v11 + 0x10))(v11, v19);
      v12 = *v9;
      v22 = 0x91;
      if ( (*(int (__stdcall **)(int, int *, _DWORD *, _DWORD))(*(_DWORD *)v12 + 0xC))(v12, &v21, this + 3, 0) >= 0 )
      {
        v13 = (int **)(this + 0x1E);
        if ( (**(int (__stdcall ***)(_DWORD, GUID *, _DWORD *))*(this + 3))(
               *(this + 3),
               &CLSID_IDirectSound3DListener,
               this + 0x1E) >= 0 )
        {
          (*(void (__stdcall **)(int *, float, float, float, _DWORD))(**v13 + 0x38))(
            *v13,
            flt_A32048,
            flt_A32048,
            flt_A32048,
            0);
          if ( flt_A31C80 < (double)*(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B161D8) )
            flt_B161D8 = flt_A31C80;
          if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B161D8) < 0.0 )
            flt_B161D8 = 1.0;
          v14 = **v13;
          SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B161D8);
          (*(void (__stdcall **)(int *, _DWORD, _DWORD))(v14 + 0x3C))(*v13, *(float *)SafeFloatPointer, 0);
          v16 = v20 == 0;
          *((_BYTE *)this + 0xA5) = 0;
          *(this + 0x1D) = 0;
          if ( !v16 )
            *(this + 0x2B) |= 4u;
          *(this + 0xC9) = 0;
          *(this + 0x34) = Seed;
          *((_WORD *)this + 0x58) = 0;
          CoInitialize(0);
          *(this + 0x37) = 0;
          *((float *)this + 0x2E) = sub_404E30(&flt_B16190);
          v18 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B161A0);
          *((float *)this + 0xBE) = v18;
          *((float *)this + 0xBC) = v18;
          *((float *)this + 0x31) = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B161A8);
          *((float *)this + 0x2F) = sub_404E30(&flt_B16198);
          *((float *)this + 0x30) = sub_404E30(&flt_B161B0);
          *((float *)this + 0xBD) = 0.0;
          *(this + 0x32) = Seed;
        }
      }
    }
  }
  return this;
}
