0x648CB0: push    0FFFFFFFFh
0x648CB2: push    offset ??1LowProcess@@UAE@XZ_SEH
0x648CB7: mov     eax, large fs:0
0x648CBD: push    eax
0x648CBE: push    ecx
0x648CBF: push    ebx
0x648CC0: push    ebp
0x648CC1: push    esi
0x648CC2: push    edi
0x648CC3: mov     eax, ds:0B30AACh
0x648CC8: xor     eax, esp
0x648CCA: push    eax
0x648CCB: lea     eax, [esp+24h+var_C]
0x648CCF: mov     large fs:0, eax
0x648CD5: mov     esi, ecx
0x648CD7: mov     [esp+24h+var_10], esi
0x648CDB: mov     dword ptr [esi], offset ??_7LowProcess@@6B@; const LowProcess::`vftable'
0x648CE1: mov     ecx, [esi+34h]
0x648CE4: xor     ebx, ebx
0x648CE6: cmp     ecx, ebx
0x648CE8: mov     [esp+24h+var_4], 1
0x648CF0: jz      short loc_648CFA
0x648CF2: mov     eax, [ecx]
0x648CF4: mov     edx, [eax]
0x648CF6: push    1
0x648CF8: call    edx
0x648CFA: mov     ecx, [esi+8]
0x648CFD: cmp     ecx, ebx
0x648CFF: jz      short loc_648D3A
0x648D01: call    sub_5660A0
0x648D06: test    al, al
0x648D08: jz      short loc_648D3A
0x648D0A: mov     ecx, ds:0B33B00h
0x648D10: call    sub_45A500
0x648D15: test    al, al
0x648D17: jz      short loc_648D2A
0x648D19: mov     eax, [esi+8]
0x648D1C: mov     ecx, ds:0B33B00h
0x648D22: push    eax
0x648D23: call    sub_45C7A0
0x648D28: jmp     short loc_648D3A
0x648D2A: mov     ecx, [esi+8]
0x648D2D: cmp     ecx, ebx
0x648D2F: jz      short loc_648D3A
0x648D31: mov     edx, [ecx]
0x648D33: mov     eax, [edx+10h]
0x648D36: push    1
0x648D38: call    eax
0x648D3A: mov     eax, [esi+44h]
0x648D3D: cmp     eax, ebx
0x648D3F: mov     [esi+8], ebx
0x648D42: jz      short loc_648D58
0x648D44: cmp     [esi+48h], eax
0x648D47: jnz     short loc_648D4C
0x648D49: mov     [esi+48h], ebx
0x648D4C: push    eax
0x648D4D: call    FormHeapFree
0x648D52: add     esp, 4
0x648D55: mov     [esi+44h], ebx
0x648D58: mov     eax, [esi+48h]
0x648D5B: cmp     eax, ebx
0x648D5D: jz      short loc_648D6B
0x648D5F: push    eax
0x648D60: call    FormHeapFree
0x648D65: add     esp, 4
0x648D68: mov     [esi+48h], ebx
0x648D6B: lea     edi, [esi+3Ch]
0x648D6E: cmp     [edi+4], ebx
0x648D71: jnz     short loc_648D77
0x648D73: cmp     [edi], ebx
0x648D75: jz      short loc_648D90
0x648D77: mov     ebp, [edi]
0x648D79: push    ebp
0x648D7A: mov     ecx, edi
0x648D7C: call    BSSimpleList_Remove
0x648D81: cmp     ebp, ebx
0x648D83: jz      short loc_648D6E
0x648D85: push    ebp
0x648D86: call    FormHeapFree
0x648D8B: add     esp, 4
0x648D8E: jmp     short loc_648D6E
0x648D90: cmp     [esi+50h], ebx
0x648D93: jz      short loc_648DAB
0x648D95: mov     eax, [esi+50h]
0x648D98: mov     edi, [eax+4]
0x648D9B: push    eax
0x648D9C: call    FormHeapFree
0x648DA1: add     esp, 4
0x648DA4: cmp     edi, ebx
0x648DA6: mov     [esi+50h], edi
0x648DA9: jnz     short loc_648D95
0x648DAB: mov     [esi+4Ch], ebx
0x648DAE: mov     [esi+30h], ebx
0x648DB1: lea     edi, [esi+54h]
0x648DB4: cmp     [edi+4], ebx
0x648DB7: jnz     short loc_648DBD
0x648DB9: cmp     [edi], ebx
0x648DBB: jz      short loc_648DD6
0x648DBD: mov     ebp, [edi]
0x648DBF: push    ebp
0x648DC0: mov     ecx, edi
0x648DC2: call    BSSimpleList_Remove
0x648DC7: cmp     ebp, ebx
0x648DC9: jz      short loc_648DB4
0x648DCB: push    ebp
0x648DCC: call    FormHeapFree
0x648DD1: add     esp, 4
0x648DD4: jmp     short loc_648DB4
0x648DD6: cmp     [esi+60h], ebx
0x648DD9: jz      short loc_648DF6
0x648DDB: jmp     short loc_648DE0
0x648DDD: align 10h
0x648DE0: mov     eax, [esi+60h]
0x648DE3: mov     edi, [eax+4]
0x648DE6: push    eax
0x648DE7: call    FormHeapFree
0x648DEC: add     esp, 4
0x648DEF: cmp     edi, ebx
0x648DF1: mov     [esi+60h], edi
0x648DF4: jnz     short loc_648DE0
0x648DF6: mov     [esi+5Ch], ebx
0x648DF9: mov     ecx, [esi+64h]
0x648DFC: cmp     ecx, ebx
0x648DFE: jz      short loc_648E09
0x648E00: mov     edx, [ecx]
0x648E02: mov     eax, [edx+10h]
0x648E05: push    1
0x648E07: call    eax
0x648E09: lea     ecx, [esi+70h]
0x648E0C: mov     byte ptr [esp+24h+var_4], bl
0x648E10: call    AVCollection_destr
0x648E15: mov     ecx, esi
0x648E17: mov     [esp+24h+var_4], 0FFFFFFFFh
0x648E1F: call    sub_60CDA0
0x648E24: mov     ecx, dword ptr [esp+24h+var_C]
0x648E28: mov     large fs:0, ecx
0x648E2F: pop     ecx
0x648E30: pop     edi
0x648E31: pop     esi
0x648E32: pop     ebp
0x648E33: pop     ebx
0x648E34: add     esp, 10h
0x648E37: retn
