0x78BD80: push    ebp
0x78BD81: mov     ebp, esp
0x78BD83: push    0FFFFFFFFh
0x78BD85: push    offset SEH_78BD80
0x78BD8A: mov     eax, large fs:0
0x78BD90: push    eax
0x78BD91: sub     esp, 40h
0x78BD94: push    ebx
0x78BD95: push    esi
0x78BD96: push    edi
0x78BD97: mov     eax, ds:0B30AACh
0x78BD9C: xor     eax, ebp
0x78BD9E: push    eax
0x78BD9F: lea     eax, [ebp+var_C]
0x78BDA2: mov     large fs:0, eax
0x78BDA8: mov     [ebp+var_10], esp
0x78BDAB: mov     eax, [ebp+arg_0]
0x78BDAE: push    eax
0x78BDAF: mov     ecx, offset word_B42A10
0x78BDB4: mov     [ebp+var_4], 0
0x78BDBB: call    sub_787830
0x78BDC0: mov     ecx, [ebp+var_C]
0x78BDC3: mov     large fs:0, ecx
0x78BDCA: pop     ecx
0x78BDCB: pop     edi
0x78BDCC: pop     esi
0x78BDCD: pop     ebx
0x78BDCE: mov     esp, ebp
0x78BDD0: pop     ebp
0x78BDD1: retn
0x78BDD2: mov     ecx, [ebp+var_14]
0x78BDD5: mov     edx, [ecx]
0x78BDD7: mov     eax, [edx+4]
0x78BDDA: call    eax
0x78BDDC: push    eax
0x78BDDD: push    offset aCspeedtreert_9; "CSpeedTreeRT::SetNumWindMatrices"
0x78BDE2: push    offset aSFailedS; "%s - failed [%s]"
0x78BDE7: lea     esi, [ebp+var_30]
0x78BDEA: call    sub_7A54A0
0x78BDEF: add     esp, 0Ch
0x78BDF2: cmp     dword ptr [eax+18h], 10h
0x78BDF6: mov     byte ptr [ebp+var_4], 2
0x78BDFA: jb      short loc_78BE01
0x78BDFC: mov     eax, [eax+4]
0x78BDFF: jmp     short loc_78BE04
0x78BE01: add     eax, 4
0x78BE04: push    eax; Src
0x78BE05: call    sub_7895E0
0x78BE0A: add     esp, 4
0x78BE0D: lea     ecx, [ebp+var_30]
0x78BE10: call    sub_79AB00
0x78BE15: mov     eax, offset loc_78BE1B
0x78BE1A: retn
0x78BE1B: mov     ecx, [ebp+var_C]
0x78BE1E: mov     large fs:0, ecx
0x78BE25: pop     ecx
0x78BE26: pop     edi
0x78BE27: pop     esi
0x78BE28: pop     ebx
0x78BE29: mov     esp, ebp
0x78BE2B: pop     ebp
0x78BE2C: retn
0x78BE2D: push    offset aCspeedtreert_9; "CSpeedTreeRT::SetNumWindMatrices"
0x78BE32: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78BE37: lea     esi, [ebp+var_4C]
0x78BE3A: call    sub_7A54A0
0x78BE3F: add     esp, 8
0x78BE42: cmp     dword ptr [eax+18h], 10h
0x78BE46: mov     byte ptr [ebp+var_4], 3
0x78BE4A: jb      short loc_78BE51
0x78BE4C: mov     eax, [eax+4]
0x78BE4F: jmp     short loc_78BE54
0x78BE51: add     eax, 4
0x78BE54: push    eax; Src
0x78BE55: call    sub_7895E0
0x78BE5A: add     esp, 4
0x78BE5D: lea     ecx, [ebp+var_4C]
0x78BE60: call    sub_79AB00
0x78BE65: mov     eax, offset loc_78BDC0
0x78BE6A: retn
