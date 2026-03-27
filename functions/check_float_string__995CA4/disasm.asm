0x995CA4: mov     eax, [esi]
0x995CA6: cmp     [esp+arg_0], eax
0x995CAA: jnz     short loc_995CF4
0x995CAC: mov     ecx, [edi]
0x995CAE: cmp     ecx, [esp+Src]
0x995CB2: push    2
0x995CB4: push    eax
0x995CB5: jnz     short loc_995CE3
0x995CB7: call    unknown_libname_74
0x995CBC: test    eax, eax
0x995CBE: pop     ecx
0x995CBF: pop     ecx
0x995CC0: mov     [edi], eax
0x995CC2: jnz     short loc_995CC7
0x995CC4: xor     eax, eax
0x995CC6: retn
0x995CC7: mov     eax, [esp+arg_8]
0x995CCB: mov     dword ptr [eax], 1
0x995CD1: push    dword ptr [esi]; Size
0x995CD3: push    [esp+4+Src]; Src
0x995CD7: push    dword ptr [edi]; Dst
0x995CD9: call    _memcpy
0x995CDE: add     esp, 0Ch
0x995CE1: jmp     short loc_995CF2
0x995CE3: push    ecx
0x995CE4: call    unknown_libname_78
0x995CE9: add     esp, 0Ch
0x995CEC: test    eax, eax
0x995CEE: jz      short loc_995CC4
0x995CF0: mov     [edi], eax
0x995CF2: shl     dword ptr [esi], 1
0x995CF4: xor     eax, eax
0x995CF6: inc     eax
0x995CF7: retn
