0x564860: push    0FFFFFFFFh
0x564862: push    offset SEH_5ACE20
0x564867: mov     eax, large fs:0
0x56486D: push    eax
0x56486E: sub     esp, 8
0x564871: push    ebx
0x564872: push    ebp
0x564873: push    esi
0x564874: push    edi
0x564875: mov     eax, ds:0B30AACh
0x56487A: xor     eax, esp
0x56487C: push    eax
0x56487D: lea     eax, [esp+28h+var_C]
0x564881: mov     large fs:0, eax
0x564887: mov     edi, ecx
0x564889: xor     ebx, ebx
0x56488B: mov     [esp+28h+var_14], ebx
0x56488F: mov     [esp+28h+var_10], bx
0x564894: mov     [esp+28h+var_E], bx
0x564899: mov     ecx, [edi+0DCh]
0x56489F: cmp     ecx, ebx
0x5648A1: mov     [esp+28h+var_4], ebx
0x5648A5: jz      loc_564961
0x5648AB: cmp     [edi+0E4h], ebx
0x5648B1: jz      loc_564961
0x5648B7: mov     ebp, [esp+28h+arg_4]
0x5648BB: cmp     ebp, ebx
0x5648BD: jz      loc_564961
0x5648C3: call    sub_560200
0x5648C8: mov     si, [esp+28h+arg_0]
0x5648CD: movzx   eax, ax
0x5648D0: cmp     si, ax
0x5648D3: jnb     loc_564961
0x5648D9: mov     eax, [edi]
0x5648DB: mov     edx, [eax+0A4h]
0x5648E1: mov     ecx, edi
0x5648E3: call    edx
0x5648E5: mov     ebx, eax
0x5648E7: test    ebx, ebx
0x5648E9: jnz     short loc_5648FE
0x5648EB: lea     ecx, [esp+28h+var_14]; void *
0x5648EF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5648F7: call    BSStringT_Clear
0x5648FC: jmp     short loc_56496A
0x5648FE: mov     eax, [edi+0E4h]
0x564904: movzx   esi, si
0x564907: add     esi, esi
0x564909: add     esi, esi
0x56490B: add     eax, esi
0x56490D: cmp     dword ptr [eax], 0
0x564910: jz      short loc_56492F
0x564912: mov     eax, [eax]
0x564914: mov     edx, [ebx]
0x564916: mov     edx, [edx+88h]
0x56491C: push    eax
0x56491D: lea     eax, [esp+2Ch+arg_0]
0x564921: push    eax
0x564922: mov     ecx, ebx
0x564924: call    edx
0x564926: lea     ecx, [esp+30h+var_4]; this
0x56492A: call    sub_7016A0
0x56492F: mov     eax, [ebx]
0x564931: mov     edx, [eax+84h]
0x564937: push    1
0x564939: push    ebp
0x56493A: mov     ecx, ebx
0x56493C: call    edx
0x56493E: mov     ecx, [edi+0E4h]
