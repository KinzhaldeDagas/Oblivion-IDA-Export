0x9436D0: push    ebp
0x9436D1: mov     ebp, esp
0x9436D3: and     esp, 0FFFFFFF0h
0x9436D6: sub     esp, 0F4h
0x9436DC: push    ebx
0x9436DD: push    esi
0x9436DE: push    edi
0x9436DF: mov     edi, [ebp+arg_0]
0x9436E2: mov     eax, [edi]
0x9436E4: mov     ebx, ecx
0x9436E6: mov     ecx, edi
0x9436E8: mov     [esp+100h+var_F0], ebx
0x9436EC: call    dword ptr [eax+8]
0x9436EF: mov     ecx, [ebx+8]
0x9436F2: mov     esi, eax
0x9436F4: add     esi, ecx
0x9436F6: lea     ecx, [esi+esi*2]
0x9436F9: shl     ecx, 2
0x9436FC: push    ecx
0x9436FD: lea     ecx, [esp+104h+var_E0]
0x943701: call    sub_956490
0x943706: lea     edx, [ebx+18h]
0x943709: push    edx
0x94370A: lea     ecx, [esp+104h+var_CC]
0x94370E: call    sub_957FD0
0x943713: push    edi
0x943714: lea     eax, [esp+104h+var_E0]
0x943718: push    eax
0x943719: lea     ecx, [ebx+30h]
0x94371C: push    ecx
0x94371D: lea     ecx, [esp+10Ch+var_70]
0x943724: call    sub_9554E0
0x943729: mov     edx, [edi]
0x94372B: mov     ecx, edi
0x94372D: call    dword ptr [edx+8]
0x943730: mov     ecx, [ebx+8]
0x943733: mov     ebx, [ebp+arg_4]
0x943736: lea     eax, [eax+ecx+1B400h]
0x94373D: shl     eax, 4
0x943740: test    ebx, ebx
0x943742: jz      short loc_943749
0x943744: cmp     [ebp+arg_8], eax
0x943747: jge     short loc_943758
0x943749: mov     ecx, ds:0BA7D98h
0x94374F: mov     edx, [ecx]
0x943751: push    25h ; '%'
0x943753: push    eax
0x943754: call    dword ptr [edx]
0x943756: mov     ebx, eax
0x943758: mov     eax, [edi]
0x94375A: shl     esi, 4
0x94375D: add     esi, ebx
0x94375F: mov     [esp+100h+var_E8], esi
0x943763: add     esi, 0F8000h
0x943769: push    ebx
0x94376A: mov     ecx, edi
0x94376C: mov     [esp+104h+var_EC], ebx
0x943770: mov     [esp+104h+var_E4], esi
0x943774: call    dword ptr [eax+0Ch]
0x943777: lea     ecx, [esp+100h+var_AC]
0x94377B: call    sub_957590
0x943780: mov     esi, [esp+100h+var_F0]
0x943784: lea     ecx, [esp+100h+var_EC]
0x943788: push    ecx
0x943789: lea     edx, [esi+4]
0x94378C: push    edx
0x94378D: lea     eax, [esp+108h+var_70]
0x943794: push    eax
0x943795: lea     ecx, [esp+10Ch+var_CC]
0x943799: push    ecx
0x94379A: push    edi
0x94379B: lea     ecx, [esp+114h+var_AC]
0x94379F: call    sub_957C90
0x9437A4: lea     ecx, [esp+100h+var_AC]
0x9437A8: mov     edi, eax
0x9437AA: call    sub_4BFC40
0x9437AF: cmp     ebx, [ebp+arg_4]
0x9437B2: jz      short loc_9437C0
0x9437B4: mov     ecx, ds:0BA7D98h
0x9437BA: mov     edx, [ecx]
0x9437BC: push    ebx
0x9437BD: call    dword ptr [edx+4]
0x9437C0: lea     ecx, [esp+100h+var_E0]
0x9437C4: mov     [esi], edi
0x9437C6: call    sub_9568A0
0x9437CB: mov     edx, dword ptr [esp+100h+var_70]
0x9437D2: mov     esi, eax
0x9437D4: lea     eax, [esi+10h]
0x9437D7: push    eax
0x9437D8: push    edi
0x9437D9: lea     ecx, [esp+108h+var_70]
0x9437E0: call    dword ptr [edx+14h]
0x9437E3: lea     ecx, [esp+100h+var_70]
0x9437EA: call    sub_4BFC40
0x9437EF: pop     edi
0x9437F0: mov     eax, esi
0x9437F2: pop     esi
0x9437F3: pop     ebx
0x9437F4: mov     esp, ebp
0x9437F6: pop     ebp
0x9437F7: retn    0Ch
