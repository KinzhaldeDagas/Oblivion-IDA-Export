int __thiscall sub_5E4140(TESObjectREFR *this)
{
  int result; // eax
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

  result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x36C))(*((_DWORD *)this + 0x16));
  if ( result )
  {
    result = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this);
    if ( !result )
    {
      v3 = *((_DWORD *)this + 0x16);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x37C))(v3);
      v4 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x378))(v3);
      sub_4D7300(v4, v13, 0);
      this->vtbl->GetAnimData(this)->unkC4 = 1;
      v5 = *((int **)this + 0x16);
      v6 = *v5;
      v7 = (*(int (__thiscall **)(int *))(*v5 + 0x378))(v5);
      (*(void (__thiscall **)(int *, TESObjectREFR *, _DWORD, int))(v6 + 0x370))(v5, this, 0, v7);
      v8 = (Unk128 *)(*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x380))(0.0);
      sub_6FAEE0(v8, COERCE_FLOAT(0x7F));
      *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x380))(*((_DWORD *)this + 0x16)) + 0xE) = 0;
      v9 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x380))(*((_DWORD *)this + 0x16));
      *v9 = Vector3_InitValue_;
      v9[1] = *(&Vector3_InitValue_ + 1);
      v9[2] = dword_B3F9B0;
      v10 = *((int **)this + 0x16);
      v11 = *v10;
      v12 = (*(int (__thiscall **)(int *))(*v10 + 0x380))(v10);
      (*(void (__thiscall **)(int *, _DWORD, int, int))(v11 + 0x3E8))(v10, 0, 0x7F, v12);
      if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        TESDataHandler_g_PlayerRef->unk61C = 0.0;
      return sub_65AC20(this, 0);
    }
  }
  return result;
}
