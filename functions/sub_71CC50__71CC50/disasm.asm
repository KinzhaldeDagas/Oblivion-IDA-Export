0x71CC50: sub     esp, 234h
0x71CC56: mov     eax, ds:0B30AACh
0x71CC5B: xor     eax, esp
0x71CC5D: mov     [esp+234h+var_4], eax
0x71CC64: push    ebx
0x71CC65: push    ebp
0x71CC66: push    esi
0x71CC67: push    edi
0x71CC68: mov     eax, [esp+244h+arg_C]
0x71CC6F: mov     ecx, [esp+244h+arg_10]
0x71CC76: mov     [esp+244h+var_20C], eax
0x71CC7A: mov     eax, [esp+244h+arg_14]
0x71CC81: mov     ebp, [ecx+14h]
0x71CC84: movzx   ecx, byte ptr [eax+12h]
0x71CC88: mov     [esp+244h+var_224], ecx
0x71CC8C: movzx   ecx, word ptr [eax+8]
0x71CC90: mov     [esp+244h+var_220], ecx
0x71CC94: movzx   ecx, byte ptr [eax+15h]
0x71CC98: mov     [esp+244h+var_231], cl
0x71CC9C: movzx   ecx, byte ptr [eax+11h]
0x71CCA0: mov     dl, [eax+16h]
0x71CCA3: mov     [esp+244h+var_228], ecx
0x71CCA7: movzx   ecx, word ptr [eax+4]
0x71CCAB: mov     [esp+244h+var_218], ecx
0x71CCAF: movzx   ecx, byte ptr [eax+14h]
0x71CCB3: mov     [esp+244h+var_232], cl
0x71CCB7: movzx   ecx, byte ptr [eax+10h]
0x71CCBB: mov     [esp+244h+var_21C], ecx
0x71CCBF: movzx   ecx, word ptr [eax]
0x71CCC2: mov     [esp+244h+var_22C], ecx
0x71CCC6: movzx   ecx, byte ptr [eax+17h]
0x71CCCA: mov     esi, 0FFh
0x71CCCF: xor     edi, edi
0x71CCD1: shr     esi, cl
0x71CCD3: movzx   ecx, byte ptr [eax+13h]
0x71CCD7: movzx   eax, word ptr [eax+0Ch]
0x71CCDB: mov     [esp+244h+var_208], eax
0x71CCDF: mov     [esp+244h+var_214], esi
0x71CCE3: mov     [esp+244h+var_210], ecx
0x71CCE7: lea     eax, [ebp+1]
0x71CCEA: jmp     short loc_71CCF4
0x71CCEC: align 10h
0x71CCF0: mov     esi, [esp+244h+var_214]
0x71CCF4: mov     ecx, [esp+244h+var_210]
0x71CCF8: movzx   ebx, byte ptr [eax+1]
0x71CCFC: shl     esi, cl
0x71CCFE: mov     cl, dl
0x71CD00: shr     bl, cl
0x71CD02: mov     ecx, [esp+244h+var_224]
0x71CD06: mov     [esp+244h+var_230], edx
0x71CD0A: and     esi, [esp+244h+var_208]
0x71CD0E: movzx   bx, bl
0x71CD12: shl     bx, cl
0x71CD15: movzx   ecx, byte ptr [eax-1]
0x71CD19: movzx   edx, cl
0x71CD1C: movzx   ecx, [esp+244h+var_232]
0x71CD21: shr     dl, cl
0x71CD23: mov     ecx, [esp+244h+var_21C]
0x71CD27: and     bx, word ptr [esp+244h+var_220]
0x71CD2C: movzx   bp, dl
0x71CD30: shl     bp, cl
0x71CD33: movzx   ecx, byte ptr [eax]
0x71CD36: and     bp, word ptr [esp+244h+var_22C]
0x71CD3B: movzx   edx, cl
0x71CD3E: movzx   ecx, [esp+244h+var_231]
0x71CD43: shr     dl, cl
0x71CD45: or      bx, bp
0x71CD48: mov     ebp, [esp+244h+var_218]
0x71CD4C: movzx   cx, dl
0x71CD50: mov     dx, cx
0x71CD53: mov     ecx, [esp+244h+var_228]
0x71CD57: shl     dx, cl
0x71CD5A: movzx   ecx, [esp+244h+var_231]
0x71CD5F: and     dx, bp
0x71CD62: or      bx, dx
0x71CD65: mov     edx, [esp+244h+var_230]
0x71CD69: or      bx, si
0x71CD6C: mov     [esp+edi*2+244h+var_204], bx
0x71CD71: movzx   ebx, byte ptr [eax+4]
0x71CD75: shr     bl, cl
0x71CD77: mov     ecx, [esp+244h+var_228]
0x71CD7B: mov     [esp+244h+var_230], edx
0x71CD7F: movzx   bx, bl
0x71CD83: shl     bx, cl
0x71CD86: movzx   ecx, byte ptr [eax+5]
0x71CD8A: mov     [esp+244h+var_234], cl
0x71CD8E: mov     cl, dl
0x71CD90: movzx   edx, [esp+244h+var_234]
0x71CD95: shr     dl, cl
0x71CD97: mov     ecx, [esp+244h+var_224]
0x71CD9B: and     bx, bp
0x71CD9E: movzx   bp, dl
0x71CDA2: shl     bp, cl
0x71CDA5: movzx   ecx, byte ptr [eax+3]
0x71CDA9: and     bp, word ptr [esp+244h+var_220]
0x71CDAE: movzx   edx, cl
0x71CDB1: movzx   ecx, [esp+244h+var_232]
0x71CDB6: shr     dl, cl
0x71CDB8: mov     ecx, [esp+244h+var_21C]
0x71CDBC: or      bx, bp
0x71CDBF: movzx   bp, dl
0x71CDC3: shl     bp, cl
0x71CDC6: movzx   ecx, [esp+244h+var_231]
0x71CDCB: and     bp, word ptr [esp+244h+var_22C]
0x71CDD0: mov     edx, [esp+244h+var_230]
0x71CDD4: or      bx, bp
0x71CDD7: or      bx, si
0x71CDDA: mov     [esp+edi*2+244h+var_202], bx
0x71CDDF: movzx   ebx, byte ptr [eax+8]
0x71CDE3: shr     bl, cl
0x71CDE5: mov     ecx, [esp+244h+var_228]
0x71CDE9: mov     [esp+244h+var_230], edx
0x71CDED: movzx   bx, bl
0x71CDF1: shl     bx, cl
0x71CDF4: movzx   ecx, byte ptr [eax+9]
0x71CDF8: and     bx, word ptr [esp+244h+var_218]
0x71CDFD: mov     [esp+244h+var_234], cl
0x71CE01: mov     cl, dl
0x71CE03: movzx   edx, [esp+244h+var_234]
0x71CE08: shr     dl, cl
0x71CE0A: mov     ecx, [esp+244h+var_224]
0x71CE0E: movzx   bp, dl
0x71CE12: shl     bp, cl
0x71CE15: movzx   ecx, byte ptr [eax+7]
0x71CE19: and     bp, word ptr [esp+244h+var_220]
0x71CE1E: movzx   edx, cl
0x71CE21: movzx   ecx, [esp+244h+var_232]
0x71CE26: shr     dl, cl
0x71CE28: mov     ecx, [esp+244h+var_21C]
0x71CE2C: or      bx, bp
0x71CE2F: add     edi, 4
0x71CE32: movzx   bp, dl
0x71CE36: shl     bp, cl
0x71CE39: movzx   ecx, [esp+244h+var_231]
0x71CE3E: and     bp, word ptr [esp+244h+var_22C]
0x71CE43: mov     edx, [esp+244h+var_230]
0x71CE47: or      bx, bp
0x71CE4A: or      bx, si
0x71CE4D: mov     word ptr [esp+edi*2+244h+var_208], bx
0x71CE52: movzx   ebx, byte ptr [eax+0Ch]
0x71CE56: shr     bl, cl
0x71CE58: mov     ecx, [esp+244h+var_228]
0x71CE5C: mov     [esp+244h+var_230], edx
0x71CE60: add     eax, 10h
0x71CE63: movzx   bx, bl
0x71CE67: shl     bx, cl
0x71CE6A: movzx   ecx, byte ptr [eax-3]
0x71CE6E: and     bx, word ptr [esp+244h+var_218]
0x71CE73: mov     [esp+244h+var_234], cl
0x71CE77: mov     cl, dl
0x71CE79: movzx   edx, [esp+244h+var_234]
0x71CE7E: shr     dl, cl
0x71CE80: mov     ecx, [esp+244h+var_224]
0x71CE84: movzx   bp, dl
0x71CE88: shl     bp, cl
0x71CE8B: movzx   ecx, byte ptr [eax-5]
0x71CE8F: and     bp, word ptr [esp+244h+var_220]
0x71CE94: mov     [esp+244h+var_234], cl
0x71CE98: movzx   ecx, [esp+244h+var_232]
0x71CE9D: movzx   edx, [esp+244h+var_234]
0x71CEA2: shr     dl, cl
0x71CEA4: mov     ecx, [esp+244h+var_21C]
0x71CEA8: or      bx, bp
0x71CEAB: movzx   bp, dl
0x71CEAF: mov     edx, [esp+244h+var_230]
0x71CEB3: shl     bp, cl
0x71CEB6: and     bp, word ptr [esp+244h+var_22C]
0x71CEBB: or      bx, bp
0x71CEBE: or      bx, si
0x71CEC1: cmp     edi, 100h
0x71CEC7: mov     word ptr [esp+edi*2+244h+var_208+2], bx
0x71CECC: jb      loc_71CCF0
0x71CED2: mov     ecx, [esp+244h+arg_4]
0x71CED9: test    ecx, ecx
0x71CEDB: mov     eax, [esp+244h+var_20C]
0x71CEDF: jbe     short loc_71CF1B
0x71CEE1: mov     esi, [esp+244h+arg_0]
0x71CEE8: mov     edi, ecx
0x71CEEA: mov     ecx, [esp+244h+arg_18]
0x71CEF1: test    esi, esi
0x71CEF3: jbe     short loc_71CF16
0x71CEF5: mov     edx, esi
0x71CEF7: jmp     short loc_71CF00
0x71CEF9: align 10h
0x71CF00: movzx   ebx, byte ptr [ecx]
0x71CF03: mov     bx, [esp+ebx*2+244h+var_204]
0x71CF08: mov     [eax], bx
0x71CF0B: add     eax, 2
0x71CF0E: add     ecx, 1
0x71CF11: sub     edx, 1
0x71CF14: jnz     short loc_71CF00
0x71CF16: sub     edi, 1
0x71CF19: jnz     short loc_71CEF1
0x71CF1B: mov     ecx, [esp+244h+var_4]
0x71CF22: pop     edi
0x71CF23: pop     esi
0x71CF24: pop     ebp
0x71CF25: pop     ebx
0x71CF26: xor     ecx, esp
0x71CF28: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71CF2D: add     esp, 234h
0x71CF33: retn
