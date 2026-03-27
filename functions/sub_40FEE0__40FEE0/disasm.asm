0x40FEE0: sub     esp, 14h
0x40FEE3: push    ebx
0x40FEE4: mov     ebx, [esp+18h+arg_10]
0x40FEE8: push    ebp
0x40FEE9: mov     ebp, [esp+1Ch+arg_4]
0x40FEED: xor     edx, edx
0x40FEEF: mov     eax, ebp
0x40FEF1: div     ebx
0x40FEF3: push    esi
0x40FEF4: push    edi
0x40FEF5: mov     edi, ebp
0x40FEF7: imul    edi, [esp+24h+arg_C]
0x40FEFC: add     edi, 0Fh
0x40FEFF: and     edi, 0FFFFFFF0h
0x40FF02: mov     [esp+24h+arg_10], eax
0x40FF06: mov     eax, edx
0x40FF08: mov     [esp+24h+var_8], edx
0x40FF0C: call    sub_40F640
0x40FF11: mov     esi, [esp+24h+arg_8]
0x40FF15: mov     [esp+24h+var_10], eax
0x40FF19: xor     edx, edx
0x40FF1B: mov     eax, esi
0x40FF1D: div     ebx
0x40FF1F: mov     [esp+24h+var_14], eax
0x40FF23: mov     eax, edx
0x40FF25: mov     [esp+24h+var_4], edx
0x40FF29: call    sub_40F640
0x40FF2E: mov     [esp+24h+var_C], eax
0x40FF32: xor     edx, edx
0x40FF34: lea     eax, [ebx+ebp-1]
0x40FF38: div     ebx
0x40FF3A: xor     edx, edx
0x40FF3C: push    1
0x40FF3E: mov     ecx, offset FormHeap
0x40FF43: mov     ebp, eax
0x40FF45: lea     eax, [esi+ebx-1]
0x40FF49: div     ebx
0x40FF4B: imul    ebp, eax
0x40FF4E: lea     eax, ds:48h[ebp*4]
0x40FF55: push    eax
0x40FF56: call    j_MemoryHeap_Alloc
0x40FF5B: mov     esi, eax
0x40FF5D: test    esi, esi
0x40FF5F: jz      loc_410103
0x40FF65: push    48h ; 'H'
0x40FF67: push    0
0x40FF69: push    esi
0x40FF6A: call    __memset
0x40FF6F: mov     edx, [esp+30h+arg_4]
0x40FF73: mov     ecx, [esp+30h+arg_0]
0x40FF77: mov     [esi+0Ch], edx
0x40FF7A: mov     edx, [esp+30h+arg_C]
0x40FF7E: mov     [esi+8], edx
0x40FF81: mov     edx, [esp+30h+var_10]
0x40FF85: mov     [esi+2Ch], edx
0x40FF88: mov     edx, [esp+30h+var_C]
0x40FF8C: mov     [esi], ecx
0x40FF8E: mov     ecx, [esp+30h+arg_8]
0x40FF92: mov     [esi+30h], edx
0x40FF95: mov     edx, [esp+30h+var_8]
0x40FF99: mov     [esi+10h], ecx
0x40FF9C: mov     ecx, [esp+30h+arg_10]
0x40FFA0: mov     [esi+34h], edx
0x40FFA3: mov     edx, [esp+30h+var_4]
0x40FFA7: mov     [esi+24h], ecx
0x40FFAA: mov     ecx, [esp+30h+var_14]
0x40FFAE: lea     eax, [esi+48h]
0x40FFB1: mov     [esi+20h], ebp
0x40FFB4: mov     [esi+38h], edx
0x40FFB7: mov     edx, [esp+30h+arg_14]
0x40FFBB: add     esp, 0Ch
0x40FFBE: xor     ebp, ebp
0x40FFC0: test    ecx, ecx
0x40FFC2: mov     [esi+1Ch], edi
0x40FFC5: mov     [esi+40h], eax
0x40FFC8: mov     [esi+28h], ecx
0x40FFCB: mov     [esi+3Ch], ebx
0x40FFCE: mov     [esi+4], edx
0x40FFD1: mov     edi, eax
0x40FFD3: jbe     short loc_41003D
0x40FFD5: xor     ebx, ebx
0x40FFD7: cmp     [esi+24h], ebx
0x40FFDA: jbe     short loc_41000B
0x40FFDC: lea     esp, [esp+0]
0x40FFE0: mov     eax, [esi+3Ch]
0x40FFE3: mov     ecx, [esi+1Ch]
0x40FFE6: mov     edx, [esi+4]
0x40FFE9: push    eax
0x40FFEA: push    eax
0x40FFEB: mov     eax, [esi+8]
0x40FFEE: push    eax
0x40FFEF: mov     eax, [esp+30h+arg_0]
0x40FFF3: push    ecx
0x40FFF4: push    edx
0x40FFF5: push    eax
0x40FFF6: call    sub_40F6A0
0x40FFFB: mov     [edi], eax
0x40FFFD: add     ebx, 1
0x410000: add     esp, 18h
0x410003: add     edi, 4
0x410006: cmp     ebx, [esi+24h]
0x410009: jb      short loc_40FFE0
0x41000B: mov     eax, [esi+2Ch]
0x41000E: test    eax, eax
0x410010: jz      short loc_410035
0x410012: mov     ecx, [esi+3Ch]
0x410015: mov     edx, [esi+8]
0x410018: push    ecx
0x410019: mov     ecx, [esi+4]
0x41001C: push    eax
0x41001D: mov     eax, [esi+1Ch]
0x410020: push    edx
0x410021: mov     edx, [esp+30h+arg_0]
0x410025: push    eax
0x410026: push    ecx
0x410027: push    edx
0x410028: call    sub_40F6A0
0x41002D: add     esp, 18h
0x410030: mov     [edi], eax
0x410032: add     edi, 4
0x410035: add     ebp, 1
0x410038: cmp     ebp, [esi+28h]
0x41003B: jb      short loc_40FFD5
0x41003D: cmp     dword ptr [esi+30h], 0
0x410041: jz      short loc_4100A5
0x410043: xor     ebx, ebx
0x410045: cmp     [esi+24h], ebx
0x410048: jbe     short loc_41007E
0x41004A: lea     ebx, [ebx+0]
0x410050: mov     eax, [esi+30h]
0x410053: mov     ecx, [esi+3Ch]
0x410056: mov     edx, [esi+8]
0x410059: push    eax
0x41005A: mov     eax, [esi+1Ch]
0x41005D: push    ecx
0x41005E: mov     ecx, [esi+4]
0x410061: push    edx
0x410062: mov     edx, [esp+30h+arg_0]
0x410066: push    eax
0x410067: push    ecx
0x410068: push    edx
0x410069: call    sub_40F6A0
0x41006E: mov     [edi], eax
0x410070: add     ebx, 1
0x410073: add     esp, 18h
0x410076: add     edi, 4
0x410079: cmp     ebx, [esi+24h]
0x41007C: jb      short loc_410050
0x41007E: mov     eax, [esi+2Ch]
0x410081: test    eax, eax
0x410083: jz      short loc_4100A5
0x410085: mov     ecx, [esi+30h]
0x410088: mov     edx, [esi+8]
0x41008B: push    ecx
0x41008C: mov     ecx, [esi+4]
0x41008F: push    eax
0x410090: mov     eax, [esi+1Ch]
0x410093: push    edx
0x410094: mov     edx, [esp+30h+arg_0]
0x410098: push    eax
0x410099: push    ecx
0x41009A: push    edx
0x41009B: call    sub_40F6A0
0x4100A0: add     esp, 18h
0x4100A3: mov     [edi], eax
0x4100A5: xor     edi, edi
0x4100A7: xor     eax, eax
0x4100A9: cmp     [esi+20h], edi
0x4100AC: jbe     short loc_4100C0
0x4100AE: mov     ecx, [esi+40h]
0x4100B1: cmp     [ecx], edi
0x4100B3: jz      short loc_4100D0
0x4100B5: add     eax, 1
0x4100B8: add     ecx, 4
0x4100BB: cmp     eax, [esi+20h]
0x4100BE: jb      short loc_4100B1
0x4100C0: mov     [esi+18h], edi
0x4100C3: pop     edi
0x4100C4: mov     eax, esi
0x4100C6: pop     esi
0x4100C7: pop     ebp
0x4100C8: pop     ebx
0x4100C9: add     esp, 14h
0x4100CC: retn
0x4100CD: align 10h
0x4100D0: mov     eax, [esi+40h]
0x4100D3: cmp     dword ptr [eax+edi*4], 0
0x4100D7: lea     eax, [eax+edi*4]
0x4100DA: jz      short loc_4100F0
0x4100DC: mov     eax, [eax]
0x4100DE: mov     ecx, [eax]
0x4100E0: mov     edx, [ecx+8]
0x4100E3: push    eax
0x4100E4: call    edx
0x4100E6: mov     eax, [esi+40h]
0x4100E9: mov     dword ptr [eax+edi*4], 0
0x4100F0: add     edi, 1
0x4100F3: cmp     edi, [esi+20h]
0x4100F6: jb      short loc_4100D0
0x4100F8: push    esi; void *
0x4100F9: mov     ecx, offset FormHeap
0x4100FE: call    MemoryHeap_Free_checked
0x410103: pop     edi
0x410104: pop     esi
0x410105: pop     ebp
0x410106: xor     eax, eax
0x410108: pop     ebx
0x410109: add     esp, 14h
0x41010C: retn
