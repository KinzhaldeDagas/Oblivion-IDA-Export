0x7D7800: mov     eax, [ecx+0C0h]; SpeedTreeOBSE 2026-05-31 branch normal map apply: decoded PPLighting base-normal getter reads SpeedTreeBranchShaderProperty+0xC0[index]. Branch render helpers reach this through property vtable +0x8C with index 0.
0x7D7806: mov     ecx, [esp+arg_0]
0x7D780A: mov     eax, [eax+ecx*4]
0x7D780D: retn    4
