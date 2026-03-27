0x62B7A0: sub     esp, 0Ch
0x62B7A3: push    ebx
0x62B7A4: push    ebp
0x62B7A5: push    esi
0x62B7A6: mov     esi, ecx
0x62B7A8: mov     eax, [esi]
0x62B7AA: mov     edx, [eax+184h]
0x62B7B0: push    edi
0x62B7B1: call    edx
0x62B7B3: mov     ebx, eax
0x62B7B5: xor     ebp, ebp
0x62B7B7: test    ebx, ebx
0x62B7B9: jz      short loc_62B7CA
0x62B7BB: cmp     byte ptr [ebx+20h], 10h
0x62B7BF: jnz     short loc_62B7CA
0x62B7C1: mov     ecx, ebx
0x62B7C3: mov     ebp, ebx
0x62B7C5: call    sub_626DE0
0x62B7CA: mov     edi, [esp+1Ch+arg_0]
0x62B7CE: mov     eax, [edi]
0x62B7D0: mov     edx, [eax+25Ch]
0x62B7D6: mov     ecx, edi
0x62B7D8: call    edx
0x62B7DA: test    al, al
0x62B7DC: jz      short loc_62B7E5
0x62B7DE: push    1
0x62B7E0: jmp     loc_62B9FD
0x62B7E5: cmp     dword ptr [esi+2Ch], 0
0x62B7E9: jnz     short loc_62B7F8
0x62B7EB: mov     eax, [esi]
0x62B7ED: mov     edx, [eax+558h]
0x62B7F3: push    edi
0x62B7F4: mov     ecx, esi
0x62B7F6: call    edx
0x62B7F8: mov     eax, [esi]
0x62B7FA: mov     edx, [eax+55Ch]
0x62B800: push    edi
0x62B801: mov     ecx, esi
0x62B803: call    edx
0x62B805: mov     ecx, [ebx+28h]
0x62B808: test    ecx, ecx
0x62B80A: jz      short loc_62B81B
0x62B80C: call    sub_452A60
0x62B811: mov     [esp+1Ch+arg_0], eax
0x62B815: fild    [esp+1Ch+arg_0]
0x62B819: jmp     short loc_62B834
0x62B81B: mov     ecx, ebx
0x62B81D: call    sub_566DB0
0x62B822: test    eax, eax
0x62B824: mov     [esp+1Ch+arg_0], eax
0x62B828: fild    [esp+1Ch+arg_0]
0x62B82C: jge     short loc_62B834
0x62B82E: fadd    dword ptr ds:0A2FC78h
0x62B834: mov     eax, [esi+2Ch]
0x62B837: fstp    [esp+1Ch+arg_0]
0x62B83B: test    eax, eax
0x62B83D: jz      short loc_62B8A8
0x62B83F: push    0
0x62B841: push    eax
0x62B842: mov     ecx, edi
0x62B844: call    TesObjectREF_GetDistance
0x62B849: fld     [esp+1Ch+arg_0]
0x62B84D: fcompp
0x62B84F: fnstsw  ax
0x62B851: test    ah, 41h
0x62B854: jnz     short loc_62B8A8
0x62B856: mov     eax, [edi]
0x62B858: mov     edx, [eax+318h]
0x62B85E: push    0
0x62B860: push    0
0x62B862: push    1
0x62B864: push    1
0x62B866: push    edi
0x62B867: mov     ecx, edi
0x62B869: call    edx
0x62B86B: xor     edi, edi
0x62B86D: cmp     [esi+2Ch], edi
0x62B870: jz      short loc_62B886
0x62B872: mov     ecx, [esi+2Ch]
0x62B875: mov     eax, [ecx]
0x62B877: mov     edx, [eax+190h]
0x62B87D: call    edx
0x62B87F: test    al, al
0x62B881: jz      short loc_62B886
0x62B883: mov     edi, [esi+2Ch]
0x62B886: test    ebp, ebp
0x62B888: jz      loc_62BA0A
0x62B88E: test    edi, edi
0x62B890: jz      loc_62BA0A
0x62B896: push    edi
0x62B897: mov     ecx, ebp
0x62B899: call    sub_626C90
0x62B89E: pop     edi
0x62B89F: pop     esi
0x62B8A0: pop     ebp
0x62B8A1: pop     ebx
0x62B8A2: add     esp, 0Ch
0x62B8A5: retn    4
0x62B8A8: cmp     dword ptr [esi+2Ch], 0
0x62B8AC: jnz     loc_62B98C
0x62B8B2: fld     dword ptr ds:0A30634h
0x62B8B8: push    ecx
0x62B8B9: fstp    [esp+20h+var_20]; float
0x62B8BC: push    0; char
0x62B8BE: push    edi; int
0x62B8BF: mov     ecx, ebx
0x62B8C1: call    sub_566DC0
0x62B8C6: test    al, al
0x62B8C8: jnz     loc_62B98C
0x62B8CE: push    edi
0x62B8CF: mov     ecx, ebx
0x62B8D1: call    sub_566A40
0x62B8D6: mov     ebp, eax
0x62B8D8: push    edi
0x62B8D9: lea     eax, [esp+20h+var_C]
0x62B8DD: push    eax
0x62B8DE: mov     ecx, ebx
0x62B8E0: call    sub_566B30
0x62B8E5: cmp     byte ptr [esi+0D0h], 0
0x62B8EC: mov     ecx, edi; this
0x62B8EE: jz      short loc_62B927
0x62B8F0: mov     ebx, [esi]
0x62B8F2: call    TESObjectREFR_GetWorldSpace
0x62B8F7: mov     ecx, [esp+1Ch+var_C]
0x62B8FB: mov     edx, [esp+1Ch+var_8]
0x62B8FF: push    eax
0x62B900: push    ebp
0x62B901: sub     esp, 0Ch
0x62B904: mov     eax, esp
0x62B906: mov     [eax], ecx
0x62B908: mov     ecx, [esp+30h+var_4]
0x62B90C: mov     [eax+4], edx
0x62B90F: mov     edx, [ebx+3DCh]
0x62B915: mov     [eax+8], ecx
0x62B918: push    edi
0x62B919: mov     ecx, esi
0x62B91B: call    edx
0x62B91D: pop     edi
0x62B91E: pop     esi
0x62B91F: pop     ebp
0x62B920: pop     ebx
0x62B921: add     esp, 0Ch
0x62B924: retn    4
0x62B927: mov     eax, [edi]
0x62B929: mov     edx, [eax+164h]
0x62B92F: call    edx
0x62B931: test    eax, eax
0x62B933: jz      short loc_62B94D
0x62B935: mov     ecx, eax
0x62B937: call    sub_472EA0
0x62B93C: test    al, al
0x62B93E: jnz     short loc_62B94D
0x62B940: mov     eax, [esi]
0x62B942: mov     edx, [eax+594h]
0x62B948: push    edi
0x62B949: mov     ecx, esi
0x62B94B: call    edx
0x62B94D: mov     eax, [esi]
0x62B94F: mov     edx, [eax+238h]
0x62B955: push    201h
0x62B95A: push    edi
0x62B95B: mov     ecx, esi
0x62B95D: call    edx
0x62B95F: fld     [esp+1Ch+arg_0]
0x62B963: mov     ebx, [esi]
0x62B965: push    ecx
0x62B966: mov     ecx, edi; this
0x62B968: fstp    [esp+20h+var_20]
0x62B96B: call    TESObjectREFR_GetWorldSpace
0x62B970: mov     edx, [ebx+414h]
0x62B976: push    eax
0x62B977: push    ebp
0x62B978: lea     eax, [esp+28h+var_C]
0x62B97C: push    eax
0x62B97D: push    edi
0x62B97E: mov     ecx, esi
0x62B980: call    edx
0x62B982: pop     edi
0x62B983: pop     esi
0x62B984: pop     ebp
0x62B985: pop     ebx
0x62B986: add     esp, 0Ch
0x62B989: retn    4
0x62B98C: cmp     byte ptr [esi+0D0h], 0
0x62B993: jnz     short loc_62B9D1
0x62B995: mov     eax, [esi]
0x62B997: mov     edx, [eax+194h]
0x62B99D: push    edi
0x62B99E: mov     ecx, esi
0x62B9A0: call    edx
0x62B9A2: mov     eax, [edi]
0x62B9A4: mov     edx, [eax+164h]
0x62B9AA: mov     ecx, edi
0x62B9AC: call    edx
0x62B9AE: test    eax, eax
0x62B9B0: jz      short loc_62BA0A
0x62B9B2: mov     ecx, eax
0x62B9B4: call    sub_472EA0
0x62B9B9: test    al, al
0x62B9BB: jz      short loc_62BA0A
0x62B9BD: mov     eax, [esi]
0x62B9BF: mov     edx, [eax+48h]
0x62B9C2: push    edi
0x62B9C3: mov     ecx, esi
0x62B9C5: call    edx
0x62B9C7: pop     edi
0x62B9C8: pop     esi
0x62B9C9: pop     ebp
0x62B9CA: pop     ebx
0x62B9CB: add     esp, 0Ch
0x62B9CE: retn    4
0x62B9D1: cmp     dword ptr [esi+2Ch], 0
0x62B9D5: jz      short loc_62BA0A
0x62B9D7: mov     ecx, [esi+2Ch]
0x62B9DA: mov     eax, [ecx]
0x62B9DC: mov     edx, [eax+190h]
0x62B9E2: call    edx
0x62B9E4: test    al, al
0x62B9E6: jz      short loc_62BA0A
0x62B9E8: mov     ecx, [esi+2Ch]
0x62B9EB: mov     eax, [ecx]
0x62B9ED: mov     edx, [eax+334h]
0x62B9F3: push    1
0x62B9F5: call    edx
0x62B9F7: test    al, al
0x62B9F9: jnz     short loc_62BA0A
0x62B9FB: push    3
0x62B9FD: mov     eax, [esi]
0x62B9FF: mov     edx, [eax+188h]
0x62BA05: push    edi
0x62BA06: mov     ecx, esi
0x62BA08: call    edx
0x62BA0A: pop     edi
0x62BA0B: pop     esi
0x62BA0C: pop     ebp
0x62BA0D: pop     ebx
0x62BA0E: add     esp, 0Ch
0x62BA11: retn    4
