0x4FA910: push    ebx
0x4FA911: push    ebp
0x4FA912: push    esi
0x4FA913: push    8; Size
0x4FA915: mov     esi, ecx
0x4FA917: call    FormHeapAlloc
0x4FA91C: add     esp, 4
0x4FA91F: test    eax, eax
0x4FA921: jz      short loc_4FA934
0x4FA923: mov     dword ptr [eax], 0
0x4FA929: mov     dword ptr [eax+4], 0
0x4FA930: mov     ebp, eax
0x4FA932: jmp     short loc_4FA936
0x4FA934: xor     ebp, ebp
0x4FA936: lea     ebx, [esi+48h]
0x4FA939: test    ebx, ebx
0x4FA93B: jz      short loc_4FA9AD
0x4FA93D: push    edi
0x4FA93E: mov     edi, edi
0x4FA940: mov     edi, [ebx]
0x4FA942: test    edi, edi
0x4FA944: jz      short loc_4FA9AC
0x4FA946: mov     ebx, [ebx+4]
0x4FA949: push    18h; Size
0x4FA94B: call    FormHeapAlloc
0x4FA950: mov     esi, eax
0x4FA952: add     esp, 4
0x4FA955: test    esi, esi
0x4FA957: jz      short loc_4FA9A8
0x4FA959: mov     al, [edi+10h]
0x4FA95C: mov     [esi+10h], al
0x4FA95F: mov     ecx, [edi]
0x4FA961: mov     [esi], ecx
0x4FA963: fld     qword ptr [edi+8]
0x4FA966: lea     eax, [ebp+4]
0x4FA969: fstp    qword ptr [esi+8]
0x4FA96C: cmp     dword ptr [eax], 0
0x4FA96F: mov     edi, ebp
0x4FA971: jz      short loc_4FA97E
0x4FA973: mov     edi, [eax]
0x4FA975: cmp     dword ptr [edi+4], 0
0x4FA979: lea     eax, [edi+4]
0x4FA97C: jnz     short loc_4FA973
0x4FA97E: cmp     dword ptr [edi], 0
0x4FA981: jz      short loc_4FA9A6
0x4FA983: push    8; Size
0x4FA985: call    FormHeapAlloc
0x4FA98A: add     esp, 4
0x4FA98D: test    eax, eax
0x4FA98F: jz      short loc_4FA99F
0x4FA991: mov     [eax], esi
0x4FA993: mov     dword ptr [eax+4], 0
0x4FA99A: mov     [edi+4], eax
0x4FA99D: jmp     short loc_4FA9A8
0x4FA99F: xor     eax, eax
0x4FA9A1: mov     [edi+4], eax
0x4FA9A4: jmp     short loc_4FA9A8
0x4FA9A6: mov     [edi], esi
0x4FA9A8: test    ebx, ebx
0x4FA9AA: jnz     short loc_4FA940
0x4FA9AC: pop     edi
0x4FA9AD: pop     esi
0x4FA9AE: mov     eax, ebp
0x4FA9B0: pop     ebp
0x4FA9B1: pop     ebx
0x4FA9B2: retn
