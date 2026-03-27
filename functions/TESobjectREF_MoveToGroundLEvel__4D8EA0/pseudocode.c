bool __thiscall TESobjectREF_MoveToGroundLEvel(TESChildCELL *this)
{
  TESObjectCELL *v2; // edi
  int v3; // eax
  int v4; // ecx
  float v5; // edx
  void (__thiscall **vtbl)(TESChildCELL *, int); // eax
  float v8; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]

  v2 = *((TESObjectCELL **)this + 0x10);
  if ( !v2 )
    return 0;
  v3 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5D))(this);
  v9 = *(_DWORD *)v3;
  v10 = *(_DWORD *)(v3 + 4);
  v11 = *(float *)(v3 + 8);
  if ( !sub_4D1E10(v2, (float *)&v9, &v8) )
    return 0;
  v4 = v10;
  v11 = v8;
  v5 = v8;
  *((_DWORD *)this + 0xB) = v9;
  vtbl = (void (__thiscall **)(TESChildCELL *, int))this->vtbl;
  *((_DWORD *)this + 0xC) = v4;
  *((float *)this + 0xD) = v5;
  vtbl[0x10](this, 4);
  return 1;
}
