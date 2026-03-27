0x42FE80: push    ebp
0x42FE81: push    esi
0x42FE82: mov     esi, ecx
0x42FE84: xor     ebp, ebp
0x42FE86: cmp     [esi+1Ch], ebp
0x42FE89: jz      short loc_42FE92
0x42FE8B: pop     esi
0x42FE8C: mov     al, 1
0x42FE8E: pop     ebp
0x42FE8F: retn    8
0x42FE92: cmp     [esi+20h], ebp
0x42FE95: push    ebx
0x42FE96: mov     [esi+14h], ebp
0x42FE99: mov     [esi+10h], ebp
0x42FE9C: mov     [esi+18h], ebp
0x42FE9F: jnz     short loc_42FEB6
0x42FEA1: cmp     [esp+0Ch+arg_4], 0
0x42FEA6: jz      short loc_42FEAF
0x42FEA8: mov     ebx, offset aRt; "rt"
0x42FEAD: jmp     short loc_42FEC7
0x42FEAF: mov     ebx, offset aRb; "rb"
0x42FEB4: jmp     short loc_42FEC7
0x42FEB6: cmp     [esp+0Ch+arg_4], 0
0x42FEBB: mov     ebx, offset off_A36344
0x42FEC0: jnz     short loc_42FEC7
0x42FEC2: mov     ebx, offset off_A36340
0x42FEC7: push    edi
0x42FEC8: lea     edi, [esi+3Ch]
0x42FECB: push    ebx; Mode
0x42FECC: push    edi; Filename
0x42FECD: call    _fopen
0x42FED2: add     esp, 8
0x42FED5: cmp     eax, ebp
0x42FED7: mov     [esi+1Ch], eax
0x42FEDA: jnz     short loc_42FF1A
0x42FEDC: cmp     dword ptr [esi+20h], 1
0x42FEE0: jnz     short loc_42FF1A
0x42FEE2: cmp     [esp+10h+arg_4], 0
0x42FEE7: mov     eax, offset aWt; "wt"
0x42FEEC: jnz     short loc_42FEF3
0x42FEEE: mov     eax, offset aWb; "wb"
0x42FEF3: push    eax; Mode
0x42FEF4: push    edi; Filename
0x42FEF5: call    _fopen
0x42FEFA: add     esp, 8
0x42FEFD: cmp     eax, ebp
0x42FEFF: mov     [esi+1Ch], eax
0x42FF02: jz      short loc_42FF0D
0x42FF04: push    eax; File
0x42FF05: call    _fclose
0x42FF0A: add     esp, 4
0x42FF0D: push    ebx; Mode
0x42FF0E: push    edi; Filename
0x42FF0F: call    _fopen
0x42FF14: add     esp, 8
0x42FF17: mov     [esi+1Ch], eax
0x42FF1A: cmp     [esi+1Ch], ebp
0x42FF1D: pop     edi
0x42FF1E: jz      short loc_42FF70
0x42FF20: mov     eax, [esi+0Ch]
0x42FF23: cmp     eax, ebp
0x42FF25: mov     byte ptr [esi+24h], 1
0x42FF29: jbe     short loc_42FF74
0x42FF2B: cmp     [esi+18h], ebp
0x42FF2E: jnz     short loc_42FF74
0x42FF30: cmp     eax, 0FFFFFFFFh
0x42FF33: setz    bl
0x42FF36: test    bl, bl
0x42FF38: jz      short loc_42FF46
0x42FF3A: mov     eax, [esi]
0x42FF3C: mov     edx, [eax+10h]
0x42FF3F: mov     ecx, esi
0x42FF41: call    edx
0x42FF43: mov     [esi+0Ch], eax
0x42FF46: mov     eax, [esi+0Ch]
0x42FF49: push    eax; Size
0x42FF4A: call    FormHeapAlloc
0x42FF4F: add     esp, 4
0x42FF52: test    bl, bl
0x42FF54: mov     [esi+18h], eax
0x42FF57: jz      short loc_42FF74
0x42FF59: mov     ecx, [esi+0Ch]
0x42FF5C: push    ecx; Count
0x42FF5D: mov     [esi+10h], ecx
0x42FF60: push    eax; DstBuf
0x42FF61: mov     ecx, esi
0x42FF63: mov     [esi+14h], ebp
0x42FF66: call    sub_747D10
0x42FF6B: cmp     eax, [esi+0Ch]
0x42FF6E: jz      short loc_42FF74
0x42FF70: mov     byte ptr [esi+24h], 0
0x42FF74: mov     al, [esi+24h]
0x42FF77: pop     ebx
0x42FF78: pop     esi
0x42FF79: pop     ebp
0x42FF7A: retn    8
