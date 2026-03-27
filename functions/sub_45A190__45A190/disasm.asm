0x45A190: sub     esp, 108h
0x45A196: mov     eax, ds:0B30AACh
0x45A19B: xor     eax, esp
0x45A19D: mov     [esp+108h+var_4], eax
0x45A1A4: push    esi
0x45A1A5: mov     esi, [esp+10Ch+arg_0]
0x45A1AC: push    edi
0x45A1AD: mov     edi, ecx
0x45A1AF: mov     eax, [edi+1C0h]
0x45A1B5: test    eax, eax
0x45A1B7: jz      short loc_45A1CE
0x45A1B9: push    eax; void *
0x45A1BA: mov     ecx, offset FormHeap
0x45A1BF: call    MemoryHeap_Free_checked
0x45A1C4: mov     dword ptr [edi+1C0h], 0
0x45A1CE: test    esi, esi
0x45A1D0: jz      loc_45A275
0x45A1D6: cmp     byte ptr [esi+24h], 0
0x45A1DA: jz      loc_45A275
0x45A1E0: add     esi, 3Ch ; '<'
0x45A1E3: push    offset SubStr; SubStr
0x45A1E8: push    esi; Str
0x45A1E9: call    _strstr
0x45A1EE: add     esp, 8
0x45A1F1: test    eax, eax
0x45A1F3: jz      short loc_45A20A
0x45A1F5: lea     esi, [eax+1]
0x45A1F8: push    offset SubStr; SubStr
0x45A1FD: push    esi; Str
0x45A1FE: call    _strstr
0x45A203: add     esp, 8
0x45A206: test    eax, eax
0x45A208: jnz     short loc_45A1F5
0x45A20A: lea     edx, [esp+110h+var_108]
0x45A20E: mov     eax, esi
0x45A210: sub     edx, esi
0x45A212: mov     cl, [eax]
0x45A214: mov     [edx+eax], cl
0x45A217: add     eax, 1
0x45A21A: test    cl, cl
0x45A21C: jnz     short loc_45A212
0x45A21E: lea     eax, [esp+110h+var_108]
0x45A222: lea     edx, [eax+1]
0x45A225: mov     cl, [eax]
0x45A227: add     eax, 1
0x45A22A: test    cl, cl
0x45A22C: jnz     short loc_45A225
0x45A22E: sub     eax, edx
0x45A230: mov     [esp+eax+110h+var_10C], cl
0x45A234: lea     eax, [esp+110h+var_108]
0x45A238: lea     edx, [eax+1]
0x45A23B: jmp     short loc_45A240
0x45A23D: align 10h
0x45A240: mov     cl, [eax]
0x45A242: add     eax, 1
0x45A245: test    cl, cl
0x45A247: jnz     short loc_45A240
0x45A249: sub     eax, edx
0x45A24B: push    1
0x45A24D: add     eax, 1
0x45A250: push    eax
0x45A251: mov     ecx, offset FormHeap
0x45A256: call    j_MemoryHeap_Alloc
0x45A25B: mov     [edi+1C0h], eax
0x45A261: lea     ecx, [esp+110h+var_108]
0x45A265: mov     edx, eax
0x45A267: mov     al, [ecx]
0x45A269: mov     [edx], al
0x45A26B: add     ecx, 1
0x45A26E: add     edx, 1
0x45A271: test    al, al
0x45A273: jnz     short loc_45A267
0x45A275: mov     ecx, [esp+110h+var_4]
0x45A27C: pop     edi
0x45A27D: pop     esi
0x45A27E: xor     ecx, esp
0x45A280: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45A285: add     esp, 108h
0x45A28B: retn    4
