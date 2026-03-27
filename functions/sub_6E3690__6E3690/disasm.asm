0x6E3690: sub     esp, 8
0x6E3693: push    ebx
0x6E3694: mov     ebx, [esp+0Ch+a2]
0x6E3698: push    esi
0x6E3699: push    edi
0x6E369A: push    ebx; a2
0x6E369B: mov     esi, ecx
0x6E369D: call    sub_7008A0
0x6E36A2: mov     eax, [ebx+21Ch]
0x6E36A8: push    1
0x6E36AA: lea     ecx, [esp+18h+var_8]
0x6E36AE: push    ecx
0x6E36AF: mov     edi, 4
0x6E36B4: push    edi
0x6E36B5: lea     edx, [esp+20h+a2]
0x6E36B9: push    edx
0x6E36BA: push    eax
0x6E36BB: mov     eax, [eax+4]
0x6E36BE: mov     [esp+28h+var_8], edi
0x6E36C2: call    eax
0x6E36C4: add     esp, 14h
0x6E36C7: cmp     [esp+14h+a2], 0
0x6E36CC: jbe     short loc_6E372E
0x6E36CE: mov     eax, [ebx+21Ch]
0x6E36D4: push    1
0x6E36D6: lea     ecx, [esp+18h+var_8]
0x6E36DA: push    ecx
0x6E36DB: push    edi
0x6E36DC: lea     edx, [esp+20h+var_4]
0x6E36E0: push    edx
0x6E36E1: push    eax
0x6E36E2: mov     eax, [eax+4]
0x6E36E5: mov     [esp+28h+var_8], edi
0x6E36E9: call    eax
0x6E36EB: mov     edi, [esp+28h+var_4]
0x6E36EF: mov     edx, [esp+28h+a2]
0x6E36F3: mov     cl, ds:byte_B3D3E8[edi]
0x6E36F9: push    edx
0x6E36FA: mov     [esi+14h], cl
0x6E36FD: mov     eax, ds:0B3D088h[edi*4]
0x6E3704: push    ebx
0x6E3705: call    eax ; dword_B3D088
0x6E3707: mov     ecx, [esp+30h+a2]
0x6E370B: mov     edx, ds:0B3D410h[edi*4]
0x6E3712: mov     ebx, eax
0x6E3714: movzx   eax, byte ptr [esi+14h]
0x6E3718: push    eax
0x6E3719: push    ecx
0x6E371A: push    ebx
0x6E371B: call    edx ; dword_B3D410
0x6E371D: mov     eax, [esp+3Ch+a2]
0x6E3721: add     esp, 28h
0x6E3724: push    edi
0x6E3725: push    eax
0x6E3726: push    ebx
0x6E3727: mov     ecx, esi
0x6E3729: call    sub_6E3540
0x6E372E: pop     edi
0x6E372F: pop     esi
0x6E3730: pop     ebx
0x6E3731: add     esp, 8
0x6E3734: retn    4
