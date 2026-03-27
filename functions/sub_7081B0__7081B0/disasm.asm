0x7081B0: push    0FFFFFFFFh
0x7081B2: push    offset SEH_7081B0
0x7081B7: mov     eax, large fs:0
0x7081BD: push    eax
0x7081BE: push    ecx
0x7081BF: push    ebx
0x7081C0: push    ebp
0x7081C1: push    esi
0x7081C2: push    edi
0x7081C3: mov     eax, ds:0B30AACh
0x7081C8: xor     eax, esp
0x7081CA: push    eax
0x7081CB: lea     eax, [esp+24h+var_C]
0x7081CF: mov     large fs:0, eax
0x7081D5: mov     esi, ecx
0x7081D7: mov     [esp+24h+var_10], esi
0x7081DB: mov     ebx, [esp+24h+arg_0]
0x7081DF: push    ebx
0x7081E0: call    sub_700050
0x7081E5: mov     ecx, ebx
0x7081E7: call    sub_7124D0
0x7081EC: cmp     dword ptr [ebx+0D8h], 4010008h
0x7081F6: mov     edi, eax
0x7081F8: jnb     short loc_70826F
0x7081FA: test    edi, edi
0x7081FC: jz      loc_708315
0x708202: lea     ebp, [esi+98h]
0x708208: jmp     short loc_708210
0x70820A: align 10h
0x708210: mov     ecx, ebx
0x708212: sub     edi, 1
0x708215: call    sub_7124A0
0x70821A: mov     esi, eax
0x70821C: test    esi, esi
0x70821E: mov     [esp+24h+arg_0], esi
0x708222: jz      short loc_70822E
0x708224: lea     eax, [esi+4]
0x708227: push    eax; lpAddend
0x708228: call    dword ptr ds:0A28078h
0x70822E: lea     ecx, [esp+24h+arg_0]
0x708232: push    ecx
0x708233: mov     ecx, ebp
0x708235: mov     [esp+28h+var_4], 0
0x70823D: call    sub_7C16B0
0x708242: test    esi, esi
0x708244: mov     [esp+24h+var_4], 0FFFFFFFFh
0x70824C: jz      short loc_708266
0x70824E: lea     edx, [esi+4]
0x708251: push    edx; lpAddend
0x708252: call    dword ptr ds:0A2807Ch
0x708258: test    eax, eax
0x70825A: jnz     short loc_708266
0x70825C: mov     eax, [esi]
0x70825E: mov     edx, [eax]
0x708260: push    1
0x708262: mov     ecx, esi
0x708264: call    edx
0x708266: test    edi, edi
0x708268: jnz     short loc_708210
0x70826A: jmp     loc_708315
0x70826F: test    edi, edi
0x708271: jz      short loc_7082DE
0x708273: lea     ebp, [esi+98h]
0x708279: lea     esp, [esp+0]
0x708280: mov     ecx, ebx
0x708282: sub     edi, 1
0x708285: call    sub_7124A0
0x70828A: mov     esi, eax
0x70828C: test    esi, esi
0x70828E: mov     [esp+24h+arg_0], esi
0x708292: jz      short loc_70829E
0x708294: lea     eax, [esi+4]
0x708297: push    eax; lpAddend
0x708298: call    dword ptr ds:0A28078h
0x70829E: lea     ecx, [esp+24h+arg_0]
0x7082A2: push    ecx
0x7082A3: mov     ecx, ebp
0x7082A5: mov     [esp+28h+var_4], 1
0x7082AD: call    sub_749800
0x7082B2: test    esi, esi
0x7082B4: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7082BC: jz      short loc_7082D6
0x7082BE: lea     edx, [esi+4]
0x7082C1: push    edx; lpAddend
0x7082C2: call    dword ptr ds:0A2807Ch
0x7082C8: test    eax, eax
0x7082CA: jnz     short loc_7082D6
0x7082CC: mov     eax, [esi]
0x7082CE: mov     edx, [eax]
0x7082D0: push    1
0x7082D2: mov     ecx, esi
0x7082D4: call    edx
0x7082D6: test    edi, edi
0x7082D8: jnz     short loc_708280
0x7082DA: mov     esi, [esp+24h+var_10]
0x7082DE: cmp     dword ptr [ebx+0D8h], 5000013h
0x7082E8: jb      short loc_708315
0x7082EA: mov     ecx, ebx
0x7082EC: add     esi, 0A8h ; '¨'
0x7082F2: call    sub_7124A0
0x7082F7: push    eax; a2
0x7082F8: mov     ecx, esi; this
0x7082FA: call    NiSmartPointer_Set??
0x7082FF: mov     ecx, [esi]
0x708301: test    ecx, ecx
0x708303: jz      short loc_708315
0x708305: mov     eax, [ecx]
0x708307: mov     edx, [ebx+0D8h]
0x70830D: mov     eax, [eax+5Ch]
0x708310: push    0
0x708312: push    edx
0x708313: call    eax
0x708315: mov     ecx, dword ptr [esp+24h+var_C]
0x708319: mov     large fs:0, ecx
0x708320: pop     ecx
0x708321: pop     edi
0x708322: pop     esi
0x708323: pop     ebp
0x708324: pop     ebx
0x708325: add     esp, 10h
0x708328: retn    4
