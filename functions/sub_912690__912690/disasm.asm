0x912690: sub     esp, 10h
0x912693: mov     eax, [esp+10h+arg_0]
0x912697: mov     ecx, [esp+10h+arg_10]
0x91269B: mov     edx, [ecx+28h]
0x91269E: push    ebx
0x91269F: push    esi
0x9126A0: mov     esi, [esp+18h+arg_C]
0x9126A4: push    edi
0x9126A5: mov     edi, [eax]
0x9126A7: add     edi, 4
0x9126AA: mov     [eax], edi
0x9126AC: mov     eax, edi
0x9126AE: mov     eax, [eax]
0x9126B0: mov     edi, [esp+1Ch+arg_4]
0x9126B4: add     eax, 5
0x9126B7: shl     eax, 4
0x9126BA: add     eax, esi
0x9126BC: mov     [esp+1Ch+var_10], eax
0x9126C0: mov     eax, [edi]
0x9126C2: lea     ebx, [eax+10h]
0x9126C5: mov     [edi], ebx
0x9126C7: mov     eax, [eax]
0x9126C9: mov     [esp+1Ch+var_8], eax
0x9126CD: mov     eax, [esi+0B8h]
0x9126D3: lea     edx, [edx+eax*8]
0x9126D6: mov     eax, [esp+1Ch+arg_14]
0x9126DA: push    eax
0x9126DB: push    ecx
0x9126DC: lea     ecx, [esp+24h+var_10]
0x9126E0: push    ecx
0x9126E1: mov     [esp+28h+var_4], 1
0x9126E9: mov     [esp+28h+var_C], edx
0x9126ED: call    sub_8F1460
0x9126F2: mov     eax, [esi+0B8h]
0x9126F8: add     esp, 0Ch
0x9126FB: inc     eax
0x9126FC: pop     edi
0x9126FD: mov     [esi+0B8h], eax
0x912703: pop     esi
0x912704: pop     ebx
0x912705: add     esp, 10h
0x912708: retn    18h
