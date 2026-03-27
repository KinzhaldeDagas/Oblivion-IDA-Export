0x783400: push    ebp
0x783401: mov     ebp, esp
0x783403: and     esp, 0FFFFFFF0h
0x783406: sub     esp, 84h
0x78340C: push    ebx
0x78340D: push    esi
0x78340E: mov     esi, ecx
0x783410: cmp     dword ptr [esi+34h], 0
0x783414: push    edi
0x783415: jz      loc_7835B9
0x78341B: cmp     dword ptr [esi+1Ch], 0
0x78341F: jz      loc_7835B9
0x783425: cmp     [ebp+arg_4], 0
0x783429: mov     edi, [ebp+arg_0]
0x78342C: jnz     short loc_783434
0x78342E: mov     eax, [edi+30h]
0x783431: mov     [ebp+arg_4], eax
0x783434: mov     ebx, [edi+24h]
0x783437: test    ebx, ebx
0x783439: jnz     short loc_78343E
0x78343B: mov     ebx, [edi+0Ch]
0x78343E: mov     eax, [esi+34h]
0x783441: mov     ecx, [eax]
0x783443: mov     edx, [ecx+24h]
0x783446: push    ebx
0x783447: push    0
0x783449: push    eax
0x78344A: call    edx
0x78344C: test    eax, eax
0x78344E: jz      loc_7835A7
0x783454: mov     ecx, [esi+34h]
0x783457: lea     ebx, [esp+90h+var_74]
0x78345B: push    ebx
0x78345C: lea     ebx, [esp+94h+var_70]
0x783460: push    ebx
0x783461: mov     [esp+98h+var_74], 1
0x783469: mov     edx, [ecx]
0x78346B: push    eax
0x78346C: mov     eax, [edx+18h]
0x78346F: push    ecx
0x783470: call    eax
0x783472: cmp     byte ptr ds:0B4295Bh, 0
0x783479: mov     ebx, [edi+14h]
0x78347C: mov     [esp+90h+var_78], eax
0x783480: jnz     short loc_783487
0x783482: call    sub_783C70
0x783487: and     ebx, 0FFh
0x78348D: cmp     dword ptr ds:0B428D8h[ebx*4], 8
0x783495: jz      loc_783558
0x78349B: mov     ecx, edi
0x78349D: call    sub_782E10
0x7834A2: test    al, al
0x7834A4: jnz     loc_783558
0x7834AA: mov     ecx, edi
0x7834AC: call    sub_783340
0x7834B1: test    al, al
0x7834B3: jnz     short loc_7834E1
0x7834B5: mov     ecx, edi
0x7834B7: call    sub_783370
0x7834BC: test    al, al
0x7834BE: jnz     short loc_7834E1
0x7834C0: mov     ecx, edi
0x7834C2: call    sub_7833A0
0x7834C7: test    al, al
0x7834C9: jnz     short loc_7834E1
0x7834CB: mov     ecx, edi
0x7834CD: call    sub_7833D0
0x7834D2: test    al, al
0x7834D4: jnz     short loc_7834E1
0x7834D6: mov     ecx, edi
0x7834D8: call    sub_783310
0x7834DD: test    al, al
0x7834DF: jz      short loc_783506
0x7834E1: mov     ecx, [esp+90h+var_64]
0x7834E5: mov     edx, [ebp+arg_4]
0x7834E8: mov     eax, [esp+90h+var_68]
0x7834EC: push    0
0x7834EE: push    ecx
0x7834EF: mov     ecx, [esi+24h]
0x7834F2: push    edx
0x7834F3: push    eax
0x7834F4: call    sub_782D60
0x7834F9: test    al, al
0x7834FB: jz      loc_783595
0x783501: jmp     loc_78358D
0x783506: mov     ecx, edi
0x783508: call    sub_7832E0
0x78350D: test    al, al
0x78350F: jz      short loc_78352F
0x783511: mov     ecx, [esp+90h+var_64]
0x783515: mov     edx, [ebp+arg_4]
0x783518: mov     eax, [esp+90h+var_68]
0x78351C: push    0
0x78351E: push    ecx
0x78351F: mov     ecx, [esi+24h]
0x783522: push    edx
0x783523: push    eax
0x783524: call    sub_782D90
0x783529: test    al, al
0x78352B: jz      short loc_783595
0x78352D: jmp     short loc_78358D
0x78352F: mov     ecx, edi
0x783531: call    sub_7832B0
0x783536: test    al, al
0x783538: jz      short loc_7835B9
0x78353A: mov     ecx, [esp+90h+var_64]
0x78353E: mov     edx, [ebp+arg_4]
0x783541: mov     eax, [esp+90h+var_68]
0x783545: push    0
0x783547: push    ecx
0x783548: mov     ecx, [esi+24h]
0x78354B: push    edx
0x78354C: push    eax
0x78354D: call    sub_782D30
0x783552: test    al, al
0x783554: jz      short loc_783595
0x783556: jmp     short loc_78358D
0x783558: mov     ecx, [ebp+arg_4]
0x78355B: push    ecx
0x78355C: lea     edx, [esp+94h+var_40]
0x783560: push    edx
0x783561: call    D3DXMatrixTranspose_0
0x783566: mov     edx, [esp+90h+var_64]
0x78356A: mov     esi, [esi+24h]
0x78356D: mov     eax, [esi+0FF8h]
0x783573: mov     ecx, [eax]
0x783575: push    edx
0x783576: lea     edx, [esp+94h+var_40]
0x78357A: push    edx
0x78357B: mov     edx, [esp+98h+var_68]
0x78357F: push    edx
0x783580: push    eax
0x783581: mov     eax, [ecx+1B4h]
0x783587: call    eax
0x783589: test    eax, eax
0x78358B: jl      short loc_783595
0x78358D: mov     [esp+90h+var_78], 0
0x783595: xor     eax, eax
0x783597: cmp     [esp+90h+var_78], eax
0x78359B: setnl   al
0x78359E: pop     edi
0x78359F: pop     esi
0x7835A0: pop     ebx
0x7835A1: mov     esp, ebp
0x7835A3: pop     ebp
0x7835A4: retn    0Ch
0x7835A7: mov     ecx, [esi+8]; void *
0x7835AA: push    ebx
0x7835AB: push    ecx
0x7835AC: push    offset aNid3dhlslpixel; "NiD3DHLSLPixelShader::SetPixelShaderCon"...
0x7835B1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7835B6: add     esp, 0Ch
0x7835B9: pop     edi
0x7835BA: pop     esi
0x7835BB: xor     al, al
0x7835BD: pop     ebx
0x7835BE: mov     esp, ebp
0x7835C0: pop     ebp
0x7835C1: retn    0Ch
