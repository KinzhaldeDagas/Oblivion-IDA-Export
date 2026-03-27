0x7E9AF0: push    0FFFFFFFFh
0x7E9AF2: push    offset ??1BlurShader_P20@@UAE@XZ_SEH
0x7E9AF7: mov     eax, large fs:0
0x7E9AFD: push    eax
0x7E9AFE: sub     esp, 8
0x7E9B01: push    ebp
0x7E9B02: push    esi
0x7E9B03: push    edi
0x7E9B04: mov     eax, ds:0B30AACh
0x7E9B09: xor     eax, esp
0x7E9B0B: push    eax
0x7E9B0C: lea     eax, [esp+24h+var_C]
0x7E9B10: mov     large fs:0, eax
0x7E9B16: mov     ebp, ecx
0x7E9B18: mov     [esp+24h+var_10], ebp
0x7E9B1C: mov     dword ptr [ebp+0], offset ??_7BlurShader_P20@@6B@; const BlurShader_P20::`vftable'
0x7E9B23: mov     [esp+24h+var_4], 2
0x7E9B2B: lea     edi, [ebp+0A8h]
0x7E9B31: mov     [esp+24h+var_14], 5
0x7E9B39: lea     esp, [esp+0]
0x7E9B40: mov     esi, [edi-14h]
0x7E9B43: test    esi, esi
0x7E9B45: jz      short loc_7E9B6A
0x7E9B47: lea     eax, [esi+4]
0x7E9B4A: push    eax; lpAddend
0x7E9B4B: call    dword ptr ds:0A2807Ch
0x7E9B51: test    eax, eax
0x7E9B53: jnz     short loc_7E9B63
0x7E9B55: test    esi, esi
0x7E9B57: jz      short loc_7E9B63
0x7E9B59: mov     edx, [esi]
0x7E9B5B: mov     eax, [edx]
0x7E9B5D: push    1
0x7E9B5F: mov     ecx, esi
0x7E9B61: call    eax
0x7E9B63: mov     dword ptr [edi-14h], 0
0x7E9B6A: mov     esi, [edi]
0x7E9B6C: test    esi, esi
0x7E9B6E: jz      short loc_7E9B92
0x7E9B70: lea     ecx, [esi+4]
0x7E9B73: push    ecx; lpAddend
0x7E9B74: call    dword ptr ds:0A2807Ch
0x7E9B7A: test    eax, eax
0x7E9B7C: jnz     short loc_7E9B8C
0x7E9B7E: test    esi, esi
0x7E9B80: jz      short loc_7E9B8C
0x7E9B82: mov     edx, [esi]
0x7E9B84: mov     eax, [edx]
0x7E9B86: push    1
0x7E9B88: mov     ecx, esi
0x7E9B8A: call    eax
0x7E9B8C: mov     dword ptr [edi], 0
0x7E9B92: add     edi, 4
0x7E9B95: sub     [esp+24h+var_14], 1
0x7E9B9A: jnz     short loc_7E9B40
0x7E9B9C: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7E9BA1: push    5; int
0x7E9BA3: push    4; unsigned int
0x7E9BA5: lea     eax, [ebp+0A8h]
0x7E9BAB: push    eax; void *
0x7E9BAC: mov     byte ptr [esp+34h+var_4], 1
0x7E9BB1: call    $LN21
0x7E9BB6: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7E9BBB: push    5; int
0x7E9BBD: push    4; unsigned int
0x7E9BBF: lea     ecx, [ebp+94h]
0x7E9BC5: push    ecx; void *
0x7E9BC6: mov     byte ptr [esp+34h+var_4], 0
0x7E9BCB: call    $LN21
0x7E9BD0: mov     ecx, ebp; this
0x7E9BD2: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7E9BDA: call    ??1BSImageSpaceShader@@UAE@XZ; BSImageSpaceShader::~BSImageSpaceShader(void)
0x7E9BDF: mov     ecx, [esp+24h+var_C]
0x7E9BE3: mov     large fs:0, ecx
0x7E9BEA: pop     ecx
0x7E9BEB: pop     edi
0x7E9BEC: pop     esi
0x7E9BED: pop     ebp
0x7E9BEE: add     esp, 14h
0x7E9BF1: retn
