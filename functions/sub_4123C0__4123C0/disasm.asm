0x4123C0: sub     esp, 0Ch
0x4123C3: cmp     byte ptr [esp+0Ch+arg_4], 0
0x4123C8: push    ebx
0x4123C9: push    esi
0x4123CA: mov     esi, [esp+14h+arg_0]
0x4123CE: fld     dword ptr [esi]
0x4123D0: push    edi
0x4123D1: jz      loc_412461
0x4123D7: fstp    [esp+18h+var_8]
0x4123DB: fld     [esp+18h+var_8]
0x4123DF: fistp   [esp+18h+arg_4]
0x4123E3: fld     dword ptr [esi+4]
0x4123E6: fstp    [esp+18h+var_C]
0x4123EA: fld     [esp+18h+var_C]
0x4123EE: fistp   [esp+18h+var_8]
0x4123F2: fld     dword ptr [esi]
0x4123F4: fstp    [esp+18h+var_4]
0x4123F8: fld     [esp+18h+var_4]
0x4123FC: fistp   [esp+18h+var_C]
0x412400: mov     eax, [esp+18h+arg_4]
0x412404: mov     edi, [esp+18h+var_C]
0x412408: mov     ebx, [esp+18h+arg_8]
0x41240C: add     eax, 0FFFFF800h
0x412411: and     eax, 0FFFFF000h
0x412416: sub     edi, eax
0x412418: add     edi, 0FFFFF800h
0x41241E: mov     [ebx], edi
0x412420: fld     flt_B03174
0x412426: call    Double_To_SInt32
0x41242B: mov     ecx, eax
0x41242D: mov     eax, edi
0x41242F: cdq
0x412430: idiv    ecx
0x412432: mov     [ebx], eax
0x412434: fld     dword ptr [esi+4]
0x412437: fstp    [esp+18h+var_4]
0x41243B: fld     [esp+18h+var_4]
0x41243F: fistp   [esp+18h+arg_4]
0x412443: mov     edx, [esp+18h+var_8]
0x412447: mov     esi, [esp+18h+arg_4]
0x41244B: add     edx, 0FFFFF800h
0x412451: and     edx, 0FFFFF000h
0x412457: sub     esi, edx
0x412459: add     esi, 0FFFFF800h
0x41245F: jmp     short loc_4124D3
0x412461: fstp    [esp+18h+var_4]
0x412465: fld     [esp+18h+var_4]
0x412469: fistp   [esp+18h+arg_4]
0x41246D: fld     dword ptr [esi+4]
0x412470: fstp    [esp+18h+var_4]
0x412474: fld     [esp+18h+var_4]
0x412478: fistp   [esp+18h+var_C]
0x41247C: fld     dword ptr [esi]
0x41247E: fstp    [esp+18h+var_4]
0x412482: fld     [esp+18h+var_4]
0x412486: fistp   [esp+18h+var_8]
0x41248A: mov     edx, [esp+18h+arg_4]
0x41248E: mov     edi, [esp+18h+var_8]
0x412492: mov     ebx, [esp+18h+arg_8]
0x412496: and     edx, 0FFFFF000h
0x41249C: sub     edi, edx
0x41249E: mov     [ebx], edi
0x4124A0: fld     flt_B03174
0x4124A6: call    Double_To_SInt32
0x4124AB: mov     ecx, eax
0x4124AD: mov     eax, edi
0x4124AF: cdq
0x4124B0: idiv    ecx
0x4124B2: mov     [ebx], eax
0x4124B4: fld     dword ptr [esi+4]
0x4124B7: fstp    [esp+18h+var_4]
0x4124BB: fld     [esp+18h+var_4]
0x4124BF: fistp   [esp+18h+arg_4]
0x4124C3: mov     edx, [esp+18h+var_C]
0x4124C7: mov     esi, [esp+18h+arg_4]
0x4124CB: and     edx, 0FFFFF000h
0x4124D1: sub     esi, edx
0x4124D3: mov     edi, [esp+18h+arg_C]
0x4124D7: mov     [edi], esi
0x4124D9: fld     flt_B03174
0x4124DF: call    Double_To_SInt32
0x4124E4: mov     ecx, eax
0x4124E6: mov     eax, esi
0x4124E8: cdq
0x4124E9: idiv    ecx
0x4124EB: mov     [edi], eax
0x4124ED: pop     edi
0x4124EE: pop     esi
0x4124EF: pop     ebx
0x4124F0: add     esp, 0Ch
0x4124F3: retn
