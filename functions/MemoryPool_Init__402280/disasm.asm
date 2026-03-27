0x402280: push    0FFFFFFFFh
0x402282: push    offset MemoryPool_Init_SEH
0x402287: mov     eax, large fs:0
0x40228D: push    eax
0x40228E: push    ecx
0x40228F: push    ebx
0x402290: push    ebp
0x402291: push    esi
0x402292: push    edi
0x402293: mov     eax, ___security_cookie
0x402298: xor     eax, esp
0x40229A: push    eax; flProtect
0x40229B: lea     eax, [esp+24h+var_C]
0x40229F: mov     large fs:0, eax
0x4022A5: mov     esi, ecx
0x4022A7: mov     [esp+24h+var_10], esi
0x4022AB: lea     ecx, [esi+80h]; lpCriticalSection
0x4022B1: call    NiInitalizeCriticalSection
0x4022B6: mov     eax, [esp+24h+arg_4]
0x4022BA: xor     ecx, ecx
0x4022BC: mov     ebp, eax
0x4022BE: mov     [esi+110h], eax
0x4022C4: mov     eax, [esp+24h+arg_0]
0x4022C8: shr     ebp, 0Ch
0x4022CB: cmp     eax, ecx
0x4022CD: mov     [esp+24h+var_4], ecx
0x4022D1: mov     [esi+44h], ecx
0x4022D4: mov     [esi+114h], ecx
0x4022DA: mov     [esi+118h], ecx
0x4022E0: mov     [esi+104h], ecx
0x4022E6: mov     [esi+10Ch], ebp
0x4022EC: mov     [esi+100h], eax
0x4022F2: jz      short loc_402300
0x4022F4: add     eax, 3
0x4022F7: and     eax, 0FFFFFFFCh
0x4022FA: mov     [esi+100h], eax
0x402300: mov     ebx, ds:VirtualAlloc
0x402306: mov     [esi+40h], ecx
0x402309: mov     edi, 1
0x40230E: mov     edi, edi
0x402310: mov     eax, [esi+110h]
0x402316: push    4; flAllocationType
0x402318: push    2000h; flAllocationType
0x40231D: mov     ecx, edi
0x40231F: push    eax; dwSize
0x402320: shl     ecx, 18h
0x402323: push    ecx; lpAddress
0x402324: call    ebx ; VirtualAlloc
0x402326: cmp     edi, 0FFh
0x40232C: mov     [esi+40h], eax
0x40232F: jnb     short loc_402338
0x402331: add     edi, 1
0x402334: test    eax, eax
0x402336: jz      short loc_402310
0x402338: test    eax, eax
0x40233A: jz      loc_4023DA
0x402340: xor     ecx, ecx
0x402342: mov     eax, ebp
0x402344: mov     edx, 2
0x402349: mul     edx
0x40234B: seto    cl
0x40234E: neg     ecx
0x402350: or      ecx, eax
0x402352: push    ecx; Size
0x402353: call    FormHeapAlloc
0x402358: mov     [esi+108h], eax
0x40235E: xor     eax, eax
0x402360: add     esp, 4
0x402363: cmp     [esi+10Ch], eax
0x402369: jbe     short loc_402387
0x40236B: jmp     short loc_402370
0x40236D: align 10h
0x402370: mov     ecx, [esi+108h]
0x402376: mov     word ptr [ecx+eax*2], 0FFFFh
0x40237C: add     eax, 1
0x40237F: cmp     eax, [esi+10Ch]
0x402385: jb      short loc_402370
0x402387: mov     edx, [esi+100h]
0x40238D: shr     edx, 2
0x402390: mov     g_HeapPoolsBySize[edx*4], esi
0x402397: mov     eax, [esi+110h]
0x40239D: mov     ecx, eax
0x40239F: shr     ecx, 18h
0x4023A2: test    eax, 0FFFFFFh
0x4023A7: jz      short loc_4023AC
0x4023A9: add     ecx, 1
0x4023AC: test    ecx, ecx
0x4023AE: movzx   eax, byte ptr [esi+43h]
0x4023B2: jbe     short loc_4023BF
0x4023B4: lea     edi, ds:0B32C80h[eax*4]
0x4023BB: mov     eax, esi
0x4023BD: rep stosd
0x4023BF: mov     eax, [esp+24h+arg_8]
0x4023C3: test    eax, eax
0x4023C5: push    40h ; '@'; Count
0x4023C7: jz      short loc_4023CC
0x4023C9: push    eax
0x4023CA: jmp     short loc_4023D1
0x4023CC: push    offset Source; "Unknown Memory Pool"
0x4023D1: push    esi; Dest
0x4023D2: call    _strncpy
0x4023D7: add     esp, 0Ch
0x4023DA: mov     eax, esi
0x4023DC: mov     ecx, [esp+24h+var_C]
0x4023E0: mov     large fs:0, ecx
0x4023E7: pop     ecx
0x4023E8: pop     edi
0x4023E9: pop     esi
0x4023EA: pop     ebp
0x4023EB: pop     ebx
0x4023EC: add     esp, 10h
0x4023EF: retn    0Ch
