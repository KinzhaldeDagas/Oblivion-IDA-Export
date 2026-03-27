0x7EAB50: push    0FFFFFFFFh
0x7EAB52: push    offset ??0BlurShader_P20@@QAE@XZ_SEH
0x7EAB57: mov     eax, large fs:0
0x7EAB5D: push    eax
0x7EAB5E: sub     esp, 8
0x7EAB61: push    ebx
0x7EAB62: push    ebp
0x7EAB63: push    esi
0x7EAB64: push    edi
0x7EAB65: mov     eax, ds:0B30AACh
0x7EAB6A: xor     eax, esp
0x7EAB6C: push    eax
0x7EAB6D: lea     eax, [esp+28h+var_C]
0x7EAB71: mov     large fs:0, eax
0x7EAB77: mov     esi, ecx
0x7EAB79: mov     [esp+28h+var_10], esi
0x7EAB7D: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7EAB82: push    offset sub_7016A0; a5
0x7EAB87: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7EAB8C: push    5; size
0x7EAB8E: push    4; a2
0x7EAB90: lea     eax, [esi+94h]
0x7EAB96: xor     ebx, ebx
0x7EAB98: push    eax; a1
0x7EAB99: mov     [esp+3Ch+var_4], ebx
0x7EAB9D: mov     dword ptr [esi], offset ??_7BlurShader_P20@@6B@; const BlurShader_P20::`vftable'
0x7EABA3: call    ArrayConstructor
0x7EABA8: push    offset sub_7016A0; a5
0x7EABAD: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7EABB2: push    5; size
0x7EABB4: push    4; a2
0x7EABB6: lea     edi, [esi+0A8h]
0x7EABBC: push    edi; a1
0x7EABBD: mov     byte ptr [esp+3Ch+var_4], 1
0x7EABC2: call    ArrayConstructor
0x7EABC7: mov     byte ptr [esp+28h+var_4], 2
0x7EABCC: mov     [esi+0BCh], ebx
0x7EABD2: mov     [esi+90h], ebx
0x7EABD8: mov     ebp, edi
0x7EABDA: mov     [esp+28h+var_14], 5
0x7EABE2: mov     edi, [ebp-14h]
0x7EABE5: cmp     edi, ebx
0x7EABE7: jz      short loc_7EAC08
0x7EABE9: lea     ecx, [edi+4]
0x7EABEC: push    ecx; lpAddend
0x7EABED: call    dword ptr ds:0A2807Ch
0x7EABF3: test    eax, eax
0x7EABF5: jnz     short loc_7EAC05
0x7EABF7: cmp     edi, ebx
0x7EABF9: jz      short loc_7EAC05
0x7EABFB: mov     edx, [edi]
0x7EABFD: mov     eax, [edx]
0x7EABFF: push    1
0x7EAC01: mov     ecx, edi
0x7EAC03: call    eax
0x7EAC05: mov     [ebp-14h], ebx
0x7EAC08: mov     edi, [ebp+0]
0x7EAC0B: cmp     edi, ebx
0x7EAC0D: jz      short loc_7EAC2E
0x7EAC0F: lea     ecx, [edi+4]
0x7EAC12: push    ecx; lpAddend
0x7EAC13: call    dword ptr ds:0A2807Ch
0x7EAC19: test    eax, eax
0x7EAC1B: jnz     short loc_7EAC2B
0x7EAC1D: cmp     edi, ebx
0x7EAC1F: jz      short loc_7EAC2B
0x7EAC21: mov     edx, [edi]
0x7EAC23: mov     eax, [edx]
0x7EAC25: push    1
0x7EAC27: mov     ecx, edi
0x7EAC29: call    eax
0x7EAC2B: mov     [ebp+0], ebx
0x7EAC2E: add     ebp, 4
0x7EAC31: sub     [esp+28h+var_14], 1
0x7EAC36: jnz     short loc_7EABE2
0x7EAC38: mov     byte ptr [esi+20h], 1
0x7EAC3C: mov     eax, esi
0x7EAC3E: mov     ecx, dword ptr [esp+28h+var_C]
0x7EAC42: mov     large fs:0, ecx
0x7EAC49: pop     ecx
0x7EAC4A: pop     edi
0x7EAC4B: pop     esi
0x7EAC4C: pop     ebp
0x7EAC4D: pop     ebx
0x7EAC4E: add     esp, 14h
0x7EAC51: retn
