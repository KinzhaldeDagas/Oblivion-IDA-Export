0x8CE8F0: fld     dword ptr ds:0A99DCCh
0x8CE8F6: push    ebx
0x8CE8F7: push    esi
0x8CE8F8: mov     esi, ecx
0x8CE8FA: xor     ebx, ebx
0x8CE8FC: fstp    dword ptr [esi+4]
0x8CE8FF: mov     [esi+14h], ebx
0x8CE902: mov     ecx, ds:0BA7A50h
0x8CE908: cmp     ecx, ebx
0x8CE90A: push    edi
0x8CE90B: jz      short loc_8CE97A
0x8CE90D: xor     edi, edi
0x8CE90F: cmp     [esi+1B4h], ebx
0x8CE915: jle     short loc_8CE97A
0x8CE917: jmp     short loc_8CE926
0x8CE919: align 10h
0x8CE920: mov     ecx, ds:0BA7A50h
0x8CE926: mov     eax, [esi+1A4h]
0x8CE92C: mov     edx, [eax+edi*4]
0x8CE92F: mov     eax, [edx+30h]
0x8CE932: and     eax, 3Fh
0x8CE935: cmp     eax, 0Eh
0x8CE938: jz      short loc_8CE93F
0x8CE93A: cmp     eax, 10h
0x8CE93D: jnz     short loc_8CE96C
0x8CE93F: mov     eax, [esi+1B0h]
0x8CE945: mov     eax, [eax+edi*4]
0x8CE948: test    eax, eax
0x8CE94A: jnz     short loc_8CE958
0x8CE94C: mov     edx, [esi+1BCh]
0x8CE952: push    eax
0x8CE953: add     edx, ebx
0x8CE955: push    edx
0x8CE956: jmp     short loc_8CE967
0x8CE958: cmp     eax, 1
0x8CE95B: jnz     short loc_8CE96C
0x8CE95D: push    eax
0x8CE95E: mov     eax, [esi+1BCh]
0x8CE964: add     eax, ebx
0x8CE966: push    eax
0x8CE967: call    ecx ; dword_BA7A50
0x8CE969: add     esp, 8
0x8CE96C: add     edi, 1
0x8CE96F: add     ebx, 30h ; '0'
0x8CE972: cmp     edi, [esi+1B4h]
0x8CE978: jl      short loc_8CE920
0x8CE97A: mov     ebx, [esi+1B4h]
0x8CE980: sub     ebx, 1
0x8CE983: js      loc_8CEA42
0x8CE989: lea     edi, [ebx+ebx*2]
0x8CE98C: shl     edi, 4
0x8CE98F: nop
0x8CE990: mov     ecx, [esi+1B0h]
0x8CE996: cmp     dword ptr [ecx+ebx*4], 1
0x8CE99A: lea     eax, [ecx+ebx*4]
0x8CE99D: jnz     loc_8CEA2E
0x8CE9A3: mov     edx, [esi+1A4h]
0x8CE9A9: mov     ecx, [edx+ebx*4]
0x8CE9AC: call    sub_8BC730
0x8CE9B1: mov     eax, [esi+1A4h]
0x8CE9B7: or      edx, 0FFFFFFFFh
0x8CE9BA: add     [esi+1A8h], edx
0x8CE9C0: mov     ecx, [esi+1A8h]
0x8CE9C6: mov     ecx, [eax+ecx*4]
0x8CE9C9: mov     [eax+ebx*4], ecx
0x8CE9CC: add     [esi+1C0h], edx
0x8CE9D2: mov     eax, [esi+1C0h]
0x8CE9D8: mov     ecx, [esi+1BCh]
0x8CE9DE: lea     eax, [eax+eax*2]
0x8CE9E1: shl     eax, 4
0x8CE9E4: movaps  xmm0, xmmword ptr [eax+ecx]
0x8CE9E8: add     eax, ecx
0x8CE9EA: movaps  xmmword ptr [edi+ecx], xmm0
0x8CE9EE: movaps  xmm0, xmmword ptr [eax+10h]
0x8CE9F2: movaps  xmmword ptr [edi+ecx+10h], xmm0
0x8CE9F7: mov     edx, [eax+20h]
0x8CE9FA: mov     [edi+ecx+20h], edx
0x8CE9FE: mov     edx, [eax+24h]
0x8CEA01: mov     [edi+ecx+24h], edx
0x8CEA05: mov     edx, [eax+28h]
0x8CEA08: mov     [edi+ecx+28h], edx
0x8CEA0C: mov     eax, [eax+2Ch]
0x8CEA0F: mov     [edi+ecx+2Ch], eax
0x8CEA13: add     dword ptr [esi+1B4h], 0FFFFFFFFh
0x8CEA1A: mov     ecx, [esi+1B4h]
0x8CEA20: mov     eax, [esi+1B0h]
0x8CEA26: mov     ecx, [eax+ecx*4]
0x8CEA29: mov     [eax+ebx*4], ecx
0x8CEA2C: jmp     short loc_8CEA34
0x8CEA2E: mov     dword ptr [eax], 1
0x8CEA34: sub     ebx, 1
0x8CEA37: sub     edi, 30h ; '0'
0x8CEA3A: test    ebx, ebx
0x8CEA3C: jge     loc_8CE990
0x8CEA42: pop     edi
0x8CEA43: pop     esi
0x8CEA44: pop     ebx
0x8CEA45: retn
