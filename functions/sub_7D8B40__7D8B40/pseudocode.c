__int16 __thiscall sub_7D8B40(void *this, int a2)
{
  bool v2; // zf
  bool v3; // al
  void *v5; // [esp+10h] [ebp-4h] BYREF

  v5 = this;
  v2 = byte_B43074 == 0;
  v5 = 0;
  v3 = v2 && dword_B43108 && (dword_B42F40 & 0x20) != 0 && ShaderPackage >= 2;
  (*(void (__thiscall **)(void *, int, int, void **, _DWORD))(*(_DWORD *)this + 0x5C))(
    this,
    a2,
    v3 ? 0x2F : 0xF,
    &v5,
    0);
  return (__int16)v5;
}
