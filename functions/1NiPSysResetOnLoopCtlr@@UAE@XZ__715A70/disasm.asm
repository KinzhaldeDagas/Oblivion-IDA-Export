0x715A70: push    0FFFFFFFFh
0x715A72: push    offset ??1NiPSysResetOnLoopCtlr@@UAE@XZ_SEH
0x715A77: mov     eax, large fs:0
0x715A7D: push    eax
0x715A7E: push    ecx
0x715A7F: push    ebp
0x715A80: push    esi
0x715A81: push    edi
0x715A82: mov     eax, ds:0B30AACh
0x715A87: xor     eax, esp
0x715A89: push    eax
0x715A8A: lea     eax, [esp+20h+var_C]
0x715A8E: mov     large fs:0, eax
0x715A94: mov     edi, ecx
0x715A96: mov     [esp+20h+var_10], edi
0x715A9A: mov     dword ptr [edi], offset ??_7NiTimeController@@6B@; const NiTimeController::`vftable'
0x715AA0: mov     esi, [edi+34h]
0x715AA3: test    esi, esi
0x715AA5: mov     ebp, ds:0A2807Ch
0x715AAB: mov     [esp+20h+var_4], 1
0x715AB3: jz      short loc_715AD4
0x715AB5: lea     eax, [esi+4]
0x715AB8: push    eax; lpAddend
0x715AB9: call    ebp ; InterlockedDecrement
0x715ABB: test    eax, eax
0x715ABD: jnz     short loc_715ACD
0x715ABF: test    esi, esi
0x715AC1: jz      short loc_715ACD
0x715AC3: mov     edx, [esi]
0x715AC5: mov     eax, [edx]
0x715AC7: push    1
0x715AC9: mov     ecx, esi
0x715ACB: call    eax
0x715ACD: mov     dword ptr [edi+34h], 0
0x715AD4: mov     esi, [edi+34h]
0x715AD7: test    esi, esi
0x715AD9: mov     byte ptr [esp+20h+var_4], 0
0x715ADE: jz      short loc_715AF8
0x715AE0: lea     ecx, [esi+4]
0x715AE3: push    ecx; lpAddend
0x715AE4: call    ebp ; InterlockedDecrement
0x715AE6: test    eax, eax
0x715AE8: jnz     short loc_715AF8
0x715AEA: test    esi, esi
0x715AEC: jz      short loc_715AF8
0x715AEE: mov     edx, [esi]
0x715AF0: mov     eax, [edx]
0x715AF2: push    1
0x715AF4: mov     ecx, esi
0x715AF6: call    eax
0x715AF8: mov     ecx, edi
0x715AFA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x715B02: call    NiRefObject_destr
0x715B07: mov     ecx, [esp+20h+var_C]
0x715B0B: mov     large fs:0, ecx
0x715B12: pop     ecx
0x715B13: pop     edi
0x715B14: pop     esi
0x715B15: pop     ebp
0x715B16: add     esp, 10h
0x715B19: retn
