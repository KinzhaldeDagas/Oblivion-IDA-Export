0x4BE090: push    0FFFFFFFFh
0x4BE092: push    offset SEH_4BE090
0x4BE097: mov     eax, large fs:0
0x4BE09D: push    eax
0x4BE09E: push    ecx
0x4BE09F: push    ebx
0x4BE0A0: push    ebp
0x4BE0A1: push    esi
0x4BE0A2: push    edi
0x4BE0A3: mov     eax, ds:0B30AACh
0x4BE0A8: xor     eax, esp
0x4BE0AA: push    eax
0x4BE0AB: lea     eax, [esp+24h+var_C]
0x4BE0AF: mov     large fs:0, eax
0x4BE0B5: mov     [esp+24h+var_10], ecx
0x4BE0B9: mov     ebx, [esp+24h+arg_0]
0x4BE0BD: test    ebx, ebx
0x4BE0BF: jz      loc_4BE1E0
0x4BE0C5: mov     edi, [esp+24h+arg_8]
0x4BE0C9: mov     ebp, [esp+24h+arg_4]
0x4BE0CD: push    edi; signed int
0x4BE0CE: push    ebp; signed int
0x4BE0CF: mov     ecx, ebx; this
0x4BE0D1: call    TESWorldSpace__GetCellAtCellCoord
0x4BE0D6: mov     esi, eax
0x4BE0D8: test    esi, esi
0x4BE0DA: jz      short loc_4BE115
0x4BE0DC: mov     ebx, ds:0B333A0h
0x4BE0E2: mov     ecx, esi; this
0x4BE0E4: call    TESObjectCELL_IsInterior
0x4BE0E9: test    al, al
0x4BE0EB: push    esi; a2
0x4BE0EC: mov     ecx, ebx; this
0x4BE0EE: jz      short loc_4BE0F7
0x4BE0F0: call    TES__IsInteriorCellPreloaded
0x4BE0F5: jmp     short loc_4BE0FC
0x4BE0F7: call    sub_43FEA0
0x4BE0FC: test    al, al
0x4BE0FE: jz      short loc_4BE111
0x4BE100: mov     ecx, ds:0B333A0h
0x4BE106: push    esi
0x4BE107: call    sub_442740
0x4BE10C: jmp     loc_4BE1E0
0x4BE111: mov     ebx, [esp+24h+arg_0]
0x4BE115: mov     ecx, [esp+24h+var_10]
0x4BE119: push    edi
0x4BE11A: push    ebp
0x4BE11B: call    sub_4BDE80
0x4BE120: test    al, al
0x4BE122: jnz     loc_4BE1E0
0x4BE128: push    14h; Size
0x4BE12A: call    FormHeapAlloc
0x4BE12F: mov     esi, eax
0x4BE131: push    20h ; ' '; Size
0x4BE133: mov     [esi+8], ebx
0x4BE136: mov     [esi], ebp
0x4BE138: mov     [esi+4], edi
0x4BE13B: mov     byte ptr [esi+10h], 0
0x4BE13F: mov     dword ptr [esi+0Ch], 0
0x4BE146: call    FormHeapAlloc
0x4BE14B: mov     ebx, [esp+2Ch+var_10]
0x4BE14F: add     esp, 8
0x4BE152: test    eax, eax
0x4BE154: jz      short loc_4BE163
0x4BE156: push    esi
0x4BE157: push    ebx
0x4BE158: mov     ecx, eax
0x4BE15A: call    sub_4BE040
0x4BE15F: mov     esi, eax
0x4BE161: jmp     short loc_4BE165
0x4BE163: xor     esi, esi
0x4BE165: test    esi, esi
0x4BE167: mov     [esp+24h+arg_0], esi
0x4BE16B: jz      short loc_4BE177
0x4BE16D: lea     eax, [esi+8]
0x4BE170: push    eax; lpAddend
0x4BE171: call    dword ptr ds:0A28078h
0x4BE177: push    edi
0x4BE178: push    ebp
0x4BE179: mov     [esp+2Ch+var_4], 0
0x4BE181: call    sub_4EF1D0
0x4BE186: add     esp, 8
0x4BE189: test    esi, esi
0x4BE18B: push    1
0x4BE18D: push    ecx
0x4BE18E: mov     edi, eax
0x4BE190: mov     eax, esp
0x4BE192: mov     [esp+2Ch+arg_8], esp
0x4BE196: mov     [eax], esi
0x4BE198: jz      short loc_4BE1A4
0x4BE19A: lea     ecx, [esi+8]
0x4BE19D: push    ecx; lpAddend
0x4BE19E: call    dword ptr ds:0A28078h
0x4BE1A4: mov     edx, [ebx]
0x4BE1A6: mov     eax, [edx+0Ch]
0x4BE1A9: push    edi
0x4BE1AA: mov     ecx, ebx
0x4BE1AC: call    eax
0x4BE1AE: mov     ecx, ds:0B33A10h
0x4BE1B4: mov     edx, [ecx]
0x4BE1B6: mov     eax, [edx+3Ch]
0x4BE1B9: push    esi
0x4BE1BA: call    eax
0x4BE1BC: test    esi, esi
0x4BE1BE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4BE1C6: jz      short loc_4BE1E0
0x4BE1C8: lea     ecx, [esi+8]
0x4BE1CB: push    ecx; lpAddend
0x4BE1CC: call    dword ptr ds:0A2807Ch
0x4BE1D2: test    eax, eax
0x4BE1D4: jnz     short loc_4BE1E0
0x4BE1D6: mov     edx, [esi]
0x4BE1D8: mov     eax, [edx]
0x4BE1DA: push    1
0x4BE1DC: mov     ecx, esi
0x4BE1DE: call    eax
0x4BE1E0: mov     ecx, dword ptr [esp+24h+var_C]
0x4BE1E4: mov     large fs:0, ecx
0x4BE1EB: pop     ecx
0x4BE1EC: pop     edi
0x4BE1ED: pop     esi
0x4BE1EE: pop     ebp
0x4BE1EF: pop     ebx
0x4BE1F0: add     esp, 10h
0x4BE1F3: retn    0Ch
