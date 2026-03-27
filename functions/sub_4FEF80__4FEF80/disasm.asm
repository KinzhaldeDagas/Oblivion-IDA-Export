0x4FEF80: mov     eax, 1900h
0x4FEF85: call    __alloca_probe
0x4FEF8A: mov     eax, ds:0B30AACh
0x4FEF8F: xor     eax, esp
0x4FEF91: mov     [esp+1900h+var_4], eax
0x4FEF98: push    ebx
0x4FEF99: push    ebp
0x4FEF9A: mov     ebp, [esp+1908h+arg_C]
0x4FEFA1: push    esi
0x4FEFA2: mov     esi, [esp+190Ch+arg_8]
0x4FEFA9: mov     eax, [esi+40Ch]
0x4FEFAF: xor     ebx, ebx
0x4FEFB1: push    edi; ArgList
0x4FEFB2: push    200h
0x4FEFB7: lea     edi, [esi+208h]
0x4FEFBD: lea     ecx, [esp+1914h+Src]
0x4FEFC4: push    ebx
0x4FEFC5: mov     [edi], ebx
0x4FEFC7: mov     word ptr [eax+esi+20Ch], 1
0x4FEFD1: add     dword ptr [esi+40Ch], 2
0x4FEFD8: push    ecx
0x4FEFD9: mov     [esp+191Ch+var_18F8], ebp
0x4FEFDD: mov     [esp+191Ch+var_14E0], ebx
0x4FEFE4: mov     [esp+191Ch+var_14D4], ebx
0x4FEFEB: mov     [esp+191Ch+var_14DC], bl
0x4FEFF2: mov     [esp+191Ch+var_14D8], ebx
0x4FEFF9: mov     [esp+191Ch+var_14D0], ebx
0x4FF000: call    __memset
0x4FF005: push    ebx
0x4FF006: push    ebx
0x4FF007: push    edi
0x4FF008: lea     eax, [esi+4]
0x4FF00B: push    eax
0x4FF00C: lea     edx, [esp+192Ch+Src]
0x4FF013: push    edx
0x4FF014: push    ebp
0x4FF015: call    sub_4FD7C0
0x4FF01A: mov     edi, eax
0x4FF01C: add     esp, 24h
0x4FF01F: cmp     edi, ebx
0x4FF021: jnz     short loc_4FF038
0x4FF023: push    offset aNoMessageText_; "No message text."
0x4FF028: push    ebp; int
0x4FF029: call    sub_4FCE30
0x4FF02E: add     esp, 8
0x4FF031: xor     al, al
0x4FF033: jmp     loc_4FF41B
0x4FF038: mov     eax, [esi+40Ch]
0x4FF03E: mov     [eax+esi+20Ch], di
0x4FF046: add     dword ptr [esi+40Ch], 2
0x4FF04D: mov     eax, [esi+40Ch]
0x4FF053: push    edi; Size
0x4FF054: lea     ecx, [esp+1914h+Src]
0x4FF05B: push    ecx; Src
0x4FF05C: lea     edx, [eax+esi+20Ch]
0x4FF063: push    edx; Dst
0x4FF064: call    _memcpy
0x4FF069: add     [esi+40Ch], edi
0x4FF06F: mov     ecx, [esi+40Ch]
0x4FF075: xor     edi, edi
0x4FF077: add     esp, 0Ch
0x4FF07A: cmp     [esp+1910h+Src], bl
0x4FF081: lea     eax, [esp+1910h+Src]
0x4FF088: mov     dword ptr [esp+1910h+ArgList], edi
0x4FF08C: jz      short loc_4FF0C8
0x4FF08E: mov     dl, 25h ; '%'
0x4FF090: cmp     [eax], dl
0x4FF092: jnz     short loc_4FF0A1
0x4FF094: cmp     [eax+1], dl
0x4FF097: jnz     short loc_4FF09E
0x4FF099: add     eax, 1
0x4FF09C: jmp     short loc_4FF0A1
0x4FF09E: add     edi, 1
0x4FF0A1: add     eax, 1
0x4FF0A4: cmp     [eax], bl
0x4FF0A6: jnz     short loc_4FF090
0x4FF0A8: cmp     edi, 0Ah
0x4FF0AB: mov     dword ptr [esp+1910h+ArgList], edi
0x4FF0AF: jl      short loc_4FF0C8
0x4FF0B1: push    0Ah; ArgList
0x4FF0B3: push    offset aMaxVariablesOf; "Max variables of %d exceeded."
0x4FF0B8: push    ebp; int
0x4FF0B9: call    sub_4FCE30
0x4FF0BE: add     esp, 0Ch
0x4FF0C1: xor     al, al
0x4FF0C3: jmp     loc_4FF41B
0x4FF0C8: mov     [ecx+esi+20Ch], di
0x4FF0D0: add     dword ptr [esi+40Ch], 2
0x4FF0D7: cmp     edi, ebx
0x4FF0D9: mov     [esp+1910h+var_18FC], ebx
0x4FF0DD: jle     loc_4FF1F6
0x4FF0E3: push    200h
0x4FF0E8: lea     eax, [esp+1914h+Str]
0x4FF0EC: push    ebx
0x4FF0ED: push    eax
0x4FF0EE: mov     [esp+191Ch+var_16F4], ebx
0x4FF0F5: mov     [esp+191Ch+var_16E8], ebx
0x4FF0FC: mov     [esp+191Ch+var_16F0], bl
0x4FF103: mov     [esp+191Ch+var_16EC], ebx
0x4FF10A: mov     [esp+191Ch+var_16E4], ebx
0x4FF111: call    __memset
0x4FF116: push    ebx
0x4FF117: mov     edi, 1
0x4FF11C: push    edi
0x4FF11D: lea     eax, [esi+208h]
0x4FF123: push    eax
0x4FF124: lea     eax, [esi+4]
0x4FF127: push    eax
0x4FF128: lea     ecx, [esp+192Ch+Str]
0x4FF12C: push    ecx
0x4FF12D: push    ebp
0x4FF12E: call    sub_4FD7C0
0x4FF133: add     esp, 24h
0x4FF136: test    eax, eax
0x4FF138: jz      loc_4FF32E
0x4FF13E: mov     al, [esp+1910h+var_16F0]
0x4FF145: cmp     al, bl
0x4FF147: jz      loc_4FF34D
0x4FF14D: cmp     [esp+1910h+var_16F4], ebx
0x4FF154: jbe     short loc_4FF1A1
0x4FF156: cmp     al, 47h ; 'G'
0x4FF158: jnz     short loc_4FF169
0x4FF15A: mov     edx, [esi+40Ch]
0x4FF160: mov     [esi+edx+20Ch], al
0x4FF167: jmp     short loc_4FF177
0x4FF169: mov     eax, [esi+40Ch]
0x4FF16F: mov     byte ptr [esi+eax+20Ch], 72h ; 'r'
0x4FF177: add     [esi+40Ch], edi
0x4FF17D: mov     eax, [esi+40Ch]
0x4FF183: mov     cx, word ptr [esp+1910h+var_16F4]
0x4FF18B: mov     [eax+esi+20Ch], cx
0x4FF193: add     dword ptr [esi+40Ch], 2
0x4FF19A: mov     al, [esp+1910h+var_16F0]
0x4FF1A1: cmp     al, 47h ; 'G'
0x4FF1A3: jz      short loc_4FF1E2
0x4FF1A5: cmp     [esp+1910h+var_16E8], ebx
0x4FF1AC: jbe     loc_4FF367
0x4FF1B2: mov     edx, [esi+40Ch]
0x4FF1B8: mov     [esi+edx+20Ch], al
0x4FF1BF: add     [esi+40Ch], edi
0x4FF1C5: mov     eax, [esi+40Ch]
0x4FF1CB: mov     cx, word ptr [esp+1910h+var_16E8]
0x4FF1D3: mov     [eax+esi+20Ch], cx
0x4FF1DB: add     dword ptr [esi+40Ch], 2
0x4FF1E2: mov     eax, [esp+1910h+var_18FC]
0x4FF1E6: add     eax, edi
0x4FF1E8: cmp     eax, dword ptr [esp+1910h+ArgList]
0x4FF1EC: mov     [esp+1910h+var_18FC], eax
0x4FF1F0: jl      loc_4FF0E3
0x4FF1F6: cmp     [esp+1910h+arg_10], bl
0x4FF1FD: jz      loc_4FF381
0x4FF203: xor     ebp, ebp
0x4FF205: mov     dword ptr [esp+1910h+ArgList], ebp
0x4FF209: mov     dword ptr [esp+1910h+ArgList], 9
0x4FF211: lea     edi, [esp+1910h+var_12C0]
0x4FF218: jmp     short loc_4FF220
0x4FF21A: align 10h
0x4FF220: push    200h
0x4FF225: lea     eax, [edi-20Ch]
0x4FF22B: push    ebx
0x4FF22C: push    eax
0x4FF22D: mov     [edi-0Ch], ebx
0x4FF230: mov     [edi], ebx
0x4FF232: mov     [edi-8], bl
0x4FF235: mov     [edi-4], ebx
0x4FF238: mov     [edi+4], ebx
0x4FF23B: call    __memset
0x4FF240: add     esp, 0Ch
0x4FF243: add     edi, 214h
0x4FF249: sub     dword ptr [esp+1910h+ArgList], 1
0x4FF24E: jns     short loc_4FF220
0x4FF250: lea     edi, [esp+1910h+var_14CC]
0x4FF257: mov     ecx, [esp+1910h+var_18F8]
0x4FF25B: push    ebx
0x4FF25C: push    ebx
0x4FF25D: lea     eax, [esi+208h]
0x4FF263: push    eax
0x4FF264: lea     eax, [esi+4]
0x4FF267: push    eax
0x4FF268: push    edi
0x4FF269: push    ecx
0x4FF26A: call    sub_4FD7C0
0x4FF26F: add     esp, 18h
0x4FF272: cmp     eax, ebx
0x4FF274: jle     short loc_4FF284
0x4FF276: add     ebp, 1
0x4FF279: add     edi, 214h
0x4FF27F: cmp     ebp, 0Ah
0x4FF282: jl      short loc_4FF257
0x4FF284: mov     edx, [esi+40Ch]
0x4FF28A: mov     [edx+esi+20Ch], bp
0x4FF292: add     dword ptr [esi+40Ch], 2
0x4FF299: cmp     ebp, ebx
0x4FF29B: mov     dword ptr [esp+1910h+ArgList], ebp
0x4FF29F: jle     loc_4FF419
0x4FF2A5: mov     eax, dword ptr [esp+1910h+ArgList]
0x4FF2A9: lea     ebp, [esp+1910h+var_14CC]
0x4FF2B0: mov     dword ptr [esp+1910h+ArgList], eax
0x4FF2B4: jmp     short loc_4FF2C0
0x4FF2B6: align 10h
0x4FF2C0: mov     ecx, [esi+40Ch]
0x4FF2C6: mov     word ptr [ecx+esi+20Ch], 1
0x4FF2D0: add     dword ptr [esi+40Ch], 2
0x4FF2D7: mov     ecx, [esi+40Ch]
0x4FF2DD: mov     eax, ebp
0x4FF2DF: lea     edi, [eax+1]
0x4FF2E2: mov     dl, [eax]
0x4FF2E4: add     eax, 1
0x4FF2E7: cmp     dl, bl
0x4FF2E9: jnz     short loc_4FF2E2
0x4FF2EB: sub     eax, edi
0x4FF2ED: mov     edi, eax
0x4FF2EF: mov     [esi+ecx+20Ch], di
0x4FF2F7: add     dword ptr [esi+40Ch], 2
0x4FF2FE: mov     eax, [esi+40Ch]
0x4FF304: push    edi; Size
0x4FF305: lea     edx, [esi+eax+20Ch]
0x4FF30C: push    ebp; Src
0x4FF30D: push    edx; Dst
0x4FF30E: call    _memcpy
0x4FF313: add     [esi+40Ch], edi
0x4FF319: add     esp, 0Ch
0x4FF31C: add     ebp, 214h
0x4FF322: sub     dword ptr [esp+1910h+ArgList], 1
0x4FF327: jnz     short loc_4FF2C0
0x4FF329: jmp     loc_4FF419
0x4FF32E: mov     edx, [esp+1910h+var_18FC]
0x4FF332: mov     eax, dword ptr [esp+1910h+ArgList]
0x4FF336: push    edx
0x4FF337: push    eax; ArgList
0x4FF338: push    offset aTooFewVariable; "Too few variables in MessageBox paramet"...
0x4FF33D: push    ebp; int
0x4FF33E: call    sub_4FCE30
0x4FF343: add     esp, 10h
0x4FF346: xor     al, al
0x4FF348: jmp     loc_4FF41B
0x4FF34D: lea     ecx, [esp+1910h+Str]
0x4FF351: push    ecx; ArgList
0x4FF352: push    offset aUnknownVaria_2; "Unknown variable '%s' in MessageBox par"...
0x4FF357: push    ebp; int
0x4FF358: call    sub_4FCE30
0x4FF35D: add     esp, 0Ch
0x4FF360: xor     al, al
0x4FF362: jmp     loc_4FF41B
0x4FF367: lea     edx, [esp+1910h+Str]
0x4FF36B: push    edx; ArgList
0x4FF36C: push    offset aUnknownCompile; "Unknown compiler error in MessageBoxCom"...
0x4FF371: push    ebp; int
0x4FF372: call    sub_4FCE30
0x4FF377: add     esp, 0Ch
0x4FF37A: xor     al, al
0x4FF37C: jmp     loc_4FF41B
0x4FF381: push    200h
0x4FF386: lea     eax, [esp+1914h+Str]
0x4FF38A: push    ebx
0x4FF38B: push    eax
0x4FF38C: mov     [esp+191Ch+var_16F4], ebx
0x4FF393: mov     [esp+191Ch+var_16E8], ebx
0x4FF39A: mov     [esp+191Ch+var_16F0], bl
0x4FF3A1: mov     [esp+191Ch+var_16EC], ebx
0x4FF3A8: mov     [esp+191Ch+var_16E4], ebx
0x4FF3AF: call    __memset
0x4FF3B4: push    ebx
0x4FF3B5: push    ebx
0x4FF3B6: lea     eax, [esi+208h]
0x4FF3BC: push    eax
0x4FF3BD: lea     eax, [esi+4]
0x4FF3C0: push    eax
0x4FF3C1: lea     ecx, [esp+192Ch+Str]
0x4FF3C5: push    ecx
0x4FF3C6: push    ebp
0x4FF3C7: call    sub_4FD7C0
0x4FF3CC: add     esp, 24h
0x4FF3CF: test    eax, eax
0x4FF3D1: jle     short loc_4FF405
0x4FF3D3: lea     edx, [esp+1910h+Str]
0x4FF3D7: push    edx
0x4FF3D8: call    sub_47D550
0x4FF3DD: add     esp, 4
0x4FF3E0: test    eax, eax
0x4FF3E2: jnz     short loc_4FF3F6
0x4FF3E4: push    offset aMessageTimeMus; "Message time must be an integer.\r\nCom"...
0x4FF3E9: push    ebp; int
0x4FF3EA: call    sub_4FCE30
0x4FF3EF: add     esp, 8
0x4FF3F2: xor     al, al
0x4FF3F4: jmp     short loc_4FF41B
0x4FF3F6: lea     eax, [esp+1910h+Str]
0x4FF3FA: push    eax; Str
0x4FF3FB: call    _atol
0x4FF400: add     esp, 4
0x4FF403: mov     ebx, eax
0x4FF405: mov     ecx, [esi+40Ch]
0x4FF40B: mov     [ecx+esi+20Ch], ebx
0x4FF412: add     dword ptr [esi+40Ch], 4
0x4FF419: mov     al, 1
0x4FF41B: mov     ecx, [esp+1910h+var_4]
0x4FF422: pop     edi
0x4FF423: pop     esi
0x4FF424: pop     ebp
0x4FF425: pop     ebx
0x4FF426: xor     ecx, esp
0x4FF428: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FF42D: add     esp, 1900h
0x4FF433: retn
