0x8B6C20: push    ebp
0x8B6C21: mov     ebp, esp
0x8B6C23: and     esp, 0FFFFFFF0h
0x8B6C26: push    0FFFFFFFFh
0x8B6C28: push    offset SEH_8B6C20
0x8B6C2D: mov     eax, large fs:0
0x8B6C33: push    eax
0x8B6C34: sub     esp, 7Ch
0x8B6C37: mov     eax, ds:0B30AACh
0x8B6C3C: xor     eax, esp
0x8B6C3E: mov     [esp+88h+var_14], eax
0x8B6C42: push    esi
0x8B6C43: push    edi
0x8B6C44: mov     eax, ds:0B30AACh
0x8B6C49: xor     eax, esp
0x8B6C4B: push    eax
0x8B6C4C: lea     eax, [esp+94h+var_C]
0x8B6C53: mov     large fs:0, eax
0x8B6C59: fld     dword ptr ds:0B2EFC4h
0x8B6C5F: mov     eax, [ebp+arg_0]
0x8B6C62: fstp    [esp+94h+var_7C]
0x8B6C66: mov     edi, ecx
0x8B6C68: fldz
0x8B6C6A: lea     ecx, [esp+94h+var_80]
0x8B6C6E: fst     [esp+94h+var_70]
0x8B6C72: push    ecx
0x8B6C73: fst     [esp+98h+var_6C]
0x8B6C77: mov     ecx, edi
0x8B6C79: fst     [esp+98h+var_68]
0x8B6C7D: mov     [esp+98h+var_84], eax
0x8B6C81: fst     [esp+98h+var_64]
0x8B6C85: mov     [esp+98h+var_80], 0
0x8B6C8D: fld1
0x8B6C8F: fstp    [esp+98h+var_60]
0x8B6C93: fst     [esp+98h+var_5C]
0x8B6C97: fst     [esp+98h+var_58]
0x8B6C9B: fstp    [esp+98h+var_54]
0x8B6C9F: call    sub_8AEA60
0x8B6CA4: test    edi, edi
0x8B6CA6: jz      short loc_8B6CB4
0x8B6CA8: mov     eax, [edi+8]
0x8B6CAB: test    eax, eax
0x8B6CAD: jz      short loc_8B6CB4
0x8B6CAF: add     eax, 10h
0x8B6CB2: jmp     short loc_8B6CB9
0x8B6CB4: mov     eax, offset stru_BA7A40
0x8B6CB9: push    eax
0x8B6CBA: lea     ecx, [esp+98h+var_70]
0x8B6CBE: call    sub_47DCD0
0x8B6CC3: test    edi, edi
0x8B6CC5: jz      short loc_8B6CD3
0x8B6CC7: mov     eax, [edi+8]
0x8B6CCA: test    eax, eax
0x8B6CCC: jz      short loc_8B6CD3
0x8B6CCE: add     eax, 20h ; ' '
0x8B6CD1: jmp     short loc_8B6CD8
0x8B6CD3: mov     eax, offset stru_BA7A40
0x8B6CD8: push    eax
0x8B6CD9: lea     ecx, [esp+98h+var_60]
0x8B6CDD: call    sub_47DCD0
0x8B6CE2: mov     ecx, ds:0BA7D98h
0x8B6CE8: mov     edx, [ecx]
0x8B6CEA: mov     eax, [edx+10h]
0x8B6CED: push    8
0x8B6CEF: push    90h
0x8B6CF4: call    eax
0x8B6CF6: mov     word ptr [eax+4], 90h
0x8B6CFC: mov     [esp+94h+var_44], eax
0x8B6D00: fld     [esp+94h+var_60]
0x8B6D04: fstp    [esp+94h+var_40]
0x8B6D08: push    1
0x8B6D0A: fld     [esp+98h+var_5C]
0x8B6D0E: push    6
0x8B6D10: fstp    [esp+9Ch+var_3C]
0x8B6D14: push    ecx
0x8B6D15: fld     [esp+0A0h+var_58]
0x8B6D19: lea     ecx, [esp+0A0h+var_40]
0x8B6D1D: fstp    [esp+0A0h+var_38]
0x8B6D21: lea     edx, [esp+0A0h+var_30]
0x8B6D25: fld     [esp+0A0h+var_54]
0x8B6D29: mov     [esp+0A0h+var_4], 0
0x8B6D34: fstp    [esp+0A0h+var_34]
0x8B6D38: fld     [esp+0A0h+var_70]
0x8B6D3C: fstp    [esp+0A0h+var_30]
0x8B6D40: fld     [esp+0A0h+var_6C]
0x8B6D44: fstp    [esp+0A0h+var_2C]
0x8B6D48: fld     [esp+0A0h+var_68]
0x8B6D4C: fstp    [esp+0A0h+var_28]
0x8B6D50: fld     [esp+0A0h+var_64]
0x8B6D54: fstp    [esp+0A0h+var_24]
0x8B6D58: fld     [esp+0A0h+var_7C]
0x8B6D5C: fstp    [esp+0A0h+var_A0]
0x8B6D5F: push    ecx
0x8B6D60: push    edx
0x8B6D61: mov     ecx, eax
0x8B6D63: call    sub_8F4080
0x8B6D68: mov     esi, eax
0x8B6D6A: mov     eax, [esi]
0x8B6D6C: mov     edx, [eax+0Ch]
0x8B6D6F: mov     ecx, esi
0x8B6D71: mov     [esp+94h+var_4], 0FFFFFFFFh
0x8B6D7C: call    edx
0x8B6D7E: mov     esi, [esi+50h]
0x8B6D81: test    esi, esi
0x8B6D83: jz      short loc_8B6D9C
0x8B6D85: mov     ecx, [esp+94h+var_84]
0x8B6D89: mov     eax, [edi]
0x8B6D8B: mov     edx, [eax+94h]
0x8B6D91: push    offset aBhkcapsuleshap; "bhkCapsuleShape"
0x8B6D96: push    esi
0x8B6D97: push    ecx
0x8B6D98: mov     ecx, edi
0x8B6D9A: call    edx
0x8B6D9C: mov     ecx, [esp+94h+var_C]
0x8B6DA3: mov     large fs:0, ecx
0x8B6DAA: pop     ecx
0x8B6DAB: pop     edi
0x8B6DAC: pop     esi
0x8B6DAD: mov     ecx, [esp+88h+var_14]
0x8B6DB1: xor     ecx, esp
0x8B6DB3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B6DB8: mov     esp, ebp
0x8B6DBA: pop     ebp
0x8B6DBB: retn    4
