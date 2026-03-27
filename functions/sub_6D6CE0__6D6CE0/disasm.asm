0x6D6CE0: push    0FFFFFFFFh
0x6D6CE2: push    offset SEH_6D6CE0
0x6D6CE7: mov     eax, large fs:0
0x6D6CED: push    eax
0x6D6CEE: sub     esp, 20h
0x6D6CF1: push    esi
0x6D6CF2: mov     eax, ds:0B30AACh
0x6D6CF7: xor     eax, esp
0x6D6CF9: push    eax
0x6D6CFA: lea     eax, [esp+34h+var_C]
0x6D6CFE: mov     large fs:0, eax
0x6D6D04: mov     esi, ecx
0x6D6D06: mov     al, [esi+8]
0x6D6D09: shr     al, 5
0x6D6D0C: test    al, 1
0x6D6D0E: jz      short loc_6D6D1B
0x6D6D10: fld     dword ptr ds:0A7A164h
0x6D6D16: fstp    dword ptr [esi+28h]
0x6D6D19: jmp     short loc_6D6D49
0x6D6D1B: fld     [esp+34h+arg_0]
0x6D6D1F: push    ecx
0x6D6D20: fstp    [esp+38h+var_38]; float
0x6D6D23: call    sub_6C36B0
0x6D6D28: test    al, al
0x6D6D2A: jz      short loc_6D6D49
0x6D6D2C: mov     ecx, [esi+3Ch]
0x6D6D2F: test    ecx, ecx
0x6D6D31: jz      def_6D6DFC
0x6D6D37: mov     edx, [ecx]
0x6D6D39: mov     eax, [edx+94h]
0x6D6D3F: call    eax
0x6D6D41: test    al, al
0x6D6D43: jz      def_6D6DFC
0x6D6D49: mov     ecx, [esi+3Ch]
0x6D6D4C: test    ecx, ecx
0x6D6D4E: jz      def_6D6DFC
0x6D6D54: mov     edx, [ecx]
0x6D6D56: fld     dword ptr [esi+28h]
0x6D6D59: mov     edx, [edx+5Ch]
0x6D6D5C: lea     eax, [esp+34h+arg_0]
0x6D6D60: push    eax
0x6D6D61: mov     eax, [esi+30h]
0x6D6D64: push    eax
0x6D6D65: push    ecx
0x6D6D66: fstp    [esp+40h+var_40]
0x6D6D69: call    edx
0x6D6D6B: test    al, al
0x6D6D6D: jz      def_6D6DFC
0x6D6D73: mov     ecx, esi
0x6D6D75: call    sub_6D6C80
0x6D6D7A: test    al, al
0x6D6D7C: jz      def_6D6DFC
0x6D6D82: mov     eax, [esi+44h]
0x6D6D85: mov     ecx, [eax+0Ch]
0x6D6D88: test    ecx, ecx
0x6D6D8A: jnz     short loc_6D6DF0
0x6D6D8C: push    48h ; 'H'; Size
0x6D6D8E: call    FormHeapAlloc
0x6D6D93: add     esp, 4
0x6D6D96: mov     [esp+40h+var_38], eax
0x6D6D9A: test    eax, eax
0x6D6D9C: mov     [esp+40h+var_10], 0
0x6D6DA4: jz      short loc_6D6DE6
0x6D6DA6: fld     dword ptr ds:0A3D65Ch
0x6D6DAC: push    0; int
0x6D6DAE: fst     [esp+44h+var_30]
0x6D6DB2: lea     ecx, [esp+44h+var_30]
0x6D6DB6: fstp    [esp+44h+var_2C]
0x6D6DBA: push    ecx; int
0x6D6DBB: fld1
0x6D6DBD: lea     edx, [esp+48h+var_28]
0x6D6DC1: fst     [esp+48h+var_28]
0x6D6DC5: push    edx; int
0x6D6DC6: fstp    [esp+4Ch+var_24]
0x6D6DCA: push    ecx
0x6D6DCB: fldz
0x6D6DCD: lea     ecx, [esp+50h+var_20]
0x6D6DD1: fst     [esp+50h+var_20]
0x6D6DD5: fst     [esp+50h+var_1C]
0x6D6DD9: fstp    [esp+50h+var_50]; float
0x6D6DDC: push    ecx; int
0x6D6DDD: mov     ecx, eax
0x6D6DDF: call    sub_72FF40
0x6D6DE4: jmp     short loc_6D6DE8
0x6D6DE6: xor     eax, eax
0x6D6DE8: mov     edx, [esi+44h]
0x6D6DEB: mov     ecx, eax
0x6D6DED: mov     [edx+0Ch], eax
0x6D6DF0: mov     esi, [esi+50h]
0x6D6DF3: cmp     esi, 4; switch 5 cases
0x6D6DF6: ja      def_6D6DFC
0x6D6DFC: jmp     ds:jpt_6D6DFC[esi*4]; switch jump
0x6D6E03: mov     eax, [ecx]; jumptable 006D6DFC case 0
0x6D6E05: fld     [esp+40h+var_8]
0x6D6E09: mov     edx, [ecx+4]
0x6D6E0C: mov     [esp+40h+var_38], eax
0x6D6E10: fstp    [esp+40h+var_38]
0x6D6E14: lea     eax, [esp+40h+var_38]
0x6D6E18: push    eax
0x6D6E19: mov     [esp+44h+var_34], edx
0x6D6E1D: call    sub_6D6A40
0x6D6E22: mov     ecx, [esp+40h+var_18]
0x6D6E26: mov     large fs:0, ecx
0x6D6E2D: pop     ecx
0x6D6E2E: pop     esi
0x6D6E2F: add     esp, 2Ch
0x6D6E32: retn    4
0x6D6E35: mov     edx, [ecx]; jumptable 006D6DFC case 1
0x6D6E37: fld     [esp+40h+var_8]
0x6D6E3B: mov     eax, [ecx+4]
0x6D6E3E: mov     [esp+40h+var_38], edx
0x6D6E42: lea     edx, [esp+40h+var_38]
0x6D6E46: mov     [esp+40h+var_34], eax
0x6D6E4A: fstp    [esp+40h+var_34]
0x6D6E4E: push    edx
0x6D6E4F: call    sub_6D6A40
0x6D6E54: mov     ecx, [esp+40h+var_18]
0x6D6E58: mov     large fs:0, ecx
0x6D6E5F: pop     ecx
0x6D6E60: pop     esi
0x6D6E61: add     esp, 2Ch
0x6D6E64: retn    4
0x6D6E67: fld     [esp+40h+var_8]; jumptable 006D6DFC case 2
0x6D6E6B: push    ecx
0x6D6E6C: fstp    [esp+44h+var_44]; float
0x6D6E6F: call    sub_6D6A90
0x6D6E74: mov     ecx, [esp+40h+var_18]
0x6D6E78: mov     large fs:0, ecx
0x6D6E7F: pop     ecx
0x6D6E80: pop     esi
0x6D6E81: add     esp, 2Ch
0x6D6E84: retn    4
0x6D6E87: mov     eax, [ecx+0Ch]; jumptable 006D6DFC case 3
0x6D6E8A: fld     [esp+40h+var_8]
0x6D6E8E: mov     edx, [ecx+10h]
0x6D6E91: mov     [esp+40h+var_38], eax
0x6D6E95: fstp    [esp+40h+var_38]
0x6D6E99: lea     eax, [esp+40h+var_38]
0x6D6E9D: mov     [esp+40h+var_34], edx
0x6D6EA1: push    eax
0x6D6EA2: jmp     short loc_6D6EBF
0x6D6EA4: mov     edx, [ecx+0Ch]; jumptable 006D6DFC case 4
0x6D6EA7: fld     [esp+40h+var_8]
0x6D6EAB: mov     eax, [ecx+10h]
0x6D6EAE: mov     [esp+40h+var_38], edx
0x6D6EB2: lea     edx, [esp+40h+var_38]
0x6D6EB6: mov     [esp+40h+var_34], eax
0x6D6EBA: fstp    [esp+40h+var_34]
0x6D6EBE: push    edx
0x6D6EBF: call    sub_6D6AD0
