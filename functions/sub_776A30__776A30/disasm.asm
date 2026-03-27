0x776A30: push    ecx
0x776A31: push    ebp
0x776A32: push    esi
0x776A33: push    edi
0x776A34: mov     edi, [esp+10h+arg_0]
0x776A38: mov     ebp, [edi+104h]
0x776A3E: test    ebp, ebp
0x776A40: lea     eax, [esp+10h+arg_0]
0x776A44: push    eax
0x776A45: mov     esi, ecx
0x776A47: mov     [esp+14h+arg_0], ebp
0x776A4B: push    edi
0x776A4C: jz      short loc_776AB6
0x776A4E: call    NiTMap_GetAt
0x776A53: mov     eax, [esi+20h]
0x776A56: mov     edx, [ebp+6Ch]
0x776A59: mov     ecx, [eax]
0x776A5B: push    0
0x776A5D: push    edx
0x776A5E: push    eax
0x776A5F: mov     eax, [ecx+0D4h]
0x776A65: call    eax
0x776A67: push    edi
0x776A68: mov     ecx, esi
0x776A6A: mov     byte ptr [ebp+71h], 0
0x776A6E: call    NiTMap_RemoveAt
0x776A73: lea     ecx, [esp+10h+arg_0]
0x776A77: push    ecx
0x776A78: lea     ecx, [esi+10h]
0x776A7B: mov     [esp+14h+arg_0], edi
0x776A7F: call    sub_776690
0x776A84: mov     dword ptr [edi+104h], 0
0x776A8E: mov     ecx, [ebp+6Ch]
0x776A91: mov     eax, ecx
0x776A93: and     ecx, 1Fh
0x776A96: mov     edx, 1
0x776A9B: shl     edx, cl
0x776A9D: shr     eax, 5
0x776AA0: push    ebp
0x776AA1: not     edx
0x776AA3: and     [esi+eax*4+40h], edx
0x776AA7: call    FormHeapFree
0x776AAC: add     esp, 4
0x776AAF: pop     edi
0x776AB0: pop     esi
0x776AB1: pop     ebp
0x776AB2: pop     ecx
0x776AB3: retn    4
0x776AB6: call    NiTMap_GetAt
0x776ABB: test    al, al
0x776ABD: jz      short loc_776AFE
0x776ABF: push    edi
0x776AC0: mov     ecx, esi
0x776AC2: call    NiTMap_RemoveAt
0x776AC7: lea     ecx, [esp+10h+var_4]
0x776ACB: push    ecx
0x776ACC: lea     ecx, [esi+10h]
0x776ACF: mov     [esp+14h+var_4], edi
0x776AD3: call    sub_776690
0x776AD8: mov     edx, [esp+10h+arg_0]
0x776ADC: mov     dword ptr [edi+104h], 0
0x776AE6: mov     ecx, [edx+6Ch]
0x776AE9: mov     eax, ecx
0x776AEB: and     ecx, 1Fh
0x776AEE: mov     edx, 1
0x776AF3: shl     edx, cl
0x776AF5: shr     eax, 5
0x776AF8: not     edx
0x776AFA: and     [esi+eax*4+40h], edx
0x776AFE: pop     edi
0x776AFF: pop     esi
0x776B00: pop     ebp
0x776B01: pop     ecx
0x776B02: retn    4
