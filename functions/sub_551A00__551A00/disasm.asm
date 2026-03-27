0x551A00: sub     esp, 108h
0x551A06: mov     eax, ds:0B30AACh
0x551A0B: xor     eax, esp
0x551A0D: mov     [esp+108h+var_4], eax
0x551A14: mov     eax, [esp+108h+arg_C]
0x551A1B: test    eax, eax
0x551A1D: push    ebx
0x551A1E: push    ebp
0x551A1F: push    esi
0x551A20: mov     esi, [esp+114h+arg_0]
0x551A27: push    edi
0x551A28: movzx   edi, [esp+118h+arg_8]
0x551A30: mov     bl, 4Dh ; 'M'
0x551A32: jz      loc_551B1A
0x551A38: cmp     edi, 64h ; 'd'
0x551A3B: jg      loc_551B1A
0x551A41: mov     ebp, [esp+118h+arg_4]
0x551A48: cmp     ebp, 2
0x551A4B: jge     loc_551B1A
0x551A51: lea     edx, [esp+118h+Str]
0x551A55: sub     edx, eax
0x551A57: mov     cl, [eax]
0x551A59: mov     [edx+eax], cl
0x551A5C: add     eax, 1
0x551A5F: test    cl, cl
0x551A61: jnz     short loc_551A57
0x551A63: lea     eax, [esp+118h+Str]
0x551A67: push    2Eh ; '.'; Ch
0x551A69: push    eax; Str
0x551A6A: call    _strrchr
0x551A6F: add     esp, 8
0x551A72: test    eax, eax
0x551A74: jz      loc_551B1A
0x551A7A: cmp     ebp, 1
0x551A7D: mov     byte ptr [eax], 0
0x551A80: jnz     short loc_551A84
0x551A82: mov     bl, 46h ; 'F'
0x551A84: push    edi
0x551A85: movsx   ebx, bl
0x551A88: push    ebx
0x551A89: lea     ecx, [esp+120h+Str]
0x551A8D: push    ecx; ArgList
0x551A8E: push    offset aTexturesSCD_dd; "Textures\\%s%c%d.dds"
0x551A93: push    esi; int
0x551A94: call    BSStringT_Static_Format
0x551A99: mov     ecx, ds:0B33A04h
0x551A9F: mov     eax, [esi]
0x551AA1: add     esp, 14h
0x551AA4: test    ecx, ecx
0x551AA6: jz      short loc_551ABE
0x551AA8: mov     edx, [ecx]
0x551AAA: push    0FFFFFFFFh
0x551AAC: push    0
0x551AAE: push    0
0x551AB0: push    eax
0x551AB1: mov     eax, [edx+4]
0x551AB4: call    eax
0x551AB6: test    eax, eax
0x551AB8: jz      short loc_551ABE
0x551ABA: mov     eax, [esi]
0x551ABC: jmp     short loc_551B1C
0x551ABE: mov     eax, 66666667h
0x551AC3: imul    edi
0x551AC5: sar     edx, 2
0x551AC8: mov     eax, edx
0x551ACA: shr     eax, 1Fh
0x551ACD: add     eax, edx
0x551ACF: lea     edi, [eax+eax*4]
0x551AD2: add     edi, edi
0x551AD4: push    edi
0x551AD5: push    ebx
0x551AD6: lea     ecx, [esp+120h+Str]
0x551ADA: push    ecx; ArgList
0x551ADB: push    offset aTexturesSCD_dd; "Textures\\%s%c%d.dds"
0x551AE0: push    esi; int
0x551AE1: call    BSStringT_Static_Format
0x551AE6: mov     ecx, ds:0B33A04h
0x551AEC: mov     eax, [esi]
0x551AEE: add     esp, 14h
0x551AF1: test    ecx, ecx
0x551AF3: jz      short loc_551B07
0x551AF5: mov     edx, [ecx]
0x551AF7: push    0FFFFFFFFh
0x551AF9: push    0
0x551AFB: push    0
0x551AFD: push    eax
0x551AFE: mov     eax, [edx+4]
0x551B01: call    eax
0x551B03: test    eax, eax
0x551B05: jnz     short loc_551ABA
0x551B07: sub     edi, 0Ah
0x551B0A: jns     short loc_551AD4
0x551B0C: push    0; a3
0x551B0E: push    offset EmptyString; a2
0x551B13: mov     ecx, esi; this
0x551B15: call    BSStringT_Set
0x551B1A: xor     eax, eax
0x551B1C: mov     ecx, [esp+118h+var_4]
0x551B23: pop     edi
0x551B24: pop     esi
0x551B25: pop     ebp
0x551B26: pop     ebx
0x551B27: xor     ecx, esp
0x551B29: call    @__security_check_cookie@4; __security_check_cookie(x)
0x551B2E: add     esp, 108h
0x551B34: retn
