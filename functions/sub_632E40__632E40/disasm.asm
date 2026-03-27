0x632E40: push    ecx
0x632E41: push    ebx
0x632E42: push    esi
0x632E43: push    edi
0x632E44: mov     edi, [esp+10h+arg_4]
0x632E48: xor     ebx, ebx
0x632E4A: cmp     edi, ebx
0x632E4C: mov     esi, ecx
0x632E4E: mov     [esp+10h+var_4], ebx
0x632E52: jz      short loc_632E68
0x632E54: mov     eax, [edi]
0x632E56: mov     edx, [eax+190h]
0x632E5C: mov     ecx, edi
0x632E5E: call    edx
0x632E60: test    al, al
0x632E62: jz      short loc_632E68
0x632E64: mov     [esp+10h+var_4], edi
0x632E68: mov     eax, [esp+10h+arg_0]
0x632E6C: push    edi
0x632E6D: push    eax
0x632E6E: mov     ecx, esi
0x632E70: call    sub_651880
0x632E75: mov     ecx, ds:0B33B00h
0x632E7B: mov     eax, [ecx+44h]
0x632E7E: cmp     eax, 1FFFF000h
0x632E83: jz      short loc_632E90
0x632E85: cmp     eax, 7FFFF000h
0x632E8A: jnz     loc_63304D
0x632E90: fld     dword ptr ds:0A30634h
0x632E96: or      eax, 0FFFFFFFFh
0x632E99: fstp    dword ptr [esi+294h]
0x632E9F: mov     [esi+298h], eax
0x632EA5: fldz
0x632EA7: mov     [esi+29Ch], eax
0x632EAD: fst     dword ptr [esi+1D8h]
0x632EB3: mov     [esi+2A0h], eax
0x632EB9: fst     dword ptr [esi+21Ch]
0x632EBF: mov     [esi+90h], eax
0x632EC5: fst     dword ptr [esi+22Ch]
0x632ECB: mov     [esi+24Ch], bl
0x632ED1: fst     dword ptr [esi+248h]
0x632ED7: mov     [esi+1D0h], bl
0x632EDD: fst     dword ptr [esi+234h]
0x632EE3: mov     [esi+228h], bl
0x632EE9: fst     dword ptr [esi+1E8h]
0x632EEF: mov     byte ptr [esi+23Ch], 1
0x632EF6: fst     dword ptr [esi+1B4h]
0x632EFC: mov     [esi+244h], bl
0x632F02: fst     dword ptr [esi+1B0h]
0x632F08: mov     [esi+250h], ebx
0x632F0E: fld     dword ptr ds:0A417B4h
0x632F14: mov     [esi+25Ch], bl
0x632F1A: fstp    dword ptr [esi+238h]
0x632F20: mov     [esi+1CCh], ebx
0x632F26: mov     [esi+1E4h], bl
0x632F2C: mov     [esi+25Dh], bl
0x632F32: fst     dword ptr [esi+1A8h]
0x632F38: mov     [esi+274h], ebx
0x632F3E: fst     dword ptr [esi+1E0h]
0x632F44: mov     [esi+278h], bl
0x632F4A: fst     dword ptr [esi+240h]
0x632F50: mov     [esi+290h], bl
0x632F56: fst     dword ptr [esi+1B8h]
0x632F5C: mov     [esi+2A8h], bl
0x632F62: fst     dword ptr [esi+260h]
0x632F68: mov     [esi+2A9h], bl
0x632F6E: fst     dword ptr [esi+264h]
0x632F74: mov     [esi+2B8h], bl
0x632F7A: fld1
0x632F7C: mov     [esi+2B4h], ebx
0x632F82: fstp    dword ptr [esi+26Ch]
0x632F88: mov     [esi+2B9h], bl
0x632F8E: fst     dword ptr [esi+270h]
0x632F94: fst     dword ptr [esi+28Ch]
0x632F9A: mov     edx, ds:0B3F9A8h
0x632FA0: mov     [esi+27Ch], edx
0x632FA6: mov     eax, ds:0B3F9ACh
0x632FAB: mov     [esi+280h], eax
0x632FB1: mov     ecx, ds:0B3F9B0h
0x632FB7: mov     [esi+284h], ecx
0x632FBD: xor     eax, eax
0x632FBF: lea     ecx, [esi+2C8h]
0x632FC5: mov     [ecx], ebx
0x632FC7: mov     [esi+eax+2DCh], bl
0x632FCE: add     eax, 1
0x632FD1: add     ecx, 4
0x632FD4: cmp     eax, 5
0x632FD7: jl      short loc_632FC5
0x632FD9: mov     edi, [esi+2A4h]
0x632FDF: fst     dword ptr [esi+2ACh]
0x632FE5: cmp     edi, ebx
0x632FE7: fstp    dword ptr [esi+2B0h]
0x632FED: mov     [esi+2E4h], ebx
0x632FF3: mov     [esi+2E8h], bl
0x632FF9: jz      short loc_633020
0x632FFB: cmp     [edi+4], ebx
0x632FFE: jz      short loc_633018
0x633000: push    ebp
0x633001: mov     eax, [edi+4]
0x633004: mov     ebp, [eax+4]
0x633007: push    eax
0x633008: call    FormHeapFree
0x63300D: add     esp, 4
0x633010: cmp     ebp, ebx
0x633012: mov     [edi+4], ebp
0x633015: jnz     short loc_633001
0x633017: pop     ebp
0x633018: mov     [edi], ebx
0x63301A: mov     [esi+2A4h], ebx
0x633020: mov     eax, [esp+10h+var_4]
0x633024: cmp     eax, ebx
0x633026: mov     [esi+1BCh], ebx
0x63302C: mov     [esi+1C0h], ebx
0x633032: mov     [esi+1C4h], ebx
0x633038: mov     [esi+1C8h], ebx
0x63303E: jz      short loc_63304D
0x633040: mov     edx, [esi]
0x633042: push    eax
0x633043: mov     eax, [edx+594h]
0x633049: mov     ecx, esi
0x63304B: call    eax
0x63304D: mov     ecx, ds:0B33B00h
0x633053: mov     eax, [ecx+44h]
0x633056: cmp     eax, 60000000h
0x63305B: jz      short loc_633064
0x63305D: cmp     eax, 7FFFF000h
0x633062: jnz     short loc_63306A
0x633064: mov     [esi+0D0h], bl
0x63306A: pop     edi
0x63306B: pop     esi
0x63306C: pop     ebx
0x63306D: pop     ecx
0x63306E: retn    8
