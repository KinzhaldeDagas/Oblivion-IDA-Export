0x7E0ED0: push    0FFFFFFFFh
0x7E0ED2: push    offset ??0WaterShaderHeightMap@@QAE@XZ_SEH
0x7E0ED7: mov     eax, large fs:0
0x7E0EDD: push    eax
0x7E0EDE: push    ecx
0x7E0EDF: push    ebx
0x7E0EE0: push    ebp
0x7E0EE1: push    esi
0x7E0EE2: push    edi
0x7E0EE3: mov     eax, ds:0B30AACh
0x7E0EE8: xor     eax, esp
0x7E0EEA: push    eax
0x7E0EEB: lea     eax, [esp+24h+var_C]
0x7E0EEF: mov     large fs:0, eax
0x7E0EF5: mov     esi, ecx
0x7E0EF7: mov     [esp+24h+var_10], esi
0x7E0EFB: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7E0F00: xor     ebx, ebx
0x7E0F02: mov     dword ptr [esi], offset ??_7WaterShaderHeightMap@@6B@; const WaterShaderHeightMap::`vftable'
0x7E0F08: mov     [esp+24h+var_4], ebx
0x7E0F0C: mov     [esi+0B0h], ebx
0x7E0F12: push    offset sub_7016A0; a5
0x7E0F17: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7E0F1C: push    7; size
0x7E0F1E: push    4; a2
0x7E0F20: lea     eax, [esi+0B4h]
0x7E0F26: push    eax; a1
0x7E0F27: mov     byte ptr [esp+38h+var_4], 1
0x7E0F2C: call    ArrayConstructor
0x7E0F31: mov     [esi+0D4h], ebx
0x7E0F37: mov     [esi+0D8h], ebx
0x7E0F3D: mov     [esi+0DCh], ebx
0x7E0F43: mov     [esi+0E0h], ebx
0x7E0F49: mov     [esi+0E4h], ebx
0x7E0F4F: mov     [esi+0E8h], ebx
0x7E0F55: mov     [esi+0ECh], ebx
0x7E0F5B: mov     [esi+0F0h], ebx
0x7E0F61: mov     [esi+0F4h], ebx
0x7E0F67: fld     dword ptr ds:0A31E2Ch
0x7E0F6D: mov     ebp, ds:0A2807Ch
0x7E0F73: mov     byte ptr [esi+20h], 1
0x7E0F77: mov     ds:0B45FE0h, esi
0x7E0F7D: mov     [esi+0D0h], ebx
0x7E0F83: fstp    dword ptr ds:0B45FC4h
0x7E0F89: fld     dword ptr ds:0A430CCh
0x7E0F8F: mov     byte ptr [esp+24h+var_4], 0Bh
0x7E0F94: fstp    dword ptr ds:0B45FC0h
0x7E0F9A: fld     dword ptr ds:0A3D65Ch
0x7E0FA0: fstp    dword ptr ds:0B45FD8h
0x7E0FA6: fld1
0x7E0FA8: fstp    dword ptr ds:0B45FD4h
0x7E0FAE: mov     edi, [esi+0D8h]
0x7E0FB4: cmp     edi, ebx
0x7E0FB6: jz      short loc_7E0FD6
0x7E0FB8: lea     ecx, [edi+4]
0x7E0FBB: push    ecx; lpAddend
0x7E0FBC: call    ebp ; InterlockedDecrement
0x7E0FBE: test    eax, eax
0x7E0FC0: jnz     short loc_7E0FD0
0x7E0FC2: cmp     edi, ebx
0x7E0FC4: jz      short loc_7E0FD0
0x7E0FC6: mov     edx, [edi]
0x7E0FC8: mov     eax, [edx]
0x7E0FCA: push    1
0x7E0FCC: mov     ecx, edi
0x7E0FCE: call    eax
0x7E0FD0: mov     [esi+0D8h], ebx
0x7E0FD6: mov     edi, [esi+0DCh]
0x7E0FDC: cmp     edi, ebx
0x7E0FDE: jz      short loc_7E0FFE
0x7E0FE0: lea     ecx, [edi+4]
0x7E0FE3: push    ecx; lpAddend
0x7E0FE4: call    ebp ; InterlockedDecrement
0x7E0FE6: test    eax, eax
0x7E0FE8: jnz     short loc_7E0FF8
0x7E0FEA: cmp     edi, ebx
0x7E0FEC: jz      short loc_7E0FF8
0x7E0FEE: mov     edx, [edi]
0x7E0FF0: mov     eax, [edx]
0x7E0FF2: push    1
0x7E0FF4: mov     ecx, edi
0x7E0FF6: call    eax
0x7E0FF8: mov     [esi+0DCh], ebx
0x7E0FFE: mov     edi, [esi+0E0h]
0x7E1004: cmp     edi, ebx
0x7E1006: jz      short loc_7E1026
0x7E1008: lea     ecx, [edi+4]
0x7E100B: push    ecx; lpAddend
0x7E100C: call    ebp ; InterlockedDecrement
0x7E100E: test    eax, eax
0x7E1010: jnz     short loc_7E1020
0x7E1012: cmp     edi, ebx
0x7E1014: jz      short loc_7E1020
0x7E1016: mov     edx, [edi]
0x7E1018: mov     eax, [edx]
0x7E101A: push    1
0x7E101C: mov     ecx, edi
0x7E101E: call    eax
0x7E1020: mov     [esi+0E0h], ebx
0x7E1026: mov     edi, [esi+0E4h]
0x7E102C: cmp     edi, ebx
0x7E102E: jz      short loc_7E104E
0x7E1030: lea     ecx, [edi+4]
0x7E1033: push    ecx; lpAddend
0x7E1034: call    ebp ; InterlockedDecrement
0x7E1036: test    eax, eax
0x7E1038: jnz     short loc_7E1048
0x7E103A: cmp     edi, ebx
0x7E103C: jz      short loc_7E1048
0x7E103E: mov     edx, [edi]
0x7E1040: mov     eax, [edx]
0x7E1042: push    1
0x7E1044: mov     ecx, edi
0x7E1046: call    eax
0x7E1048: mov     [esi+0E4h], ebx
0x7E104E: mov     edi, [esi+0ECh]
0x7E1054: cmp     edi, ebx
0x7E1056: jz      short loc_7E1076
0x7E1058: lea     ecx, [edi+4]
0x7E105B: push    ecx; lpAddend
0x7E105C: call    ebp ; InterlockedDecrement
0x7E105E: test    eax, eax
0x7E1060: jnz     short loc_7E1070
0x7E1062: cmp     edi, ebx
0x7E1064: jz      short loc_7E1070
0x7E1066: mov     edx, [edi]
0x7E1068: mov     eax, [edx]
0x7E106A: push    1
0x7E106C: mov     ecx, edi
0x7E106E: call    eax
0x7E1070: mov     [esi+0ECh], ebx
0x7E1076: fldz
0x7E1078: fst     dword ptr [esi+100h]
0x7E107E: fstp    dword ptr [esi+104h]
0x7E1084: cmp     ds:0B45FD0h, bl
0x7E108A: jz      short loc_7E10A2
0x7E108C: mov     dword ptr ds:0B45FC8h, 100h
0x7E1096: mov     dword ptr ds:0B45FCCh, 8
0x7E10A0: jmp     short loc_7E10B6
0x7E10A2: mov     dword ptr ds:0B45FC8h, 80h ; '€'
0x7E10AC: mov     dword ptr ds:0B45FCCh, 7
0x7E10B6: fild    dword ptr ds:0B45FC8h
0x7E10BC: mov     byte ptr ds:0B45FD1h, 1
0x7E10C3: fld1
0x7E10C5: mov     eax, esi
0x7E10C7: fdivrp  st(1), st
0x7E10C9: fstp    [esp+24h+var_10]
0x7E10CD: fld     [esp+24h+var_10]
0x7E10D1: fst     dword ptr ds:0B45FE4h
0x7E10D7: fst     dword ptr ds:0B45FE8h
0x7E10DD: fst     dword ptr ds:0B45FECh
0x7E10E3: fstp    dword ptr ds:0B45FF0h
0x7E10E9: mov     ecx, dword ptr [esp+24h+var_C]
0x7E10ED: mov     large fs:0, ecx
0x7E10F4: pop     ecx
0x7E10F5: pop     edi
0x7E10F6: pop     esi
0x7E10F7: pop     ebp
0x7E10F8: pop     ebx
0x7E10F9: add     esp, 10h
0x7E10FC: retn
