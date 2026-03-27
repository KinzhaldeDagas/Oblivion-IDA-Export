0x440200: mov     eax, ecx
0x440202: mov     ecx, ds:0B333A0h
0x440208: cmp     dword ptr [ecx+34h], 0
0x44020C: jz      short loc_440223
0x44020E: mov     ecx, [eax+58h]
0x440211: test    ecx, ecx
0x440213: jz      short locret_440266
0x440215: mov     edx, [eax+24h]
0x440218: mov     eax, [eax+20h]
0x44021B: push    edx
0x44021C: push    eax
0x44021D: call    sub_49B5F0
0x440222: retn
0x440223: mov     eax, ds:0B06A2Ch
0x440228: push    edi
0x440229: xor     edi, edi
0x44022B: push    esi
0x44022C: lea     esp, [esp+0]
0x440230: cmp     edi, eax
0x440232: jnb     short loc_440264
0x440234: xor     esi, esi
0x440236: cmp     esi, eax
0x440238: jnb     short loc_44025F
0x44023A: mov     ecx, ds:0B333A0h
0x440240: mov     ecx, [ecx+8]
0x440243: push    esi
0x440244: push    edi
0x440245: call    GetGridEntry
0x44024A: mov     edx, [eax]
0x44024C: mov     ecx, [eax+4]
0x44024F: push    edx
0x440250: call    sub_49A000
0x440255: mov     eax, ds:0B06A2Ch
0x44025A: add     esi, 1
0x44025D: jmp     short loc_440236
0x44025F: add     edi, 1
0x440262: jmp     short loc_440230
0x440264: pop     esi
0x440265: pop     edi
0x440266: retn
