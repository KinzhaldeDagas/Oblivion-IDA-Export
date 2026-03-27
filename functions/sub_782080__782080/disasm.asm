0x782080: sub     esp, 110h
0x782086: mov     eax, ds:0B30AACh
0x78208B: xor     eax, esp
0x78208D: mov     [esp+110h+var_4], eax
0x782094: mov     eax, [esp+110h+arg_C]
0x78209B: push    ebx
0x78209C: mov     ebx, dword ptr [esp+114h+ArgList]
0x7820A3: test    ebx, ebx
0x7820A5: push    ebp
0x7820A6: push    esi
0x7820A7: mov     esi, [esp+11Ch+arg_4]
0x7820AE: push    edi; ArgList
0x7820AF: mov     edi, [esp+120h+arg_8]
0x7820B6: mov     dword ptr [esi], 0
0x7820BC: mov     ebp, ecx
0x7820BE: mov     ecx, [esp+120h+arg_10]
0x7820C5: mov     dword ptr [edi], 0
0x7820CB: mov     dword ptr [eax], 0
0x7820D1: mov     dword ptr [ecx], 0
0x7820D7: jz      loc_782219
0x7820DD: cmp     byte ptr [ebx], 0
0x7820E0: jz      loc_782219
0x7820E6: push    104h
0x7820EB: lea     eax, [esp+124h+var_108]
0x7820EF: push    eax
0x7820F0: push    ebx
0x7820F1: call    sub_77EC60
0x7820F6: add     esp, 0Ch
0x7820F9: test    al, al
0x7820FB: jnz     short loc_782114
0x7820FD: push    ebx; ArgList
0x7820FE: push    offset aFailedToFind_2; "Failed to find shader program file %s\n"
0x782103: push    0; int
0x782105: push    1; int
0x782107: call    sub_738460
0x78210C: add     esp, 10h
0x78210F: jmp     loc_78222A
0x782114: mov     eax, [ebp+4]
0x782117: or      eax, ds:0B428BCh
0x78211D: lea     ecx, [esp+120h+var_110]
0x782121: push    ecx
0x782122: lea     edx, [esp+124h+var_10C]
0x782126: push    edx
0x782127: and     eax, 3
0x78212A: push    eax
0x78212B: push    0
0x78212D: push    0
0x78212F: lea     eax, [esp+134h+var_108]
0x782133: push    eax
0x782134: call    D3DXAssembleShaderFromFileA_0
0x782139: test    eax, eax
0x78213B: jge     loc_7821C5
0x782141: mov     eax, [esp+120h+var_110]
0x782145: xor     esi, esi
0x782147: test    eax, eax
0x782149: jz      short loc_782198
0x78214B: mov     ecx, [eax]
0x78214D: mov     edx, [ecx+0Ch]
0x782150: push    eax
0x782151: call    edx
0x782153: mov     ebp, eax
0x782155: test    ebp, ebp
0x782157: jz      short loc_78218A
0x782159: mov     eax, [esp+120h+var_110]
0x78215D: mov     ecx, [eax]
0x78215F: mov     edx, [ecx+10h]
0x782162: push    eax
0x782163: call    edx
0x782165: mov     edi, eax
0x782167: push    edi; Size
0x782168: call    FormHeapAlloc
0x78216D: push    ebp; Src
0x78216E: mov     esi, eax
0x782170: push    edi; SizeInBytes
0x782171: push    esi; Dst
0x782172: call    sub_434900
0x782177: push    esi
0x782178: push    ebx; ArgList
0x782179: push    offset aFailedToAsse_1; "Failed to assemble shader %s\nError: %s"...
0x78217E: push    0; int
0x782180: push    1; int
0x782182: call    sub_738460
0x782187: add     esp, 24h
0x78218A: mov     eax, [esp+120h+var_110]
0x78218E: mov     ecx, [eax]
0x782190: mov     edx, [ecx+8]
0x782193: push    eax
0x782194: call    edx
0x782196: jmp     short loc_7821AA
0x782198: push    ebx; ArgList
0x782199: push    offset aFailedToAsse_2; "Failed to assemble shader %s\nError: NO"...
0x78219E: push    0; int
0x7821A0: push    1; int
0x7821A2: call    sub_738460
0x7821A7: add     esp, 10h
0x7821AA: push    esi
0x7821AB: call    FormHeapFree
0x7821B0: mov     eax, [esp+124h+var_10C]
0x7821B4: add     esp, 4
0x7821B7: test    eax, eax
0x7821B9: jz      short loc_78222A
0x7821BB: mov     ecx, [eax]
0x7821BD: mov     edx, [ecx+8]
0x7821C0: push    eax
0x7821C1: call    edx
0x7821C3: jmp     short loc_78222A
0x7821C5: mov     eax, [esp+120h+var_10C]
0x7821C9: mov     ecx, [eax]
0x7821CB: mov     edx, [ecx+10h]
0x7821CE: push    eax
0x7821CF: call    edx
0x7821D1: push    eax; Size
0x7821D2: mov     [edi], eax
0x7821D4: call    FormHeapAlloc
0x7821D9: mov     [esi], eax
0x7821DB: mov     eax, [esp+124h+var_10C]
0x7821DF: mov     ecx, [eax]
0x7821E1: mov     edx, [ecx+0Ch]
0x7821E4: mov     edi, [edi]
0x7821E6: add     esp, 4
0x7821E9: push    eax
0x7821EA: call    edx
0x7821EC: push    edi; Size
0x7821ED: push    eax; Src
0x7821EE: mov     eax, [esi]
0x7821F0: push    eax; Dst
0x7821F1: call    _memcpy
0x7821F6: mov     eax, [esp+12Ch+var_10C]
0x7821FA: mov     ecx, [eax]
0x7821FC: mov     edx, [ecx+8]
0x7821FF: add     esp, 0Ch
0x782202: push    eax
0x782203: call    edx
0x782205: mov     eax, [esp+120h+var_110]
0x782209: test    eax, eax
0x78220B: jz      short loc_782215
0x78220D: mov     ecx, [eax]
0x78220F: mov     edx, [ecx+8]
0x782212: push    eax
0x782213: call    edx
0x782215: mov     al, 1
0x782217: jmp     short loc_78222C
0x782219: push    offset aInvalidShaderF; "Invalid shader file name\n"
0x78221E: push    0; int
0x782220: push    1; int
0x782222: call    sub_738460
0x782227: add     esp, 0Ch
0x78222A: xor     al, al
0x78222C: mov     ecx, [esp+120h+var_4]
0x782233: pop     edi
0x782234: pop     esi
0x782235: pop     ebp
0x782236: pop     ebx
0x782237: xor     ecx, esp
0x782239: call    @__security_check_cookie@4; __security_check_cookie(x)
0x78223E: add     esp, 110h
0x782244: retn    14h
