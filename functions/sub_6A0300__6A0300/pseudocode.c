bool __thiscall sub_6A0300(int this)
{
  return !*(_DWORD *)(this + 0x18)
      && *(_DWORD *)(this + 0x1C)
      && *(_DWORD *)(this + 0x34)
      && !*(_BYTE *)(this + 0x28)
      && *(_DWORD *)(this + 0x34) != Magic_GetLifeDetectedShader();
}
