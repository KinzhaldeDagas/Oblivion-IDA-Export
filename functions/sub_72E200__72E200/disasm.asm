0x72E200: push    0FFFFFFFFh
0x72E202: push    offset SEH_72E200
0x72E207: mov     eax, large fs:0
0x72E20D: push    eax
0x72E20E: sub     esp, 14h
0x72E211: push    ebx
0x72E212: push    ebp
0x72E213: push    esi
0x72E214: push    edi
0x72E215: mov     eax, ds:0B30AACh
0x72E21A: xor     eax, esp
0x72E21C: push    eax
0x72E21D: lea     eax, [esp+34h+var_C]
0x72E221: mov     large fs:0, eax
0x72E227: mov     ebx, [esp+34h+size]
0x72E22B: xor     ecx, ecx
0x72E22D: mov     eax, ebx
0x72E22F: mov     edx, 0Ch
0x72E234: mul     edx
0x72E236: seto    cl
0x72E239: neg     ecx
0x72E23B: or      ecx, eax
0x72E23D: xor     eax, eax
0x72E23F: add     ecx, 4
0x72E242: setb    al
0x72E245: neg     eax
0x72E247: or      eax, ecx
0x72E249: push    eax; Size
0x72E24A: call    FormHeapAlloc
0x72E24F: add     esp, 4
0x72E252: mov     [esp+34h+var_18], eax
0x72E256: xor     edi, edi
0x72E258: cmp     eax, edi
0x72E25A: mov     [esp+34h+var_4], edi
0x72E25E: jz      short loc_72E27E
0x72E260: push    offset sub_6C4090; a5
0x72E265: push    offset unknown_libname_10_0; a4
0x72E26A: push    ebx; size
0x72E26B: lea     esi, [eax+4]
0x72E26E: push    0Ch; a2
0x72E270: push    esi; a1
0x72E271: mov     [eax], ebx
0x72E273: call    ArrayConstructor
0x72E278: mov     [esp+34h+var_20], esi
0x72E27C: jmp     short loc_72E282
0x72E27E: mov     [esp+34h+var_20], edi
0x72E282: mov     ecx, [esp+34h+arg_4]
0x72E286: mov     eax, [ecx+40h]
0x72E289: xor     ebp, ebp
0x72E28B: cmp     eax, edi
0x72E28D: mov     [esp+34h+var_4], 0FFFFFFFFh
0x72E295: mov     [esp+34h+var_18], eax
0x72E299: jbe     loc_72E325
0x72E29F: mov     [esp+34h+var_1C], edi
0x72E2A3: mov     edx, [esp+34h+arg_4]
0x72E2A7: mov     edi, [edx+44h]
0x72E2AA: add     edi, [esp+34h+var_1C]
0x72E2AE: xor     ebx, ebx
0x72E2B0: cmp     [edi+48h], bx
0x72E2B4: jbe     short loc_72E313
0x72E2B6: mov     eax, [edi+44h]
0x72E2B9: fld     dword ptr [eax+ebx*8+4]
0x72E2BD: mov     edx, [esp+34h+var_20]
0x72E2C1: lea     eax, [eax+ebx*8]
0x72E2C4: fstp    [esp+34h+var_10]
0x72E2C8: movzx   eax, word ptr [eax]
0x72E2CB: lea     ecx, [eax+eax*2]
0x72E2CE: mov     eax, [edx+ecx*4+4]
0x72E2D2: cmp     [edx+ecx*4+8], eax
0x72E2D6: lea     esi, [edx+ecx*4]
0x72E2D9: jnz     short loc_72E2F0
0x72E2DB: test    eax, eax
0x72E2DD: jbe     short loc_72E2E3
0x72E2DF: add     eax, eax
0x72E2E1: jmp     short loc_72E2E8
0x72E2E3: mov     eax, 1
0x72E2E8: push    eax
0x72E2E9: mov     ecx, esi
0x72E2EB: call    sub_72CC50
0x72E2F0: mov     eax, [esi]
0x72E2F2: mov     ecx, [esi+8]
0x72E2F5: mov     edx, [esp+34h+var_10]
0x72E2F9: mov     [eax+ecx*8], ebp
0x72E2FC: mov     [eax+ecx*8+4], edx
0x72E300: add     dword ptr [esi+8], 1
0x72E304: movzx   eax, word ptr [edi+48h]
0x72E308: add     ebx, 1
0x72E30B: cmp     ebx, eax
0x72E30D: jb      short loc_72E2B6
0x72E30F: mov     eax, [esp+34h+var_18]
0x72E313: add     [esp+34h+var_1C], 4Ch ; 'L'
0x72E318: add     ebp, 1
0x72E31B: cmp     ebp, eax
0x72E31D: jb      short loc_72E2A3
0x72E31F: mov     ebx, [esp+34h+size]
0x72E323: xor     edi, edi
0x72E325: test    ebx, ebx
0x72E327: jbe     short loc_72E344
0x72E329: mov     esi, [esp+34h+var_20]
0x72E32D: cmp     dword ptr [esi+8], 0
0x72E331: jz      short loc_72E35E
0x72E333: mov     ecx, esi
0x72E335: call    sub_72CD30
0x72E33A: add     edi, 1
0x72E33D: add     esi, 0Ch
0x72E340: cmp     edi, ebx
0x72E342: jb      short loc_72E32D
0x72E344: mov     eax, [esp+34h+var_20]
0x72E348: mov     ecx, [esp+34h+var_C]
0x72E34C: mov     large fs:0, ecx
0x72E353: pop     ecx
0x72E354: pop     edi
0x72E355: pop     esi
0x72E356: pop     ebp
0x72E357: pop     ebx
0x72E358: add     esp, 20h
0x72E35B: retn    8
0x72E35E: mov     eax, [esp+34h+var_20]
0x72E362: test    eax, eax
0x72E364: jz      short loc_72E383
0x72E366: mov     ecx, [eax-4]
0x72E369: lea     esi, [eax-4]
0x72E36C: push    offset sub_6C4090; void (__thiscall *)(void *)
0x72E371: push    ecx; int
0x72E372: push    0Ch; unsigned int
0x72E374: push    eax; void *
0x72E375: call    $LN21
0x72E37A: push    esi
0x72E37B: call    FormHeapFree
0x72E380: add     esp, 4
0x72E383: xor     eax, eax
0x72E385: jmp     short loc_72E348
