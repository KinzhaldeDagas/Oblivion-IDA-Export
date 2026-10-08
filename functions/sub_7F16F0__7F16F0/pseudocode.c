// Registers SpeedTree shader constants: TreeData at base register and WindMatrices at base+1 (16 float4 registers).
int __cdecl OB_SpeedTreeShader_RegisterTreeAndWindConstants_010201A0(void *constantMap, int baseRegister)
{
  (*(void (__thiscall **)(void *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)constantMap + 0x18))( /*0x7f1720*/
    constantMap,
    "TreeData",
    0x10000007,
    0,
    baseRegister,
    1,
    EmptyString,
    0x10,
    4,
    &OB_ShaderConstantStorage_010201A0[0x263],
    0);
  return (*(int (__thiscall **)(void *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)constantMap + 0x18))( /*0x7f1750*/
           constantMap,
           "WindMatrices",
           0x10000009,
           0,
           baseRegister + 1,
           0x10,
           EmptyString,
           0x100,
           4,
           &OB_ShaderConstantStorage_010201A0[0x269],
           0);
}
