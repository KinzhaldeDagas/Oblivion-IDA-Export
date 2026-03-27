0x52B840: sub     esp, 8
0x52B843: push    ebx
0x52B844: push    ebp
0x52B845: mov     ebp, ecx
0x52B847: lea     eax, [ebp+50h]
0x52B84A: xor     ebx, ebx
0x52B84C: xor     ecx, ecx
0x52B84E: mov     [eax], ecx
0x52B850: mov     [eax+4], ecx
0x52B853: mov     [eax+8], ecx
0x52B856: mov     [eax+0Ch], ecx
0x52B859: mov     [eax+10h], ecx
0x52B85C: mov     [eax+14h], ecx
0x52B85F: mov     [eax+18h], ecx
0x52B862: mov     [eax+1Ch], ecx
0x52B865: push    esi
0x52B866: mov     [eax+20h], ecx
0x52B869: push    edi
0x52B86A: mov     ecx, 7
0x52B86F: nop
0x52B870: mov     byte ptr [eax], 0FFh
0x52B873: add     eax, 2
0x52B876: sub     ecx, 1
0x52B879: jnz     short loc_52B870
0x52B87B: fld1
0x52B87D: lea     esi, [ebp+29Ch]
0x52B883: fst     dword ptr [ebp+68h]
0x52B886: push    esi
0x52B887: fst     dword ptr [ebp+60h]
0x52B88A: fst     dword ptr [ebp+6Ch]
0x52B88D: fstp    dword ptr [ebp+64h]
0x52B890: fldz
0x52B892: mov     [ebp+300h], ebx
0x52B898: fst     dword ptr [ebp+0A0h]
0x52B89E: mov     [ebp+304h], ebx
0x52B8A4: fstp    dword ptr [ebp+0A4h]
0x52B8AA: mov     [ebp+94h], ebx
0x52B8B0: mov     [ebp+98h], ebx
0x52B8B6: mov     [ebp+9Ch], bl
0x52B8BC: call    sub_5538D0
0x52B8C1: push    eax
0x52B8C2: call    sub_5528F0
0x52B8C7: push    esi
0x52B8C8: call    sub_552880
0x52B8CD: add     esp, 0Ch
0x52B8D0: mov     [ebp+2FCh], bx
0x52B8D7: lea     edi, [ebp+1B8h]
0x52B8DD: lea     esi, [ebp+0E0h]
0x52B8E3: mov     eax, [esi]
0x52B8E5: mov     edx, [eax]
0x52B8E7: mov     ecx, esi
0x52B8E9: call    edx
0x52B8EB: mov     ecx, ds:off_B10CCC[ebx]; "Characters\\Imperial\\HeadHuman.nif"
0x52B8F1: mov     eax, [esi]
0x52B8F3: mov     edx, [eax+18h]
0x52B8F6: push    ecx
0x52B8F7: mov     ecx, esi
0x52B8F9: call    edx
0x52B8FB: mov     eax, [edi]
0x52B8FD: mov     edx, [eax]
0x52B8FF: mov     ecx, edi
0x52B901: call    edx
0x52B903: mov     eax, ds:off_B10CF0[ebx]; "Characters\\Imperial\\HeadHuman.dds"
0x52B909: push    0; a3
0x52B90B: push    eax; a2
0x52B90C: lea     ecx, [edi+4]; this
0x52B90F: call    BSStringT_Set
0x52B914: add     ebx, 4
0x52B917: add     esi, 18h
0x52B91A: add     edi, 0Ch
0x52B91D: cmp     ebx, 24h ; '$'
0x52B920: jb      short loc_52B8E3
0x52B922: lea     ecx, [ebp+0B0h]
0x52B928: mov     edi, offset off_B10D14; "Characters\\Imperial\\Male\\UpperBodyMa"...
0x52B92D: mov     [esp+18h+var_8], ecx
0x52B931: lea     esi, [ebp+224h]
0x52B937: mov     [esp+18h+var_4], 2
0x52B93F: nop
0x52B940: mov     ebx, 5
0x52B945: mov     edx, [esi]
0x52B947: mov     eax, [edx]
0x52B949: mov     ecx, esi
0x52B94B: call    eax
0x52B94D: mov     ecx, [edi]
0x52B94F: push    0; a3
0x52B951: push    ecx; a2
0x52B952: lea     ecx, [esi+4]; this
0x52B955: call    BSStringT_Set
0x52B95A: add     edi, 4
0x52B95D: add     esi, 0Ch
0x52B960: sub     ebx, 1
0x52B963: jnz     short loc_52B945
0x52B965: mov     ebx, [esp+18h+var_8]
0x52B969: mov     edx, [ebx]
0x52B96B: mov     eax, [edx]
0x52B96D: mov     ecx, ebx
0x52B96F: call    eax
0x52B971: add     ebx, 18h
0x52B974: sub     [esp+18h+var_4], 1
0x52B979: mov     [esp+18h+var_8], ebx
0x52B97D: jnz     short loc_52B940
0x52B97F: pop     edi
0x52B980: pop     esi
0x52B981: mov     ecx, ebp
0x52B983: pop     ebp
0x52B984: pop     ebx
0x52B985: add     esp, 8
0x52B988: jmp     j_TESForm_InitializeComponents
