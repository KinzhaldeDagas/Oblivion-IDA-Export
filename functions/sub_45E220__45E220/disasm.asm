0x45E220: sub     esp, 118h
0x45E226: mov     eax, ds:0B30AACh
0x45E22B: xor     eax, esp
0x45E22D: mov     [esp+118h+var_4], eax
0x45E234: push    ebx
0x45E235: push    ebp
0x45E236: push    esi
0x45E237: mov     esi, ecx
0x45E239: mov     edx, [esi+18h]
0x45E23C: mov     eax, [esi+74h]
0x45E23F: mov     ecx, [eax+0Ch]
0x45E242: shr     edx, 9
0x45E245: mov     ebx, 1
0x45E24A: test    bl, dl
0x45E24C: push    edi
0x45E24D: mov     edi, [esp+128h+arg_0]
0x45E254: mov     [esp+128h+var_114], ecx
0x45E258: jz      short loc_45E263
0x45E25A: add     dword ptr [esi+90h], 4
0x45E261: jmp     short loc_45E27D
0x45E263: mov     edx, [edi+8]
0x45E266: push    ebx
0x45E267: lea     eax, [esp+12Ch+var_118]
0x45E26B: push    eax
0x45E26C: push    4
0x45E26E: lea     ecx, [esp+134h+var_114]
0x45E272: push    ecx
0x45E273: push    edi
0x45E274: mov     [esp+13Ch+var_118], ebx
0x45E278: call    edx
0x45E27A: add     esp, 14h
0x45E27D: xor     ebp, ebp
0x45E27F: cmp     [esp+128h+var_114], ebp
0x45E283: jbe     short loc_45E2C7
0x45E285: mov     eax, [esi+74h]
0x45E288: mov     ecx, [eax+4]
0x45E28B: mov     eax, [esi+18h]
0x45E28E: mov     edx, [ecx+ebp*4]
0x45E291: shr     eax, 9
0x45E294: test    bl, al
0x45E296: mov     [esp+128h+var_110], edx
0x45E29A: jz      short loc_45E2A5
0x45E29C: add     dword ptr [esi+90h], 4
0x45E2A3: jmp     short loc_45E2BF
0x45E2A5: mov     eax, [edi+8]
0x45E2A8: push    ebx
0x45E2A9: lea     ecx, [esp+12Ch+var_118]
0x45E2AD: push    ecx
0x45E2AE: push    4
0x45E2B0: lea     edx, [esp+134h+var_110]
0x45E2B4: push    edx
0x45E2B5: push    edi
0x45E2B6: mov     [esp+13Ch+var_118], ebx
0x45E2BA: call    eax
0x45E2BC: add     esp, 14h
0x45E2BF: add     ebp, ebx
0x45E2C1: cmp     ebp, [esp+128h+var_114]
0x45E2C5: jb      short loc_45E285
0x45E2C7: mov     eax, [esi+18h]
0x45E2CA: mov     ecx, [esi+78h]
0x45E2CD: mov     edx, [ecx+0Ch]
0x45E2D0: shr     eax, 9
0x45E2D3: test    bl, al
0x45E2D5: mov     [esp+128h+var_10C], edx
0x45E2D9: jz      short loc_45E2E4
0x45E2DB: add     dword ptr [esi+90h], 4
0x45E2E2: jmp     short loc_45E2FE
0x45E2E4: mov     eax, [edi+8]
0x45E2E7: push    ebx
0x45E2E8: lea     ecx, [esp+12Ch+var_110]
0x45E2EC: push    ecx
0x45E2ED: push    4
0x45E2EF: lea     edx, [esp+134h+var_10C]
0x45E2F3: push    edx
0x45E2F4: push    edi
0x45E2F5: mov     [esp+13Ch+var_110], ebx
0x45E2F9: call    eax
0x45E2FB: add     esp, 14h
0x45E2FE: xor     ebp, ebp
0x45E300: cmp     [esp+128h+var_10C], ebp
0x45E304: jbe     short loc_45E348
0x45E306: mov     ecx, [esi+78h]
0x45E309: mov     edx, [ecx+4]
0x45E30C: mov     ecx, [esi+18h]
0x45E30F: mov     eax, [edx+ebp*4]
0x45E312: shr     ecx, 9
0x45E315: test    bl, cl
0x45E317: mov     [esp+128h+var_118], eax
0x45E31B: jz      short loc_45E326
0x45E31D: add     dword ptr [esi+90h], 4
0x45E324: jmp     short loc_45E340
0x45E326: mov     ecx, [edi+8]
0x45E329: push    ebx
0x45E32A: lea     edx, [esp+12Ch+var_110]
0x45E32E: push    edx
0x45E32F: push    4
0x45E331: lea     eax, [esp+134h+var_118]
0x45E335: push    eax
0x45E336: push    edi
0x45E337: mov     [esp+13Ch+var_110], ebx
0x45E33B: call    ecx
0x45E33D: add     esp, 14h
0x45E340: add     ebp, ebx
0x45E342: cmp     ebp, [esp+128h+var_10C]
0x45E346: jb      short loc_45E306
0x45E348: cmp     dword ptr [esi+40h], 0
0x45E34C: jz      short loc_45E3AE
0x45E34E: mov     edx, [esp+128h+var_114]
0x45E352: push    edx
0x45E353: lea     eax, [esp+12Ch+var_108]
0x45E357: push    offset aNumericIdArray; "Numeric ID Array(%i)"
0x45E35C: push    eax
0x45E35D: call    __sprintf
0x45E362: mov     edx, [esp+134h+var_114]
0x45E366: add     esp, 0Ch
0x45E369: lea     ecx, [esp+128h+var_108]
0x45E36D: push    ecx
0x45E36E: mov     ecx, [esi+40h]
0x45E371: lea     eax, ds:4[edx*4]
0x45E378: push    eax
0x45E379: call    sub_4531B0
0x45E37E: mov     ecx, [esp+128h+var_10C]
0x45E382: push    ecx
0x45E383: lea     edx, [esp+12Ch+var_108]
0x45E387: push    offset aWorldspaceIdAr; "WorldSpace ID Array(%i)"
0x45E38C: push    edx
0x45E38D: call    __sprintf
0x45E392: mov     ecx, [esp+134h+var_10C]
0x45E396: add     esp, 0Ch
0x45E399: lea     eax, [esp+128h+var_108]
0x45E39D: lea     edx, ds:4[ecx*4]
0x45E3A4: mov     ecx, [esi+40h]
0x45E3A7: push    eax
0x45E3A8: push    edx
0x45E3A9: call    sub_4531B0
0x45E3AE: mov     ecx, [esp+128h+var_4]
0x45E3B5: pop     edi
0x45E3B6: pop     esi
0x45E3B7: pop     ebp
0x45E3B8: pop     ebx
0x45E3B9: xor     ecx, esp
0x45E3BB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45E3C0: add     esp, 118h
0x45E3C6: retn    4
