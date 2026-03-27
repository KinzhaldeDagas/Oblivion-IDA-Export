0x540FD0: push    0FFFFFFFFh
0x540FD2: push    offset ??1Sky@@UAE@XZ_SEH
0x540FD7: mov     eax, large fs:0
0x540FDD: push    eax
0x540FDE: push    ecx
0x540FDF: push    ebx
0x540FE0: push    ebp
0x540FE1: push    esi
0x540FE2: push    edi
0x540FE3: mov     eax, ds:0B30AACh
0x540FE8: xor     eax, esp
0x540FEA: push    eax
0x540FEB: lea     eax, [esp+24h+var_C]
0x540FEF: mov     large fs:0, eax
0x540FF5: mov     esi, ecx
0x540FF7: mov     [esp+24h+var_10], esi
0x540FFB: xor     ebx, ebx
0x540FFD: mov     dword ptr [esi], offset ??_7Sky@@6B@; const Sky::`vftable'
0x541003: mov     [esi+4], ebx
0x541006: mov     [esp+24h+var_4], ebx
0x54100A: mov     [esi+8], ebx
0x54100D: fldz
0x54100F: lea     ebp, [esi+3Ch]
0x541012: mov     byte ptr [esp+24h+var_4], 1
0x541017: mov     eax, ebp
0x541019: mov     ecx, 9
0x54101E: fst     dword ptr [eax]
0x541020: add     eax, 0Ch
0x541023: sub     ecx, 1
0x541026: fst     dword ptr [eax-8]
0x541029: fst     dword ptr [eax-4]
0x54102C: jns     short loc_54101E
0x54102E: fst     dword ptr [esi+0B4h]
0x541034: fst     dword ptr [esi+0B8h]
0x54103A: fst     dword ptr [esi+0BCh]
0x541040: mov     [esi+20h], ebx
0x541043: mov     [esi+24h], ebx
0x541046: mov     [esi+2Ch], ebx
0x541049: mov     [esi+28h], ebx
0x54104C: mov     [esi+30h], ebx
0x54104F: mov     [esi+34h], ebx
0x541052: mov     [esi+38h], ebx
0x541055: mov     edi, [esi+4]
0x541058: cmp     edi, ebx
0x54105A: jz      short loc_54107F
0x54105C: lea     eax, [edi+4]
0x54105F: fstp    st
0x541061: push    eax; lpAddend
0x541062: call    dword ptr ds:0A2807Ch
0x541068: test    eax, eax
0x54106A: jnz     short loc_54107A
0x54106C: cmp     edi, ebx
0x54106E: jz      short loc_54107A
0x541070: mov     edx, [edi]
0x541072: mov     eax, [edx]
0x541074: push    1
0x541076: mov     ecx, edi
0x541078: call    eax
0x54107A: fldz
0x54107C: mov     [esi+4], ebx
0x54107F: mov     edi, [esi+8]
0x541082: cmp     edi, ebx
0x541084: jz      short loc_5410A9
0x541086: lea     ecx, [edi+4]
0x541089: fstp    st
0x54108B: push    ecx; lpAddend
0x54108C: call    dword ptr ds:0A2807Ch
0x541092: test    eax, eax
0x541094: jnz     short loc_5410A4
0x541096: cmp     edi, ebx
0x541098: jz      short loc_5410A4
0x54109A: mov     edx, [edi]
0x54109C: mov     eax, [edx]
0x54109E: push    1
0x5410A0: mov     ecx, edi
0x5410A2: call    eax
0x5410A4: fldz
0x5410A6: mov     [esi+8], ebx
0x5410A9: fld     dword ptr ds:0A31C80h
0x5410AF: mov     dword ptr [esi+0DCh], 4
0x5410B9: fstp    dword ptr [esi+0D0h]
0x5410BF: mov     [esi+0Ch], ebx
0x5410C2: mov     [esi+1Ch], ebx
0x5410C5: fst     dword ptr [esi+0D4h]
0x5410CB: mov     [esi+18h], ebx
0x5410CE: mov     [esi+14h], ebx
0x5410D1: mov     [esi+10h], ebx
0x5410D4: mov     eax, ebp
0x5410D6: mov     ecx, 0Ah
0x5410DB: mov     edx, ds:0B25AC4h
0x5410E1: mov     [eax], edx
0x5410E3: mov     edx, ds:0B25AC8h
0x5410E9: mov     [eax+4], edx
0x5410EC: mov     edx, ds:0B25ACCh
0x5410F2: mov     [eax+8], edx
0x5410F5: add     eax, 0Ch
0x5410F8: sub     ecx, 1
0x5410FB: jnz     short loc_5410DB
0x5410FD: mov     eax, ds:0B25AC4h
0x541102: mov     [esi+0B4h], eax
0x541108: mov     ecx, ds:0B25AC8h
0x54110E: mov     [esi+0B8h], ecx
0x541114: mov     edx, ds:0B25ACCh
0x54111A: fst     dword ptr [esi+0C0h]
0x541120: fld1
0x541122: push    8; Size
0x541124: fst     dword ptr [esi+0C4h]
0x54112A: mov     [esi+0BCh], edx
0x541130: fstp    dword ptr [esi+0D8h]
0x541136: fstp    dword ptr [esi+0F4h]
0x54113C: call    FormHeapAlloc
0x541141: add     esp, 4
0x541144: cmp     eax, ebx
0x541146: jz      short loc_54114F
0x541148: mov     [eax], ebx
0x54114A: mov     [eax+4], ebx
0x54114D: jmp     short loc_541151
0x54114F: xor     eax, eax
0x541151: fldz
0x541153: mov     [esi+0E0h], eax
0x541159: fstp    dword ptr [esi+0E4h]
0x54115F: mov     [esi+0ECh], ebx
0x541165: fld     dword ptr ds:0B36658h
0x54116B: mov     eax, esi
0x54116D: fstp    dword ptr [esi+0F0h]
0x541173: mov     dword ptr [esi+0FCh], 20h ; ' '
0x54117D: mov     [esi+100h], bl
0x541183: mov     ecx, dword ptr [esp+24h+var_C]
0x541187: mov     large fs:0, ecx
0x54118E: pop     ecx
0x54118F: pop     edi
0x541190: pop     esi
0x541191: pop     ebp
0x541192: pop     ebx
0x541193: add     esp, 10h
0x541196: retn
