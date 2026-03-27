0x6EEBC0: push    ebp
0x6EEBC1: mov     ebp, esp
0x6EEBC3: push    0FFFFFFFFh
0x6EEBC5: push    offset SEH_6EEBC0
0x6EEBCA: mov     eax, large fs:0
0x6EEBD0: push    eax
0x6EEBD1: sub     esp, 4Ch
0x6EEBD4: mov     eax, ds:0B30AACh
0x6EEBD9: xor     eax, ebp
0x6EEBDB: mov     [ebp+var_14], eax
0x6EEBDE: push    ebx
0x6EEBDF: push    esi
0x6EEBE0: push    edi
0x6EEBE1: push    eax
0x6EEBE2: lea     eax, [ebp+var_C]
0x6EEBE5: mov     large fs:0, eax
0x6EEBEB: mov     [ebp+var_10], esp
0x6EEBEE: mov     eax, [ebp+arg_C]
0x6EEBF1: mov     esi, ecx
0x6EEBF3: push    eax
0x6EEBF4: lea     ecx, [ebp+var_48]
0x6EEBF7: mov     [ebp+var_50], esi
0x6EEBFA: call    sub_6EDC20
0x6EEBFF: mov     ecx, [esi+4]
0x6EEC02: xor     edi, edi
0x6EEC04: cmp     ecx, edi
0x6EEC06: mov     [ebp+var_4], edi
0x6EEC09: jz      short loc_6EEC21
0x6EEC0B: mov     edx, [esi+0Ch]
0x6EEC0E: sub     edx, ecx
0x6EEC10: mov     eax, 4EC4EC4Fh
0x6EEC15: imul    edx
0x6EEC17: sar     edx, 4
0x6EEC1A: mov     edi, edx
0x6EEC1C: shr     edi, 1Fh
0x6EEC1F: add     edi, edx
0x6EEC21: mov     ebx, [ebp+arg_8]
0x6EEC24: test    ebx, ebx
0x6EEC26: jz      loc_6EEE85
0x6EEC2C: test    ecx, ecx
0x6EEC2E: jnz     short loc_6EEC34
0x6EEC30: xor     eax, eax
0x6EEC32: jmp     short loc_6EEC4A
0x6EEC34: mov     edx, [esi+8]
0x6EEC37: sub     edx, ecx
0x6EEC39: mov     eax, 4EC4EC4Fh
0x6EEC3E: imul    edx
0x6EEC40: sar     edx, 4
0x6EEC43: mov     eax, edx
0x6EEC45: shr     eax, 1Fh
0x6EEC48: add     eax, edx
0x6EEC4A: mov     edx, 4EC4EC4h
0x6EEC4F: sub     edx, eax
0x6EEC51: cmp     edx, ebx
0x6EEC53: jnb     short loc_6EEC5A
0x6EEC55: call    sub_790B90
0x6EEC5A: test    ecx, ecx
0x6EEC5C: jnz     short loc_6EEC62
0x6EEC5E: xor     eax, eax
0x6EEC60: jmp     short loc_6EEC78
0x6EEC62: mov     edx, [esi+8]
0x6EEC65: sub     edx, ecx
0x6EEC67: mov     eax, 4EC4EC4Fh
0x6EEC6C: imul    edx
0x6EEC6E: sar     edx, 4
0x6EEC71: mov     eax, edx
0x6EEC73: shr     eax, 1Fh
0x6EEC76: add     eax, edx
0x6EEC78: add     eax, ebx
0x6EEC7A: cmp     edi, eax
0x6EEC7C: jnb     loc_6EEDA6
0x6EEC82: mov     eax, edi
0x6EEC84: shr     eax, 1
0x6EEC86: mov     edx, 4EC4EC4h
0x6EEC8B: sub     edx, eax
0x6EEC8D: cmp     edx, edi
0x6EEC8F: jnb     short loc_6EEC95
0x6EEC91: xor     edi, edi
0x6EEC93: jmp     short loc_6EEC97
0x6EEC95: add     edi, eax
0x6EEC97: test    ecx, ecx
0x6EEC99: jnz     short loc_6EEC9F
0x6EEC9B: xor     eax, eax
0x6EEC9D: jmp     short loc_6EECB5
0x6EEC9F: mov     edx, [esi+8]
0x6EECA2: sub     edx, ecx
0x6EECA4: mov     eax, 4EC4EC4Fh
0x6EECA9: imul    edx
0x6EECAB: sar     edx, 4
0x6EECAE: mov     eax, edx
0x6EECB0: shr     eax, 1Fh
0x6EECB3: add     eax, edx
0x6EECB5: add     eax, ebx
0x6EECB7: cmp     edi, eax
0x6EECB9: jnb     short loc_6EECC6
0x6EECBB: mov     ecx, esi
0x6EECBD: call    sub_54F6A0
0x6EECC2: mov     edi, eax
0x6EECC4: add     edi, ebx
0x6EECC6: push    0
0x6EECC8: push    edi; char *
0x6EECC9: call    sub_54F740
0x6EECCE: mov     ecx, [esi+4]
0x6EECD1: mov     byte ptr [ebp+var_4C], 0
0x6EECD5: mov     edx, [ebp+var_4C]
0x6EECD8: push    edx
0x6EECD9: mov     edx, [ebp+var_4C]
0x6EECDC: push    edx
0x6EECDD: push    esi
0x6EECDE: push    eax
0x6EECDF: mov     [ebp+var_58], eax
0x6EECE2: mov     [ebp+var_54], eax
0x6EECE5: mov     eax, [ebp+arg_4]
0x6EECE8: push    eax
0x6EECE9: push    ecx
0x6EECEA: mov     byte ptr [ebp+var_4], 1
0x6EECEE: call    sub_6EE1C0
0x6EECF3: add     esp, 20h
0x6EECF6: lea     ecx, [ebp+var_48]
0x6EECF9: push    ecx
0x6EECFA: push    ebx
0x6EECFB: push    eax
0x6EECFC: mov     ecx, esi
0x6EECFE: mov     [ebp+var_54], eax
0x6EED01: call    sub_6EEB50
0x6EED06: mov     ecx, [esi+8]
0x6EED09: mov     byte ptr [ebp+var_4C], 0
0x6EED0D: mov     edx, [ebp+var_4C]
0x6EED10: push    edx
0x6EED11: mov     edx, [ebp+var_4C]
0x6EED14: push    edx
0x6EED15: push    esi
0x6EED16: push    eax
0x6EED17: mov     [ebp+var_54], eax
0x6EED1A: mov     eax, [ebp+arg_4]
0x6EED1D: push    ecx
0x6EED1E: push    eax
0x6EED1F: call    sub_6EE1C0
0x6EED24: mov     ecx, [esi+4]
0x6EED27: add     esp, 18h
0x6EED2A: test    ecx, ecx
0x6EED2C: jnz     short loc_6EED32
0x6EED2E: xor     eax, eax
0x6EED30: jmp     short loc_6EED48
0x6EED32: mov     edx, [esi+8]
0x6EED35: sub     edx, ecx
0x6EED37: mov     eax, 4EC4EC4Fh
0x6EED3C: imul    edx
0x6EED3E: sar     edx, 4
0x6EED41: mov     eax, edx
0x6EED43: shr     eax, 1Fh
0x6EED46: add     eax, edx
0x6EED48: add     ebx, eax
0x6EED4A: test    ecx, ecx
0x6EED4C: jz      short loc_6EED69
0x6EED4E: mov     edx, [ebp+var_4C]
0x6EED51: mov     eax, [esi+8]
0x6EED54: push    edx
0x6EED55: push    esi
0x6EED56: push    eax
0x6EED57: push    ecx
0x6EED58: call    sub_5522B0
0x6EED5D: mov     ecx, [esi+4]
0x6EED60: push    ecx
0x6EED61: call    FormHeapFree
0x6EED66: add     esp, 14h
0x6EED69: mov     eax, [ebp+var_58]
0x6EED6C: imul    edi, 34h ; '4'
0x6EED6F: imul    ebx, 34h ; '4'
0x6EED72: add     edi, eax
0x6EED74: add     ebx, eax
0x6EED76: mov     [esi+0Ch], edi
0x6EED79: mov     [esi+8], ebx
0x6EED7C: mov     [esi+4], eax
0x6EED7F: jmp     loc_6EEE85
0x6EED84: mov     edx, [ebp+var_54]
0x6EED87: mov     esi, [ebp+var_58]
0x6EED8A: mov     ecx, [ebp+var_50]
0x6EED8D: push    edx
0x6EED8E: push    esi
0x6EED8F: call    sub_552D40
0x6EED94: push    esi
0x6EED95: call    FormHeapFree
0x6EED9A: add     esp, 4
0x6EED9D: push    0
0x6EED9F: push    0
0x6EEDA1: call    ThrowException??
0x6EEDA6: mov     ecx, [esi+8]
0x6EEDA9: mov     edi, [ebp+arg_4]
0x6EEDAC: mov     edx, ecx
0x6EEDAE: sub     edx, edi
0x6EEDB0: mov     eax, 4EC4EC4Fh
0x6EEDB5: imul    edx
0x6EEDB7: sar     edx, 4
0x6EEDBA: mov     eax, edx
0x6EEDBC: shr     eax, 1Fh
0x6EEDBF: add     eax, edx
0x6EEDC1: cmp     eax, ebx
0x6EEDC3: mov     [ebp+var_4C], ecx
0x6EEDC6: jnb     loc_6EEE50
0x6EEDCC: mov     eax, ebx
0x6EEDCE: imul    eax, 34h ; '4'
0x6EEDD1: mov     [ebp+var_4C], eax
0x6EEDD4: add     eax, edi
0x6EEDD6: push    eax
0x6EEDD7: push    ecx
0x6EEDD8: push    edi
0x6EEDD9: mov     ecx, esi
0x6EEDDB: call    sub_6EEB90
0x6EEDE0: mov     ecx, [esi+8]
0x6EEDE3: lea     edx, [ebp+var_48]
0x6EEDE6: push    edx
0x6EEDE7: mov     edx, ecx
0x6EEDE9: sub     edx, edi
0x6EEDEB: mov     eax, 4EC4EC4Fh
0x6EEDF0: imul    edx
0x6EEDF2: sar     edx, 4
0x6EEDF5: mov     eax, edx
0x6EEDF7: shr     eax, 1Fh
0x6EEDFA: add     eax, edx
0x6EEDFC: sub     ebx, eax
0x6EEDFE: push    ebx
0x6EEDFF: push    ecx
0x6EEE00: mov     ecx, esi
0x6EEE02: mov     byte ptr [ebp+var_4], 3
0x6EEE06: call    sub_6EEB50
0x6EEE0B: mov     eax, [ebp+var_4C]
0x6EEE0E: add     [esi+8], eax
0x6EEE11: mov     esi, [esi+8]
0x6EEE14: lea     ecx, [ebp+var_48]
0x6EEE17: push    ecx
0x6EEE18: sub     esi, eax
0x6EEE1A: push    esi
0x6EEE1B: push    edi
0x6EEE1C: mov     [ebp+var_4], 0
0x6EEE23: call    sub_6EDC90
0x6EEE28: add     esp, 0Ch
0x6EEE2B: jmp     short loc_6EEE85
0x6EEE2D: mov     eax, [ebp+arg_8]
0x6EEE30: mov     ecx, [ebp+var_50]
0x6EEE33: imul    eax, 34h ; '4'
0x6EEE36: mov     edx, [ecx+8]
0x6EEE39: add     edx, eax
0x6EEE3B: push    edx
0x6EEE3C: mov     edx, [ebp+arg_4]
0x6EEE3F: add     eax, edx
0x6EEE41: push    eax
0x6EEE42: call    sub_552D40
0x6EEE47: push    0
0x6EEE49: push    0
0x6EEE4B: call    ThrowException??
0x6EEE50: imul    ebx, 34h ; '4'
0x6EEE53: push    ecx
0x6EEE54: mov     eax, ecx
0x6EEE56: sub     eax, ebx
0x6EEE58: push    ecx
0x6EEE59: push    eax
0x6EEE5A: mov     ecx, esi
0x6EEE5C: mov     [ebp+var_50], eax
0x6EEE5F: call    sub_6EEB90
0x6EEE64: mov     ecx, [ebp+var_50]
0x6EEE67: mov     [esi+8], eax
0x6EEE6A: mov     eax, [ebp+var_4C]
0x6EEE6D: push    eax
0x6EEE6E: push    ecx
0x6EEE6F: push    edi
0x6EEE70: call    sub_6EEA70
0x6EEE75: lea     edx, [ebp+var_48]
0x6EEE78: push    edx
0x6EEE79: add     ebx, edi
0x6EEE7B: push    ebx
0x6EEE7C: push    edi
0x6EEE7D: call    sub_6EDC90
0x6EEE82: add     esp, 18h
0x6EEE85: cmp     [ebp+var_18], 10h
0x6EEE89: jb      short loc_6EEE97
0x6EEE8B: mov     eax, [ebp+var_2C]
0x6EEE8E: push    eax
0x6EEE8F: call    FormHeapFree
0x6EEE94: add     esp, 4
0x6EEE97: mov     eax, [ebp+var_3C]
0x6EEE9A: test    eax, eax
0x6EEE9C: mov     [ebp+var_18], 0Fh
0x6EEEA3: mov     [ebp+var_1C], 0
0x6EEEAA: mov     byte ptr [ebp+var_2C], 0
0x6EEEAE: jz      short loc_6EEEB9
0x6EEEB0: push    eax
0x6EEEB1: call    FormHeapFree
0x6EEEB6: add     esp, 4
0x6EEEB9: mov     ecx, [ebp+var_C]
0x6EEEBC: mov     large fs:0, ecx
0x6EEEC3: pop     ecx
0x6EEEC4: pop     edi
0x6EEEC5: pop     esi
0x6EEEC6: pop     ebx
0x6EEEC7: mov     ecx, [ebp+var_14]
0x6EEECA: xor     ecx, ebp
0x6EEECC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6EEED1: mov     esp, ebp
0x6EEED3: pop     ebp
0x6EEED4: retn    10h
