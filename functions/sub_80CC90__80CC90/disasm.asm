0x80CC90: push    0FFFFFFFFh
0x80CC92: push    offset SEH_808DF0
0x80CC97: mov     eax, large fs:0
0x80CC9D: push    eax
0x80CC9E: sub     esp, 8
0x80CCA1: push    ebx
0x80CCA2: push    ebp
0x80CCA3: push    esi
0x80CCA4: push    edi
0x80CCA5: mov     eax, ds:0B30AACh
0x80CCAA: xor     eax, esp
0x80CCAC: push    eax
0x80CCAD: lea     eax, [esp+28h+var_C]
0x80CCB1: mov     large fs:0, eax
0x80CCB7: mov     edi, ecx
0x80CCB9: push    1; a1
0x80CCBB: call    GetShaderDefinition
0x80CCC0: mov     ebx, [eax+4]
0x80CCC3: mov     eax, [ebx+2Ch]
0x80CCC6: add     esp, 4
0x80CCC9: test    eax, eax
0x80CCCB: mov     [esp+28h+var_14], eax
0x80CCCF: jz      short loc_80CCDB
0x80CCD1: add     eax, 4
0x80CCD4: push    eax; lpAddend
0x80CCD5: call    dword ptr ds:0A28078h
0x80CCDB: mov     ebp, [ebx+30h]
0x80CCDE: test    ebp, ebp
0x80CCE0: mov     [esp+28h+var_4], 0
0x80CCE8: mov     [esp+28h+var_10], ebp
0x80CCEC: jz      short loc_80CCF8
0x80CCEE: lea     eax, [ebp+4]
0x80CCF1: push    eax; lpAddend
0x80CCF2: call    dword ptr ds:0A28078h
0x80CCF8: mov     esi, [edi+30h]
0x80CCFB: cmp     esi, ebp
0x80CCFD: mov     byte ptr [esp+28h+var_4], 1
0x80CD02: jz      short loc_80CD35
0x80CD04: test    esi, esi
0x80CD06: jz      short loc_80CD24
0x80CD08: lea     ecx, [esi+4]
0x80CD0B: push    ecx; lpAddend
0x80CD0C: call    dword ptr ds:0A2807Ch
0x80CD12: test    eax, eax
0x80CD14: jnz     short loc_80CD24
0x80CD16: test    esi, esi
0x80CD18: jz      short loc_80CD24
0x80CD1A: mov     edx, [esi]
0x80CD1C: mov     eax, [edx]
0x80CD1E: push    1
0x80CD20: mov     ecx, esi
0x80CD22: call    eax
0x80CD24: test    ebp, ebp
0x80CD26: mov     [edi+30h], ebp
0x80CD29: jz      short loc_80CD35
0x80CD2B: add     ebp, 4
0x80CD2E: push    ebp; lpAddend
0x80CD2F: call    dword ptr ds:0A28078h
0x80CD35: mov     esi, [edi+2Ch]
0x80CD38: mov     ebp, [esp+28h+var_14]
0x80CD3C: cmp     esi, ebp
0x80CD3E: jz      short loc_80CD71
0x80CD40: test    esi, esi
0x80CD42: jz      short loc_80CD60
0x80CD44: lea     ecx, [esi+4]
0x80CD47: push    ecx; lpAddend
0x80CD48: call    dword ptr ds:0A2807Ch
0x80CD4E: test    eax, eax
0x80CD50: jnz     short loc_80CD60
0x80CD52: test    esi, esi
0x80CD54: jz      short loc_80CD60
0x80CD56: mov     edx, [esi]
0x80CD58: mov     eax, [edx]
0x80CD5A: push    1
0x80CD5C: mov     ecx, esi
0x80CD5E: call    eax
0x80CD60: test    ebp, ebp
0x80CD62: mov     [edi+2Ch], ebp
0x80CD65: jz      short loc_80CD71
0x80CD67: add     ebp, 4
0x80CD6A: push    ebp; lpAddend
0x80CD6B: call    dword ptr ds:0A28078h
0x80CD71: mov     ebp, [ebx+8Ch]
0x80CD77: mov     esi, [edi+8Ch]
0x80CD7D: cmp     esi, ebp
0x80CD7F: jz      short loc_80CDB5
0x80CD81: test    esi, esi
0x80CD83: jz      short loc_80CDA1
0x80CD85: lea     ecx, [esi+4]
0x80CD88: push    ecx; lpAddend
0x80CD89: call    dword ptr ds:0A2807Ch
0x80CD8F: test    eax, eax
0x80CD91: jnz     short loc_80CDA1
0x80CD93: test    esi, esi
0x80CD95: jz      short loc_80CDA1
0x80CD97: mov     edx, [esi]
0x80CD99: mov     eax, [edx]
0x80CD9B: push    1
0x80CD9D: mov     ecx, esi
0x80CD9F: call    eax
0x80CDA1: test    ebp, ebp
0x80CDA3: mov     [edi+8Ch], ebp
0x80CDA9: jz      short loc_80CDB5
0x80CDAB: add     ebp, 4
0x80CDAE: push    ebp; lpAddend
0x80CDAF: call    dword ptr ds:0A28078h
0x80CDB5: mov     ebp, [ebx+90h]
0x80CDBB: mov     esi, [edi+90h]
0x80CDC1: cmp     esi, ebp
0x80CDC3: jz      short loc_80CDF9
0x80CDC5: test    esi, esi
0x80CDC7: jz      short loc_80CDE5
0x80CDC9: lea     ecx, [esi+4]
0x80CDCC: push    ecx; lpAddend
0x80CDCD: call    dword ptr ds:0A2807Ch
0x80CDD3: test    eax, eax
0x80CDD5: jnz     short loc_80CDE5
0x80CDD7: test    esi, esi
0x80CDD9: jz      short loc_80CDE5
0x80CDDB: mov     edx, [esi]
0x80CDDD: mov     eax, [edx]
0x80CDDF: push    1
0x80CDE1: mov     ecx, esi
0x80CDE3: call    eax
0x80CDE5: test    ebp, ebp
0x80CDE7: mov     [edi+90h], ebp
0x80CDED: jz      short loc_80CDF9
0x80CDEF: add     ebp, 4
0x80CDF2: push    ebp; lpAddend
0x80CDF3: call    dword ptr ds:0A28078h
0x80CDF9: mov     ebp, [ebx+94h]
0x80CDFF: mov     esi, [edi+94h]
0x80CE05: cmp     esi, ebp
0x80CE07: jz      short loc_80CE3D
0x80CE09: test    esi, esi
0x80CE0B: jz      short loc_80CE29
0x80CE0D: lea     ecx, [esi+4]
0x80CE10: push    ecx; lpAddend
0x80CE11: call    dword ptr ds:0A2807Ch
0x80CE17: test    eax, eax
0x80CE19: jnz     short loc_80CE29
0x80CE1B: test    esi, esi
0x80CE1D: jz      short loc_80CE29
0x80CE1F: mov     edx, [esi]
0x80CE21: mov     eax, [edx]
0x80CE23: push    1
0x80CE25: mov     ecx, esi
0x80CE27: call    eax
0x80CE29: test    ebp, ebp
0x80CE2B: mov     [edi+94h], ebp
0x80CE31: jz      short loc_80CE3D
0x80CE33: add     ebp, 4
0x80CE36: push    ebp; lpAddend
0x80CE37: call    dword ptr ds:0A28078h
0x80CE3D: mov     ebp, [ebx+98h]
0x80CE43: mov     esi, [edi+98h]
0x80CE49: cmp     esi, ebp
0x80CE4B: jz      short loc_80CE81
0x80CE4D: test    esi, esi
0x80CE4F: jz      short loc_80CE6D
0x80CE51: lea     ecx, [esi+4]
0x80CE54: push    ecx; lpAddend
0x80CE55: call    dword ptr ds:0A2807Ch
0x80CE5B: test    eax, eax
0x80CE5D: jnz     short loc_80CE6D
0x80CE5F: test    esi, esi
0x80CE61: jz      short loc_80CE6D
0x80CE63: mov     edx, [esi]
0x80CE65: mov     eax, [edx]
0x80CE67: push    1
0x80CE69: mov     ecx, esi
0x80CE6B: call    eax
0x80CE6D: test    ebp, ebp
0x80CE6F: mov     [edi+98h], ebp
0x80CE75: jz      short loc_80CE81
0x80CE77: add     ebp, 4
0x80CE7A: push    ebp; lpAddend
0x80CE7B: call    dword ptr ds:0A28078h
0x80CE81: mov     esi, [esp+28h+var_10]
0x80CE85: test    esi, esi
0x80CE87: mov     byte ptr [esp+28h+var_4], 0
0x80CE8C: jz      short loc_80CEA6
0x80CE8E: lea     ecx, [esi+4]
0x80CE91: push    ecx; lpAddend
0x80CE92: call    dword ptr ds:0A2807Ch
0x80CE98: test    eax, eax
0x80CE9A: jnz     short loc_80CEA6
0x80CE9C: mov     edx, [esi]
0x80CE9E: mov     eax, [edx]
0x80CEA0: push    1
0x80CEA2: mov     ecx, esi
0x80CEA4: call    eax
0x80CEA6: mov     esi, [esp+28h+var_14]
0x80CEAA: test    esi, esi
0x80CEAC: mov     [esp+28h+var_4], 0FFFFFFFFh
0x80CEB4: jz      short loc_80CECE
0x80CEB6: lea     ecx, [esi+4]
0x80CEB9: push    ecx; lpAddend
0x80CEBA: call    dword ptr ds:0A2807Ch
0x80CEC0: test    eax, eax
0x80CEC2: jnz     short loc_80CECE
0x80CEC4: mov     edx, [esi]
0x80CEC6: mov     eax, [edx]
0x80CEC8: push    1
0x80CECA: mov     ecx, esi
0x80CECC: call    eax
0x80CECE: mov     ecx, dword ptr [esp+28h+var_C]
0x80CED2: mov     large fs:0, ecx
0x80CED9: pop     ecx
0x80CEDA: pop     edi
0x80CEDB: pop     esi
0x80CEDC: pop     ebp
0x80CEDD: pop     ebx
0x80CEDE: add     esp, 14h
0x80CEE1: retn
