0x497830: push    ecx
0x497831: mov     eax, [esp+4+arg_0]
0x497835: test    eax, eax
0x497837: push    ebx
0x497838: push    edi
0x497839: mov     edi, ecx
0x49783B: mov     [esp+0Ch+var_4], 0
0x497843: mov     bl, 1
0x497845: jz      short loc_497880
0x497847: mov     ecx, [eax+3Ch]
0x49784A: test    ecx, ecx
0x49784C: jz      short loc_497880
0x49784E: cmp     byte ptr [edi], 0
0x497851: jz      short loc_497880
0x497853: mov     eax, [ecx]
0x497855: mov     edx, [eax+8]
0x497858: push    esi
0x497859: call    edx
0x49785B: mov     esi, eax
0x49785D: lea     eax, [esp+10h+var_4]
0x497861: push    eax
0x497862: push    esi
0x497863: mov     ecx, edi
0x497865: call    sub_497640
0x49786A: mov     bl, al
0x49786C: test    bl, bl
0x49786E: jnz     short loc_49787F
0x497870: push    0; a4
0x497872: push    1; a3
0x497874: push    1; a2
0x497876: push    esi; a1
0x497877: call    sub_88D070
0x49787C: add     esp, 10h
0x49787F: pop     esi
0x497880: movzx   ecx, byte ptr [edi]
0x497883: cmp     [esp+0Ch+var_4], ecx
0x497887: jnz     short loc_497898
0x497889: test    bl, bl
0x49788B: jz      short loc_497898
0x49788D: pop     edi
0x49788E: mov     eax, 1
0x497893: pop     ebx
0x497894: pop     ecx
0x497895: retn    4
0x497898: pop     edi
0x497899: xor     eax, eax
0x49789B: pop     ebx
0x49789C: pop     ecx
0x49789D: retn    4
