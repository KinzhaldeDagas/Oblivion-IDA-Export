0x96CCF0: push    esi
0x96CCF1: push    14h; Size
0x96CCF3: call    FormHeapAlloc
0x96CCF8: add     esp, 4
0x96CCFB: test    eax, eax
0x96CCFD: jz      short loc_96CD24
0x96CCFF: fld1
0x96CD01: push    offset Vector3_InitValue?; int
0x96CD06: push    ecx
0x96CD07: fstp    [esp+0Ch+var_C]; float
0x96CD0A: mov     ecx, eax
0x96CD0C: call    sub_96C420
0x96CD11: mov     ecx, [esp+4+arg_0]
0x96CD15: mov     esi, eax
0x96CD17: mov     eax, [esi]
0x96CD19: mov     edx, [eax]
0x96CD1B: push    ecx
0x96CD1C: mov     ecx, esi
0x96CD1E: call    edx
0x96CD20: mov     eax, esi
0x96CD22: pop     esi
0x96CD23: retn
0x96CD24: mov     ecx, [esp+4+arg_0]
0x96CD28: xor     esi, esi
0x96CD2A: mov     eax, [esi]
0x96CD2C: mov     edx, [eax]
0x96CD2E: push    ecx
0x96CD2F: mov     ecx, esi
0x96CD31: call    edx
0x96CD33: mov     eax, esi
0x96CD35: pop     esi
0x96CD36: retn
