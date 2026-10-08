0x9E6050: fld     flt_B36660; Fog water decode: initializes unk_B36670 as reciprocal depth scale used by 0x541DD0 water fog blend.
0x9E6056: fld1
0x9E6058: fdivrp  st(1), st
0x9E605A: fstp    dword ptr unk_B36670
0x9E6060: retn
