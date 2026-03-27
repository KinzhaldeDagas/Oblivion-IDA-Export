0x735990: push    0FFFFFFFFh
0x735992: push    offset SEH_734B00
0x735997: mov     eax, large fs:0
0x73599D: push    eax
0x73599E: push    ecx
0x73599F: push    ebx
0x7359A0: push    ebp
0x7359A1: push    esi
0x7359A2: push    edi
0x7359A3: mov     eax, ds:0B30AACh
0x7359A8: xor     eax, esp
0x7359AA: push    eax
0x7359AB: lea     eax, [esp+24h+var_C]
0x7359AF: mov     large fs:0, eax
0x7359B5: mov     ebp, ecx
0x7359B7: mov     [esp+24h+var_10], ebp
0x7359BB: lea     eax, [ebp+80h]
0x7359C1: mov     dword ptr [ebp+0], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x7359C8: xor     ebx, ebx
0x7359CA: push    eax; lpCriticalSection
0x7359CB: mov     [eax+78h], ebx
0x7359CE: mov     [eax+7Ch], ebx
0x7359D1: call    dword ptr ds:0A28064h
0x7359D7: lea     edi, [ebp+108h]
0x7359DD: mov     ecx, edi
0x7359DF: mov     [esp+24h+var_4], ebx
0x7359E3: mov     dword ptr [ebp+0], offset ??_7NiSGIReader@@6B@; const NiSGIReader::`vftable'
0x7359EA: call    InitSurfacEData
0x7359EF: mov     ecx, 11h
0x7359F4: mov     esi, offset unk_B25E48
0x7359F9: mov     [ebp+100h], bx
0x735A00: mov     [ebp+102h], bx
0x735A07: mov     [ebp+104h], bx
0x735A0E: mov     [ebp+106h], bl
0x735A14: mov     [ebp+107h], bl
0x735A1A: rep movsd
0x735A1C: mov     eax, ebp
0x735A1E: mov     ecx, [esp+24h+var_C]
0x735A22: mov     large fs:0, ecx
0x735A29: pop     ecx
0x735A2A: pop     edi
0x735A2B: pop     esi
0x735A2C: pop     ebp
0x735A2D: pop     ebx
0x735A2E: add     esp, 10h
0x735A31: retn
