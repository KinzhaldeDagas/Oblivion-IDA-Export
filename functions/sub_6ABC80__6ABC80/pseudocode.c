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
  float *SafeFloatPointer; // eax
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

  *this = 0; /*0x6abccd*/
  *(this + 1) = 0; /*0x6abccf*/
  _memset((int)this, 0, 0x328u); /*0x6abcd2*/
  *(this + 0x33) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6abcde*/
  *((_BYTE *)this + 0xA4) = 0; /*0x6abce4*/
  *(this + 0x2D) = 0x3B9ACA00; /*0x6abcea*/
  v3 = (NiTPointerMap<int,TESGameSound *> *)FormHeapAlloc(0x10u); /*0x6abcf4*/
  v30 = 0; /*0x6abd02*/
  if ( v3 ) /*0x6abd09*/
    v4 = NiTPointerMap<int,TESGameSound *>::NiTPointerMap<int,TESGameSound *>(v3, 0x25u); /*0x6abd0f*/
  else
    v4 = 0; /*0x6abd16*/
  *(this + 0xC0) = v4; /*0x6abd24*/
  v5 = (NiTPointerMap<int,NiPointer<NiAVObject>> *)FormHeapAlloc(0x10u); /*0x6abd2a*/
  v30 = 1; /*0x6abd38*/
  if ( v5 ) /*0x6abd43*/
    v6 = NiTPointerMap<int,NiPointer<NiAVObject>>::NiTPointerMap<int,NiPointer<NiAVObject>>(v5, 0x25u); /*0x6abd49*/
  else
    v6 = 0; /*0x6abd50*/
  v30 = 0xFFFFFFFF; /*0x6abd54*/
  *(this + 0xC1) = v6; /*0x6abd5b*/
  v7 = (_DWORD *)FormHeapAlloc(0x10u); /*0x6abd61*/
  if ( v7 ) /*0x6abd6b*/
  {
    v7[3] = 0; /*0x6abd6d*/
    v7[1] = 0; /*0x6abd70*/
    v7[2] = 0; /*0x6abd73*/
    *v7 = &NiTList<unsigned int>::`vftable'; /*0x6abd76*/
  }
  else
  {
    v7 = 0; /*0x6abd7e*/
  }
  *(this + 0xC8) = v7; /*0x6abd80*/
  unk_B3C214 = (int)this; /*0x6abd88*/
  v8 = (_DWORD *)FormHeapAlloc(0x10u); /*0x6abd8e*/
  if ( v8 ) /*0x6abd98*/
  {
    v8[3] = 0; /*0x6abd9a*/
    v8[1] = 0; /*0x6abd9d*/
    v8[2] = 0; /*0x6abda0*/
    *v8 = &NiTPointerList<AudioManager::SoundMessage *>::`vftable'; /*0x6abda3*/
  }
  else
  {
    v8 = 0; /*0x6abdab*/
  }
  v9 = this + 2; /*0x6abdb0*/
  *(this + 0xC2) = v8; /*0x6abdb4*/
  *((_BYTE *)this + 0xA6) = 0; /*0x6abdba*/
  flt_B161B8 = 0.0; /*0x6abdc0*/
  if ( !DSOUND_11(0, (int)(this + 2), 0) /*0x6abde3*/
    && (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*v9 + 0x18))(*v9, a2, 2) >= 0 )
  {
    v10 = *v9; /*0x6abde9*/
    *(this + 4) = 0x60; /*0x6abdee*/
    *(this + 0x1C) = 0; /*0x6abdf4*/
    if ( (*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)v10 + 0x10))(v10, this + 4) >= 0 ) /*0x6abe02*/
    {
      *(this + 0x2B) |= 1u; /*0x6abe08*/
      v21 = 0; /*0x6abe11*/
      v22 = 0; /*0x6abe15*/
      v23 = 0; /*0x6abe19*/
      v24 = 0; /*0x6abe20*/
      v25 = 0; /*0x6abe27*/
      v26 = 0; /*0x6abe2e*/
      v27 = 0; /*0x6abe35*/
      v28 = 0; /*0x6abe3c*/
      v29 = 0; /*0x6abe43*/
      v11 = *v9; /*0x6abe4a*/
      v21 = 0x24; /*0x6abe50*/
      (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v11 + 0x10))(v11, v19); /*0x6abe5f*/
      v12 = *v9; /*0x6abe61*/
      v22 = 0x91; /*0x6abe6f*/
      if ( (*(int (__stdcall **)(int, int *, _DWORD *, _DWORD))(*(_DWORD *)v12 + 0xC))(v12, &v21, this + 3, 0) >= 0 ) /*0x6abe85*/
      {
        v13 = (int **)(this + 0x1E); /*0x6abe93*/
        if ( (**(int (__stdcall ***)(_DWORD, GUID *, _DWORD *))*(this + 3))( /*0x6abea1*/
               *(this + 3),
               &CLSID_IDirectSound3DListener,
               this + 0x1E) >= 0 )
        {
          (*(void (__stdcall **)(int *, float, float, float, _DWORD))(**v13 + 0x38))( /*0x6abec4*/
            *v13,
            flt_A32048,
            flt_A32048,
            flt_A32048,
            0);
          if ( flt_A31C80 < (double)*GameSetting_GetSafeFloatPointer(&flt_B161D8) ) /*0x6abedd*/
            flt_B161D8 = flt_A31C80; /*0x6abedf*/
          if ( *GameSetting_GetSafeFloatPointer(&flt_B161D8) < 0.0 ) /*0x6abefc*/
            flt_B161D8 = 1.0; /*0x6abf00*/
          v14 = **v13; /*0x6abf08*/
          SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B161D8); /*0x6abf0f*/
          (*(void (__stdcall **)(int *, float, _DWORD))(v14 + 0x3C))(*v13, *SafeFloatPointer, 0); /*0x6abf21*/
          v16 = v20 == 0; /*0x6abf23*/
          *((_BYTE *)this + 0xA5) = 0; /*0x6abf27*/
          *(this + 0x1D) = 0; /*0x6abf2d*/
          if ( !v16 ) /*0x6abf30*/
            *(this + 0x2B) |= 4u; /*0x6abf32*/
          *(this + 0xC9) = 0; /*0x6abf39*/
          *(this + 0x34) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6abf45*/
          *((_WORD *)this + 0x58) = 0; /*0x6abf4b*/
          CoInitialize(0); /*0x6abf52*/
          *(this + 0x37) = 0; /*0x6abf5d*/
          *((float *)this + 0x2E) = sub_404E30(&flt_B16190); /*0x6abf68*/
          v18 = *GameSetting_GetSafeFloatPointer(&flt_B161A0); /*0x6abf7a*/
          *((float *)this + 0xBE) = v18; /*0x6abf87*/
          *((float *)this + 0xBC) = v18; /*0x6abf8d*/
          *((float *)this + 0x31) = *GameSetting_GetSafeFloatPointer(&flt_B161A8); /*0x6abf9f*/
          *((float *)this + 0x2F) = sub_404E30(&flt_B16198); /*0x6abfaf*/
          *((float *)this + 0x30) = sub_404E30(&flt_B161B0); /*0x6abfba*/
          *((float *)this + 0xBD) = 0.0; /*0x6abfc2*/
          *(this + 0x32) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6abfce*/
        }
      }
    }
  }
  return this; /*0x6abfd6*/
}
