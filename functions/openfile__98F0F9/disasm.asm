0x98F0F9: push    ebp
0x98F0FA: mov     ebp, esp
0x98F0FC: sub     esp, 10h
0x98F0FF: mov     eax, dword_BAA7B8
0x98F104: push    ebx
0x98F105: xor     ebx, ebx
0x98F107: push    esi
0x98F108: mov     esi, [ebp+arg_4]
0x98F10B: mov     [ebp+var_4], eax
0x98F10E: mov     [ebp+var_C], ebx
0x98F111: mov     [ebp+var_8], ebx
0x98F114: mov     [ebp+var_10], ebx
0x98F117: jmp     short loc_98F11A
0x98F119: inc     esi
0x98F11A: cmp     byte ptr [esi], 20h ; ' '
0x98F11D: jz      short loc_98F119
0x98F11F: mov     al, [esi]
0x98F121: cmp     al, 61h ; 'a'
0x98F123: jz      short loc_98F15E
0x98F125: cmp     al, 72h ; 'r'
0x98F127: jz      short loc_98F155
0x98F129: cmp     al, 77h ; 'w'
0x98F12B: jz      short loc_98F14C
0x98F12D: call    __errno
0x98F132: push    ebx
0x98F133: push    ebx
0x98F134: push    ebx
0x98F135: push    ebx
0x98F136: push    ebx
0x98F137: mov     dword ptr [eax], 16h
0x98F13D: call    __invalid_parameter
0x98F142: add     esp, 14h
0x98F145: xor     eax, eax
0x98F147: jmp     loc_98F397
0x98F14C: mov     [ebp+arg_4], 301h
0x98F153: jmp     short loc_98F165
0x98F155: or      [ebp+var_4], 1
0x98F159: mov     [ebp+arg_4], ebx
0x98F15C: jmp     short loc_98F169
0x98F15E: mov     [ebp+arg_4], 109h
0x98F165: or      [ebp+var_4], 2
0x98F169: xor     ecx, ecx
0x98F16B: inc     ecx
0x98F16C: inc     esi
0x98F16D: mov     al, [esi]
0x98F16F: cmp     al, bl
0x98F171: push    edi
0x98F172: jz      loc_98F331
0x98F178: mov     edx, 80h ; '€'
0x98F17D: mov     edi, 4000h
0x98F182: cmp     ecx, ebx
0x98F184: jz      loc_98F2B5
0x98F18A: movsx   eax, al
0x98F18D: cmp     eax, 53h ; 'S'
0x98F190: jg      loc_98F238
0x98F196: jz      loc_98F226
0x98F19C: sub     eax, 20h ; ' '
0x98F19F: jz      loc_98F2AA
0x98F1A5: sub     eax, 0Bh
0x98F1A8: jz      short loc_98F200
0x98F1AA: dec     eax
0x98F1AB: jz      short loc_98F1F4
0x98F1AD: sub     eax, 18h
0x98F1B0: jz      short loc_98F1E1
0x98F1B2: sub     eax, 0Ah
0x98F1B5: jz      short loc_98F1D9
0x98F1B7: sub     eax, 4
0x98F1BA: jnz     loc_98F33A
0x98F1C0: cmp     [ebp+var_8], ebx
0x98F1C3: jnz     loc_98F29F
0x98F1C9: or      [ebp+arg_4], 10h
0x98F1CD: mov     [ebp+var_8], 1
0x98F1D4: jmp     loc_98F2AA
0x98F1D9: or      [ebp+arg_4], edx
0x98F1DC: jmp     loc_98F2AA
0x98F1E1: test    byte ptr [ebp+arg_4], 40h
0x98F1E5: jnz     loc_98F29F
0x98F1EB: or      [ebp+arg_4], 40h
0x98F1EF: jmp     loc_98F2AA
0x98F1F4: mov     [ebp+var_10], 1
0x98F1FB: jmp     loc_98F29F
0x98F200: test    byte ptr [ebp+arg_4], 2
0x98F204: jnz     loc_98F29F
0x98F20A: mov     eax, [ebp+arg_4]
0x98F20D: and     eax, 0FFFFFFFEh
0x98F210: or      eax, 2
0x98F213: mov     [ebp+arg_4], eax
0x98F216: mov     eax, [ebp+var_4]
0x98F219: and     eax, 0FFFFFFFCh
0x98F21C: or      eax, edx
0x98F21E: mov     [ebp+var_4], eax
0x98F221: jmp     loc_98F2AA
0x98F226: cmp     [ebp+var_8], ebx
0x98F229: jnz     short loc_98F29F
0x98F22B: or      [ebp+arg_4], 20h
0x98F22F: mov     [ebp+var_8], 1
0x98F236: jmp     short loc_98F2AA
0x98F238: sub     eax, 54h ; 'T'
0x98F23B: jz      short loc_98F297
0x98F23D: sub     eax, 0Eh
0x98F240: jz      short loc_98F286
0x98F242: dec     eax
0x98F243: jz      short loc_98F275
0x98F245: sub     eax, 0Bh
0x98F248: jz      short loc_98F260
0x98F24A: sub     eax, 6
0x98F24D: jnz     loc_98F33A
0x98F253: test    word ptr [ebp+arg_4], 0C000h
0x98F259: jnz     short loc_98F29F
0x98F25B: or      [ebp+arg_4], edi
0x98F25E: jmp     short loc_98F2AA
0x98F260: cmp     [ebp+var_C], ebx
0x98F263: jnz     short loc_98F29F
0x98F265: and     [ebp+var_4], 0FFFFBFFFh
0x98F26C: mov     [ebp+var_C], 1
0x98F273: jmp     short loc_98F2AA
0x98F275: cmp     [ebp+var_C], ebx
0x98F278: jnz     short loc_98F29F
0x98F27A: or      [ebp+var_4], edi
0x98F27D: mov     [ebp+var_C], 1
0x98F284: jmp     short loc_98F2AA
0x98F286: test    word ptr [ebp+arg_4], 0C000h
0x98F28C: jnz     short loc_98F29F
0x98F28E: or      [ebp+arg_4], 8000h
0x98F295: jmp     short loc_98F2AA
0x98F297: test    word ptr [ebp+arg_4], 1000h
0x98F29D: jz      short loc_98F2A3
0x98F29F: xor     ecx, ecx
0x98F2A1: jmp     short loc_98F2AA
0x98F2A3: or      [ebp+arg_4], 1000h
0x98F2AA: inc     esi
0x98F2AB: mov     al, [esi]
0x98F2AD: cmp     al, bl
0x98F2AF: jnz     loc_98F182
0x98F2B5: cmp     [ebp+var_10], ebx
0x98F2B8: jz      short loc_98F331
0x98F2BA: jmp     short loc_98F2BD
0x98F2BC: inc     esi
0x98F2BD: cmp     byte ptr [esi], 20h ; ' '
0x98F2C0: jz      short loc_98F2BC
0x98F2C2: push    4; MaxCount
0x98F2C4: push    esi; Str2
0x98F2C5: push    offset aCcs
0x98F2CA: call    sub_9868DD
0x98F2CF: add     esp, 0Ch
0x98F2D2: test    eax, eax
0x98F2D4: jnz     short loc_98F33A
0x98F2D6: add     esi, 4
0x98F2D9: push    offset aUtf8
0x98F2DE: push    esi; unsigned __int8 *
0x98F2DF: call    __mbsicmp
0x98F2E4: test    eax, eax
0x98F2E6: pop     ecx
0x98F2E7: pop     ecx
0x98F2E8: jnz     short loc_98F2F6
0x98F2EA: add     esi, 5
0x98F2ED: or      [ebp+arg_4], 40000h
0x98F2F4: jmp     short loc_98F331
0x98F2F6: push    offset aUtf16le
0x98F2FB: push    esi; unsigned __int8 *
0x98F2FC: call    __mbsicmp
0x98F301: test    eax, eax
0x98F303: pop     ecx
0x98F304: pop     ecx
0x98F305: jnz     short loc_98F313
0x98F307: add     esi, 8
0x98F30A: or      [ebp+arg_4], 20000h
0x98F311: jmp     short loc_98F331
0x98F313: push    offset aUnicode
0x98F318: push    esi; unsigned __int8 *
0x98F319: call    __mbsicmp
0x98F31E: test    eax, eax
0x98F320: pop     ecx
0x98F321: pop     ecx
0x98F322: jnz     short loc_98F33A
0x98F324: add     esi, 7
0x98F327: or      [ebp+arg_4], 10000h
0x98F32E: jmp     short loc_98F331
0x98F330: inc     esi
0x98F331: cmp     byte ptr [esi], 20h ; ' '
0x98F334: jz      short loc_98F330
0x98F336: cmp     [esi], bl
0x98F338: jz      short loc_98F354
0x98F33A: call    __errno
0x98F33F: push    ebx
0x98F340: push    ebx
0x98F341: push    ebx
0x98F342: push    ebx
0x98F343: push    ebx
0x98F344: mov     dword ptr [eax], 16h
0x98F34A: call    __invalid_parameter
0x98F34F: add     esp, 14h
0x98F352: jmp     short loc_98F372
0x98F354: push    180h; int
0x98F359: push    [ebp+arg_8]; int
0x98F35C: lea     eax, [ebp+var_10]
0x98F35F: push    [ebp+arg_4]; int
0x98F362: push    [ebp+lpFileName]; lpFileName
0x98F365: push    eax; int
0x98F366: call    __wsopen_s
0x98F36B: add     esp, 14h
0x98F36E: test    eax, eax
0x98F370: jz      short loc_98F376
0x98F372: xor     eax, eax
0x98F374: jmp     short loc_98F396
0x98F376: mov     eax, [ebp+arg_C]
0x98F379: inc     dword_BA9E14
0x98F37F: mov     ecx, [ebp+var_4]
0x98F382: mov     [eax+0Ch], ecx
0x98F385: mov     ecx, [ebp+var_10]
0x98F388: mov     [eax+4], ebx
0x98F38B: mov     [eax], ebx
0x98F38D: mov     [eax+8], ebx
0x98F390: mov     [eax+1Ch], ebx
0x98F393: mov     [eax+10h], ecx
0x98F396: pop     edi
0x98F397: pop     esi
0x98F398: pop     ebx
0x98F399: leave
0x98F39A: retn
