0x4FAB20: sub     esp, 24h
0x4FAB23: mov     eax, ds:0B30AACh
0x4FAB28: xor     eax, esp
0x4FAB2A: mov     [esp+24h+var_4], eax
0x4FAB2E: mov     eax, [esp+24h+arg_C]
0x4FAB32: mov     ecx, [esp+24h+arg_0]
0x4FAB36: mov     edx, [esp+24h+arg_10]
0x4FAB3A: push    ebp
0x4FAB3B: mov     ebp, [esp+28h+l]
0x4FAB3F: test    ebp, ebp
0x4FAB41: push    esi
0x4FAB42: mov     esi, [esp+2Ch+a3]
0x4FAB46: mov     [esp+2Ch+a4], eax
0x4FAB4A: mov     eax, [esp+2Ch+arg_14]
0x4FAB4E: push    edi
0x4FAB4F: mov     edi, [esp+30h+arg_4]
0x4FAB53: mov     [esp+30h+var_24], ecx
0x4FAB57: mov     [esp+30h+var_14], edx
0x4FAB5B: mov     [esp+30h+var_1C], eax
0x4FAB5F: mov     [esp+30h+var_C], ebp
0x4FAB63: mov     [esp+30h+var_20], ebp
0x4FAB67: jnz     short loc_4FAB7D
0x4FAB69: pop     edi
0x4FAB6A: pop     esi
0x4FAB6B: xor     al, al
0x4FAB6D: pop     ebp
0x4FAB6E: mov     ecx, [esp+24h+var_4]
0x4FAB72: xor     ecx, esp
0x4FAB74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FAB79: add     esp, 24h
0x4FAB7C: retn
0x4FAB7D: cmp     [esp+30h+arg_1C], 0
0x4FAB82: mov     [esp+30h+var_18], 0
0x4FAB8A: jz      short loc_4FAB9B
0x4FAB8C: mov     eax, [eax+8]
0x4FAB8F: shr     eax, 3
0x4FAB92: test    al, 1
0x4FAB94: jz      short loc_4FAB9B
0x4FAB96: mov     [esp+30h+arg_1C], 0
0x4FAB9B: mov     eax, [esi]
0x4FAB9D: push    ebx; UInt16
0x4FAB9E: mov     bl, [eax+edi]
0x4FABA1: movsx   edx, bl
0x4FABA4: add     eax, 1
0x4FABA7: add     edx, 0FFFFFFB9h; switch 52 cases
0x4FABAA: cmp     edx, 33h
0x4FABAD: mov     [esi], eax
0x4FABAF: ja      def_4FABBC; jumptable 004FABBC default case, cases 72-89,91-109,111-113,115-121
0x4FABB5: movzx   edx, ds:byte_4FAE4C[edx]
0x4FABBC: jmp     ds:jpt_4FABBC[edx*4]; switch jump
0x4FABC3: movzx   edx, word ptr [eax+edi]; jumptable 004FABBC cases 71,90,114
0x4FABC7: mov     ecx, [esp+34h+var_1C]; int
0x4FABCB: add     eax, 2
0x4FABCE: mov     [esi], eax
0x4FABD0: movsx   eax, dx
0x4FABD3: push    ebp; int
0x4FABD4: push    eax; int
0x4FABD5: call    Script_GetRefVariableByIndex
0x4FABDA: test    eax, eax
0x4FABDC: mov     [esp+34h+var_18], eax
0x4FABE0: jz      loc_4FADDE
0x4FABE6: mov     ecx, [eax+8]
0x4FABE9: test    ecx, ecx
0x4FABEB: jnz     short loc_4FAC03
0x4FABED: cmp     [esp+34h+arg_1C], cl
0x4FABF1: jnz     short loc_4FAC03
0x4FABF3: cmp     [eax+0Ch], ecx
0x4FABF6: jz      loc_4FADDE
0x4FABFC: fldz
0x4FABFE: jmp     loc_4FAE1F
0x4FAC03: cmp     bl, 47h ; 'G'
0x4FAC06: jnz     short loc_4FAC26
0x4FAC08: fld     dword ptr [ecx+24h]
0x4FAC0B: mov     edx, [esp+34h+var_24]
0x4FAC0F: pop     ebx
0x4FAC10: fstp    qword ptr [edx]
0x4FAC12: pop     edi
0x4FAC13: pop     esi
0x4FAC14: mov     al, 1
0x4FAC16: pop     ebp
0x4FAC17: mov     ecx, [esp+24h+var_4]
0x4FAC1B: xor     ecx, esp
0x4FAC1D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FAC22: add     esp, 24h
0x4FAC25: retn
0x4FAC26: cmp     bl, 5Ah ; 'Z'
0x4FAC29: jnz     short loc_4FAC49
0x4FAC2B: mov     eax, [ecx+0Ch]
0x4FAC2E: mov     ecx, [esp+34h+var_24]
0x4FAC32: pop     ebx
0x4FAC33: pop     edi
0x4FAC34: pop     esi
0x4FAC35: mov     [ecx], eax
0x4FAC37: mov     al, 1
0x4FAC39: pop     ebp
0x4FAC3A: mov     ecx, [esp+24h+var_4]
0x4FAC3E: xor     ecx, esp
0x4FAC40: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FAC45: add     esp, 24h
0x4FAC48: retn
0x4FAC49: mov     eax, [esi]
0x4FAC4B: mov     bl, [eax+edi]
0x4FAC4E: add     eax, 1
0x4FAC51: cmp     bl, 58h ; 'X'
0x4FAC54: mov     [esi], eax
0x4FAC56: jz      loc_4FAD37
0x4FAC5C: mov     edx, [esp+34h+var_18]
0x4FAC60: mov     ebp, [edx+8]
0x4FAC63: test    ebp, ebp
0x4FAC65: jz      short loc_4FACCD
0x4FAC67: cmp     byte ptr [ebp+4], 3Bh ; ';'
0x4FAC6B: jnz     short loc_4FAC72
0x4FAC6D: mov     eax, [ebp+58h]
0x4FAC70: jmp     short loc_4FACC9
0x4FAC72: test    ebp, ebp
0x4FAC74: jz      short loc_4FACCD
0x4FAC76: movzx   eax, byte ptr [ebp+4]
0x4FAC7A: add     eax, 0FFFFFFCFh
0x4FAC7D: cmp     eax, 2
0x4FAC80: ja      short loc_4FACCD
0x4FAC82: lea     ecx, [ebp+44h]
0x4FAC85: call    ExtraDataList_GetReferencePointer
0x4FAC8A: test    eax, eax
0x4FAC8C: jz      short loc_4FACC2
0x4FAC8E: lea     ecx, [ebp+44h]
0x4FAC91: call    ExtraDataList_GetReferencePointer
0x4FAC96: mov     edx, [ebp+0]
0x4FAC99: mov     [esp+34h+var_10], eax
0x4FAC9D: mov     eax, [ebp+0Ch]
0x4FACA0: push    eax
0x4FACA1: mov     eax, [edx+170h]
0x4FACA7: mov     ecx, ebp
0x4FACA9: call    eax
0x4FACAB: mov     ecx, [esp+38h+var_10]
0x4FACAF: push    eax
0x4FACB0: call    sub_4D8D70
0x4FACB5: test    eax, eax
0x4FACB7: jz      short loc_4FACCD
0x4FACB9: mov     ecx, eax
0x4FACBB: call    sub_484F50
0x4FACC0: jmp     short loc_4FACC9
0x4FACC2: mov     ecx, ebp; this
0x4FACC4: call    sub_4D7250
0x4FACC9: mov     [esp+34h+var_20], eax
0x4FACCD: cmp     [esp+34h+var_20], 0
0x4FACD2: jnz     short loc_4FAD2A
0x4FACD4: pop     ebx
0x4FACD5: pop     edi
0x4FACD6: pop     esi
0x4FACD7: xor     al, al
0x4FACD9: pop     ebp
0x4FACDA: mov     ecx, [esp+24h+var_4]
0x4FACDE: xor     ecx, esp
0x4FACE0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FACE5: add     esp, 24h
0x4FACE8: retn
0x4FACE9: fild    dword ptr [eax+edi]; jumptable 004FABBC case 110
0x4FACEC: pop     ebx
0x4FACED: pop     edi
0x4FACEE: mov     al, 1
0x4FACF0: fstp    qword ptr [ecx]
0x4FACF2: add     dword ptr [esi], 4
0x4FACF5: pop     esi
0x4FACF6: pop     ebp
0x4FACF7: mov     ecx, [esp+24h+var_4]
0x4FACFB: xor     ecx, esp
0x4FACFD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FAD02: add     esp, 24h
0x4FAD05: retn
0x4FAD06: mov     edx, [eax+edi]; jumptable 004FABBC case 122
0x4FAD09: mov     [ecx], edx
0x4FAD0B: mov     eax, [eax+edi+4]
0x4FAD0F: pop     ebx
0x4FAD10: mov     [ecx+4], eax
0x4FAD13: add     dword ptr [esi], 8
0x4FAD16: pop     edi
0x4FAD17: pop     esi
0x4FAD18: mov     al, 1
0x4FAD1A: pop     ebp
0x4FAD1B: mov     ecx, [esp+24h+var_4]
0x4FAD1F: xor     ecx, esp
0x4FAD21: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FAD26: add     esp, 24h
0x4FAD29: retn
0x4FAD2A: mov     ebp, [esp+34h+var_C]
0x4FAD2E: cmp     bl, 58h ; 'X'; jumptable 004FABBC default case, cases 72-89,91-109,111-113,115-121
0x4FAD31: jnz     loc_4FADF3
0x4FAD37: mov     eax, [esi]
0x4FAD39: movsx   ecx, word ptr [eax+edi]
0x4FAD3D: add     eax, 4
0x4FAD40: push    ecx; a1
0x4FAD41: mov     [esi], eax
0x4FAD43: call    ScriptRunner_LookupCommandByOpcode
0x4FAD48: add     esp, 4
0x4FAD4B: test    eax, eax
0x4FAD4D: jz      loc_4FADDE
0x4FAD53: mov     edx, [esp+34h+var_18]
0x4FAD57: test    edx, edx
0x4FAD59: mov     ecx, [esp+34h+a4]
0x4FAD5D: jz      short loc_4FAD76
0x4FAD5F: mov     edx, [edx+8]
0x4FAD62: test    edx, edx
0x4FAD64: jz      short loc_4FAD76
0x4FAD66: movzx   ebx, byte ptr [edx+4]
0x4FAD6A: add     ebx, 0FFFFFFCFh
0x4FAD6D: xor     ecx, ecx
0x4FAD6F: cmp     ebx, 2
0x4FAD72: ja      short loc_4FAD76
0x4FAD74: mov     ecx, edx
0x4FAD76: cmp     [esp+34h+arg_1C], 0
0x4FAD7B: mov     edx, [eax+14h]
0x4FAD7E: jz      short loc_4FADB0
0x4FAD80: test    edx, edx
0x4FAD82: jz      short loc_4FADDE
0x4FAD84: mov     eax, [esp+34h+var_1C]
0x4FAD88: push    ebp; l
0x4FAD89: push    eax; a6
0x4FAD8A: mov     eax, [esp+3Ch+var_14]
0x4FAD8E: push    eax; a5
0x4FAD8F: push    ecx; a4
0x4FAD90: push    esi; a3
0x4FAD91: push    edi; a2
0x4FAD92: push    edx; a1
0x4FAD93: call    Script_ExtractArgs
0x4FAD98: add     esp, 1Ch
0x4FAD9B: pop     ebx
0x4FAD9C: pop     edi
0x4FAD9D: pop     esi
0x4FAD9E: xor     al, al
0x4FADA0: pop     ebp
0x4FADA1: mov     ecx, [esp+24h+var_4]
0x4FADA5: xor     ecx, esp
0x4FADA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FADAC: add     esp, 24h
0x4FADAF: retn
0x4FADB0: cmp     byte ptr [eax+10h], 0
0x4FADB4: jz      short loc_4FADBA
0x4FADB6: test    ecx, ecx
0x4FADB8: jz      short loc_4FADDE
0x4FADBA: mov     eax, [eax+18h]
0x4FADBD: test    eax, eax
0x4FADBF: jz      short loc_4FADDE
0x4FADC1: push    esi
0x4FADC2: mov     esi, [esp+38h+var_24]
0x4FADC6: push    esi
0x4FADC7: mov     esi, [esp+3Ch+var_1C]
0x4FADCB: push    ebp
0x4FADCC: push    esi
0x4FADCD: mov     esi, [esp+44h+var_14]
0x4FADD1: push    esi
0x4FADD2: push    ecx
0x4FADD3: push    edi
0x4FADD4: push    edx
0x4FADD5: call    eax
0x4FADD7: add     esp, 20h
0x4FADDA: test    al, al
0x4FADDC: jnz     short loc_4FAE25
0x4FADDE: pop     ebx
0x4FADDF: pop     edi
0x4FADE0: pop     esi
0x4FADE1: xor     al, al
0x4FADE3: pop     ebp
0x4FADE4: mov     ecx, [esp+24h+var_4]
0x4FADE8: xor     ecx, esp
0x4FADEA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FADEF: add     esp, 24h
0x4FADF2: retn
0x4FADF3: mov     eax, [esi]
0x4FADF5: movzx   ecx, word ptr [eax+edi]
0x4FADF9: add     eax, 2
0x4FADFC: cmp     bl, 66h ; 'f'
0x4FADFF: mov     [esi], eax
0x4FAE01: jz      short loc_4FAE0D
0x4FAE03: cmp     bl, 6Ch ; 'l'
0x4FAE06: jz      short loc_4FAE0D
0x4FAE08: cmp     bl, 73h ; 's'
0x4FAE0B: jnz     short loc_4FADDE
0x4FAE0D: mov     edx, [esp+34h+var_1C]
0x4FAE11: movsx   eax, cx
0x4FAE14: mov     ecx, [esp+34h+var_20]; this
0x4FAE18: push    edx; a3
0x4FAE19: push    eax; ArgList
0x4FAE1A: call    sub_4FA110
0x4FAE1F: mov     ecx, [esp+34h+var_24]
0x4FAE23: fstp    qword ptr [ecx]
0x4FAE25: mov     ecx, [esp+34h+var_4]
0x4FAE29: pop     ebx
0x4FAE2A: pop     edi
0x4FAE2B: pop     esi
0x4FAE2C: pop     ebp
0x4FAE2D: xor     ecx, esp
0x4FAE2F: mov     al, 1
0x4FAE31: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FAE36: add     esp, 24h
0x4FAE39: retn
