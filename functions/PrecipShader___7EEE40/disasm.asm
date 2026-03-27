0x7EEE40: push    0FFFFFFFFh
0x7EEE42: push    offset SEH_8122A0
0x7EEE47: mov     eax, large fs:0
0x7EEE4D: push    eax
0x7EEE4E: push    ecx
0x7EEE4F: push    ebx
0x7EEE50: push    esi
0x7EEE51: push    edi
0x7EEE52: mov     eax, ds:0B30AACh
0x7EEE57: xor     eax, esp
0x7EEE59: push    eax
0x7EEE5A: lea     eax, [esp+20h+var_C]
0x7EEE5E: mov     large fs:0, eax
0x7EEE64: push    8; Size
0x7EEE66: call    FormHeapAlloc
0x7EEE6B: add     esp, 4
0x7EEE6E: mov     [esp+20h+var_10], eax
0x7EEE72: xor     edi, edi
0x7EEE74: cmp     eax, edi
0x7EEE76: mov     [esp+20h+var_4], edi
0x7EEE7A: jz      short loc_7EEE85
0x7EEE7C: mov     ecx, eax
0x7EEE7E: call    ShaderDefinition__Init
0x7EEE83: mov     edi, eax
0x7EEE85: mov     eax, ds:0B43104h
0x7EEE8A: push    2; StreamCount
0x7EEE8C: push    3; a2
0x7EEE8E: push    eax; a1
0x7EEE8F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7EEE97: call    CreateDX9ShaderDeclaration
0x7EEE9C: mov     esi, [edi]
0x7EEE9E: mov     ebx, eax
0x7EEEA0: add     esp, 0Ch
0x7EEEA3: cmp     esi, ebx
0x7EEEA5: jz      short loc_7EEED7
0x7EEEA7: test    esi, esi
0x7EEEA9: jz      short loc_7EEEC7
0x7EEEAB: lea     ecx, [esi+4]
0x7EEEAE: push    ecx; lpAddend
0x7EEEAF: call    dword ptr ds:0A2807Ch
0x7EEEB5: test    eax, eax
0x7EEEB7: jnz     short loc_7EEEC7
0x7EEEB9: test    esi, esi
0x7EEEBB: jz      short loc_7EEEC7
0x7EEEBD: mov     edx, [esi]
0x7EEEBF: mov     eax, [edx]
0x7EEEC1: push    1
0x7EEEC3: mov     ecx, esi
0x7EEEC5: call    eax
0x7EEEC7: test    ebx, ebx
0x7EEEC9: mov     [edi], ebx
0x7EEECB: jz      short loc_7EEED7
0x7EEECD: add     ebx, 4
0x7EEED0: push    ebx; lpAddend
0x7EEED1: call    dword ptr ds:0A28078h
0x7EEED7: mov     ecx, [edi]
0x7EEED9: mov     edx, [ecx]
0x7EEEDB: mov     eax, [edx+50h]
0x7EEEDE: push    0
0x7EEEE0: push    2
0x7EEEE2: push    0
0x7EEEE4: push    0
0x7EEEE6: push    0
0x7EEEE8: call    eax
0x7EEEEA: mov     ecx, [edi]
0x7EEEEC: mov     edx, [ecx]
0x7EEEEE: mov     eax, [edx+50h]
0x7EEEF1: push    0
0x7EEEF3: push    1
0x7EEEF5: push    5
0x7EEEF7: push    7
0x7EEEF9: push    1
0x7EEEFB: call    eax
0x7EEEFD: mov     ecx, [edi]
0x7EEEFF: mov     edx, [ecx]
0x7EEF01: mov     eax, [edx+4Ch]
0x7EEF04: push    0
0x7EEF06: push    1
0x7EEF08: push    5
0x7EEF0A: push    2
0x7EEF0C: push    80000000h
0x7EEF11: push    6
0x7EEF13: push    0
0x7EEF15: push    1
0x7EEF17: call    eax
0x7EEF19: mov     ecx, [edi]
0x7EEF1B: test    ecx, ecx
0x7EEF1D: jz      short loc_7EEF3E
0x7EEF1F: mov     edx, [ecx]
0x7EEF21: mov     eax, [edx+4]
0x7EEF24: call    eax
0x7EEF26: test    eax, eax
0x7EEF28: jz      short loc_7EEF3E
0x7EEF2A: lea     ebx, [ebx+0]
0x7EEF30: cmp     eax, offset dword_B3F684
0x7EEF35: jz      short loc_7EEF3E
0x7EEF37: mov     eax, [eax+4]
0x7EEF3A: test    eax, eax
0x7EEF3C: jnz     short loc_7EEF30
0x7EEF3E: push    0BCh ; '¼'; Size
0x7EEF43: call    FormHeapAlloc
0x7EEF48: add     esp, 4
0x7EEF4B: mov     [esp+20h+var_10], eax
0x7EEF4F: test    eax, eax
0x7EEF51: mov     [esp+20h+var_4], 1
0x7EEF59: jz      short loc_7EEF66
0x7EEF5B: mov     ecx, eax; this
0x7EEF5D: call    ??0PrecipitationShader@@QAE@XZ; PrecipitationShader::PrecipitationShader(void)
0x7EEF62: mov     esi, eax
0x7EEF64: jmp     short loc_7EEF68
0x7EEF66: xor     esi, esi
0x7EEF68: mov     edx, [esi]
0x7EEF6A: mov     eax, [edx+84h]
0x7EEF70: mov     ecx, esi
0x7EEF72: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EEF7A: call    eax
0x7EEF7C: mov     edx, [esi]
0x7EEF7E: mov     eax, [edx+0A8h]
0x7EEF84: mov     ecx, esi
0x7EEF86: call    eax
0x7EEF88: mov     edx, [esi]
0x7EEF8A: mov     eax, [edx+0B4h]
0x7EEF90: mov     ecx, esi
0x7EEF92: call    eax
0x7EEF94: mov     edx, [esi]
0x7EEF96: mov     eax, [edx+88h]
0x7EEF9C: mov     ecx, esi
0x7EEF9E: call    eax
0x7EEFA0: mov     edx, [esi]
0x7EEFA2: mov     eax, [edi]
0x7EEFA4: mov     edx, [edx+54h]
0x7EEFA7: push    eax
0x7EEFA8: mov     ecx, esi
0x7EEFAA: call    edx
0x7EEFAC: mov     ebx, [edi+4]
0x7EEFAF: cmp     ebx, esi
0x7EEFB1: jz      short loc_7EEFE0
0x7EEFB3: test    ebx, ebx
0x7EEFB5: jz      short loc_7EEFD3
0x7EEFB7: lea     eax, [ebx+4]
0x7EEFBA: push    eax; lpAddend
0x7EEFBB: call    dword ptr ds:0A2807Ch
0x7EEFC1: test    eax, eax
0x7EEFC3: jnz     short loc_7EEFD3
0x7EEFC5: test    ebx, ebx
0x7EEFC7: jz      short loc_7EEFD3
0x7EEFC9: mov     edx, [ebx]
0x7EEFCB: mov     eax, [edx]
0x7EEFCD: push    1
0x7EEFCF: mov     ecx, ebx
0x7EEFD1: call    eax
0x7EEFD3: mov     [edi+4], esi
0x7EEFD6: add     esi, 4
0x7EEFD9: push    esi; lpAddend
0x7EEFDA: call    dword ptr ds:0A28078h
0x7EEFE0: mov     eax, edi
0x7EEFE2: mov     ecx, dword ptr [esp+20h+var_C]
0x7EEFE6: mov     large fs:0, ecx
0x7EEFED: pop     ecx
0x7EEFEE: pop     edi
0x7EEFEF: pop     esi
0x7EEFF0: pop     ebx
0x7EEFF1: add     esp, 10h
0x7EEFF4: retn
