0x464060: sub     esp, 14h
0x464063: push    ebx
0x464064: mov     ebx, [esp+18h+arg_8]
0x464068: test    ebx, ebx
0x46406A: push    ebp
0x46406B: push    esi
0x46406C: push    edi
0x46406D: mov     esi, ecx
0x46406F: jz      short loc_464074
0x464071: mov     byte ptr [ebx], 0
0x464074: mov     eax, [esp+24h+Str]
0x464078: mov     ecx, [esp+24h+arg_C]
0x46407C: mov     edi, [esp+24h+arg_4]
0x464080: mov     ebp, [esp+24h+arg_0]
0x464084: push    eax; Str
0x464085: push    ecx; int
0x464086: push    edi; int
0x464087: push    ebp; int
0x464088: mov     ecx, esi
0x46408A: call    sub_459570
0x46408F: test    al, al
0x464091: jnz     loc_46430E
0x464097: push    2
0x464099: push    0
0x46409B: push    ebp
0x46409C: mov     ecx, esi
0x46409E: call    Savegame_Rename
0x4640A3: mov     ebp, eax
0x4640A5: test    ebp, ebp
0x4640A7: jz      short loc_4640BD
0x4640A9: cmp     byte ptr [ebp+24h], 0
0x4640AD: jz      short loc_4640BD
0x4640AF: push    0
0x4640B1: push    ebp
0x4640B2: mov     ecx, esi
0x4640B4: call    sub_45DBC0
0x4640B9: test    eax, eax
0x4640BB: jnz     short loc_4640EA
0x4640BD: test    edi, edi
0x4640BF: jz      short loc_4640C7
0x4640C1: mov     dword ptr [edi], 0
0x4640C7: mov     eax, [esp+24h+arg_C]
0x4640CB: test    eax, eax
0x4640CD: jz      short loc_4640D2
0x4640CF: mov     byte ptr [eax], 0
0x4640D2: mov     eax, [esp+24h+Str]
0x4640D6: test    eax, eax
0x4640D8: jz      short loc_4640DD
0x4640DA: mov     byte ptr [eax], 0
0x4640DD: test    ebp, ebp
0x4640DF: jz      loc_4641AC
0x4640E5: jmp     loc_4641A5
0x4640EA: push    0; int
0x4640EC: lea     edx, [esp+28h+arg_4]
0x4640F0: push    edx; int
0x4640F1: lea     ecx, [esp+2Ch+var_10]
0x4640F5: push    ecx; int
0x4640F6: lea     edx, [esp+30h+var_14]
0x4640FA: push    edx; int
0x4640FB: mov     edx, [esp+34h+arg_0]
0x4640FF: push    0; void *
0x464101: lea     ecx, [esp+38h+arg_8]
0x464105: push    ecx; int
0x464106: push    0; Dst
0x464108: push    edi; int
0x464109: push    eax; int
0x46410A: push    edx; int
0x46410B: mov     ecx, esi
0x46410D: mov     [esp+4Ch+arg_8], 0
0x464115: call    sub_45D5F0
0x46411A: mov     eax, [esp+24h+arg_C]
0x46411E: test    eax, eax
0x464120: jz      short loc_46413D
0x464122: movzx   ecx, word ptr [esp+24h+arg_8]
0x464127: mov     edx, ds:0B38720h
0x46412D: push    ecx
0x46412E: push    edx
0x46412F: push    offset aSI_0; "%s %i"
0x464134: push    eax
0x464135: call    __sprintf
0x46413A: add     esp, 10h
0x46413D: cmp     [esp+24h+Str], 0
0x464142: jz      short loc_464193
0x464144: mov     ecx, [esp+24h+arg_4]
0x464148: mov     eax, 95217CB1h
0x46414D: mul     ecx
0x46414F: mov     esi, edx
0x464151: shr     esi, 15h
0x464154: mov     eax, esi
0x464156: imul    eax, 0FFC91180h
0x46415C: add     ecx, eax
0x46415E: mov     eax, 45E7B273h
0x464163: mul     ecx
0x464165: mov     edi, edx
0x464167: shr     edi, 0Eh
0x46416A: mov     edx, edi
0x46416C: imul    edx, 0FFFF15A0h
0x464172: add     ecx, edx
0x464174: mov     eax, 10624DD3h
0x464179: mul     ecx
0x46417B: mov     eax, [esp+24h+Str]
0x46417F: shr     edx, 6
0x464182: push    edx
0x464183: push    edi
0x464184: push    esi
0x464185: push    offset a02i02i02i; "%02i:%02i:%02i"
0x46418A: push    eax
0x46418B: call    __sprintf
0x464190: add     esp, 14h
0x464193: mov     eax, ds:0A853D0h
0x464198: mov     edx, [ebp+0]
0x46419B: mov     edx, [edx+0Ch]
0x46419E: push    eax
0x46419F: push    0
0x4641A1: mov     ecx, ebp
0x4641A3: call    edx
0x4641A5: mov     ecx, ebp
0x4641A7: call    BSFile_Flush
0x4641AC: test    ebx, ebx
0x4641AE: jz      loc_46430E
0x4641B4: mov     esi, [esp+24h+arg_0]
0x4641B8: add     esi, 3Ch ; '<'
0x4641BB: push    offset aQuicksave; "quicksave"
0x4641C0: push    esi; Str
0x4641C1: call    _strstr
0x4641C6: add     esp, 8
0x4641C9: test    eax, eax
0x4641CB: jz      short loc_464234
0x4641CD: mov     ecx, ds:0B38710h
0x4641D3: mov     edx, ebx
0x4641D5: mov     al, [ecx]
0x4641D7: mov     [edx], al
0x4641D9: add     ecx, 1
0x4641DC: add     edx, 1
0x4641DF: test    al, al
0x4641E1: jnz     short loc_4641D5
0x4641E3: mov     edi, ebx
0x4641E5: add     edi, 0FFFFFFFFh
0x4641E8: mov     al, [edi+1]
0x4641EB: add     edi, 1
0x4641EE: test    al, al
0x4641F0: jnz     short loc_4641E8
0x4641F2: mov     eax, ds:0A3B140h
0x4641F7: mov     [edi], eax
0x4641F9: mov     eax, [esp+24h+arg_C]
0x4641FD: mov     ecx, eax
0x4641FF: nop
0x464200: mov     dl, [eax]
0x464202: add     eax, 1
0x464205: test    dl, dl
0x464207: jnz     short loc_464200
0x464209: sub     eax, ecx
0x46420B: add     ebx, 0FFFFFFFFh
0x46420E: mov     esi, ecx
0x464210: mov     edi, ebx
0x464212: mov     cl, [edi+1]
0x464215: add     edi, 1
0x464218: test    cl, cl
0x46421A: jnz     short loc_464212
0x46421C: mov     ecx, eax
0x46421E: shr     ecx, 2
0x464221: rep movsd
0x464223: mov     ecx, eax
0x464225: and     ecx, 3
0x464228: rep movsb
0x46422A: pop     edi
0x46422B: pop     esi
0x46422C: pop     ebp
0x46422D: pop     ebx
0x46422E: add     esp, 14h
0x464231: retn    14h
0x464234: push    offset aAutosave; "autosave"
0x464239: push    esi; Str
0x46423A: call    _strstr
0x46423F: add     esp, 8
0x464242: test    eax, eax
0x464244: jz      short loc_4642B4
0x464246: mov     ecx, ds:0B38718h
0x46424C: mov     edx, ebx
0x46424E: mov     edi, edi
0x464250: mov     al, [ecx]
0x464252: mov     [edx], al
0x464254: add     ecx, 1
0x464257: add     edx, 1
0x46425A: test    al, al
0x46425C: jnz     short loc_464250
0x46425E: mov     edi, ebx
0x464260: add     edi, 0FFFFFFFFh
0x464263: mov     al, [edi+1]
0x464266: add     edi, 1
0x464269: test    al, al
0x46426B: jnz     short loc_464263
0x46426D: mov     ecx, ds:0A3B140h
0x464273: mov     eax, [esp+24h+arg_C]
0x464277: mov     [edi], ecx
0x464279: mov     ecx, eax
0x46427B: jmp     short loc_464280
0x46427D: align 10h
0x464280: mov     dl, [eax]
0x464282: add     eax, 1
0x464285: test    dl, dl
0x464287: jnz     short loc_464280
0x464289: sub     eax, ecx
0x46428B: add     ebx, 0FFFFFFFFh
0x46428E: mov     esi, ecx
0x464290: mov     edi, ebx
0x464292: mov     cl, [edi+1]
0x464295: add     edi, 1
0x464298: test    cl, cl
0x46429A: jnz     short loc_464292
0x46429C: mov     ecx, eax
0x46429E: shr     ecx, 2
0x4642A1: rep movsd
0x4642A3: mov     ecx, eax
0x4642A5: and     ecx, 3
0x4642A8: rep movsb
0x4642AA: pop     edi
0x4642AB: pop     esi
0x4642AC: pop     ebp
0x4642AD: pop     ebx
0x4642AE: add     esp, 14h
0x4642B1: retn    14h
0x4642B4: push    5Ch ; '\'; Ch
0x4642B6: push    esi; Str
0x4642B7: call    _strrchr
0x4642BC: mov     esi, eax
0x4642BE: push    5; MaxCount
0x4642C0: add     esi, 1
0x4642C3: push    offset aSave; "Save "
0x4642C8: push    esi; Str1
0x4642C9: call    __strnicmp
0x4642CE: add     esp, 14h
0x4642D1: test    eax, eax
0x4642D3: jz      short loc_46430E
0x4642D5: mov     edx, ebx
0x4642D7: mov     eax, esi
0x4642D9: sub     edx, esi
0x4642DB: jmp     short loc_4642E0
0x4642DD: align 10h
0x4642E0: mov     cl, [eax]
0x4642E2: mov     [edx+eax], cl
0x4642E5: add     eax, 1
0x4642E8: test    cl, cl
0x4642EA: jnz     short loc_4642E0
0x4642EC: mov     eax, ebx
0x4642EE: lea     edx, [eax+1]
0x4642F1: mov     cl, [eax]
0x4642F3: add     eax, 1
0x4642F6: test    cl, cl
0x4642F8: jnz     short loc_4642F1
0x4642FA: sub     eax, edx
0x4642FC: cmp     eax, 4
0x4642FF: jbe     short loc_464305
0x464301: mov     [eax+ebx-4], cl
0x464305: cmp     eax, 12h
0x464308: jbe     short loc_46430E
0x46430A: mov     byte ptr [ebx+12h], 0
0x46430E: pop     edi
0x46430F: pop     esi
0x464310: pop     ebp
0x464311: pop     ebx
0x464312: add     esp, 14h
0x464315: retn    14h
