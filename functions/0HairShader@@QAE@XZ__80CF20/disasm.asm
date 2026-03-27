0x80CF20: push    0FFFFFFFFh
0x80CF22: push    offset ??0HairShader@@QAE@XZ_SEH
0x80CF27: mov     eax, large fs:0
0x80CF2D: push    eax
0x80CF2E: push    ecx
0x80CF2F: push    ebx
0x80CF30: push    ebp
0x80CF31: push    esi
0x80CF32: push    edi
0x80CF33: mov     eax, ds:0B30AACh
0x80CF38: xor     eax, esp
0x80CF3A: push    eax
0x80CF3B: lea     eax, [esp+24h+var_C]
0x80CF3F: mov     large fs:0, eax
0x80CF45: mov     esi, ecx
0x80CF47: mov     [esp+24h+var_10], esi
0x80CF4B: mov     eax, [esp+24h+arg_4]
0x80CF4F: mov     ebp, [esp+24h+arg_0]
0x80CF53: xor     ebx, ebx
0x80CF55: push    ebx
0x80CF56: push    ebx
0x80CF57: push    eax
0x80CF58: push    ebp
0x80CF59: call    ??0ShadowLightShader@@QAE@XZ; ShadowLightShader::ShadowLightShader(void)
0x80CF5E: push    offset sub_4027D0; a5
0x80CF63: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80CF68: push    2; size
0x80CF6A: push    4; a2
0x80CF6C: lea     ecx, [esi+9Ch]
0x80CF72: push    ecx; a1
0x80CF73: mov     [esp+38h+var_4], ebx
0x80CF77: mov     dword ptr [esi], offset ??_7HairShader@@6B@; const HairShader::`vftable'
0x80CF7D: call    ArrayConstructor
0x80CF82: push    offset sub_7016A0; a5
0x80CF87: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80CF8C: push    7; size
0x80CF8E: push    4; a2
0x80CF90: lea     edx, [esi+0A4h]
0x80CF96: push    edx; a1
0x80CF97: mov     byte ptr [esp+38h+var_4], 1
0x80CF9C: call    ArrayConstructor
0x80CFA1: push    offset sub_7016A0; a5
0x80CFA6: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80CFAB: push    3; size
0x80CFAD: push    4; a2
0x80CFAF: lea     eax, [esi+0C0h]
0x80CFB5: push    eax; a1
0x80CFB6: mov     byte ptr [esp+38h+var_4], 2
0x80CFBB: call    ArrayConstructor
0x80CFC0: push    offset sub_7016A0; a5
0x80CFC5: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80CFCA: push    7; size
0x80CFCC: push    4; a2
0x80CFCE: lea     ecx, [esi+0CCh]
0x80CFD4: push    ecx; a1
0x80CFD5: mov     byte ptr [esp+38h+var_4], 3
0x80CFDA: call    ArrayConstructor
0x80CFDF: push    offset sub_7016A0; a5
0x80CFE4: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80CFE9: push    3; size
0x80CFEB: push    4; a2
0x80CFED: lea     edx, [esi+0E8h]
0x80CFF3: push    edx; a1
0x80CFF4: mov     byte ptr [esp+38h+var_4], 4
0x80CFF9: call    ArrayConstructor
0x80CFFE: mov     [esi+0F4h], ebx
0x80D004: mov     [esi+0F8h], ebx
0x80D00A: mov     [esi+78h], bl
0x80D00D: mov     edi, [esi+0F4h]
0x80D013: cmp     edi, ebp
0x80D015: mov     byte ptr [esp+24h+var_4], 7
0x80D01A: jz      short loc_80D050
0x80D01C: cmp     edi, ebx
0x80D01E: jz      short loc_80D03C
0x80D020: lea     eax, [edi+4]
0x80D023: push    eax; lpAddend
0x80D024: call    dword ptr ds:0A2807Ch
0x80D02A: test    eax, eax
0x80D02C: jnz     short loc_80D03C
0x80D02E: cmp     edi, ebx
0x80D030: jz      short loc_80D03C
0x80D032: mov     edx, [edi]
0x80D034: mov     eax, [edx]
0x80D036: push    1
0x80D038: mov     ecx, edi
0x80D03A: call    eax
0x80D03C: cmp     ebp, ebx
0x80D03E: mov     [esi+0F4h], ebp
0x80D044: jz      short loc_80D050
0x80D046: add     ebp, 4
0x80D049: push    ebp; lpAddend
0x80D04A: call    dword ptr ds:0A28078h
0x80D050: mov     edi, [esi+0F8h]
0x80D056: mov     ebp, [esp+24h+arg_4]
0x80D05A: cmp     edi, ebp
0x80D05C: jz      short loc_80D092
0x80D05E: cmp     edi, ebx
0x80D060: jz      short loc_80D07E
0x80D062: lea     ecx, [edi+4]
0x80D065: push    ecx; lpAddend
0x80D066: call    dword ptr ds:0A2807Ch
0x80D06C: test    eax, eax
0x80D06E: jnz     short loc_80D07E
0x80D070: cmp     edi, ebx
0x80D072: jz      short loc_80D07E
0x80D074: mov     edx, [edi]
0x80D076: mov     eax, [edx]
0x80D078: push    1
0x80D07A: mov     ecx, edi
0x80D07C: call    eax
0x80D07E: cmp     ebp, ebx
0x80D080: mov     [esi+0F8h], ebp
0x80D086: jz      short loc_80D092
0x80D088: add     ebp, 4
0x80D08B: push    ebp; lpAddend
0x80D08C: call    dword ptr ds:0A28078h
0x80D092: mov     ebp, [esi+0F8h]
0x80D098: mov     edi, [esi+24h]
0x80D09B: cmp     edi, ebp
0x80D09D: jz      short loc_80D0D0
0x80D09F: cmp     edi, ebx
0x80D0A1: jz      short loc_80D0BF
0x80D0A3: lea     ecx, [edi+4]
0x80D0A6: push    ecx; lpAddend
0x80D0A7: call    dword ptr ds:0A2807Ch
0x80D0AD: test    eax, eax
0x80D0AF: jnz     short loc_80D0BF
0x80D0B1: cmp     edi, ebx
0x80D0B3: jz      short loc_80D0BF
0x80D0B5: mov     edx, [edi]
0x80D0B7: mov     eax, [edx]
0x80D0B9: push    1
0x80D0BB: mov     ecx, edi
0x80D0BD: call    eax
0x80D0BF: cmp     ebp, ebx
0x80D0C1: mov     [esi+24h], ebp
0x80D0C4: jz      short loc_80D0D0
0x80D0C6: add     ebp, 4
0x80D0C9: push    ebp; lpAddend
0x80D0CA: call    dword ptr ds:0A28078h
0x80D0D0: mov     dword ptr [esi+74h], 0FFFFFFFFh
0x80D0D7: mov     eax, esi
0x80D0D9: mov     ecx, dword ptr [esp+24h+var_C]
0x80D0DD: mov     large fs:0, ecx
0x80D0E4: pop     ecx
0x80D0E5: pop     edi
0x80D0E6: pop     esi
0x80D0E7: pop     ebp
0x80D0E8: pop     ebx
0x80D0E9: add     esp, 10h
0x80D0EC: retn    8
