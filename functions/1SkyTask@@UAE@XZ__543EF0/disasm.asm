0x543EF0: push    0FFFFFFFFh
0x543EF2: push    offset ??1SkyTask@@UAE@XZ_SEH
0x543EF7: mov     eax, large fs:0
0x543EFD: push    eax
0x543EFE: push    ecx
0x543EFF: push    ebx
0x543F00: push    esi
0x543F01: push    edi
0x543F02: mov     eax, ds:0B30AACh
0x543F07: xor     eax, esp
0x543F09: push    eax
0x543F0A: lea     eax, [esp+20h+var_C]
0x543F0E: mov     large fs:0, eax
0x543F14: mov     edi, ecx
0x543F16: mov     [esp+20h+var_10], edi
0x543F1A: mov     esi, [edi+2Ch]
0x543F1D: test    esi, esi
0x543F1F: mov     ebx, ds:0A2807Ch
0x543F25: mov     [esp+20h+var_4], 1
0x543F2D: jz      short loc_543F47
0x543F2F: lea     eax, [esi+4]
0x543F32: push    eax; lpAddend
0x543F33: call    ebx ; InterlockedDecrement
0x543F35: test    eax, eax
0x543F37: jnz     short loc_543F47
0x543F39: test    esi, esi
0x543F3B: jz      short loc_543F47
0x543F3D: mov     edx, [esi]
0x543F3F: mov     eax, [edx]
0x543F41: push    1
0x543F43: mov     ecx, esi
0x543F45: call    eax
0x543F47: mov     esi, [edi+28h]
0x543F4A: test    esi, esi
0x543F4C: mov     byte ptr [esp+20h+var_4], 0
0x543F51: jz      short loc_543F6B
0x543F53: lea     ecx, [esi+4]
0x543F56: push    ecx; lpAddend
0x543F57: call    ebx ; InterlockedDecrement
0x543F59: test    eax, eax
0x543F5B: jnz     short loc_543F6B
0x543F5D: test    esi, esi
0x543F5F: jz      short loc_543F6B
0x543F61: mov     edx, [esi]
0x543F63: mov     eax, [edx]
0x543F65: push    1
0x543F67: mov     ecx, esi
0x543F69: call    eax
0x543F6B: mov     ecx, edi; this
0x543F6D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x543F75: call    ??1LipTask@@UAE@XZ; LipTask::~LipTask(void)
0x543F7A: mov     ecx, [esp+20h+var_C]
0x543F7E: mov     large fs:0, ecx
0x543F85: pop     ecx
0x543F86: pop     edi
0x543F87: pop     esi
0x543F88: pop     ebx
0x543F89: add     esp, 10h
0x543F8C: retn
