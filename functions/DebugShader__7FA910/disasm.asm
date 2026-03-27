0x7FA910: push    0FFFFFFFFh
0x7FA912: push    offset SEH_8122A0
0x7FA917: mov     eax, large fs:0
0x7FA91D: push    eax
0x7FA91E: push    ecx
0x7FA91F: push    ebx
0x7FA920: push    esi
0x7FA921: push    edi
0x7FA922: mov     eax, ds:0B30AACh
0x7FA927: xor     eax, esp
0x7FA929: push    eax
0x7FA92A: lea     eax, [esp+20h+var_C]
0x7FA92E: mov     large fs:0, eax
0x7FA934: push    8; Size
0x7FA936: call    FormHeapAlloc
0x7FA93B: add     esp, 4
0x7FA93E: mov     [esp+20h+var_10], eax
0x7FA942: xor     edi, edi
0x7FA944: cmp     eax, edi
0x7FA946: mov     [esp+20h+var_4], edi
0x7FA94A: jz      short loc_7FA955
0x7FA94C: mov     ecx, eax
0x7FA94E: call    ShaderDefinition__Init
0x7FA953: mov     edi, eax
0x7FA955: mov     eax, ds:0B43104h
0x7FA95A: push    1; StreamCount
0x7FA95C: push    2; a2
0x7FA95E: push    eax; a1
0x7FA95F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7FA967: call    CreateDX9ShaderDeclaration
0x7FA96C: mov     esi, [edi]
0x7FA96E: mov     ebx, eax
0x7FA970: add     esp, 0Ch
0x7FA973: cmp     esi, ebx
0x7FA975: jz      short loc_7FA9A7
0x7FA977: test    esi, esi
0x7FA979: jz      short loc_7FA997
0x7FA97B: lea     ecx, [esi+4]
0x7FA97E: push    ecx; lpAddend
0x7FA97F: call    dword ptr ds:0A2807Ch
0x7FA985: test    eax, eax
0x7FA987: jnz     short loc_7FA997
0x7FA989: test    esi, esi
0x7FA98B: jz      short loc_7FA997
0x7FA98D: mov     edx, [esi]
0x7FA98F: mov     eax, [edx]
0x7FA991: push    1
0x7FA993: mov     ecx, esi
0x7FA995: call    eax
0x7FA997: test    ebx, ebx
0x7FA999: mov     [edi], ebx
0x7FA99B: jz      short loc_7FA9A7
0x7FA99D: add     ebx, 4
0x7FA9A0: push    ebx; lpAddend
0x7FA9A1: call    dword ptr ds:0A28078h
0x7FA9A7: mov     ecx, [edi]
0x7FA9A9: mov     edx, [ecx]
0x7FA9AB: mov     eax, [edx+50h]
0x7FA9AE: push    0
0x7FA9B0: push    2
0x7FA9B2: push    0
0x7FA9B4: push    0
0x7FA9B6: push    0
0x7FA9B8: call    eax
0x7FA9BA: mov     ecx, [edi]
0x7FA9BC: mov     edx, [ecx]
0x7FA9BE: mov     eax, [edx+50h]
0x7FA9C1: push    0
0x7FA9C3: push    1
0x7FA9C5: push    5
0x7FA9C7: push    7
0x7FA9C9: push    1
0x7FA9CB: call    eax
0x7FA9CD: mov     ecx, [edi]
0x7FA9CF: test    ecx, ecx
0x7FA9D1: jz      short loc_7FA9EE
0x7FA9D3: mov     edx, [ecx]
0x7FA9D5: mov     eax, [edx+4]
0x7FA9D8: call    eax
0x7FA9DA: test    eax, eax
0x7FA9DC: jz      short loc_7FA9EE
0x7FA9DE: mov     edi, edi
0x7FA9E0: cmp     eax, offset dword_B3F684
0x7FA9E5: jz      short loc_7FA9EE
0x7FA9E7: mov     eax, [eax+4]
0x7FA9EA: test    eax, eax
0x7FA9EC: jnz     short loc_7FA9E0
0x7FA9EE: push    0CCh ; 'Ì'; Size
0x7FA9F3: call    FormHeapAlloc
0x7FA9F8: add     esp, 4
0x7FA9FB: mov     [esp+20h+var_10], eax
0x7FA9FF: test    eax, eax
0x7FAA01: mov     [esp+20h+var_4], 1
0x7FAA09: jz      short loc_7FAA16
0x7FAA0B: mov     ecx, eax; this
0x7FAA0D: call    ??0DebugShader@@QAE@XZ; DebugShader::DebugShader(void)
0x7FAA12: mov     esi, eax
0x7FAA14: jmp     short loc_7FAA18
0x7FAA16: xor     esi, esi
0x7FAA18: mov     edx, [esi]
0x7FAA1A: mov     eax, [edx+84h]
0x7FAA20: mov     ecx, esi
0x7FAA22: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7FAA2A: call    eax
0x7FAA2C: mov     ecx, esi
0x7FAA2E: call    sub_7FA090
0x7FAA33: mov     ecx, esi
0x7FAA35: call    sub_7FA220
0x7FAA3A: mov     edx, [esi]
0x7FAA3C: mov     eax, [edi]
0x7FAA3E: mov     edx, [edx+54h]
0x7FAA41: push    eax
0x7FAA42: mov     ecx, esi
0x7FAA44: call    edx
0x7FAA46: mov     ebx, [edi+4]
0x7FAA49: cmp     ebx, esi
0x7FAA4B: jz      short loc_7FAA7A
0x7FAA4D: test    ebx, ebx
0x7FAA4F: jz      short loc_7FAA6D
0x7FAA51: lea     eax, [ebx+4]
0x7FAA54: push    eax; lpAddend
0x7FAA55: call    dword ptr ds:0A2807Ch
0x7FAA5B: test    eax, eax
0x7FAA5D: jnz     short loc_7FAA6D
0x7FAA5F: test    ebx, ebx
0x7FAA61: jz      short loc_7FAA6D
0x7FAA63: mov     edx, [ebx]
0x7FAA65: mov     eax, [edx]
0x7FAA67: push    1
0x7FAA69: mov     ecx, ebx
0x7FAA6B: call    eax
0x7FAA6D: mov     [edi+4], esi
0x7FAA70: add     esi, 4
0x7FAA73: push    esi; lpAddend
0x7FAA74: call    dword ptr ds:0A28078h
0x7FAA7A: mov     eax, edi
0x7FAA7C: mov     ecx, dword ptr [esp+20h+var_C]
0x7FAA80: mov     large fs:0, ecx
0x7FAA87: pop     ecx
0x7FAA88: pop     edi
0x7FAA89: pop     esi
0x7FAA8A: pop     ebx
0x7FAA8B: add     esp, 10h
0x7FAA8E: retn
