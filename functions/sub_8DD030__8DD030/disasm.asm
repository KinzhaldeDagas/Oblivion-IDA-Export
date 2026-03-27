0x8DD030: push    ebx
0x8DD031: push    esi
0x8DD032: mov     esi, [esp+8+arg_0]
0x8DD036: push    edi
0x8DD037: mov     edi, [esi+110h]
0x8DD03D: dec     edi
0x8DD03E: js      short loc_8DD05A
0x8DD040: mov     ebx, [esp+0Ch+arg_4]
0x8DD044: mov     eax, [esi+10Ch]
0x8DD04A: mov     ecx, [eax+edi*4]
0x8DD04D: test    ecx, ecx
0x8DD04F: jz      short loc_8DD057
0x8DD051: mov     edx, [ecx]
0x8DD053: push    ebx
0x8DD054: call    dword ptr [edx+8]
0x8DD057: dec     edi
0x8DD058: jns     short loc_8DD044
0x8DD05A: mov     edx, [esi+110h]
0x8DD060: dec     edx
0x8DD061: js      short loc_8DD0AD
0x8DD063: mov     eax, [esi+10Ch]
0x8DD069: cmp     dword ptr [eax+edx*4], 0
0x8DD06D: jnz     short loc_8DD0AA
0x8DD06F: mov     ebx, [esi+110h]
0x8DD075: dec     ebx
0x8DD076: mov     ecx, ebx
0x8DD078: cmp     edx, ecx
0x8DD07A: mov     [esi+110h], ebx
0x8DD080: mov     eax, edx
0x8DD082: jge     short loc_8DD0AA
0x8DD084: jmp     short loc_8DD090
0x8DD086: align 10h
0x8DD090: mov     ecx, [esi+10Ch]
0x8DD096: mov     edi, [ecx+eax*4+4]
0x8DD09A: lea     ecx, [ecx+eax*4]
0x8DD09D: mov     [ecx], edi
0x8DD09F: mov     ecx, [esi+110h]
0x8DD0A5: inc     eax
0x8DD0A6: cmp     eax, ecx
0x8DD0A8: jl      short loc_8DD090
0x8DD0AA: dec     edx
0x8DD0AB: jns     short loc_8DD063
0x8DD0AD: pop     edi
0x8DD0AE: pop     esi
0x8DD0AF: pop     ebx
0x8DD0B0: retn
