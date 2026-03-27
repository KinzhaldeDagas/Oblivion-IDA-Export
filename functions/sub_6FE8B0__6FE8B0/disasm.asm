0x6FE8B0: push    0FFFFFFFFh
0x6FE8B2: push    offset SEH_6FE8B0
0x6FE8B7: mov     eax, large fs:0
0x6FE8BD: push    eax
0x6FE8BE: sub     esp, 10h
0x6FE8C1: push    ebx
0x6FE8C2: push    ebp
0x6FE8C3: push    esi
0x6FE8C4: push    edi
0x6FE8C5: mov     eax, ds:0B30AACh
0x6FE8CA: xor     eax, esp
0x6FE8CC: push    eax
0x6FE8CD: lea     eax, [esp+30h+var_C]
0x6FE8D1: mov     large fs:0, eax
0x6FE8D7: mov     esi, ecx
0x6FE8D9: mov     edi, [esp+30h+arg_0]
0x6FE8DD: push    edi
0x6FE8DE: call    sub_753180
0x6FE8E3: mov     ecx, [edi]
0x6FE8E5: lea     eax, [esp+30h+var_1C]
0x6FE8E9: push    eax
0x6FE8EA: push    esi
0x6FE8EB: call    NiTMap_GetAt
0x6FE8F0: test    al, al
0x6FE8F2: jz      loc_6FE9CC
0x6FE8F8: mov     ebp, [esp+30h+var_1C]
0x6FE8FC: movzx   edi, word ptr [ebp+62h]
0x6FE900: test    edi, edi
0x6FE902: mov     [esp+30h+var_1C], 0
0x6FE90A: jz      loc_6FE9BA
0x6FE910: lea     ebx, [ebp+58h]
0x6FE913: mov     ecx, [ebp+5Ch]
0x6FE916: sub     edi, 1
0x6FE919: lea     eax, [ecx+edi*4]
0x6FE91C: mov     eax, [eax]
0x6FE91E: lea     edx, [esp+30h+var_18]
0x6FE922: push    edx
0x6FE923: push    eax
0x6FE924: mov     eax, [esp+38h+arg_0]
0x6FE928: mov     ecx, [eax]
0x6FE92A: call    NiTMap_GetAt
0x6FE92F: test    al, al
0x6FE931: jz      short loc_6FE97F
0x6FE933: mov     esi, [esp+30h+var_18]
0x6FE937: add     [esp+30h+var_1C], 1
0x6FE93C: test    esi, esi
0x6FE93E: mov     [esp+30h+var_14], esi
0x6FE942: jz      short loc_6FE94E
0x6FE944: lea     ecx, [esi+4]
0x6FE947: push    ecx; lpAddend
0x6FE948: call    dword ptr ds:0A28078h
0x6FE94E: lea     edx, [esp+30h+var_14]
0x6FE952: push    edx
0x6FE953: push    edi
0x6FE954: mov     ecx, ebx
0x6FE956: mov     [esp+38h+var_4], 0
0x6FE95E: call    sub_4B34E0
0x6FE963: test    esi, esi
0x6FE965: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6FE96D: jz      short loc_6FE9B2
0x6FE96F: lea     eax, [esi+4]
0x6FE972: push    eax; lpAddend
0x6FE973: call    dword ptr ds:0A2807Ch
0x6FE979: test    eax, eax
0x6FE97B: jnz     short loc_6FE9B2
0x6FE97D: jmp     short loc_6FE9A8
0x6FE97F: push    edi
0x6FE980: lea     ecx, [esp+34h+var_10]
0x6FE984: push    ecx
0x6FE985: mov     ecx, ebx
0x6FE987: call    sub_6D7F60
0x6FE98C: mov     eax, [esp+30h+var_10]
0x6FE990: test    eax, eax
0x6FE992: jz      short loc_6FE9B2
0x6FE994: mov     esi, eax
0x6FE996: add     eax, 4
0x6FE999: push    eax; lpAddend
0x6FE99A: call    dword ptr ds:0A2807Ch
0x6FE9A0: test    eax, eax
0x6FE9A2: jnz     short loc_6FE9B2
0x6FE9A4: test    esi, esi
0x6FE9A6: jz      short loc_6FE9B2
0x6FE9A8: mov     edx, [esi]
0x6FE9AA: mov     eax, [edx]
0x6FE9AC: push    1
0x6FE9AE: mov     ecx, esi
0x6FE9B0: call    eax
0x6FE9B2: test    edi, edi
0x6FE9B4: jnz     loc_6FE913
0x6FE9BA: movzx   ecx, word ptr [ebp+62h]
0x6FE9BE: cmp     [esp+30h+var_1C], ecx
0x6FE9C2: jz      short loc_6FE9CC
0x6FE9C4: lea     ecx, [ebp+58h]
0x6FE9C7: call    sub_4784A0
0x6FE9CC: mov     ecx, dword ptr [esp+30h+var_C]
0x6FE9D0: mov     large fs:0, ecx
0x6FE9D7: pop     ecx
0x6FE9D8: pop     edi
0x6FE9D9: pop     esi
0x6FE9DA: pop     ebp
0x6FE9DB: pop     ebx
0x6FE9DC: add     esp, 1Ch
0x6FE9DF: retn    4
