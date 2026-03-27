0x4FD0A0: push    ecx
0x4FD0A1: push    ebx
0x4FD0A2: push    ebp
0x4FD0A3: push    esi
0x4FD0A4: xor     ebx, ebx
0x4FD0A6: lea     esi, [ecx+44h]
0x4FD0A9: cmp     esi, ebx
0x4FD0AB: push    edi
0x4FD0AC: mov     edi, [esp+14h+Str]
0x4FD0B0: mov     [esp+14h+var_4], ecx
0x4FD0B4: mov     ebp, 1
0x4FD0B9: jz      short loc_4FD0F5
0x4FD0BB: jmp     short loc_4FD0C0
0x4FD0BD: align 10h
0x4FD0C0: mov     eax, [esi]
0x4FD0C2: cmp     eax, ebx
0x4FD0C4: jz      short loc_4FD0F5
0x4FD0C6: cmp     edi, ebx
0x4FD0C8: jz      short loc_4FD0DC
0x4FD0CA: mov     eax, [eax]
0x4FD0CC: cmp     eax, ebx
0x4FD0CE: jz      short loc_4FD0DC
0x4FD0D0: push    edi; Str2
0x4FD0D1: push    eax; Str1
0x4FD0D2: call    __strcmp
0x4FD0D7: add     esp, 8
0x4FD0DA: jmp     short loc_4FD0E7
0x4FD0DC: xor     eax, eax
0x4FD0DE: cmp     edi, ebx
0x4FD0E0: setz    al
0x4FD0E3: lea     eax, [eax+eax-1]
0x4FD0E7: cmp     eax, ebx
0x4FD0E9: jz      short loc_4FD117
0x4FD0EB: mov     esi, [esi+4]
0x4FD0EE: add     ebp, 1
0x4FD0F1: cmp     esi, ebx
0x4FD0F3: jnz     short loc_4FD0C0
0x4FD0F5: push    10h; Size
0x4FD0F7: call    FormHeapAlloc
0x4FD0FC: add     esp, 4
0x4FD0FF: cmp     eax, ebx
0x4FD101: jz      short loc_4FD158
0x4FD103: mov     [eax], ebx
0x4FD105: mov     [eax+4], bx
0x4FD109: mov     [eax+6], bx
0x4FD10D: mov     [eax+8], ebx
0x4FD110: mov     [eax+0Ch], ebx
0x4FD113: mov     esi, eax
0x4FD115: jmp     short loc_4FD15A
0x4FD117: cmp     [esp+14h+arg_4], bl
0x4FD11B: mov     [edi+200h], ebp
0x4FD121: mov     eax, [esi]
0x4FD123: mov     ecx, [eax+8]
0x4FD126: mov     [edi+210h], ecx
0x4FD12C: jz      short loc_4FD143
0x4FD12E: mov     eax, [edi+20Ch]
0x4FD134: mov     edx, [esi]
0x4FD136: pop     edi
0x4FD137: pop     esi
0x4FD138: pop     ebp
0x4FD139: mov     [edx+0Ch], eax
0x4FD13C: mov     al, 1
0x4FD13E: pop     ebx
0x4FD13F: pop     ecx
0x4FD140: retn    0Ch
0x4FD143: mov     ecx, [esi]
0x4FD145: mov     edx, [ecx+0Ch]
0x4FD148: mov     [edi+20Ch], edx
0x4FD14E: pop     edi
0x4FD14F: pop     esi
0x4FD150: pop     ebp
0x4FD151: mov     al, 1
0x4FD153: pop     ebx
0x4FD154: pop     ecx
0x4FD155: retn    0Ch
0x4FD158: xor     esi, esi
0x4FD15A: cmp     [esp+14h+arg_4], bl
0x4FD15E: jnz     loc_4FD24E
0x4FD164: push    offset aPlayer; "Player"
0x4FD169: push    edi; Str1
0x4FD16A: call    __strcmp
0x4FD16F: add     esp, 8
0x4FD172: test    eax, eax
0x4FD174: jnz     short loc_4FD180
0x4FD176: mov     eax, ds:0B333C4h
0x4FD17B: mov     [esi+8], eax
0x4FD17E: jmp     short loc_4FD1DD
0x4FD180: mov     ecx, ds:0B33A98h
0x4FD186: push    edi
0x4FD187: call    sub_447160
0x4FD18C: cmp     eax, ebx
0x4FD18E: mov     [esi+8], eax
0x4FD191: jnz     short loc_4FD1DD
0x4FD193: mov     ecx, ds:0B33A98h
0x4FD199: push    edi
0x4FD19A: call    sub_4474D0
0x4FD19F: cmp     eax, ebx
0x4FD1A1: mov     [esi+8], eax
0x4FD1A4: jnz     short loc_4FD1DD
0x4FD1A6: push    10h; Radix
0x4FD1A8: lea     ecx, [esp+18h+Str]
0x4FD1AC: push    ecx; EndPtr
0x4FD1AD: push    edi; Str
0x4FD1AE: mov     [esp+20h+Str], ebx
0x4FD1B2: call    _strtoul
0x4FD1B7: add     esp, 0Ch
0x4FD1BA: cmp     eax, ebx
0x4FD1BC: jz      short loc_4FD21F
0x4FD1BE: mov     ecx, [esp+14h+Str]
0x4FD1C2: cmp     ecx, ebx
0x4FD1C4: jz      short loc_4FD21F
0x4FD1C6: cmp     [ecx], bl
0x4FD1C8: jnz     short loc_4FD21F
0x4FD1CA: mov     ecx, ds:0B33A98h
0x4FD1D0: push    eax
0x4FD1D1: call    TESDataHandler_LookupFormByID
0x4FD1D6: cmp     eax, ebx
0x4FD1D8: mov     [esi+8], eax
0x4FD1DB: jz      short loc_4FD21F
0x4FD1DD: mov     ebp, [esp+14h+var_4]
0x4FD1E1: cmp     dword ptr [ebp+8], 1
0x4FD1E5: jz      short loc_4FD252
0x4FD1E7: mov     edx, [esi+8]
0x4FD1EA: push    ebx; int
0x4FD1EB: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4FD1F0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FD1F5: push    ebx; int
0x4FD1F6: push    edx; void *
0x4FD1F7: call    OblivionDynamicCast
0x4FD1FC: add     esp, 14h
0x4FD1FF: cmp     eax, ebx
0x4FD201: jz      short loc_4FD252
0x4FD203: mov     ecx, eax; this
0x4FD205: call    TESObjectREFR_IsPersistent?
0x4FD20A: test    al, al
0x4FD20C: jnz     short loc_4FD252
0x4FD20E: push    edi; ArgList
0x4FD20F: push    offset aNonPersistentR; "Non-persistent reference '%s' cannot be"...
0x4FD214: push    ebp; int
0x4FD215: call    sub_4FCE30
0x4FD21A: add     esp, 0Ch
0x4FD21D: jmp     short loc_4FD223
0x4FD21F: mov     ebp, [esp+14h+var_4]
0x4FD223: cmp     [esp+14h+arg_8], bl
0x4FD227: jnz     short loc_4FD252
0x4FD229: mov     eax, [esi]
0x4FD22B: push    eax
0x4FD22C: call    FormHeapFree
0x4FD231: push    esi
0x4FD232: mov     [esi], ebx
0x4FD234: mov     [esi+6], bx
0x4FD238: mov     [esi+4], bx
0x4FD23C: call    FormHeapFree
0x4FD241: add     esp, 8
0x4FD244: pop     edi
0x4FD245: pop     esi
0x4FD246: pop     ebp
0x4FD247: xor     al, al
0x4FD249: pop     ebx
0x4FD24A: pop     ecx
0x4FD24B: retn    0Ch
0x4FD24E: mov     ebp, [esp+14h+var_4]
0x4FD252: cmp     [esp+14h+arg_4], bl
0x4FD256: jz      short loc_4FD266
0x4FD258: mov     [esi+8], ebx
0x4FD25B: mov     ecx, [edi+20Ch]
0x4FD261: mov     [esi+0Ch], ecx
0x4FD264: jmp     short loc_4FD272
0x4FD266: mov     edx, [esi+8]
0x4FD269: mov     [edi+210h], edx
0x4FD26F: mov     [esi+0Ch], ebx
0x4FD272: push    ebx; a3
0x4FD273: push    edi; a2
0x4FD274: mov     ecx, esi; this
0x4FD276: call    BSStringT_Set
0x4FD27B: add     dword ptr [ebp+2Ch], 1
0x4FD27F: push    esi
0x4FD280: lea     ecx, [ebp+44h]
0x4FD283: call    BSSimpleList_PushBack
0x4FD288: mov     eax, [ebp+2Ch]
0x4FD28B: mov     [edi+200h], eax
0x4FD291: pop     edi
0x4FD292: pop     esi
0x4FD293: pop     ebp
0x4FD294: mov     al, 1
0x4FD296: pop     ebx
0x4FD297: pop     ecx
0x4FD298: retn    0Ch
