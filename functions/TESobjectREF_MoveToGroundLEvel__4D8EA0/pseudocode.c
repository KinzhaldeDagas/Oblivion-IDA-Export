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

  v2 = *((TESObjectCELL **)this + 0x10); /*0x4d8ea8*/
  if ( !v2 ) /*0x4d8eaf*/
    return 0; /*0x4d8eaf*/
  v3 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5D))(this); /*0x4d8eb9*/
  v9 = *(_DWORD *)v3; /*0x4d8ebd*/
  v10 = *(_DWORD *)(v3 + 4); /*0x4d8ec4*/
  v11 = *(float *)(v3 + 8); /*0x4d8ed7*/
  if ( !sub_4D1E10(v2, (float *)&v9, &v8) ) /*0x4d8edb*/
    return 0; /*0x4d8f17*/
  v4 = v10; /*0x4d8eec*/
  v11 = v8; /*0x4d8ef0*/
  v5 = v8; /*0x4d8ef4*/
  *((_DWORD *)this + 0xB) = v9; /*0x4d8ef8*/
  vtbl = (void (__thiscall **)(TESChildCELL *, int))this->vtbl; /*0x4d8efb*/
  *((_DWORD *)this + 0xC) = v4; /*0x4d8efd*/
  *((float *)this + 0xD) = v5; /*0x4d8f00*/
  vtbl[0x10](this, 4); /*0x4d8f0a*/
  return 1; /*0x4d8f0c*/
}
