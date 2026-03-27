0x504D00: push    edi
0x504D01: mov     edi, [esp+4+arg_8]
0x504D05: test    edi, edi
0x504D07: jnz     short loc_504D0D
0x504D09: xor     al, al
0x504D0B: pop     edi
0x504D0C: retn
0x504D0D: push    esi
0x504D0E: push    0; int
0x504D10: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x504D15: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x504D1A: push    0; int
0x504D1C: push    edi; void *
0x504D1D: call    OblivionDynamicCast
0x504D22: mov     esi, eax
0x504D24: add     esp, 14h
0x504D27: test    esi, esi
0x504D29: jz      short loc_504DA2
0x504D2B: mov     ecx, [esp+8+arg_14]
0x504D2F: mov     edx, [esp+8+arg_10]
0x504D33: lea     eax, [esp+8+arg_8]
0x504D37: push    eax
0x504D38: mov     eax, [esp+0Ch+arg_C]
0x504D3C: push    ecx
0x504D3D: mov     ecx, [esp+10h+arg_1C]
0x504D41: push    edx
