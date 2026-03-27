0x4CA7A0: push    0FFFFFFFFh
0x4CA7A2: push    offset SEH_4CA7A0
0x4CA7A7: mov     eax, large fs:0
0x4CA7AD: push    eax
0x4CA7AE: sub     esp, 8
0x4CA7B1: push    ebx
0x4CA7B2: push    ebp
0x4CA7B3: push    esi
0x4CA7B4: push    edi
0x4CA7B5: mov     eax, ds:0B30AACh
0x4CA7BA: xor     eax, esp
0x4CA7BC: push    eax
0x4CA7BD: lea     eax, [esp+28h+var_C]
0x4CA7C1: mov     large fs:0, eax
0x4CA7C7: push    0DCh ; 'Ü'; Size
0x4CA7CC: call    FormHeapAlloc
0x4CA7D1: add     esp, 4
0x4CA7D4: mov     [esp+28h+var_10], eax
0x4CA7D8: xor     esi, esi
0x4CA7DA: cmp     eax, esi
0x4CA7DC: mov     [esp+28h+var_4], esi
0x4CA7E0: jz      short loc_4CA7EE
0x4CA7E2: push    esi
0x4CA7E3: mov     ecx, eax; this
0x4CA7E5: call    ??0NiNode@@QAE@XZ
0x4CA7EA: mov     edi, eax
0x4CA7EC: jmp     short loc_4CA7F0
0x4CA7EE: xor     edi, edi
0x4CA7F0: or      ebp, 0FFFFFFFFh
0x4CA7F3: push    0DCh ; 'Ü'; Size
0x4CA7F8: mov     [esp+2Ch+var_4], ebp
0x4CA7FC: call    FormHeapAlloc
0x4CA801: add     esp, 4
0x4CA804: mov     [esp+28h+var_10], eax
0x4CA808: cmp     eax, esi
0x4CA80A: mov     ebx, 1
0x4CA80F: mov     [esp+28h+var_4], ebx
0x4CA813: jz      short loc_4CA81F
0x4CA815: push    esi
0x4CA816: mov     ecx, eax; this
0x4CA818: call    ??0NiNode@@QAE@XZ
0x4CA81D: jmp     short loc_4CA821
0x4CA81F: xor     eax, eax
0x4CA821: mov     ecx, ds:0B35C00h
0x4CA827: shr     ecx, 2
0x4CA82A: and     cl, bl
0x4CA82C: mov     [esp+28h+var_4], ebp
0x4CA830: jz      short loc_4CA838
0x4CA832: or      [eax+18h], bx
0x4CA836: jmp     short loc_4CA83E
0x4CA838: and     word ptr [eax+18h], 0FFFEh
0x4CA83E: mov     edx, [edi]
0x4CA840: push    esi
0x4CA841: push    eax
0x4CA842: mov     eax, [edx+84h]
0x4CA848: mov     ecx, edi
0x4CA84A: call    eax
0x4CA84C: push    0DCh ; 'Ü'; Size
0x4CA851: call    FormHeapAlloc
0x4CA856: add     esp, 4
0x4CA859: mov     [esp+28h+var_10], eax
0x4CA85D: cmp     eax, esi
0x4CA85F: mov     [esp+28h+var_4], 2
0x4CA867: jz      short loc_4CA873
0x4CA869: push    esi
0x4CA86A: mov     ecx, eax; this
0x4CA86C: call    ??0NiNode@@QAE@XZ
0x4CA871: mov     esi, eax
0x4CA873: mov     ecx, ds:0B35C00h
0x4CA879: shr     ecx, 3
0x4CA87C: and     cl, bl
0x4CA87E: mov     [esp+28h+var_4], ebp
0x4CA882: jz      short loc_4CA88A
0x4CA884: or      [esi+18h], bx
0x4CA888: jmp     short loc_4CA890
0x4CA88A: and     word ptr [esi+18h], 0FFFEh
0x4CA890: mov     edx, [edi]
0x4CA892: mov     eax, [edx+84h]
0x4CA898: push    0
0x4CA89A: push    esi
0x4CA89B: mov     ecx, edi
0x4CA89D: call    eax
0x4CA89F: or      word ptr [esi+18h], 40h
0x4CA8A4: push    0DCh ; 'Ü'; Size
0x4CA8A9: call    FormHeapAlloc
0x4CA8AE: add     esp, 4
0x4CA8B1: mov     [esp+28h+var_10], eax
0x4CA8B5: test    eax, eax
0x4CA8B7: mov     [esp+28h+var_4], 3
0x4CA8BF: jz      short loc_4CA8CC
0x4CA8C1: push    0
0x4CA8C3: mov     ecx, eax; this
0x4CA8C5: call    ??0NiNode@@QAE@XZ
0x4CA8CA: jmp     short loc_4CA8CE
0x4CA8CC: xor     eax, eax
0x4CA8CE: mov     ecx, ds:0B35C00h
0x4CA8D4: shr     ecx, 4
0x4CA8D7: and     cl, bl
0x4CA8D9: mov     [esp+28h+var_4], ebp
0x4CA8DD: jz      short loc_4CA8E5
0x4CA8DF: or      [eax+18h], bx
0x4CA8E3: jmp     short loc_4CA8EB
0x4CA8E5: and     word ptr [eax+18h], 0FFFEh
0x4CA8EB: mov     edx, [edi]
0x4CA8ED: push    0
0x4CA8EF: push    eax
0x4CA8F0: mov     eax, [edx+84h]
0x4CA8F6: mov     ecx, edi
0x4CA8F8: call    eax
0x4CA8FA: push    0DCh ; 'Ü'; Size
0x4CA8FF: call    FormHeapAlloc
0x4CA904: add     esp, 4
0x4CA907: mov     [esp+28h+var_10], eax
0x4CA90B: test    eax, eax
0x4CA90D: mov     [esp+28h+var_4], 4
0x4CA915: jz      short loc_4CA922
0x4CA917: push    0
0x4CA919: mov     ecx, eax; this
0x4CA91B: call    ??0NiNode@@QAE@XZ
0x4CA920: jmp     short loc_4CA924
0x4CA922: xor     eax, eax
0x4CA924: mov     ecx, ds:0B35C00h
0x4CA92A: shr     ecx, 5
0x4CA92D: test    bl, cl
0x4CA92F: mov     [esp+28h+var_4], ebp
0x4CA933: jz      short loc_4CA93B
0x4CA935: or      [eax+18h], bx
0x4CA939: jmp     short loc_4CA941
0x4CA93B: and     word ptr [eax+18h], 0FFFEh
0x4CA941: mov     edx, [edi]
0x4CA943: push    0
0x4CA945: push    eax
0x4CA946: mov     eax, [edx+84h]
0x4CA94C: mov     ecx, edi
0x4CA94E: call    eax
0x4CA950: mov     eax, edi
0x4CA952: mov     ecx, [esp+28h+var_C]
0x4CA956: mov     large fs:0, ecx
0x4CA95D: pop     ecx
0x4CA95E: pop     edi
0x4CA95F: pop     esi
0x4CA960: pop     ebp
0x4CA961: pop     ebx
0x4CA962: add     esp, 14h
0x4CA965: retn
