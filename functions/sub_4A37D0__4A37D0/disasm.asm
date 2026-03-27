0x4A37D0: push    ecx
0x4A37D1: push    ebx
0x4A37D2: push    ebp
0x4A37D3: push    esi
0x4A37D4: mov     esi, ecx
0x4A37D6: mov     eax, [esi]
0x4A37D8: mov     edx, [eax+24h]
0x4A37DB: xor     ebp, ebp
0x4A37DD: call    edx
0x4A37DF: mov     ecx, eax
0x4A37E1: call    NiDX92DBufferData__GetSurfaceData
0x4A37E6: mov     ebx, eax
0x4A37E8: mov     ecx, esi
0x4A37EA: mov     [esp+10h+var_4], ebx
0x4A37EE: call    sub_4A3560
0x4A37F3: test    ebx, ebx
0x4A37F5: jz      short loc_4A3873
0x4A37F7: mov     eax, [esi]
0x4A37F9: mov     edx, [eax+24h]
0x4A37FC: push    edi
0x4A37FD: mov     ecx, esi
0x4A37FF: call    edx
0x4A3801: test    eax, eax
0x4A3803: jz      short loc_4A380A
0x4A3805: lea     edi, [eax+4]
0x4A3808: jmp     short loc_4A380C
0x4A380A: xor     edi, edi
0x4A380C: xor     ecx, ecx
0x4A380E: mov     eax, ebx
0x4A3810: mov     edx, 8
0x4A3815: mul     edx
0x4A3817: seto    cl
0x4A381A: neg     ecx
0x4A381C: or      ecx, eax
0x4A381E: push    ecx; Size
0x4A381F: call    FormHeapAlloc
0x4A3824: add     esp, 4
0x4A3827: test    edi, edi
0x4A3829: mov     ebp, eax
0x4A382B: jz      short loc_4A3872
0x4A382D: mov     ebx, ebp
0x4A382F: nop
0x4A3830: mov     esi, [edi]
0x4A3832: test    esi, esi
0x4A3834: jz      short loc_4A3867
0x4A3836: mov     eax, [esi]
0x4A3838: mov     edx, [eax+4]
0x4A383B: mov     ecx, esi
0x4A383D: call    edx
0x4A383F: mov     eax, [eax+0Ch]
0x4A3842: mov     [ebx], eax
0x4A3844: mov     edx, [esi]
0x4A3846: mov     eax, [edx+0Ch]
0x4A3849: mov     ecx, esi
0x4A384B: call    eax
0x4A384D: test    eax, eax
0x4A384F: jz      short loc_4A385F
0x4A3851: mov     edx, [esi]
0x4A3853: mov     eax, [edx+0Ch]
0x4A3856: mov     ecx, esi
0x4A3858: call    eax
0x4A385A: mov     eax, [eax+0Ch]
0x4A385D: jmp     short loc_4A3861
0x4A385F: xor     eax, eax
0x4A3861: mov     [ebx+4], eax
0x4A3864: add     ebx, 8
0x4A3867: mov     edi, [edi+4]
0x4A386A: test    edi, edi
0x4A386C: jnz     short loc_4A3830
0x4A386E: mov     ebx, [esp+14h+var_4]
0x4A3872: pop     edi
0x4A3873: lea     ecx, ds:0[ebx*8]
0x4A387A: push    ecx; Size
0x4A387B: push    ebp; Src
0x4A387C: push    53474452h; int
0x4A3881: call    TESForm_PutFormRecordChunkData
0x4A3886: add     esp, 0Ch
0x4A3889: test    ebx, ebx
0x4A388B: jz      short loc_4A3896
0x4A388D: push    ebp
0x4A388E: call    FormHeapFree
0x4A3893: add     esp, 4
0x4A3896: pop     esi
0x4A3897: pop     ebp
0x4A3898: pop     ebx
0x4A3899: pop     ecx
0x4A389A: retn
