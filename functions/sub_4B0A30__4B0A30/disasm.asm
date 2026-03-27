0x4B0A30: push    0FFFFFFFFh
0x4B0A32: push    offset SEH_6ACAB0
0x4B0A37: mov     eax, large fs:0
0x4B0A3D: push    eax
0x4B0A3E: push    ecx
0x4B0A3F: push    esi
0x4B0A40: push    edi
0x4B0A41: mov     eax, ds:0B30AACh
0x4B0A46: xor     eax, esp
0x4B0A48: push    eax
0x4B0A49: lea     eax, [esp+1Ch+var_C]
0x4B0A4D: mov     large fs:0, eax
0x4B0A53: mov     esi, ecx
0x4B0A55: mov     eax, [esi+30h]
0x4B0A58: mov     edx, [eax+14h]
0x4B0A5B: lea     ecx, [esi+30h]
0x4B0A5E: call    edx
0x4B0A60: lea     edx, [eax+1]
0x4B0A63: mov     cl, [eax]
0x4B0A65: add     eax, 1
0x4B0A68: test    cl, cl
0x4B0A6A: jnz     short loc_4B0A63
0x4B0A6C: sub     eax, edx
0x4B0A6E: jz      short loc_4B0A7E
0x4B0A70: mov     eax, [esp+1Ch+arg_0]
0x4B0A74: push    eax
0x4B0A75: mov     ecx, esi
0x4B0A77: call    sub_4B3310
0x4B0A7C: jmp     short loc_4B0AB0
0x4B0A7E: push    0DCh ; 'Ü'; Size
0x4B0A83: call    FormHeapAlloc
0x4B0A88: add     esp, 4
0x4B0A8B: mov     [esp+1Ch+arg_0], eax
0x4B0A8F: test    eax, eax
0x4B0A91: mov     [esp+1Ch+var_4], 0
0x4B0A99: jz      short loc_4B0AA6
0x4B0A9B: push    0
0x4B0A9D: mov     ecx, eax; this
0x4B0A9F: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4B0AA4: jmp     short loc_4B0AA8
0x4B0AA6: xor     eax, eax
0x4B0AA8: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4B0AB0: mov     edi, eax
0x4B0AB2: test    edi, edi
0x4B0AB4: jz      short loc_4B0B1C
0x4B0AB6: mov     edx, [edi]
0x4B0AB8: mov     eax, [edx+8]
0x4B0ABB: mov     ecx, edi
0x4B0ABD: call    eax
0x4B0ABF: test    eax, eax
0x4B0AC1: jnz     short loc_4B0B1C
0x4B0AC3: push    0DCh ; 'Ü'; Size
0x4B0AC8: call    FormHeapAlloc
0x4B0ACD: add     esp, 4
0x4B0AD0: mov     [esp+1Ch+arg_0], eax
0x4B0AD4: test    eax, eax
0x4B0AD6: mov     [esp+1Ch+var_4], 1
0x4B0ADE: jz      short loc_4B0AED
0x4B0AE0: push    0
0x4B0AE2: mov     ecx, eax; this
0x4B0AE4: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4B0AE9: mov     esi, eax
0x4B0AEB: jmp     short loc_4B0AEF
0x4B0AED: xor     esi, esi
0x4B0AEF: mov     edx, [esi]
0x4B0AF1: mov     eax, [edx+84h]
0x4B0AF7: push    0
0x4B0AF9: push    edi
0x4B0AFA: mov     ecx, esi
0x4B0AFC: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4B0B04: call    eax
0x4B0B06: mov     eax, esi
0x4B0B08: mov     ecx, [esp+1Ch+var_C]
0x4B0B0C: mov     large fs:0, ecx
0x4B0B13: pop     ecx
0x4B0B14: pop     edi
0x4B0B15: pop     esi
0x4B0B16: add     esp, 10h
0x4B0B19: retn    4
0x4B0B1C: mov     eax, edi
0x4B0B1E: mov     ecx, [esp+1Ch+var_C]
0x4B0B22: mov     large fs:0, ecx
0x4B0B29: pop     ecx
0x4B0B2A: pop     edi
0x4B0B2B: pop     esi
0x4B0B2C: add     esp, 10h
0x4B0B2F: retn    4
