0x473EB0: push    0FFFFFFFFh
0x473EB2: push    offset NewActorAnimData_SEH
0x473EB7: mov     eax, large fs:0
0x473EBD: push    eax
0x473EBE: sub     esp, 8
0x473EC1: push    ebx
0x473EC2: push    esi
0x473EC3: push    edi
0x473EC4: mov     eax, ds:0B30AACh
0x473EC9: xor     eax, esp
0x473ECB: push    eax
0x473ECC: lea     eax, [esp+24h+var_C]
0x473ED0: mov     large fs:0, eax
0x473ED6: mov     esi, ecx
0x473ED8: mov     [esp+24h+var_14], esi
0x473EDC: xor     ebx, ebx
0x473EDE: mov     [esi+98h], ebx
0x473EE4: fldz
0x473EE6: mov     [esi+0B4h], ebx
0x473EEC: mov     [esi+0B8h], ebx
0x473EF2: mov     [esi+4], ebx
0x473EF5: mov     [esi+8], ebx
0x473EF8: mov     eax, ds:0B3F9A8h
0x473EFD: mov     [esi+0Ch], eax
0x473F00: mov     ecx, ds:0B3F9ACh
0x473F06: mov     [esi+10h], ecx
0x473F09: mov     edx, ds:0B3F9B0h
0x473F0F: mov     [esi+14h], edx
0x473F12: mov     eax, ds:0B3F9A8h
0x473F17: mov     [esi+18h], eax
0x473F1A: mov     ecx, ds:0B3F9ACh
0x473F20: mov     [esi+1Ch], ecx
0x473F23: mov     edx, ds:0B3F9B0h
0x473F29: fst     dword ptr [esi+38h]
0x473F2C: fstp    dword ptr [esi+94h]
0x473F32: mov     [esi+20h], edx
0x473F35: mov     byte ptr [esi+90h], 0FFh
0x473F3C: mov     [esi+0C4h], bl
0x473F42: mov     [esi], ebx
0x473F44: mov     edi, [esi+98h]
0x473F4A: cmp     edi, ebx
0x473F4C: mov     [esp+24h+var_4], ebx
0x473F50: jz      short loc_473F74
0x473F52: lea     eax, [edi+4]
0x473F55: push    eax; lpAddend
0x473F56: call    dword ptr ds:0A2807Ch
0x473F5C: test    eax, eax
0x473F5E: jnz     short loc_473F6E
0x473F60: cmp     edi, ebx
0x473F62: jz      short loc_473F6E
0x473F64: mov     edx, [edi]
0x473F66: mov     eax, [edx]
0x473F68: push    1
0x473F6A: mov     ecx, edi
0x473F6C: call    eax
0x473F6E: mov     [esi+98h], ebx
0x473F74: xor     eax, eax
0x473F76: mov     [esi+0CCh], ebx
0x473F7C: mov     [esi+0D0h], ebx
0x473F82: mov     [esi+0D4h], eax
0x473F88: push    10h; Size
0x473F8A: mov     [esi+0D8h], eax
0x473F90: call    FormHeapAlloc
0x473F95: add     esp, 4
0x473F98: mov     [esp+24h+var_10], eax
0x473F9C: cmp     eax, ebx
0x473F9E: mov     byte ptr [esp+24h+var_4], 1
0x473FA3: jz      short loc_473FB0
0x473FA5: push    65h ; 'e'
0x473FA7: mov     ecx, eax
0x473FA9: call    ??0?$NiTPointerMap@GPAVAnimSequenceBase@@@@QAE@XZ; NiTPointerMap<ushort,AnimSequenceBase *>::NiTPointerMap<ushort,AnimSequenceBase *>(void)
0x473FAE: jmp     short loc_473FB2
0x473FB0: xor     eax, eax
0x473FB2: mov     [esi+9Ch], eax
0x473FB8: fld1
0x473FBA: xor     eax, eax
0x473FBC: mov     [esi+24h], eax
0x473FBF: mov     [esi+28h], eax
0x473FC2: mov     [esi+2Ch], eax
0x473FC5: mov     [esi+30h], eax
0x473FC8: mov     [esi+34h], eax
0x473FCB: mov     [esi+0A0h], eax
0x473FD1: mov     [esi+0A4h], eax
0x473FD7: mov     [esi+0A8h], eax
0x473FDD: mov     [esi+0ACh], eax
0x473FE3: mov     [esi+0B0h], eax
0x473FE9: or      eax, 0FFFFFFFFh
0x473FEC: mov     [esi+3Ch], eax
0x473FEF: mov     [esi+40h], eax
0x473FF2: mov     [esi+44h], ax
0x473FF6: or      eax, 0FFFFFFFFh
0x473FF9: mov     [esi+70h], eax
0x473FFC: mov     [esi+74h], eax
0x473FFF: mov     [esi+78h], ax
0x474003: or      eax, 0FFFFFFFFh
0x474006: mov     [esi+48h], eax
0x474009: mov     [esi+4Ch], eax
0x47400C: mov     [esi+50h], eax
0x47400F: mov     [esi+54h], eax
0x474012: mov     [esi+58h], eax
0x474015: or      eax, 0FFFFFFFFh
0x474018: mov     [esi+5Ch], eax
0x47401B: mov     [esi+60h], eax
0x47401E: mov     [esi+64h], eax
0x474021: mov     [esi+68h], eax
0x474024: mov     [esi+6Ch], eax
0x474027: or      eax, 0FFFFFFFFh
0x47402A: mov     [esi+7Ch], eax
0x47402D: mov     [esi+80h], eax
0x474033: mov     [esi+84h], eax
0x474039: mov     [esi+88h], eax
0x47403F: mov     [esi+8Ch], eax
0x474045: fst     dword ptr [esi+0BCh]
0x47404B: fstp    dword ptr [esi+0C0h]
0x474051: mov     [esi+0C8h], ebx
0x474057: mov     eax, esi
0x474059: mov     ecx, dword ptr [esp+24h+var_C]
0x47405D: mov     large fs:0, ecx
0x474064: pop     ecx
0x474065: pop     edi
0x474066: pop     esi
0x474067: pop     ebx
0x474068: add     esp, 14h
0x47406B: retn
