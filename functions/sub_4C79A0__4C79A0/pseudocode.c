char __thiscall sub_4C79A0(int this, char a2)
{
  char v7; // bl
  int v8; // eax
  char v10; // al
  char v11; // [esp+Ch] [ebp+4h]

  if ( sub_57BAC0() ) /*0x4c79a4*/
    v7 = 0; /*0x4c79ad*/
  else
    v7 = a2; /*0x4c79b1*/
  v8 = *(_DWORD *)(this + 0x1C); /*0x4c79b5*/
  if ( (v8 & 8) != 0 ) /*0x4c79ba*/
  {
    if ( **(_DWORD **)(this + 0x24) ) /*0x4c79bf*/
      return 1; /*0x4c79d3*/
LABEL_6:
    if ( v7 ) /*0x4c79c6*/
      sub_4C5640(this); /*0x4c79ca*/
    return 1; /*0x4c79ca*/
  }
  if ( (v8 & 0x400) == 0 && ((v8 & 7) == 0 || !TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF)) ) /*0x4c79e5*/
  {
    sub_4C64E0((TESObjectCELL **)this); /*0x4c79f0*/
    goto LABEL_6; /*0x4c79f5*/
  }
  sub_4C64E0((TESObjectCELL **)this); /*0x4c79f9*/
  v10 = sub_4C4C80(this); /*0x4c7a00*/
  *(_DWORD *)(this + 0x1C) |= 8u; /*0x4c7a05*/
  v11 = v10; /*0x4c7a0b*/
  if ( v7 ) /*0x4c7a0f*/
    sub_4C5640(this); /*0x4c7a13*/
  return v11; /*0x4c79cf*/
}
