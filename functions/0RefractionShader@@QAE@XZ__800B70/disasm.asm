0x800B70: push    0FFFFFFFFh
0x800B72: push    offset ??0RefractionShader@@QAE@XZ_SEH
0x800B77: mov     eax, large fs:0
0x800B7D: push    eax
0x800B7E: push    ecx
0x800B7F: push    ebx
0x800B80: push    ebp
0x800B81: push    esi
0x800B82: push    edi
0x800B83: mov     eax, ds:0B30AACh
0x800B88: xor     eax, esp
0x800B8A: push    eax
0x800B8B: lea     eax, [esp+24h+var_C]
0x800B8F: mov     large fs:0, eax
0x800B95: mov     esi, ecx
0x800B97: mov     [esp+24h+var_10], esi
0x800B9B: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x800BA0: push    offset sub_7016A0; a5
0x800BA5: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x800BAA: push    1; size
0x800BAC: push    4; a2
0x800BAE: lea     edi, [esi+90h]
0x800BB4: xor     ebp, ebp
0x800BB6: push    edi; a1
0x800BB7: mov     [esp+38h+var_4], ebp
0x800BBB: mov     dword ptr [esi], offset ??_7RefractionShader@@6B@; const RefractionShader::`vftable'
0x800BC1: call    ArrayConstructor
0x800BC6: push    offset sub_7016A0; a5
0x800BCB: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x800BD0: push    1; size
0x800BD2: push    4; a2
0x800BD4: lea     ebx, [esi+94h]
0x800BDA: push    ebx; a1
0x800BDB: mov     byte ptr [esp+38h+var_4], 1
0x800BE0: call    ArrayConstructor
0x800BE5: push    offset sub_4027D0; a5
0x800BEA: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x800BEF: push    1; size
0x800BF1: lea     eax, [esi+9Ch]
0x800BF7: push    4; a2
0x800BF9: push    eax; a1
0x800BFA: mov     byte ptr [esp+38h+var_4], 2
0x800BFF: call    ArrayConstructor
0x800C04: mov     [esi+0A0h], ebp
0x800C0A: mov     [esi+98h], ebp
0x800C10: mov     ebp, [edi]
0x800C12: test    ebp, ebp
0x800C14: mov     byte ptr [esp+24h+var_4], 4
0x800C19: jz      short loc_800C3E
0x800C1B: lea     eax, [ebp+4]
0x800C1E: push    eax; lpAddend
0x800C1F: call    dword ptr ds:0A2807Ch
0x800C25: test    eax, eax
0x800C27: jnz     short loc_800C38
0x800C29: test    ebp, ebp
0x800C2B: jz      short loc_800C38
0x800C2D: mov     edx, [ebp+0]
0x800C30: mov     eax, [edx]
0x800C32: push    1
0x800C34: mov     ecx, ebp
0x800C36: call    eax
0x800C38: mov     dword ptr [edi], 0
0x800C3E: mov     edi, [ebx]
0x800C40: test    edi, edi
0x800C42: jz      short loc_800C66
0x800C44: lea     ecx, [edi+4]
0x800C47: push    ecx; lpAddend
0x800C48: call    dword ptr ds:0A2807Ch
0x800C4E: test    eax, eax
0x800C50: jnz     short loc_800C60
0x800C52: test    edi, edi
0x800C54: jz      short loc_800C60
0x800C56: mov     edx, [edi]
0x800C58: mov     eax, [edx]
0x800C5A: push    1
0x800C5C: mov     ecx, edi
0x800C5E: call    eax
0x800C60: mov     dword ptr [ebx], 0
0x800C66: mov     ecx, [esi+9Ch]
0x800C6C: test    ecx, ecx
0x800C6E: jz      short loc_800C85
0x800C70: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x800C74: jnz     short loc_800C7B
0x800C76: call    sub_7604D0
0x800C7B: mov     dword ptr [esi+9Ch], 0
0x800C85: mov     edi, [esi+0A0h]
0x800C8B: test    edi, edi
0x800C8D: jz      short loc_800CB5
0x800C8F: lea     ecx, [edi+4]
0x800C92: push    ecx; lpAddend
0x800C93: call    dword ptr ds:0A2807Ch
0x800C99: test    eax, eax
0x800C9B: jnz     short loc_800CAB
0x800C9D: test    edi, edi
0x800C9F: jz      short loc_800CAB
0x800CA1: mov     edx, [edi]
0x800CA3: mov     eax, [edx]
0x800CA5: push    1
0x800CA7: mov     ecx, edi
0x800CA9: call    eax
0x800CAB: mov     dword ptr [esi+0A0h], 0
0x800CB5: mov     eax, esi
0x800CB7: mov     byte ptr [esi+20h], 1
0x800CBB: mov     ecx, dword ptr [esp+24h+var_C]
0x800CBF: mov     large fs:0, ecx
0x800CC6: pop     ecx
0x800CC7: pop     edi
0x800CC8: pop     esi
0x800CC9: pop     ebp
0x800CCA: pop     ebx
0x800CCB: add     esp, 10h
0x800CCE: retn
