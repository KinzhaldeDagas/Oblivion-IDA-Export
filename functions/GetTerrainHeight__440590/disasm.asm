0x440590: sub     esp, 8
0x440593: push    ebx
0x440594: push    ebp
0x440595: mov     ebp, [esp+10h+arg_0]
0x440599: fld     dword ptr [ebp+0]
0x44059C: push    esi
0x44059D: fstp    [esp+14h+var_8]
0x4405A1: push    edi
0x4405A2: mov     esi, ecx
0x4405A4: fld     [esp+18h+var_8]
0x4405A8: fistp   [esp+18h+arg_0]
0x4405AC: fld     dword ptr [ebp+4]
0x4405AF: mov     edi, [esp+18h+arg_0]
0x4405B3: fstp    [esp+18h+var_4]
0x4405B7: fld     [esp+18h+var_4]
0x4405BB: fistp   [esp+18h+var_8]
0x4405BF: mov     ebx, [esp+18h+var_8]
0x4405C3: mov     eax, edi
0x4405C5: and     eax, 80000FFFh
0x4405CA: jns     short loc_4405D3
0x4405CC: dec     eax
0x4405CD: or      eax, 0FFFFF000h
0x4405D2: inc     eax
0x4405D3: jnz     short loc_4405E8
0x4405D5: fld     dword ptr [ebp+0]
0x4405D8: fild    [esp+18h+arg_0]
0x4405DC: fcompp
0x4405DE: fnstsw  ax
0x4405E0: test    ah, 41h
0x4405E3: jnz     short loc_4405E8
0x4405E5: add     edi, 0FFFFFFFFh
0x4405E8: mov     ecx, ebx
0x4405EA: and     ecx, 80000FFFh
0x4405F0: jns     short loc_4405FA
0x4405F2: dec     ecx
0x4405F3: or      ecx, 0FFFFF000h
0x4405F9: inc     ecx
0x4405FA: jnz     short loc_44060F
0x4405FC: fld     dword ptr [ebp+4]
0x4405FF: fild    [esp+18h+var_8]
0x440603: fcompp
0x440605: fnstsw  ax
0x440607: test    ah, 41h
0x44060A: jnz     short loc_44060F
0x44060C: add     ebx, 0FFFFFFFFh
0x44060F: fld     dword ptr ds:0A37448h
0x440615: mov     edx, [esp+18h+arg_4]
0x440619: fstp    dword ptr [edx]
0x44061B: mov     ecx, [esi+30h]; this
0x44061E: sar     edi, 0Ch
0x440621: sar     ebx, 0Ch
0x440624: test    ecx, ecx
0x440626: jz      short loc_44063D
0x440628: call    TESObjectCELL_GetXCoordinate
0x44062D: cmp     eax, edi
0x44062F: jnz     short loc_44063D
0x440631: mov     ecx, [esi+30h]; this
0x440634: call    TESObjectCELL_GetYCoordinate
0x440639: cmp     eax, ebx
0x44063B: jz      short loc_440649
0x44063D: push    ebx; a3
0x44063E: push    edi; a2
0x44063F: mov     ecx, esi; this
0x440641: call    TES_GetCellFromCoords
0x440646: mov     [esi+30h], eax
0x440649: mov     ecx, [esi+30h]; this
0x44064C: test    ecx, ecx
0x44064E: jz      short GetTerrainHeight___def_44065C
0x440650: movsx   eax, byte ptr [ecx+26h]
0x440654: add     eax, 0FFFFFFFEh; switch 5 cases
0x440657: cmp     eax, 4
0x44065A: ja      short GetTerrainHeight___def_44065C
0x44065C: jmp     ds:jpt_44065C[eax*4]; switch jump
0x440663: mov     eax, [esp+18h+arg_4]; jumptable 0044065C cases 2-6
0x440667: push    eax
0x440668: push    ebp
0x440669: call    sub_4CE3C0
0x44066E: mov     ecx, eax
0x440670: call    sub_4C5B50
0x440675: pop     edi
0x440676: pop     esi
0x440677: pop     ebp
0x440678: pop     ebx
0x440679: add     esp, 8
0x44067C: retn    8
