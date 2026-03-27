0x517810: push    ebx
0x517811: push    esi
0x517812: mov     esi, ecx
0x517814: xor     ebx, ebx
0x517816: cmp     [esi], ebx
0x517818: jnz     short loc_51786E
0x51781A: push    0A4h ; '¤'; Size
0x51781F: call    FormHeapAlloc
0x517824: add     esp, 4
0x517827: cmp     eax, ebx
0x517829: jz      short loc_51786A
0x51782B: xor     ecx, ecx
0x51782D: mov     [eax+20h], ebx
0x517830: mov     [eax+18h], ebx
0x517833: mov     [eax+1Ch], ebx
0x517836: mov     [eax+24h], ecx
0x517839: mov     [eax+28h], ecx
0x51783C: mov     [eax+2Ch], ecx
0x51783F: mov     [eax+30h], ecx
0x517842: mov     [eax+34h], ecx
0x517845: mov     [eax+38h], ecx
0x517848: mov     [eax+3Ch], ecx
0x51784B: mov     [eax+40h], ecx
0x51784E: mov     [eax+44h], ecx
0x517851: mov     [eax+48h], ecx
0x517854: mov     [eax], ebx
0x517856: mov     [eax+4], ebx
0x517859: mov     [eax+8], ebx
0x51785C: mov     [eax+10h], ebx
0x51785F: mov     [eax+14h], ebx
0x517862: mov     [eax+0A0h], bl
0x517868: jmp     short loc_51786C
0x51786A: xor     eax, eax
0x51786C: mov     [esi], eax
0x51786E: mov     ecx, [esi]; this
0x517870: cmp     [ecx+14h], ebx
0x517873: jz      loc_517911
0x517879: push    0A4h ; '¤'; Size
0x51787E: call    FormHeapAlloc
0x517883: add     esp, 4
0x517886: cmp     eax, ebx
0x517888: jz      short loc_5178CB
0x51788A: xor     ecx, ecx
0x51788C: mov     [eax+20h], ebx
0x51788F: mov     [eax+18h], ebx
0x517892: mov     [eax+1Ch], ebx
0x517895: mov     [eax+24h], ecx
0x517898: mov     [eax+28h], ecx
0x51789B: mov     [eax+2Ch], ecx
0x51789E: mov     [eax+30h], ecx
0x5178A1: mov     [eax+34h], ecx
0x5178A4: mov     [eax+38h], ecx
0x5178A7: mov     [eax+3Ch], ecx
0x5178AA: mov     [eax+40h], ecx
0x5178AD: mov     [eax+44h], ecx
0x5178B0: mov     [eax+48h], ecx
0x5178B3: mov     [eax], ebx
0x5178B5: mov     [eax+4], ebx
0x5178B8: mov     [eax+8], ebx
0x5178BB: mov     [eax+10h], ebx
0x5178BE: mov     [eax+14h], ebx
0x5178C1: mov     [eax+0A0h], bl
0x5178C7: mov     esi, eax
0x5178C9: jmp     short loc_5178CD
0x5178CB: xor     esi, esi
0x5178CD: fld     [esp+8+arg_1C]
0x5178D1: mov     eax, dword ptr [esp+8+arg18]
0x5178D5: mov     edx, dword ptr [esp+8+a6]
0x5178D9: push    ecx
0x5178DA: mov     ecx, dword ptr [esp+0Ch+arg14]
0x5178DE: fstp    [esp+0Ch+arg1C]; arg1C
0x5178E1: push    eax; arg18
0x5178E2: mov     eax, [esp+10h+argC]
0x5178E6: push    ecx; arg14
0x5178E7: mov     ecx, [esp+14h+a4]
0x5178EB: push    edx; a6
0x5178EC: mov     edx, [esp+18h+a3]
0x5178F0: push    eax; argC
0x5178F1: mov     eax, [esp+1Ch+a5]
0x5178F5: push    ecx; a4
0x5178F6: push    edx; a3
0x5178F7: push    eax; a5
0x5178F8: mov     ecx, esi; this
0x5178FA: call    Script_RunSomething??
0x5178FF: push    esi
0x517900: mov     bl, al
0x517902: call    FormHeapFree
0x517907: add     esp, 4
0x51790A: pop     esi
0x51790B: mov     al, bl
0x51790D: pop     ebx
0x51790E: retn    20h ; ' '
0x517911: fld     [esp+8+arg_1C]
0x517915: mov     edx, dword ptr [esp+8+arg18]
0x517919: mov     eax, dword ptr [esp+8+arg14]
0x51791D: push    ecx
0x51791E: fstp    [esp+0Ch+arg1C]; arg1C
0x517921: push    edx; arg18
0x517922: mov     edx, dword ptr [esp+10h+a6]
0x517926: push    eax; arg14
0x517927: mov     eax, [esp+14h+argC]
0x51792B: push    edx; a6
0x51792C: mov     edx, [esp+18h+a4]
0x517930: push    eax; argC
0x517931: mov     eax, [esp+1Ch+a3]
0x517935: push    edx; a4
0x517936: mov     edx, [esp+20h+a5]
0x51793A: push    eax; a3
0x51793B: push    edx; a5
0x51793C: call    Script_RunSomething??
0x517941: pop     esi
0x517942: pop     ebx
0x517943: retn    20h ; ' '
