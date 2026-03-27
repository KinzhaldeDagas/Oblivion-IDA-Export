0x88EE20: push    0FFFFFFFFh
0x88EE22: push    offset SEH_88EE20
0x88EE27: mov     eax, large fs:0
0x88EE2D: push    eax
0x88EE2E: sub     esp, 214h
0x88EE34: mov     eax, ds:0B30AACh
0x88EE39: xor     eax, esp
0x88EE3B: mov     [esp+220h+var_10], eax
0x88EE42: push    ebx
0x88EE43: push    esi
0x88EE44: push    edi
0x88EE45: mov     eax, ds:0B30AACh
0x88EE4A: xor     eax, esp
0x88EE4C: push    eax
0x88EE4D: lea     eax, [esp+230h+var_C]
0x88EE54: mov     large fs:0, eax
0x88EE5A: mov     ecx, [esp+230h+arg_0]
0x88EE61: xor     bl, bl
0x88EE63: test    ecx, ecx
0x88EE65: jz      loc_88F011
0x88EE6B: mov     eax, [ecx]
0x88EE6D: mov     edx, [eax+8]
0x88EE70: call    edx
0x88EE72: mov     esi, eax
0x88EE74: test    esi, esi
0x88EE76: jz      loc_88F011
0x88EE7C: mov     edi, [esi+8]
0x88EE7F: test    edi, edi
0x88EE81: jz      loc_88EFDA
0x88EE87: push    3; MaxCount
0x88EE89: push    offset off_A738A4; Str2
0x88EE8E: push    edi; Str1
0x88EE8F: call    __strnicmp
0x88EE94: add     esp, 0Ch
0x88EE97: test    eax, eax
0x88EE99: jnz     loc_88EFDA
0x88EE9F: mov     eax, edi
0x88EEA1: lea     edx, [eax+1]
0x88EEA4: mov     cl, [eax]
0x88EEA6: add     eax, 1
0x88EEA9: test    cl, cl
0x88EEAB: jnz     short loc_88EEA4
0x88EEAD: sub     eax, edx
0x88EEAF: cmp     eax, 5
0x88EEB2: jnz     loc_88F011
0x88EEB8: push    0
0x88EEBA: mov     ecx, esi
0x88EEBC: call    sub_405790
0x88EEC1: mov     edi, eax
0x88EEC3: test    edi, edi
0x88EEC5: jz      short loc_88EECC
0x88EEC7: mov     eax, [edi+8]
0x88EECA: jmp     short loc_88EECE
0x88EECC: xor     eax, eax
0x88EECE: test    eax, eax
0x88EED0: jz      loc_88F011
0x88EED6: add     eax, 6
0x88EED9: push    offset aNonaccum; "NonAccum"
0x88EEDE: push    eax; Str1
0x88EEDF: call    __strcmp
0x88EEE4: add     esp, 8
0x88EEE7: test    eax, eax
0x88EEE9: jnz     loc_88F011
0x88EEEF: push    esi
0x88EEF0: call    sub_497420
0x88EEF5: add     esp, 4
0x88EEF8: test    eax, eax
0x88EEFA: jz      loc_88F011
0x88EF00: push    eax
0x88EF01: mov     ecx, edi
0x88EF03: call    sub_435CE0
0x88EF08: push    0
0x88EF0A: mov     ecx, esi
0x88EF0C: call    sub_435CE0
0x88EF11: mov     ax, [edi+18h]
0x88EF15: and     ax, 0FFEFh
0x88EF19: or      ax, 6
0x88EF1D: push    offset dword_BA7F3C
0x88EF22: mov     ecx, esi
0x88EF24: mov     [edi+18h], ax
0x88EF28: mov     bl, 1
0x88EF2A: call    sub_700010
0x88EF2F: test    eax, eax
0x88EF31: jz      short loc_88EF3D
0x88EF33: mov     edx, [eax]
0x88EF35: mov     ecx, eax
0x88EF37: mov     eax, [edx+58h]
0x88EF3A: push    edi
0x88EF3B: call    eax
0x88EF3D: mov     esi, [esi+1Ch]
0x88EF40: test    esi, esi
0x88EF42: jz      loc_88F011
0x88EF48: mov     esi, [esi+8]
0x88EF4B: test    esi, esi
0x88EF4D: jnz     short loc_88EF54
0x88EF4F: mov     esi, offset aUnknown_2; "Unknown"
0x88EF54: push    ecx
0x88EF55: mov     eax, esp
0x88EF57: mov     [esp+234h+var_214], esp
0x88EF5B: push    200h
0x88EF60: lea     ecx, [esp+238h+var_210]
0x88EF64: push    ecx
0x88EF65: lea     ecx, [esp+23Ch+var_220]
0x88EF69: mov     byte ptr [eax], 1
0x88EF6C: call    sub_8BBFB0
0x88EF71: movzx   edx, byte ptr [esi]
0x88EF74: push    offset aShouldBeReExpo; " should be re-exported.\n"
0x88EF79: push    edx
0x88EF7A: push    offset aAVeryOldSkelet; "A very old skeleton for "
0x88EF7F: lea     ecx, [esp+23Ch+var_220]
0x88EF83: mov     [esp+23Ch+var_4], 0
0x88EF8E: call    sub_8BBDB0
0x88EF93: mov     ecx, eax
0x88EF95: call    sub_8BBD90
0x88EF9A: mov     ecx, eax
0x88EF9C: call    sub_8BBDB0
0x88EFA1: mov     ecx, ds:0BA7FB0h
0x88EFA7: mov     eax, [ecx]
0x88EFA9: mov     eax, [eax+8]
0x88EFAC: push    23Ah
0x88EFB1: push    offset a_Bhkblendcolli; ".\\bhkBlendCollisionObject.cpp"
0x88EFB6: lea     edx, [esp+238h+var_210]
0x88EFBA: push    edx
0x88EFBB: push    234F224Fh
0x88EFC0: push    1
0x88EFC2: call    eax
0x88EFC4: lea     ecx, [esp+230h+var_220]
0x88EFC8: mov     [esp+230h+var_4], 0FFFFFFFFh
0x88EFD3: call    sub_8BC000
0x88EFD8: jmp     short loc_88F011
0x88EFDA: movzx   eax, word ptr [esi+0B6h]
0x88EFE1: xor     edi, edi
0x88EFE3: test    eax, eax
0x88EFE5: jbe     short loc_88F011
0x88EFE7: cmp     eax, edi
0x88EFE9: ja      short loc_88EFEF
0x88EFEB: xor     eax, eax
0x88EFED: jmp     short loc_88EFF8
0x88EFEF: mov     ecx, [esi+0B0h]
0x88EFF5: mov     eax, [ecx+edi*4]
0x88EFF8: push    eax
0x88EFF9: call    sub_88EE20
0x88EFFE: mov     bl, al
0x88F000: movzx   eax, word ptr [esi+0B6h]
0x88F007: add     edi, 1
0x88F00A: add     esp, 4
0x88F00D: cmp     eax, edi
0x88F00F: ja      short loc_88EFEF
0x88F011: mov     al, bl
0x88F013: mov     ecx, [esp+230h+var_C]
0x88F01A: mov     large fs:0, ecx
0x88F021: pop     ecx
0x88F022: pop     edi
0x88F023: pop     esi
0x88F024: pop     ebx
0x88F025: mov     ecx, [esp+220h+var_10]
0x88F02C: xor     ecx, esp
0x88F02E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88F033: add     esp, 220h
0x88F039: retn
