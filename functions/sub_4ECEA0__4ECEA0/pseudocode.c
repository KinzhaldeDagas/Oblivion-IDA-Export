int __thiscall sub_4ECEA0(volatile LONG *this)
{
  int (__thiscall *v2)(volatile LONG *); // eax
  char v4[260]; // [esp+4h] [ebp-414h] BYREF
  char v5[260]; // [esp+108h] [ebp-310h] BYREF
  char Str1[260]; // [esp+20Ch] [ebp-20Ch] BYREF
  char v7[260]; // [esp+310h] [ebp-108h] BYREF

  _sprintf(
    Str1,
    "Textures\\LandscapeLOD\\Generated\\%i.%02i.%02i.%i.dds",
    *((_DWORD *)this + 0xB),
    *((_DWORD *)this + 0xC),
    *((_DWORD *)this + 0xD),
    0x20);
  _sprintf(
    v4,
    "Textures\\LandscapeLOD\\Generated\\%i.%02i.%02i.%i_FN.dds",
    *((_DWORD *)this + 0xB),
    *((_DWORD *)this + 0xC),
    *((_DWORD *)this + 0xD),
    0x20);
  sub_47D8F0(Str1, v5);
  sub_47D8F0(v4, v7);
  sub_43B0D0(v5, BYTE2(*((_DWORD *)this + 4)), this);
  sub_43B0D0(v7, BYTE2(*((_DWORD *)this + 4)), this);
  v2 = *(int (__thiscall **)(volatile LONG *))(*this + 0x28);
  *((_BYTE *)this + 0x28) = 1;
  return v2(this);
}
