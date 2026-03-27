0x84CDB0: push    0FFFFFFFFh
0x84CDB2: push    offset SEH_879360
0x84CDB7: mov     eax, large fs:0
0x84CDBD: push    eax
0x84CDBE: push    ecx
0x84CDBF: push    ebx
0x84CDC0: push    ebp
0x84CDC1: push    esi
0x84CDC2: push    edi
0x84CDC3: mov     eax, ds:0B30AACh
0x84CDC8: xor     eax, esp
0x84CDCA: push    eax
0x84CDCB: lea     eax, [esp+24h+var_C]
0x84CDCF: mov     large fs:0, eax
0x84CDD5: mov     esi, ecx
0x84CDD7: mov     [esp+24h+var_10], esi
0x84CDDB: mov     edi, [esp+24h+arg_8]
0x84CDDF: mov     eax, [edi+10h]
0x84CDE2: mov     ebx, ds:0B456A4h
0x84CDE8: push    eax
0x84CDE9: call    sub_848DA0
0x84CDEE: mov     edi, [edi+0Ch]
0x84CDF1: push    edi
0x84CDF2: mov     ecx, esi
0x84CDF4: call    sub_848E50
0x84CDF9: mov     eax, [ebx+24h]
0x84CDFC: mov     esi, [esp+24h+arg_C]
0x84CE00: mov     edi, [eax]
0x84CE02: mov     edx, [esi]
0x84CE04: mov     eax, [edx+88h]
0x84CE0A: push    0
0x84CE0C: mov     ecx, esi
0x84CE0E: mov     [esp+28h+arg_8], edi
0x84CE12: call    eax
0x84CE14: mov     edi, [edi+4]
0x84CE17: mov     ebp, eax
0x84CE19: cmp     edi, ebp
0x84CE1B: jz      short loc_84CE54
0x84CE1D: test    edi, edi
0x84CE1F: jz      short loc_84CE3D
0x84CE21: lea     ecx, [edi+4]
0x84CE24: push    ecx; lpAddend
0x84CE25: call    dword ptr ds:0A2807Ch
0x84CE2B: test    eax, eax
0x84CE2D: jnz     short loc_84CE3D
0x84CE2F: test    edi, edi
0x84CE31: jz      short loc_84CE3D
0x84CE33: mov     edx, [edi]
0x84CE35: mov     eax, [edx]
0x84CE37: push    1
0x84CE39: mov     ecx, edi
0x84CE3B: call    eax
0x84CE3D: test    ebp, ebp
0x84CE3F: mov     edi, [esp+24h+arg_8]
0x84CE43: mov     [edi+4], ebp
0x84CE46: jz      short loc_84CE58
0x84CE48: add     ebp, 4
0x84CE4B: push    ebp; lpAddend
0x84CE4C: call    dword ptr ds:0A28078h
0x84CE52: jmp     short loc_84CE58
0x84CE54: mov     edi, [esp+24h+arg_8]
0x84CE58: test    edi, edi
0x84CE5A: jz      short loc_84CE76
0x84CE5C: cmp     byte ptr ds:0B42CDDh, 0
0x84CE63: jz      short loc_84CE76
0x84CE65: mov     edx, [esi]
0x84CE67: mov     eax, [edx+78h]
0x84CE6A: mov     ecx, esi
0x84CE6C: call    eax
0x84CE6E: push    eax
0x84CE6F: mov     ecx, edi
0x84CE71: call    sub_7715E0
0x84CE76: mov     ecx, [ebx+24h]
0x84CE79: mov     edi, [ecx+4]
0x84CE7C: mov     edx, [esi]
0x84CE7E: mov     eax, [edx+8Ch]
0x84CE84: push    0
0x84CE86: mov     ecx, esi
0x84CE88: mov     [esp+28h+arg_8], edi
0x84CE8C: call    eax
0x84CE8E: test    eax, eax
0x84CE90: jz      short loc_84CEA4
0x84CE92: mov     edx, [esi]
0x84CE94: mov     eax, [edx+8Ch]
0x84CE9A: push    0
0x84CE9C: mov     ecx, esi
0x84CE9E: call    eax
0x84CEA0: mov     ebp, eax
0x84CEA2: jmp     short loc_84CEB9
0x84CEA4: test    dword ptr [esi+1Ch], 80h
0x84CEAB: mov     ebp, ds:0B430F0h
0x84CEB1: ja      short loc_84CEB9
0x84CEB3: mov     ebp, ds:0B430DCh
0x84CEB9: mov     edi, [edi+4]
0x84CEBC: cmp     edi, ebp
0x84CEBE: jz      short loc_84CEF7
0x84CEC0: test    edi, edi
0x84CEC2: jz      short loc_84CEE0
0x84CEC4: lea     ecx, [edi+4]
0x84CEC7: push    ecx; lpAddend
0x84CEC8: call    dword ptr ds:0A2807Ch
0x84CECE: test    eax, eax
0x84CED0: jnz     short loc_84CEE0
0x84CED2: test    edi, edi
0x84CED4: jz      short loc_84CEE0
0x84CED6: mov     edx, [edi]
0x84CED8: mov     eax, [edx]
0x84CEDA: push    1
0x84CEDC: mov     ecx, edi
0x84CEDE: call    eax
0x84CEE0: test    ebp, ebp
0x84CEE2: mov     edi, [esp+24h+arg_8]
0x84CEE6: mov     [edi+4], ebp
0x84CEE9: jz      short loc_84CEFB
0x84CEEB: add     ebp, 4
0x84CEEE: push    ebp; lpAddend
0x84CEEF: call    dword ptr ds:0A28078h
0x84CEF5: jmp     short loc_84CEFB
0x84CEF7: mov     edi, [esp+24h+arg_8]
0x84CEFB: test    edi, edi
0x84CEFD: jz      short loc_84CF19
0x84CEFF: cmp     byte ptr ds:0B42CDDh, 0
0x84CF06: jz      short loc_84CF19
0x84CF08: mov     edx, [esi]
0x84CF0A: mov     eax, [edx+78h]
0x84CF0D: mov     ecx, esi
0x84CF0F: call    eax
0x84CF11: push    eax
0x84CF12: mov     ecx, edi
0x84CF14: call    sub_7715E0
0x84CF19: mov     ecx, [ebx+24h]
0x84CF1C: mov     edi, [ecx+8]
0x84CF1F: mov     edx, [esi]
0x84CF21: mov     eax, [edx+90h]
0x84CF27: push    0
0x84CF29: mov     ecx, esi
0x84CF2B: mov     [esp+28h+arg_8], edi
0x84CF2F: call    eax
0x84CF31: mov     edi, [edi+4]
0x84CF34: mov     ebp, eax
0x84CF36: cmp     edi, ebp
0x84CF38: jz      short loc_84CF71
0x84CF3A: test    edi, edi
0x84CF3C: jz      short loc_84CF5A
0x84CF3E: lea     ecx, [edi+4]
0x84CF41: push    ecx; lpAddend
0x84CF42: call    dword ptr ds:0A2807Ch
0x84CF48: test    eax, eax
0x84CF4A: jnz     short loc_84CF5A
0x84CF4C: test    edi, edi
0x84CF4E: jz      short loc_84CF5A
0x84CF50: mov     edx, [edi]
0x84CF52: mov     eax, [edx]
0x84CF54: push    1
0x84CF56: mov     ecx, edi
0x84CF58: call    eax
0x84CF5A: test    ebp, ebp
0x84CF5C: mov     edi, [esp+24h+arg_8]
0x84CF60: mov     [edi+4], ebp
0x84CF63: jz      short loc_84CF75
0x84CF65: add     ebp, 4
0x84CF68: push    ebp; lpAddend
0x84CF69: call    dword ptr ds:0A28078h
0x84CF6F: jmp     short loc_84CF75
0x84CF71: mov     edi, [esp+24h+arg_8]
0x84CF75: test    edi, edi
0x84CF77: jz      short loc_84CF93
0x84CF79: cmp     byte ptr ds:0B42CDDh, 0
0x84CF80: jz      short loc_84CF93
0x84CF82: mov     edx, [esi]
0x84CF84: mov     eax, [edx+78h]
0x84CF87: mov     ecx, esi
0x84CF89: call    eax
0x84CF8B: push    eax
0x84CF8C: mov     ecx, edi
0x84CF8E: call    sub_7715E0
0x84CF93: mov     edi, 1
0x84CF98: add     [ebx+60h], edi
0x84CF9B: mov     [esp+24h+arg_8], ebx
0x84CF9F: mov     esi, [esp+24h+var_10]
0x84CFA3: mov     edx, [esi+38h]
0x84CFA6: lea     ecx, [esp+24h+arg_8]
0x84CFAA: push    ecx
0x84CFAB: push    edx
0x84CFAC: lea     ecx, [esi+40h]
0x84CFAF: mov     [esp+2Ch+var_4], 0
0x84CFB7: call    sub_76CE40
0x84CFBC: or      eax, 0FFFFFFFFh
0x84CFBF: add     [ebx+60h], eax
0x84CFC2: mov     [esp+24h+var_4], eax
0x84CFC6: jnz     short loc_84CFCF
0x84CFC8: mov     ecx, ebx
0x84CFCA: call    sub_7604D0
0x84CFCF: add     [esi+38h], edi
0x84CFD2: mov     ecx, dword ptr [esp+24h+var_C]
0x84CFD6: mov     large fs:0, ecx
0x84CFDD: pop     ecx
0x84CFDE: pop     edi
0x84CFDF: pop     esi
0x84CFE0: pop     ebp
0x84CFE1: pop     ebx
0x84CFE2: add     esp, 10h
0x84CFE5: retn    10h
