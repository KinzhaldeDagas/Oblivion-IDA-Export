bhkCharacterProxy *__thiscall sub_5E4140(TESObjectREFR *this)
{
  bhkCharacterProxy *result; // eax
  int v3; // edi
  _BYTE *v4; // eax
  int *v5; // edi
  int v6; // ebx
  int v7; // eax
  Unk128 *v8; // eax
  float *v9; // eax
  int *v10; // edi
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // [esp+Ch] [ebp-14h]

  result = (bhkCharacterProxy *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x36C))(*((_DWORD *)this + 0x16)); /*0x5e414e*/
  if ( result ) /*0x5e4152*/
  {
    result = (bhkCharacterProxy *)((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this); /*0x5e4162*/
    if ( !result ) /*0x5e4166*/
    {
      v3 = *((_DWORD *)this + 0x16); /*0x5e416e*/
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x37C))(v3); /*0x5e417e*/
      v4 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x378))(v3); /*0x5e4189*/
      sub_4D7300(v4, v13, 0); /*0x5e418d*/
      this->vtbl->GetAnimData(this)->unkC4 = 1; /*0x5e419e*/
      v5 = *((int **)this + 0x16); /*0x5e41a5*/
      v6 = *v5; /*0x5e41a8*/
      v7 = (*(int (__thiscall **)(int *))(*v5 + 0x378))(v5); /*0x5e41b4*/
      (*(void (__thiscall **)(int *, TESObjectREFR *, _DWORD, int))(v6 + 0x370))(v5, this, 0, v7); /*0x5e41c2*/
      v8 = (Unk128 *)(*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x380))(0.0); /*0x5e41d5*/
      sub_6FAEE0(v8, COERCE_FLOAT(0x7F)); /*0x5e41d9*/
      *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x380))(*((_DWORD *)this + 0x16)) + 0xE) = 0; /*0x5e41eb*/
      v9 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x380))(*((_DWORD *)this + 0x16)); /*0x5e41fa*/
      *v9 = g_zeroNiPoint3.x; /*0x5e4202*/
      v9[1] = g_zeroNiPoint3.y; /*0x5e420a*/
      v9[2] = g_zeroNiPoint3.z; /*0x5e4213*/
      v10 = *((int **)this + 0x16); /*0x5e4216*/
      v11 = *v10; /*0x5e4219*/
      v12 = (*(int (__thiscall **)(int *))(*v10 + 0x380))(v10); /*0x5e4223*/
      (*(void (__thiscall **)(int *, _DWORD, int, int))(v11 + 0x3E8))(v10, 0, 0x7F, v12); /*0x5e4232*/
      if ( this == (TESObjectREFR *)reference ) /*0x5e423d*/
        reference->unk61C = 0.0; /*0x5e4241*/
      return sub_65AC20((MobileObject *)this, 0); /*0x5e424b*/
    }
  }
  return result; /*0x5e4250*/
}
