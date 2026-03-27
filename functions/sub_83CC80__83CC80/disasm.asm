0x83CC80: push    0FFFFFFFFh
0x83CC82: push    offset SEH_882120
0x83CC87: mov     eax, large fs:0
0x83CC8D: push    eax
0x83CC8E: push    ebx
0x83CC8F: push    ebp
0x83CC90: push    esi
0x83CC91: push    edi
0x83CC92: mov     eax, ds:0B30AACh
0x83CC97: xor     eax, esp
0x83CC99: push    eax
0x83CC9A: lea     eax, [esp+20h+var_C]
0x83CC9E: mov     large fs:0, eax
0x83CCA4: mov     esi, ecx
0x83CCA6: mov     ebx, [esp+20h+arg_8]
0x83CCAA: mov     eax, [ebx+10h]
0x83CCAD: mov     edi, ds:0B457E8h
0x83CCB3: push    eax
0x83CCB4: call    sub_848C40
0x83CCB9: mov     ebx, [ebx+0Ch]
0x83CCBC: push    ebx
0x83CCBD: mov     ecx, esi
0x83CCBF: call    sub_848E50
0x83CCC4: mov     ecx, [esp+20h+arg_0]
0x83CCC8: mov     eax, [esi]
0x83CCCA: mov     edx, [eax+0BCh]
0x83CCD0: push    0
0x83CCD2: push    ebx
0x83CCD3: push    ecx
0x83CCD4: mov     ecx, esi
0x83CCD6: call    edx
0x83CCD8: mov     eax, [edi+24h]
0x83CCDB: mov     ebx, [esp+20h+arg_C]
0x83CCDF: mov     ebp, [eax]
0x83CCE1: mov     edx, [ebx]
0x83CCE3: mov     eax, [edx+88h]
0x83CCE9: push    0
0x83CCEB: mov     ecx, ebx
0x83CCED: mov     [esp+24h+arg_8], ebp
0x83CCF1: call    eax
0x83CCF3: mov     ebp, [ebp+4]
0x83CCF6: cmp     ebp, eax
0x83CCF8: mov     [esp+20h+arg_0], eax
0x83CCFC: jz      short loc_83CD38
0x83CCFE: test    ebp, ebp
0x83CD00: jz      short loc_83CD23
0x83CD02: lea     ecx, [ebp+4]
0x83CD05: push    ecx; lpAddend
0x83CD06: call    dword ptr ds:0A2807Ch
0x83CD0C: test    eax, eax
0x83CD0E: jnz     short loc_83CD1F
0x83CD10: test    ebp, ebp
0x83CD12: jz      short loc_83CD1F
0x83CD14: mov     edx, [ebp+0]
0x83CD17: mov     eax, [edx]
0x83CD19: push    1
0x83CD1B: mov     ecx, ebp
0x83CD1D: call    eax
0x83CD1F: mov     eax, [esp+20h+arg_0]
0x83CD23: test    eax, eax
0x83CD25: mov     ecx, [esp+20h+arg_8]
0x83CD29: mov     [ecx+4], eax
0x83CD2C: jz      short loc_83CD38
0x83CD2E: add     eax, 4
0x83CD31: push    eax; lpAddend
0x83CD32: call    dword ptr ds:0A28078h
0x83CD38: mov     edx, [esp+20h+arg_8]
0x83CD3C: push    ebx
0x83CD3D: push    edx
0x83CD3E: mov     ecx, esi
0x83CD40: call    sub_848FA0
0x83CD45: mov     eax, [edi+24h]
0x83CD48: mov     ebp, [eax+4]
0x83CD4B: push    0
0x83CD4D: push    ebx
0x83CD4E: mov     ecx, esi
0x83CD50: mov     [esp+28h+arg_8], ebp
0x83CD54: call    sub_848FD0
0x83CD59: mov     ebp, [ebp+4]
0x83CD5C: cmp     ebp, eax
0x83CD5E: mov     [esp+20h+arg_0], eax
0x83CD62: jz      short loc_83CD9E
0x83CD64: test    ebp, ebp
0x83CD66: jz      short loc_83CD89
0x83CD68: lea     ecx, [ebp+4]
0x83CD6B: push    ecx; lpAddend
0x83CD6C: call    dword ptr ds:0A2807Ch
0x83CD72: test    eax, eax
0x83CD74: jnz     short loc_83CD85
0x83CD76: test    ebp, ebp
0x83CD78: jz      short loc_83CD85
0x83CD7A: mov     edx, [ebp+0]
0x83CD7D: mov     eax, [edx]
0x83CD7F: push    1
0x83CD81: mov     ecx, ebp
0x83CD83: call    eax
0x83CD85: mov     eax, [esp+20h+arg_0]
0x83CD89: test    eax, eax
0x83CD8B: mov     ecx, [esp+20h+arg_8]
0x83CD8F: mov     [ecx+4], eax
0x83CD92: jz      short loc_83CD9E
0x83CD94: add     eax, 4
0x83CD97: push    eax; lpAddend
0x83CD98: call    dword ptr ds:0A28078h
0x83CD9E: mov     edx, [esp+20h+arg_8]
0x83CDA2: push    ebx
0x83CDA3: push    edx
0x83CDA4: mov     ecx, esi
0x83CDA6: call    sub_848FA0
0x83CDAB: mov     ebx, 1
0x83CDB0: add     [edi+60h], ebx
0x83CDB3: mov     [esp+20h+arg_8], edi
0x83CDB7: mov     ecx, [esi+38h]
0x83CDBA: lea     eax, [esp+20h+arg_8]
0x83CDBE: push    eax
0x83CDBF: push    ecx
0x83CDC0: lea     ecx, [esi+40h]
0x83CDC3: mov     [esp+28h+var_4], 0
0x83CDCB: call    sub_76CE40
0x83CDD0: or      eax, 0FFFFFFFFh
0x83CDD3: add     [edi+60h], eax
0x83CDD6: mov     [esp+20h+var_4], eax
0x83CDDA: jnz     short loc_83CDE3
0x83CDDC: mov     ecx, edi
0x83CDDE: call    sub_7604D0
0x83CDE3: add     [esi+38h], ebx
0x83CDE6: mov     ecx, [esp+20h+var_C]
0x83CDEA: mov     large fs:0, ecx
0x83CDF1: pop     ecx
0x83CDF2: pop     edi
0x83CDF3: pop     esi
0x83CDF4: pop     ebp
0x83CDF5: pop     ebx
0x83CDF6: add     esp, 0Ch
0x83CDF9: retn    10h
