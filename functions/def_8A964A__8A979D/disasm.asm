0x8A979D: mov     ecx, ds:0BA7D98h; jumptable 008A964A default case
0x8A97A3: mov     eax, [ecx]
0x8A97A5: push    2Bh ; '+'
0x8A97A7: push    100h
0x8A97AC: call    dword ptr [eax+10h]
0x8A97AF: mov     ecx, [esp+8+arg_18]
0x8A97B3: mov     edx, [esp+8+arg_14]
0x8A97B7: push    ecx
0x8A97B8: push    edx
0x8A97B9: mov     ecx, eax
0x8A97BB: mov     word ptr [eax+4], 100h
0x8A97C1: call    sub_8EA030
0x8A97C6: cmp     ebx, 6
0x8A97C9: mov     esi, eax
0x8A97CB: jz      short loc_8A97ED
0x8A97CD: mov     eax, [esi]
0x8A97CF: push    edi
0x8A97D0: mov     ecx, esi
0x8A97D2: call    dword ptr [eax+30h]
0x8A97D5: mov     eax, [esp+0Ch+arg_20]
0x8A97D9: mov     edx, [esi]
0x8A97DB: push    eax
0x8A97DC: mov     ecx, esi
0x8A97DE: call    dword ptr [edx+40h]
0x8A97E1: mov     eax, [esp+10h+arg_14]
0x8A97E5: mov     edx, [esi]
0x8A97E7: push    eax
0x8A97E8: mov     ecx, esi
0x8A97EA: call    dword ptr [edx+20h]
0x8A97ED: mov     ecx, [esp+14h+arg_1C]
0x8A97F1: mov     edx, [esp+14h+arg_20]
0x8A97F5: pop     edi
0x8A97F6: mov     word ptr [esi+0BEh], 14h
0x8A97FF: mov     [esi+0B4h], ecx
0x8A9805: mov     [esi+0B8h], edx
0x8A980B: mov     eax, esi
0x8A980D: pop     esi
0x8A980E: pop     ebx
0x8A980F: add     esp, 0Ch
0x8A9812: retn
