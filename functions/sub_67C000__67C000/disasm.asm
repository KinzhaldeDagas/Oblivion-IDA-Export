0x67C000: push    ecx
0x67C001: push    esi
0x67C002: push    edi
0x67C003: mov     edi, ecx
0x67C005: mov     ecx, ds:0B33B00h
0x67C00B: xor     esi, esi
0x67C00D: call    sub_45A170
0x67C012: test    al, al
0x67C014: jz      short loc_67C01B
0x67C016: mov     esi, 6
0x67C01B: add     esi, 2
0x67C01E: mov     [esp+0Ch+var_4], esi
0x67C022: mov     esi, [edi]
0x67C024: test    esi, esi
0x67C026: mov     di, word ptr [esp+0Ch+var_4]
0x67C02B: jz      short loc_67C04C
0x67C02D: lea     ecx, [ecx+0]
0x67C030: cmp     dword ptr [esi+4], 0
0x67C034: jnz     short loc_67C03B
0x67C036: cmp     dword ptr [esi], 0
0x67C039: jz      short loc_67C04C
0x67C03B: mov     ecx, [esi]
0x67C03D: call    sub_67B730
0x67C042: mov     esi, [esi+4]
0x67C045: add     di, ax
0x67C048: test    esi, esi
0x67C04A: jnz     short loc_67C030
0x67C04C: cmp     byte ptr ds:0B05BACh, 0
0x67C053: jz      short loc_67C0C0
0x67C055: mov     eax, ds:0B33B00h
0x67C05A: mov     esi, [eax+84h]
0x67C060: test    esi, esi
0x67C062: jz      short loc_67C0A5
0x67C064: mov     ecx, [esi]
0x67C066: push    ecx; a1
0x67C067: call    TESForm_LookupByFormID
0x67C06C: mov     edx, [esi+5]
0x67C06F: add     esp, 4
0x67C072: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67C077: push    218h
0x67C07C: push    edx
0x67C07D: mov     edx, [eax]
0x67C07F: mov     ecx, eax
0x67C081: mov     eax, [edx+0D4h]
0x67C087: call    eax
0x67C089: mov     ecx, [esi]
0x67C08B: push    eax
0x67C08C: movzx   edx, di
0x67C08F: push    ecx
0x67C090: push    edx; ArgList
0x67C091: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x67C096: call    sub_40FEC0
0x67C09B: add     esp, 1Ch
0x67C09E: mov     ax, di
0x67C0A1: pop     edi
0x67C0A2: pop     esi
0x67C0A3: pop     ecx
0x67C0A4: retn
0x67C0A5: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67C0AA: movzx   eax, di
0x67C0AD: push    218h
0x67C0B2: push    eax; ArgList
0x67C0B3: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x67C0B8: call    sub_40FEC0
0x67C0BD: add     esp, 10h
0x67C0C0: mov     ax, di
0x67C0C3: pop     edi
0x67C0C4: pop     esi
0x67C0C5: pop     ecx
0x67C0C6: retn
