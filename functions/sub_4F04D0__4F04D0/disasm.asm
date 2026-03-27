0x4F04D0: sub     esp, 0Ch
0x4F04D3: push    ebp
0x4F04D4: mov     ebp, ecx
0x4F04D6: mov     ecx, [ebp+60h]
0x4F04D9: test    ecx, ecx
0x4F04DB: jz      loc_4F058C
0x4F04E1: mov     edx, [ecx+4]
0x4F04E4: xor     eax, eax
0x4F04E6: test    edx, edx
0x4F04E8: push    esi
0x4F04E9: jbe     short loc_4F0503
0x4F04EB: mov     esi, [ecx+8]
0x4F04EE: mov     ecx, esi
0x4F04F0: cmp     dword ptr [ecx], 0
0x4F04F3: jnz     loc_4F0591
0x4F04F9: add     eax, 1
0x4F04FC: add     ecx, 4
0x4F04FF: cmp     eax, edx
0x4F0501: jb      short loc_4F04F0
0x4F0503: xor     eax, eax
0x4F0505: test    eax, eax
0x4F0507: mov     [esp+14h+var_8], eax
0x4F050B: jz      short loc_4F056D
0x4F050D: push    edi
0x4F050E: mov     edi, edi
0x4F0510: lea     eax, [esp+18h+var_C]
0x4F0514: push    eax
0x4F0515: lea     ecx, [esp+1Ch+var_4]
0x4F0519: push    ecx
0x4F051A: mov     ecx, [ebp+60h]
0x4F051D: lea     edx, [esp+20h+var_8]
0x4F0521: push    edx
0x4F0522: mov     [esp+24h+var_C], 0
0x4F052A: call    sub_452600
0x4F052F: mov     esi, [esp+18h+var_C]
0x4F0533: test    esi, esi
0x4F0535: jz      short loc_4F0565
0x4F0537: cmp     dword ptr [esi+4], 0
0x4F053B: jz      short loc_4F0556
0x4F053D: lea     ecx, [ecx+0]
0x4F0540: mov     eax, [esi+4]
0x4F0543: mov     edi, [eax+4]
0x4F0546: push    eax
0x4F0547: call    FormHeapFree
0x4F054C: add     esp, 4
0x4F054F: test    edi, edi
0x4F0551: mov     [esi+4], edi
0x4F0554: jnz     short loc_4F0540
0x4F0556: push    esi
0x4F0557: mov     dword ptr [esi], 0
0x4F055D: call    FormHeapFree
0x4F0562: add     esp, 4
0x4F0565: cmp     [esp+18h+var_8], 0
0x4F056A: jnz     short loc_4F0510
0x4F056C: pop     edi
0x4F056D: mov     ecx, [ebp+60h]
0x4F0570: call    NiTMap_Clear
0x4F0575: mov     ecx, [ebp+60h]
0x4F0578: test    ecx, ecx
0x4F057A: pop     esi
0x4F057B: jz      short loc_4F0585
0x4F057D: mov     eax, [ecx]
0x4F057F: mov     edx, [eax]
0x4F0581: push    1
0x4F0583: call    edx
0x4F0585: mov     dword ptr [ebp+60h], 0
0x4F058C: pop     ebp
0x4F058D: add     esp, 0Ch
0x4F0590: retn
0x4F0591: mov     eax, [esi+eax*4]
0x4F0594: jmp     loc_4F0505
