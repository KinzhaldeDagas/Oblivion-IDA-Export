0x90CAE0: sub     esp, 8
0x90CAE3: push    ebx
0x90CAE4: push    ebp
0x90CAE5: mov     ebx, ecx
0x90CAE7: mov     eax, [ebx+2Ch]
0x90CAEA: mov     ecx, [ebx+28h]
0x90CAED: push    esi
0x90CAEE: lea     esi, [ebx+24h]
0x90CAF1: and     eax, 3FFFFFFFh
0x90CAF6: cmp     ecx, eax
0x90CAF8: push    edi
0x90CAF9: jnz     short loc_90CB06
0x90CAFB: push    30h ; '0'
0x90CAFD: push    esi
0x90CAFE: call    sub_8A6EE0
0x90CB03: add     esp, 8
0x90CB06: mov     eax, [esi+4]
0x90CB09: mov     ebp, [esi]
0x90CB0B: lea     ecx, [eax+eax*2]
0x90CB0E: shl     ecx, 4
0x90CB11: add     ecx, ebp
0x90CB13: inc     eax
0x90CB14: mov     [esi+4], eax
0x90CB17: mov     [esp+18h+var_4], ecx
0x90CB1B: mov     ecx, ds:0BA7D98h
0x90CB21: mov     edx, [ecx]
0x90CB23: push    22h ; '"'
0x90CB25: push    48h ; 'H'
0x90CB27: call    dword ptr [edx+10h]
0x90CB2A: xor     ecx, ecx
0x90CB2C: cmp     eax, ecx
0x90CB2E: jz      short loc_90CB6E
0x90CB30: mov     [eax], ecx
0x90CB32: mov     [eax+4], ecx
0x90CB35: mov     edx, 80000000h
0x90CB3A: mov     [eax+8], edx
0x90CB3D: mov     [eax+0Ch], ecx
0x90CB40: mov     [eax+10h], ecx
0x90CB43: mov     [eax+14h], edx
0x90CB46: mov     [eax+18h], ecx
0x90CB49: mov     [eax+1Ch], ecx
0x90CB4C: mov     [eax+20h], edx
0x90CB4F: mov     [eax+24h], ecx
0x90CB52: mov     [eax+28h], ecx
0x90CB55: mov     [eax+2Ch], edx
0x90CB58: mov     [eax+30h], ecx
0x90CB5B: mov     [eax+34h], ecx
0x90CB5E: mov     [eax+38h], edx
0x90CB61: mov     [eax+3Ch], ecx
0x90CB64: mov     [eax+40h], ecx
0x90CB67: mov     [eax+44h], edx
0x90CB6A: mov     edi, eax
0x90CB6C: jmp     short loc_90CB70
0x90CB6E: xor     edi, edi
0x90CB70: mov     eax, [ebx+48h]
0x90CB73: mov     ecx, [ebx+44h]
0x90CB76: lea     esi, [ebx+40h]
0x90CB79: and     eax, 3FFFFFFFh
0x90CB7E: cmp     ecx, eax
0x90CB80: jnz     short loc_90CB8D
0x90CB82: push    4
0x90CB84: push    esi
0x90CB85: call    sub_8A6EE0
0x90CB8A: add     esp, 8
0x90CB8D: mov     ecx, [esi+4]
0x90CB90: mov     edx, [esi]
0x90CB92: mov     [edx+ecx*4], edi
0x90CB95: mov     edx, [esi+4]
0x90CB98: inc     edx
0x90CB99: mov     [esi+4], edx
0x90CB9C: mov     ecx, [esi]
0x90CB9E: mov     esi, [esp+18h+arg_0]
0x90CBA2: mov     eax, edx
0x90CBA4: mov     ebp, [ecx+eax*4-4]
0x90CBA8: mov     eax, [esi+8]
0x90CBAB: mov     ebx, [ebp+4]
0x90CBAE: lea     edi, [ebx+eax*2]
0x90CBB1: add     edi, eax
0x90CBB3: mov     eax, [ebp+8]
0x90CBB6: and     eax, 3FFFFFFFh
0x90CBBB: cmp     eax, edi
0x90CBBD: mov     [esp+18h+var_8], ebp
0x90CBC1: jge     short loc_90CBD7
0x90CBC3: add     eax, eax
0x90CBC5: cmp     edi, eax
0x90CBC7: jl      short loc_90CBCB
0x90CBC9: mov     eax, edi
0x90CBCB: push    4
0x90CBCD: push    eax
0x90CBCE: push    ebp
0x90CBCF: call    sub_8A6E40
0x90CBD4: add     esp, 0Ch
0x90CBD7: mov     edx, [ebp+0]
0x90CBDA: mov     [ebp+4], edi
0x90CBDD: mov     edi, [esi+8]
0x90CBE0: mov     eax, [esi]
0x90CBE2: lea     ecx, [edx+ebx*4]
0x90CBE5: xor     edx, edx
0x90CBE7: test    edi, edi
0x90CBE9: jle     short loc_90CC0E
0x90CBEB: jmp     short loc_90CBF0
0x90CBED: align 10h
0x90CBF0: mov     edi, [eax]
0x90CBF2: mov     [ecx], edi
0x90CBF4: mov     edi, [eax+4]
0x90CBF7: mov     [ecx+4], edi
0x90CBFA: mov     edi, [eax+8]
0x90CBFD: mov     [ecx+8], edi
0x90CC00: add     eax, [esi+4]
0x90CC03: mov     edi, [esi+8]
0x90CC06: add     ecx, 0Ch
0x90CC09: inc     edx
0x90CC0A: cmp     edx, edi
0x90CC0C: jl      short loc_90CBF0
0x90CC0E: mov     eax, [ebp+0]
0x90CC11: mov     ecx, [esp+18h+var_4]
0x90CC15: mov     [ecx], eax
0x90CC17: mov     dword ptr [ecx+4], 0Ch
0x90CC1E: mov     edx, [esi+8]
0x90CC21: mov     [ecx+8], edx
0x90CC24: cmp     byte ptr [esi+10h], 1
0x90CC28: mov     eax, [esi+14h]
0x90CC2B: jnz     loc_90CCD8
0x90CC31: shr     eax, 1
0x90CC33: cmp     eax, 2
0x90CC36: mov     [esp+18h+arg_0], eax
0x90CC3A: mov     edx, eax
0x90CC3C: jle     short loc_90CC43
0x90CC3E: mov     edx, 3
0x90CC43: add     edx, edx
0x90CC45: dec     eax
0x90CC46: mov     [ecx+14h], edx
0x90CC49: mov     ecx, [esi+18h]
0x90CC4C: jz      short loc_90CC5C
0x90CC4E: dec     eax
0x90CC4F: jz      short loc_90CC56
0x90CC51: lea     eax, [ecx+ecx*2]
0x90CC54: jmp     short loc_90CC5F
0x90CC56: lea     eax, [ecx+ecx+1]
0x90CC5A: jmp     short loc_90CC5F
0x90CC5C: lea     eax, [ecx+2]
0x90CC5F: lea     edi, [ebp+0Ch]
0x90CC62: mov     ebp, [edi+4]
0x90CC65: lea     ebx, [eax+ebp]
0x90CC68: mov     eax, [edi+8]
0x90CC6B: and     eax, 3FFFFFFFh
0x90CC70: cmp     eax, ebx
0x90CC72: jge     short loc_90CC88
0x90CC74: add     eax, eax
0x90CC76: cmp     ebx, eax
0x90CC78: jl      short loc_90CC7C
0x90CC7A: mov     eax, ebx
0x90CC7C: push    2
0x90CC7E: push    eax
0x90CC7F: push    edi
0x90CC80: call    sub_8A6E40
0x90CC85: add     esp, 0Ch
0x90CC88: mov     eax, [edi]
0x90CC8A: mov     [edi+4], ebx
0x90CC8D: mov     edi, [esi+18h]
0x90CC90: lea     ecx, [eax+ebp*2]
0x90CC93: mov     eax, [esi+0Ch]
0x90CC96: xor     edx, edx
0x90CC98: test    edi, edi
0x90CC9A: mov     ebp, ecx
0x90CC9C: jle     loc_90CD6F
0x90CCA2: mov     edi, [esp+18h+arg_0]
0x90CCA6: add     edi, edi
0x90CCA8: jmp     short loc_90CCB0
0x90CCAA: align 10h
0x90CCB0: mov     bx, [eax]
0x90CCB3: mov     [ecx], bx
0x90CCB6: mov     bx, [eax+2]
0x90CCBA: mov     [ecx+2], bx
0x90CCBE: mov     bx, [eax+4]
0x90CCC2: mov     [ecx+4], bx
0x90CCC6: add     eax, [esi+14h]
0x90CCC9: mov     ebx, [esi+18h]
0x90CCCC: add     ecx, edi
0x90CCCE: inc     edx
0x90CCCF: cmp     edx, ebx
0x90CCD1: jl      short loc_90CCB0
0x90CCD3: jmp     loc_90CD6F
0x90CCD8: shr     eax, 2
0x90CCDB: cmp     eax, 2
0x90CCDE: mov     [esp+18h+arg_0], eax
0x90CCE2: mov     edx, eax
0x90CCE4: jle     short loc_90CCEB
0x90CCE6: mov     edx, 3
0x90CCEB: shl     edx, 2
0x90CCEE: dec     eax
0x90CCEF: mov     [ecx+14h], edx
0x90CCF2: mov     ecx, [esi+18h]
0x90CCF5: jz      short loc_90CD05
0x90CCF7: dec     eax
0x90CCF8: jz      short loc_90CCFF
0x90CCFA: lea     eax, [ecx+ecx*2]
0x90CCFD: jmp     short loc_90CD08
0x90CCFF: lea     eax, [ecx+ecx+1]
0x90CD03: jmp     short loc_90CD08
0x90CD05: lea     eax, [ecx+2]
0x90CD08: mov     edi, [esp+18h+var_8]
0x90CD0C: mov     ebp, [edi+1Ch]
0x90CD0F: add     edi, 18h
0x90CD12: lea     ebx, [eax+ebp]
0x90CD15: mov     eax, [edi+8]
0x90CD18: and     eax, 3FFFFFFFh
0x90CD1D: cmp     eax, ebx
0x90CD1F: jge     short loc_90CD35
0x90CD21: add     eax, eax
0x90CD23: cmp     ebx, eax
0x90CD25: jl      short loc_90CD29
0x90CD27: mov     eax, ebx
0x90CD29: push    4
0x90CD2B: push    eax
0x90CD2C: push    edi
0x90CD2D: call    sub_8A6E40
0x90CD32: add     esp, 0Ch
0x90CD35: mov     eax, [edi]
0x90CD37: mov     [edi+4], ebx
0x90CD3A: mov     edi, [esi+18h]
0x90CD3D: lea     ecx, [eax+ebp*4]
0x90CD40: mov     eax, [esi+0Ch]
0x90CD43: xor     edx, edx
0x90CD45: test    edi, edi
0x90CD47: mov     ebp, ecx
0x90CD49: jle     short loc_90CD6F
0x90CD4B: mov     edi, [esp+18h+arg_0]
0x90CD4F: shl     edi, 2
0x90CD52: mov     ebx, [eax]
0x90CD54: mov     [ecx], ebx
0x90CD56: mov     ebx, [eax+4]
0x90CD59: mov     [ecx+4], ebx
0x90CD5C: mov     ebx, [eax+8]
0x90CD5F: mov     [ecx+8], ebx
0x90CD62: add     eax, [esi+14h]
0x90CD65: mov     ebx, [esi+18h]
0x90CD68: add     ecx, edi
0x90CD6A: inc     edx
0x90CD6B: cmp     edx, ebx
0x90CD6D: jl      short loc_90CD52
0x90CD6F: mov     cl, [esi+10h]
0x90CD72: mov     ebx, [esp+18h+var_4]
0x90CD76: mov     [ebx+10h], cl
0x90CD79: mov     edx, [esi+18h]
0x90CD7C: mov     [ebx+18h], edx
0x90CD7F: mov     [ebx+0Ch], ebp
0x90CD82: mov     al, [esi+11h]
0x90CD85: mov     [ebx+11h], al
0x90CD88: mov     ebp, [esi+1Ch]
0x90CD8B: xor     eax, eax
0x90CD8D: cmp     ebp, eax
0x90CD8F: jz      loc_90CF1E
0x90CD95: cmp     byte ptr [esi+11h], 1
0x90CD99: mov     ecx, [esi+20h]
0x90CD9C: jnz     loc_90CE4E
0x90CDA2: cmp     ecx, eax
0x90CDA4: jnz     short loc_90CDEA
0x90CDA6: mov     edi, [esp+18h+var_8]
0x90CDAA: mov     ecx, [edi+2Ch]
0x90CDAD: mov     eax, [edi+28h]
0x90CDB0: add     edi, 24h ; '$'
0x90CDB3: and     ecx, 3FFFFFFFh
0x90CDB9: cmp     eax, ecx
0x90CDBB: jnz     short loc_90CDC8
0x90CDBD: push    1
0x90CDBF: push    edi
0x90CDC0: call    sub_8A6EE0
0x90CDC5: add     esp, 8
0x90CDC8: mov     edx, [edi+4]
0x90CDCB: mov     cl, [ebp+0]
0x90CDCE: mov     eax, [edi]
0x90CDD0: mov     [edx+eax], cl
0x90CDD3: mov     eax, [edi+4]
0x90CDD6: inc     eax
0x90CDD7: mov     [edi+4], eax
0x90CDDA: mov     edx, eax
0x90CDDC: mov     eax, [edi]
0x90CDDE: lea     ecx, [edx+eax-1]
0x90CDE2: mov     [ebx+1Ch], ecx
0x90CDE5: jmp     loc_90CEF4
0x90CDEA: mov     ebx, [esp+18h+var_8]
0x90CDEE: mov     ebp, [ebx+28h]
0x90CDF1: mov     edi, [esi+18h]
0x90CDF4: mov     eax, [ebx+2Ch]
0x90CDF7: add     ebx, 24h ; '$'
0x90CDFA: add     edi, ebp
0x90CDFC: and     eax, 3FFFFFFFh
0x90CE01: cmp     eax, edi
0x90CE03: jge     short loc_90CE19
0x90CE05: add     eax, eax
0x90CE07: cmp     edi, eax
0x90CE09: jl      short loc_90CE0D
0x90CE0B: mov     eax, edi
0x90CE0D: push    1
0x90CE0F: push    eax
0x90CE10: push    ebx
0x90CE11: call    sub_8A6E40
0x90CE16: add     esp, 0Ch
0x90CE19: mov     eax, [ebx]
0x90CE1B: mov     edx, [esp+18h+var_4]
0x90CE1F: mov     [ebx+4], edi
0x90CE22: add     eax, ebp
0x90CE24: mov     [edx+1Ch], eax
0x90CE27: mov     edx, [esi+18h]
0x90CE2A: mov     ecx, [esi+1Ch]
0x90CE2D: xor     edi, edi
0x90CE2F: test    edx, edx
0x90CE31: jle     loc_90CEF4
0x90CE37: mov     dl, [ecx]
0x90CE39: mov     [edi+eax], dl
0x90CE3C: mov     ebp, [esi+20h]
0x90CE3F: mov     edx, [esi+18h]
0x90CE42: add     ecx, ebp
0x90CE44: inc     edi
0x90CE45: cmp     edi, edx
0x90CE47: jl      short loc_90CE37
0x90CE49: jmp     loc_90CEF4
0x90CE4E: cmp     ecx, eax
0x90CE50: jnz     short loc_90CE94
0x90CE52: mov     edi, [esp+18h+var_8]
0x90CE56: mov     eax, [edi+44h]
0x90CE59: mov     ecx, [edi+40h]
0x90CE5C: add     edi, 3Ch ; '<'
0x90CE5F: and     eax, 3FFFFFFFh
0x90CE64: cmp     ecx, eax
0x90CE66: jnz     short loc_90CE73
0x90CE68: push    2
0x90CE6A: push    edi
0x90CE6B: call    sub_8A6EE0
0x90CE70: add     esp, 8
0x90CE73: mov     ecx, [edi+4]
0x90CE76: mov     ax, [ebp+0]
0x90CE7A: mov     edx, [edi]
0x90CE7C: mov     [edx+ecx*2], ax
0x90CE80: mov     eax, [edi+4]
0x90CE83: inc     eax
0x90CE84: mov     [edi+4], eax
0x90CE87: mov     edx, [edi]
0x90CE89: mov     ecx, eax
0x90CE8B: lea     eax, [edx+ecx*2-2]
0x90CE8F: mov     [ebx+1Ch], eax
0x90CE92: jmp     short loc_90CEF4
0x90CE94: mov     ebx, [esp+18h+var_8]
0x90CE98: mov     ebp, [ebx+40h]
0x90CE9B: mov     edi, [esi+18h]
0x90CE9E: mov     eax, [ebx+44h]
0x90CEA1: add     ebx, 3Ch ; '<'
0x90CEA4: add     edi, ebp
0x90CEA6: and     eax, 3FFFFFFFh
0x90CEAB: cmp     eax, edi
0x90CEAD: jge     short loc_90CEC3
0x90CEAF: add     eax, eax
0x90CEB1: cmp     edi, eax
0x90CEB3: jl      short loc_90CEB7
0x90CEB5: mov     eax, edi
0x90CEB7: push    2
0x90CEB9: push    eax
0x90CEBA: push    ebx
0x90CEBB: call    sub_8A6E40
0x90CEC0: add     esp, 0Ch
0x90CEC3: mov     ecx, [ebx]
0x90CEC5: mov     eax, [esp+18h+var_4]
0x90CEC9: mov     [ebx+4], edi
0x90CECC: lea     edx, [ecx+ebp*2]
0x90CECF: mov     [eax+1Ch], edx
0x90CED2: mov     edi, [esi+18h]
0x90CED5: mov     eax, [esi+1Ch]
0x90CED8: xor     ecx, ecx
0x90CEDA: test    edi, edi
0x90CEDC: jle     short loc_90CEF4
0x90CEDE: mov     edi, edi
0x90CEE0: mov     di, [eax]
0x90CEE3: mov     [edx+ecx*2], di
0x90CEE7: mov     ebp, [esi+20h]
0x90CEEA: mov     edi, [esi+18h]
0x90CEED: add     eax, ebp
0x90CEEF: inc     ecx
0x90CEF0: cmp     ecx, edi
0x90CEF2: jl      short loc_90CEE0
0x90CEF4: mov     eax, [esi+20h]
0x90CEF7: test    eax, eax
0x90CEF9: mov     ebp, [esp+18h+var_4]
0x90CEFD: mov     [ebp+20h], eax
0x90CF00: jz      short loc_90CF28
0x90CF02: movsx   eax, byte ptr [ebp+11h]
0x90CF06: dec     eax
0x90CF07: jz      short loc_90CF15
0x90CF09: dec     eax
0x90CF0A: jnz     short loc_90CF28
0x90CF0C: mov     dword ptr [ebp+20h], 2
0x90CF13: jmp     short loc_90CF28
0x90CF15: mov     dword ptr [ebp+20h], 1
0x90CF1C: jmp     short loc_90CF28
0x90CF1E: mov     ebp, [esp+18h+var_4]
0x90CF22: mov     [ebx+1Ch], eax
0x90CF25: mov     [ebx+20h], eax
0x90CF28: mov     eax, [ebp+1Ch]
0x90CF2B: xor     ebx, ebx
0x90CF2D: cmp     eax, ebx
0x90CF2F: jz      loc_90CFFC
0x90CF35: mov     edi, [esp+18h+var_8]
0x90CF39: mov     eax, [esi+28h]
0x90CF3C: add     edi, 30h ; '0'
0x90CF3F: cmp     eax, ebx
0x90CF41: jnz     short loc_90CF87
0x90CF43: mov     ecx, [edi+8]
0x90CF46: mov     eax, [edi+4]
0x90CF49: mov     esi, [esi+24h]
0x90CF4C: and     ecx, 3FFFFFFFh
0x90CF52: cmp     eax, ecx
0x90CF54: jnz     short loc_90CF61
0x90CF56: push    4
0x90CF58: push    edi
0x90CF59: call    sub_8A6EE0
0x90CF5E: add     esp, 8
0x90CF61: mov     ecx, [esi]
0x90CF63: mov     edx, [edi+4]
0x90CF66: mov     eax, [edi]
0x90CF68: mov     [eax+edx*4], ecx
0x90CF6B: inc     dword ptr [edi+4]
0x90CF6E: mov     [ebp+28h], ebx
0x90CF71: mov     dword ptr [ebp+2Ch], 1
0x90CF78: mov     ecx, [edi]
0x90CF7A: pop     edi
0x90CF7B: pop     esi
0x90CF7C: mov     [ebp+24h], ecx
0x90CF7F: pop     ebp
0x90CF80: pop     ebx
0x90CF81: add     esp, 8
0x90CF84: retn    4
0x90CF87: mov     ecx, [edi+4]
0x90CF8A: mov     ebx, [esi+2Ch]
0x90CF8D: mov     eax, [edi+8]
0x90CF90: add     ebx, ecx
0x90CF92: and     eax, 3FFFFFFFh
0x90CF97: cmp     eax, ebx
0x90CF99: mov     [esp+18h+arg_0], ecx
0x90CF9D: jge     short loc_90CFB7
0x90CF9F: add     eax, eax
0x90CFA1: cmp     ebx, eax
0x90CFA3: jl      short loc_90CFA7
0x90CFA5: mov     eax, ebx
0x90CFA7: push    4
0x90CFA9: push    eax
0x90CFAA: push    edi
0x90CFAB: call    sub_8A6E40
0x90CFB0: mov     ecx, [esp+24h+arg_0]
0x90CFB4: add     esp, 0Ch
0x90CFB7: mov     edx, [edi]
0x90CFB9: mov     [edi+4], ebx
0x90CFBC: mov     ebx, [esi+2Ch]
0x90CFBF: mov     eax, [esi+24h]
0x90CFC2: lea     edx, [edx+ecx*4]
0x90CFC5: xor     ecx, ecx
0x90CFC7: test    ebx, ebx
0x90CFC9: jle     short loc_90CFE0
0x90CFCB: jmp     short loc_90CFD0
0x90CFCD: align 10h
0x90CFD0: mov     ebx, [eax]
0x90CFD2: mov     [edx+ecx*4], ebx
0x90CFD5: add     eax, [esi+28h]
0x90CFD8: mov     ebx, [esi+2Ch]
0x90CFDB: inc     ecx
0x90CFDC: cmp     ecx, ebx
0x90CFDE: jl      short loc_90CFD0
0x90CFE0: mov     dword ptr [ebp+28h], 4
0x90CFE7: mov     eax, [esi+2Ch]
0x90CFEA: mov     [ebp+2Ch], eax
0x90CFED: mov     ecx, [edi]
0x90CFEF: pop     edi
0x90CFF0: pop     esi
0x90CFF1: mov     [ebp+24h], ecx
0x90CFF4: pop     ebp
0x90CFF5: pop     ebx
0x90CFF6: add     esp, 8
0x90CFF9: retn    4
0x90CFFC: pop     edi
0x90CFFD: mov     eax, offset stru_BA7A40
0x90D002: pop     esi
0x90D003: mov     [ebp+28h], ebx
0x90D006: mov     dword ptr [ebp+2Ch], 1
0x90D00D: mov     [ebp+24h], eax
0x90D010: mov     [ebp+1Ch], eax
0x90D013: pop     ebp
0x90D014: pop     ebx
0x90D015: add     esp, 8
0x90D018: retn    4
