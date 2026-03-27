0x450F10: sub     esp, 0Ch
0x450F13: push    ebx
0x450F14: xor     eax, eax
0x450F16: push    esi
0x450F17: mov     esi, ecx
0x450F19: mov     [esp+14h+var_8], eax
0x450F1D: mov     [esp+14h+var_4], ax
0x450F22: mov     eax, [esi+23Ch]
0x450F28: xor     ebx, ebx
0x450F2A: cmp     eax, ds:0B05E20h
0x450F30: push    edi
0x450F31: jz      short loc_450F3F
0x450F33: test    dword ptr [esi+244h], 40000h
0x450F3D: jnz     short loc_450F7A
0x450F3F: mov     eax, [esi+10h]
0x450F42: push    1
0x450F44: lea     ecx, [esp+1Ch+Dst]
0x450F48: push    ecx
0x450F49: push    6
0x450F4B: lea     edx, [esp+24h+var_8]
0x450F4F: push    edx
0x450F50: push    eax
0x450F51: mov     eax, [eax+4]
0x450F54: mov     dword ptr [esp+2Ch+Dst], 1
0x450F5C: call    eax
0x450F5E: add     esp, 14h
0x450F61: test    eax, eax
0x450F63: jnz     short loc_450FB3
0x450F65: pop     edi
0x450F66: mov     [esi+254h], ebx
0x450F6C: mov     [esi+250h], ebx
0x450F72: pop     esi
0x450F73: xor     al, al
0x450F75: pop     ebx
0x450F76: add     esp, 0Ch
0x450F79: retn
0x450F7A: cmp     [esi+414h], ebx
0x450F80: mov     edi, [esi+260h]
0x450F86: jnz     short loc_450F8D
0x450F88: call    TESFile_GetDecompressedRecordData
0x450F8D: mov     eax, [esi+414h]
0x450F93: cmp     eax, ebx
0x450F95: jz      short loc_450F65
0x450F97: cmp     edi, [esi+418h]
0x450F9D: jnb     short loc_450F65
0x450F9F: mov     ecx, [eax+edi]
0x450FA2: add     eax, edi
0x450FA4: mov     [esp+18h+var_8], ecx
0x450FA8: mov     dx, [eax+4]
0x450FAC: mov     [esp+18h+var_4], dx
0x450FB1: jmp     short loc_450FB7
0x450FB3: mov     ecx, [esp+18h+var_8]
0x450FB7: cmp     ecx, 58585858h
0x450FBD: movzx   eax, [esp+18h+var_4]
0x450FC2: mov     [esi+250h], ecx
0x450FC8: mov     [esi+254h], eax
0x450FCE: jnz     short loc_450FF2
0x450FD0: push    ebx; a4
0x450FD1: lea     ecx, [esp+1Ch+Dst]
0x450FD5: push    ecx; Dst
0x450FD6: mov     ecx, esi; a1
0x450FD8: mov     dword ptr [esp+20h+Dst], ebx
0x450FDC: call    TESFile_GetChunkData
0x450FE1: mov     ecx, esi
0x450FE3: call    TESFile_GetNextChunk
0x450FE8: mov     edx, dword ptr [esp+18h+Dst]
0x450FEC: mov     [esi+254h], edx
0x450FF2: pop     edi
0x450FF3: pop     esi
0x450FF4: mov     al, 1
0x450FF6: pop     ebx
0x450FF7: add     esp, 0Ch
0x450FFA: retn
