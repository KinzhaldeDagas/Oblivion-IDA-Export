int __thiscall sub_8EAA90(void *this, float a2)
{
  float v3; // [esp+0h] [ebp-4h]

  v3 = fConstant_1 / a2;
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this + 0x24))(LODWORD(v3));
}
