0x58B220: push    0FFFFFFFFh
0x58B222: push    offset SEH_8094D0
0x58B227: mov     eax, large fs:0
0x58B22D: push    eax
0x58B22E: push    ebx
0x58B22F: push    ebp
0x58B230: push    esi
0x58B231: push    edi
0x58B232: mov     eax, ds:0B30AACh
0x58B237: xor     eax, esp
0x58B239: push    eax
0x58B23A: lea     eax, [esp+20h+var_C]
0x58B23E: mov     large fs:0, eax
0x58B244: mov     ebp, ecx
0x58B246: mov     ecx, [ebp+18h]
0x58B249: mov     esi, [esp+20h+trait]
0x58B24D: xor     bl, bl
0x58B24F: test    ecx, ecx
0x58B251: mov     edi, ecx
0x58B253: jz      short loc_58B274
0x58B255: lea     eax, [ecx+8]
0x58B258: mov     eax, [eax]
0x58B25A: test    eax, eax
0x58B25C: mov     edi, ecx
0x58B25E: mov     ecx, [ecx]
0x58B260: jz      short loc_58B26C
0x58B262: movzx   edx, word ptr [eax+18h]
0x58B266: cmp     edx, esi
0x58B268: jz      short loc_58B2D5
0x58B26A: jg      short loc_58B272
0x58B26C: test    ecx, ecx
0x58B26E: jnz     short loc_58B255
0x58B270: jmp     short loc_58B274
0x58B272: mov     bl, 1
0x58B274: push    1Ch; Size
0x58B276: call    FormHeapAlloc
0x58B27B: add     esp, 4
0x58B27E: mov     [esp+20h+trait], eax
0x58B282: test    eax, eax
0x58B284: mov     [esp+20h+var_4], 0
0x58B28C: jz      short loc_58B29A
0x58B28E: push    esi; trait
0x58B28F: mov     ecx, eax; this
0x58B291: call    Tile__Value__Initialize;
0x58B296: mov     esi, eax
0x58B298: jmp     short loc_58B29C
0x58B29A: xor     esi, esi
0x58B29C: test    esi, esi
0x58B29E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x58B2A6: mov     [esp+20h+trait], esi
0x58B2AA: jz      short loc_58B2D3
0x58B2AC: test    bl, bl
0x58B2AE: mov     [esi], ebp
0x58B2B0: jz      short loc_58B2C6
0x58B2B2: test    edi, edi
0x58B2B4: jz      short loc_58B2C6
0x58B2B6: lea     eax, [esp+20h+trait]
0x58B2BA: push    eax
0x58B2BB: push    edi
0x58B2BC: lea     ecx, [ebp+14h]
0x58B2BF: call    NiTPointerList__InsertBeforePosition
0x58B2C4: jmp     short loc_58B2D3
0x58B2C6: lea     ecx, [esp+20h+trait]
0x58B2CA: push    ecx
0x58B2CB: lea     ecx, [ebp+14h]
0x58B2CE: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x58B2D3: mov     eax, esi
0x58B2D5: mov     ecx, [esp+20h+var_C]
0x58B2D9: mov     large fs:0, ecx
0x58B2E0: pop     ecx
0x58B2E1: pop     edi
0x58B2E2: pop     esi
0x58B2E3: pop     ebp
0x58B2E4: pop     ebx
0x58B2E5: add     esp, 0Ch
0x58B2E8: retn    4
0x9C6200: mov     eax, [ebp+4]
0x9C6203: push    eax
0x9C6204: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C6209: pop     ecx
0x9C620A: retn
0x9C620B: mov     edx, [esp+arg_4]
0x9C620F: lea     eax, [edx-10h]
0x9C6212: mov     ecx, [edx-14h]
0x9C6215: xor     ecx, eax
0x9C6217: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C621C: mov     eax, offset stru_AEE7E8
0x9C6221: jmp     ___CxxFrameHandler3
