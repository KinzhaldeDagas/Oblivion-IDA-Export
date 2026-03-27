0x54EE30: push    0FFFFFFFFh
0x54EE32: push    offset SEH_54EE30
0x54EE37: mov     eax, large fs:0
0x54EE3D: push    eax
0x54EE3E: sub     esp, 10h
0x54EE41: push    ebx
0x54EE42: push    ebp
0x54EE43: push    esi
0x54EE44: push    edi
0x54EE45: mov     eax, ds:0B30AACh
0x54EE4A: xor     eax, esp
0x54EE4C: push    eax
0x54EE4D: lea     eax, [esp+30h+var_C]
0x54EE51: mov     large fs:0, eax
0x54EE57: mov     ebp, ecx
0x54EE59: mov     edi, [esp+30h+arg_0]
0x54EE5D: test    edi, edi
0x54EE5F: jz      short loc_54EE6E
0x54EE61: mov     eax, [edi]
0x54EE63: mov     edx, [eax+40h]
0x54EE66: mov     ecx, edi
0x54EE68: call    edx
0x54EE6A: test    al, al
0x54EE6C: jnz     short loc_54EE70
0x54EE6E: xor     edi, edi
0x54EE70: mov     ebx, [esp+30h+arg_4]
0x54EE74: test    ebx, ebx
0x54EE76: jz      short loc_54EE85
0x54EE78: mov     eax, [ebx]
0x54EE7A: mov     edx, [eax+40h]
0x54EE7D: mov     ecx, ebx
0x54EE7F: call    edx
0x54EE81: test    al, al
0x54EE83: jnz     short loc_54EE87
0x54EE85: xor     ebx, ebx
0x54EE87: test    edi, edi
0x54EE89: mov     byte ptr [esp+30h+arg_4], 0
0x54EE8E: mov     [esp+30h+var_19], 0
0x54EE93: mov     byte ptr [esp+30h+arg_0], 0
0x54EE98: jz      loc_54F0E6
0x54EE9E: test    ebx, ebx
0x54EEA0: jz      loc_54F0E6
0x54EEA6: cmp     edi, ebx
0x54EEA8: jz      loc_54F0E6
0x54EEAE: mov     eax, [ebx]
0x54EEB0: mov     edx, [eax+4]
0x54EEB3: mov     ecx, ebx
0x54EEB5: call    edx
0x54EEB7: mov     esi, eax
0x54EEB9: mov     eax, [edi]
0x54EEBB: mov     edx, [eax+4]
0x54EEBE: mov     ecx, edi
0x54EEC0: call    edx
0x54EEC2: cmp     eax, esi
0x54EEC4: jnz     loc_54F0E6
0x54EECA: cmp     edi, ebp
0x54EECC: jnz     short loc_54EF04
0x54EECE: push    14h; Size
0x54EED0: call    FormHeapAlloc
0x54EED5: add     esp, 4
0x54EED8: mov     [esp+30h+arg_4], eax
0x54EEDC: test    eax, eax
0x54EEDE: mov     [esp+30h+var_4], 0
0x54EEE6: jz      short loc_54EEF9
0x54EEE8: push    ebp
0x54EEE9: mov     ecx, eax
0x54EEEB: call    sub_54EAA0
0x54EEF0: mov     edi, eax
0x54EEF2: mov     byte ptr [esp+30h+arg_4], 1
0x54EEF7: jmp     short loc_54EF35
0x54EEF9: xor     eax, eax
0x54EEFB: mov     edi, eax
0x54EEFD: mov     byte ptr [esp+30h+arg_4], 1
0x54EF02: jmp     short loc_54EF35
0x54EF04: cmp     ebx, ebp
0x54EF06: jnz     short loc_54EF3D
0x54EF08: push    14h; Size
0x54EF0A: call    FormHeapAlloc
0x54EF0F: add     esp, 4
0x54EF12: mov     [esp+30h+var_18], eax
0x54EF16: test    eax, eax
0x54EF18: mov     [esp+30h+var_4], 1
0x54EF20: jz      short loc_54EF2C
0x54EF22: push    ebp
0x54EF23: mov     ecx, eax
0x54EF25: call    sub_54EAA0
0x54EF2A: jmp     short loc_54EF2E
0x54EF2C: xor     eax, eax
0x54EF2E: mov     ebx, eax
0x54EF30: mov     [esp+30h+var_19], 1
0x54EF35: mov     [esp+30h+var_4], 0FFFFFFFFh
0x54EF3D: fldz
0x54EF3F: fld     [esp+30h+arg_8]
0x54EF43: fcom    st(1)
0x54EF45: fnstsw  ax
0x54EF47: fld1
0x54EF49: test    ah, 5
0x54EF4C: jp      short loc_54EF54
0x54EF4E: fstp    st(1)
0x54EF50: fstp    st
0x54EF52: jmp     short loc_54EF65
0x54EF54: fstp    st(2)
0x54EF56: fcom    st(1)
0x54EF58: fnstsw  ax
0x54EF5A: test    ah, 41h
0x54EF5D: jnz     short loc_54EF63
0x54EF5F: fstp    st
0x54EF61: jmp     short loc_54EF65
0x54EF63: fstp    st(1)
0x54EF65: mov     eax, [ebx]
0x54EF67: fstp    [esp+30h+arg_8]
0x54EF6B: mov     edx, [eax+50h]
0x54EF6E: mov     ecx, ebx
0x54EF70: call    edx
0x54EF72: mov     esi, eax
0x54EF74: mov     eax, [edi]
0x54EF76: mov     edx, [eax+50h]
0x54EF79: mov     ecx, edi
0x54EF7B: call    edx
0x54EF7D: cmp     eax, esi
0x54EF7F: jb      short loc_54EF87
0x54EF81: mov     eax, [edi]
0x54EF83: mov     ecx, edi
0x54EF85: jmp     short loc_54EF8B
0x54EF87: mov     eax, [ebx]
0x54EF89: mov     ecx, ebx
0x54EF8B: mov     edx, [eax+50h]
0x54EF8E: call    edx
0x54EF90: mov     eax, [edi]
0x54EF92: mov     esi, [ebp+0]
0x54EF95: mov     edx, [eax+4]
0x54EF98: mov     ecx, edi
0x54EF9A: add     esi, 8
0x54EF9D: call    edx
0x54EF9F: push    eax
0x54EFA0: mov     eax, [esi]
0x54EFA2: mov     ecx, ebp
0x54EFA4: call    eax
0x54EFA6: xor     esi, esi
0x54EFA8: cmp     [ebp+10h], esi
0x54EFAB: jbe     loc_54F0BE
0x54EFB1: fldz
0x54EFB3: fcomp   [esp+30h+arg_8]
0x54EFB7: fnstsw  ax
0x54EFB9: test    ah, 44h
0x54EFBC: jnp     loc_54F07D
0x54EFC2: mov     edx, [ebx]
0x54EFC4: mov     eax, [edx+54h]
0x54EFC7: push    esi
0x54EFC8: mov     ecx, ebx
0x54EFCA: call    eax
0x54EFCC: test    al, al
0x54EFCE: jz      loc_54F07D
0x54EFD4: fld1
0x54EFD6: fcomp   [esp+30h+arg_8]
0x54EFDA: fnstsw  ax
0x54EFDC: test    ah, 44h
0x54EFDF: jnp     short loc_54F055
0x54EFE1: mov     edx, [edi]
0x54EFE3: mov     eax, [edx+54h]
0x54EFE6: push    esi
0x54EFE7: mov     ecx, edi
0x54EFE9: call    eax
0x54EFEB: test    al, al
0x54EFED: jz      short loc_54F055
0x54EFEF: mov     edx, [edi]
0x54EFF1: mov     eax, [edx+54h]
0x54EFF4: push    esi
0x54EFF5: mov     ecx, edi
0x54EFF7: call    eax
0x54EFF9: test    al, al
0x54EFFB: jz      loc_54F0B2
0x54F001: mov     edx, [ebx]
0x54F003: mov     eax, [edx+54h]
0x54F006: push    esi
0x54F007: mov     ecx, ebx
0x54F009: call    eax
0x54F00B: test    al, al
0x54F00D: jz      loc_54F0B2
0x54F013: mov     eax, [ebp+0]
0x54F016: mov     edx, [edi]
0x54F018: add     eax, 4Ch ; 'L'
0x54F01B: mov     [esp+30h+var_18], eax
0x54F01F: mov     eax, [edx+48h]
0x54F022: push    esi
0x54F023: mov     ecx, edi
0x54F025: call    eax
0x54F027: fld     [esp+30h+arg_8]
0x54F02B: fld1
0x54F02D: mov     edx, [ebx]
0x54F02F: mov     eax, [edx+48h]
0x54F032: fsubrp  st(1), st
0x54F034: push    esi
0x54F035: mov     ecx, ebx
0x54F037: fmulp   st(1), st
0x54F039: fstp    [esp+34h+var_14]
0x54F03D: call    eax
0x54F03F: fmul    [esp+30h+arg_8]
0x54F043: mov     edx, [esp+30h+var_18]
0x54F047: fadd    [esp+30h+var_14]
0x54F04B: fstp    [esp+30h+arg_0]
0x54F04F: fld     [esp+30h+arg_0]
0x54F053: jmp     short loc_54F0A3
0x54F055: mov     edx, [ebx]
0x54F057: mov     eax, [edx+54h]
0x54F05A: push    esi
0x54F05B: mov     ecx, ebx
0x54F05D: call    eax
0x54F05F: test    al, al
0x54F061: jz      short loc_54F0B2
0x54F063: mov     eax, [ebp+0]
0x54F066: mov     edx, [ebx]
0x54F068: add     eax, 4Ch ; 'L'
0x54F06B: mov     [esp+30h+arg_0], eax
0x54F06F: mov     eax, [edx+48h]
0x54F072: push    esi
0x54F073: mov     ecx, ebx
0x54F075: call    eax
0x54F077: mov     edx, [esp+30h+arg_0]
0x54F07B: jmp     short loc_54F0A3
0x54F07D: mov     edx, [edi]
0x54F07F: mov     eax, [edx+54h]
0x54F082: push    esi
0x54F083: mov     ecx, edi
0x54F085: call    eax
0x54F087: test    al, al
0x54F089: jz      short loc_54F0B2
0x54F08B: mov     eax, [ebp+0]
0x54F08E: mov     edx, [edi]
0x54F090: add     eax, 4Ch ; 'L'
0x54F093: mov     [esp+30h+arg_0], eax
0x54F097: mov     eax, [edx+48h]
0x54F09A: push    esi
0x54F09B: mov     ecx, edi
0x54F09D: call    eax
0x54F09F: mov     edx, [esp+30h+arg_0]
0x54F0A3: mov     eax, [edx]
0x54F0A5: push    ecx
0x54F0A6: fstp    [esp+34h+var_34]
0x54F0A9: push    esi
0x54F0AA: mov     ecx, ebp
0x54F0AC: call    eax
0x54F0AE: mov     byte ptr [esp+30h+arg_0], al
0x54F0B2: add     esi, 1
0x54F0B5: cmp     esi, [ebp+10h]
0x54F0B8: jb      loc_54EFB1
0x54F0BE: cmp     byte ptr [esp+30h+arg_4], 0
0x54F0C3: jz      short loc_54F0CF
0x54F0C5: mov     edx, [edi]
0x54F0C7: mov     eax, [edx]
0x54F0C9: push    1
0x54F0CB: mov     ecx, edi
0x54F0CD: call    eax
0x54F0CF: cmp     [esp+30h+var_19], 0
0x54F0D4: jz      short loc_54F0E0
0x54F0D6: mov     edx, [ebx]
0x54F0D8: mov     eax, [edx]
0x54F0DA: push    1
0x54F0DC: mov     ecx, ebx
0x54F0DE: call    eax
0x54F0E0: mov     al, byte ptr [esp+30h+arg_0]
0x54F0E4: jmp     short loc_54F0E8
0x54F0E6: xor     al, al
0x54F0E8: mov     ecx, [esp+30h+var_C]
0x54F0EC: mov     large fs:0, ecx
0x54F0F3: pop     ecx
0x54F0F4: pop     edi
0x54F0F5: pop     esi
0x54F0F6: pop     ebp
0x54F0F7: pop     ebx
0x54F0F8: add     esp, 1Ch
0x54F0FB: retn    0Ch
