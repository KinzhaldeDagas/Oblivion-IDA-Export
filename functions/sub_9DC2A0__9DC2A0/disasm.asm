0x9DC2A0: call    ds:GetTickCount
0x9DC2A6: fldz
0x9DC2A8: fst     g_FPSGlobal
0x9DC2AE: xor     ecx, ecx
0x9DC2B0: fst     flt_B33E98
0x9DC2B6: mov     TimeInfo, cl
0x9DC2BC: fstp    flt_B33E9C
0x9DC2C2: mov     Seed, ecx
0x9DC2C8: mov     dword_B33EA4, eax
0x9DC2CD: retn
