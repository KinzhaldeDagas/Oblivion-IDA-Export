0x5101E0: sub     esp, 208h
0x5101E6: mov     eax, ds:0B30AACh
0x5101EB: xor     eax, esp
0x5101ED: mov     [esp+208h+var_4], eax
0x5101F4: mov     edx, [esp+208h+a4]
0x5101FB: mov     ecx, [esp+208h+arg_4]
0x510202: mov     eax, [esp+208h+a1]
0x510209: push    ebx
0x51020A: mov     ebx, [esp+20Ch+l]
0x510211: push    ebp
0x510212: mov     ebp, [esp+210h+arg_1C]
0x510219: push    esi
0x51021A: mov     esi, [esp+214h+arg_C]
0x510221: push    edi
0x510222: mov     edi, [esp+218h+arg_10]
0x510229: mov     [esp+218h+a3], ebp
0x51022D: lea     ebp, [esp+218h+Str2]
0x510231: push    ebp; UInt16
0x510232: push    ebx; l
0x510233: push    edi; a6
0x510234: push    esi; a5
0x510235: push    edx; a4
0x510236: mov     edx, [esp+22Ch+a3]
0x51023A: push    edx; a3
0x51023B: push    ecx; a2
0x51023C: push    eax; a1
0x51023D: call    Script_ExtractArgs
0x510242: add     esp, 20h
0x510245: test    al, al
0x510247: jz      loc_51045A
0x51024D: mov     al, [esp+218h+Str2]
0x510251: xor     ebx, ebx
0x510253: cmp     al, 31h ; '1'
0x510255: mov     esi, 2
0x51025A: jnz     short loc_5102A3
0x51025C: push    0
0x51025E: mov     ebx, 1
0x510263: call    sub_7B4890
0x510268: lea     eax, [esp+21Ch+Str2]
0x51026C: add     esp, 4
0x51026F: lea     edx, [eax+1]
0x510272: mov     cl, [eax]
0x510274: add     eax, 1
0x510277: test    cl, cl
0x510279: jnz     short loc_510272
0x51027B: sub     eax, edx
0x51027D: cmp     eax, 1
0x510280: jnz     loc_510420
0x510286: xor     eax, eax
0x510288: cmp     ds:0B42F48h, esi
0x51028E: setl    al
0x510291: sub     eax, 1
0x510294: and     eax, 20h
0x510297: or      ax, 0Fh
0x51029B: movzx   ebx, ax
0x51029E: jmp     loc_510420
0x5102A3: cmp     al, 32h ; '2'
0x5102A5: jnz     short loc_5102B7
0x5102A7: mov     ebx, 1
0x5102AC: push    ebx
0x5102AD: call    sub_7B4890
0x5102B2: jmp     loc_51041D
0x5102B7: cmp     al, 33h ; '3'
0x5102B9: jnz     short loc_5102CB
0x5102BB: push    esi
0x5102BC: mov     ebx, 1
0x5102C1: call    sub_7B4890
0x5102C6: jmp     loc_51041D
0x5102CB: cmp     al, 34h ; '4'
0x5102CD: jnz     short loc_510315
0x5102CF: push    3
0x5102D1: mov     ebx, 1
0x5102D6: call    sub_7B4890
0x5102DB: lea     eax, [esp+21Ch+Str2]
0x5102DF: add     esp, 4
0x5102E2: lea     edx, [eax+1]
0x5102E5: mov     cl, [eax]
0x5102E7: add     eax, 1
0x5102EA: test    cl, cl
0x5102EC: jnz     short loc_5102E5
0x5102EE: sub     eax, edx
0x5102F0: cmp     eax, 1
0x5102F3: jnz     loc_510420
0x5102F9: xor     ecx, ecx
0x5102FB: cmp     ds:0B42F48h, esi
0x510301: setl    cl
0x510304: sub     ecx, ebx
0x510306: and     ecx, 20h
0x510309: or      cx, 0Fh
0x51030D: movzx   ebx, cx
0x510310: jmp     loc_510420
0x510315: cmp     al, 35h ; '5'
0x510317: jnz     short loc_51032A
0x510319: push    4
0x51031B: mov     ebx, 1
0x510320: call    sub_7B4890
0x510325: jmp     loc_51041D
0x51032A: push    esi; MaxCount
0x51032B: lea     edx, [esp+21Ch+Str2]
0x51032F: push    edx; Str2
0x510330: push    offset aSh; "sh"
0x510335: call    __strnicmp
0x51033A: add     esp, 0Ch
0x51033D: test    eax, eax
0x51033F: jnz     short loc_510374
0x510341: call    sub_405A80
0x510346: test    al, al
0x510348: mov     eax, ds:0B42F40h
0x51034D: jnz     short loc_510354
0x51034F: or      eax, 10h
0x510352: jmp     short loc_510357
0x510354: and     eax, 0FFFFFFEFh
0x510357: movzx   ebx, ax
0x51035A: test    bl, bl
0x51035C: js      short loc_510369
0x51035E: or      ebx, 80h
0x510364: jmp     loc_510420
0x510369: and     ebx, 0FF7Fh
0x51036F: jmp     loc_510420
0x510374: push    esi; MaxCount
0x510375: lea     eax, [esp+21Ch+Str2]
0x510379: push    eax; Str2
0x51037A: push    offset aSc; "sc"
0x51037F: call    __strnicmp
0x510384: add     esp, 0Ch
0x510387: test    eax, eax
0x510389: jnz     short loc_5103A3
0x51038B: cmp     ds:0B43076h, bl
0x510391: movzx   ebx, word ptr ds:0B42F40h
0x510398: setz    cl
0x51039B: mov     ds:0B43076h, cl
0x5103A1: jmp     short loc_510420
0x5103A3: push    esi; MaxCount
0x5103A4: lea     edx, [esp+21Ch+Str2]
0x5103A8: push    edx; Str2
0x5103A9: push    offset off_A4D1EC; Str1
0x5103AE: call    __strnicmp
0x5103B3: add     esp, 0Ch
0x5103B6: test    eax, eax
0x5103B8: jnz     short loc_510407
0x5103BA: test    byte ptr ds:0B42F40h, 20h
0x5103C1: jg      short loc_5103E3
0x5103C3: mov     eax, ds:0B333A0h
0x5103C8: mov     byte ptr ds:0B06CBCh, 1
0x5103CF: mov     ecx, [eax+8]
0x5103D2: call    ShadowCanopyPass
0x5103D7: movzx   ecx, word ptr ds:0B42F40h
0x5103DE: or      ecx, 20h
0x5103E1: jmp     short loc_510452
0x5103E3: push    0
0x5103E5: mov     ds:0B06CBCh, bl
0x5103EB: call    SetTextureCanopyShadowMap
0x5103F0: mov     edx, ds:0B42F40h
0x5103F6: add     esp, 4
0x5103F9: and     edx, 0FFDFh
0x5103FF: mov     ds:0B42F40h, edx
0x510405: jmp     short loc_510458
0x510407: cmp     [esp+218h+Str2], 74h ; 't'
0x51040C: jnz     short loc_510420
0x51040E: lea     eax, [esp+218h+Str]
0x510412: push    eax; Str
0x510413: call    j__atol
0x510418: mov     ds:0B2C674h, eax
0x51041D: add     esp, 4
0x510420: cmp     [esp+218h+Str], 31h ; '1'
0x510425: jnz     short loc_510429
0x510427: or      ebx, esi
0x510429: cmp     [esp+218h+var_202], 31h ; '1'
0x51042E: jnz     short loc_510433
0x510430: or      ebx, 4
0x510433: cmp     [esp+218h+var_201], 31h ; '1'
0x510438: jnz     short loc_51043D
0x51043A: or      ebx, 8
0x51043D: cmp     ds:0B42F48h, esi
0x510443: jl      short loc_51044F
0x510445: cmp     byte ptr [esp+218h+var_200], 30h ; '0'
0x51044A: jz      short loc_51044F
0x51044C: or      ebx, 20h
0x51044F: movzx   ecx, bx
0x510452: mov     ds:0B42F40h, ecx
0x510458: mov     al, 1
0x51045A: mov     ecx, [esp+218h+var_4]
0x510461: pop     edi
0x510462: pop     esi
0x510463: pop     ebp
0x510464: pop     ebx
0x510465: xor     ecx, esp
0x510467: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51046C: add     esp, 208h
0x510472: retn
