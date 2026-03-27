0x430090: push    esi
0x430091: mov     esi, [esp+4+arg_8]
0x430095: test    esi, esi
0x430097: ja      short loc_43009D
0x430099: xor     eax, eax
0x43009B: pop     esi
0x43009C: retn
0x43009D: mov     ecx, [esp+4+arg_0]
0x4300A1: mov     eax, [ecx]
0x4300A3: mov     edx, [eax+38h]
0x4300A6: push    ebx
0x4300A7: push    edi
0x4300A8: mov     edi, [esp+0Ch+arg_4]
0x4300AC: push    esi
0x4300AD: push    edi
0x4300AE: call    edx
0x4300B0: mov     ebx, eax
0x4300B2: mov     eax, [esp+0Ch+arg_C]
0x4300B6: test    eax, eax
0x4300B8: jz      short loc_4300CA
0x4300BA: mov     ecx, [esp+0Ch+arg_10]
0x4300BE: push    ecx
0x4300BF: push    eax
0x4300C0: push    esi
0x4300C1: push    edi
0x4300C2: call    NiBinaryStream_DoByteSwap
0x4300C7: add     esp, 10h
0x4300CA: pop     edi
0x4300CB: mov     eax, ebx
0x4300CD: pop     ebx
0x4300CE: pop     esi
0x4300CF: retn
