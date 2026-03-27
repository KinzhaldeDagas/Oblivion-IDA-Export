0x7A4DF0: push    0FFFFFFFFh
0x7A4DF2: push    offset SEH_7A4DF0
0x7A4DF7: mov     eax, large fs:0
0x7A4DFD: push    eax
0x7A4DFE: sub     esp, 0A8h
0x7A4E04: mov     eax, ds:0B30AACh
0x7A4E09: xor     eax, esp
0x7A4E0B: mov     [esp+0B4h+var_10], eax
0x7A4E12: push    ebx
0x7A4E13: push    ebp
0x7A4E14: push    esi
0x7A4E15: push    edi
0x7A4E16: mov     eax, ds:0B30AACh
0x7A4E1B: xor     eax, esp
0x7A4E1D: push    eax
0x7A4E1E: lea     eax, [esp+0C8h+var_C]
0x7A4E25: mov     large fs:0, eax
0x7A4E2B: mov     esi, [esp+0C8h+arg_0]
0x7A4E32: mov     ebp, ecx
0x7A4E34: mov     ecx, esi
0x7A4E36: call    sub_78EB40
0x7A4E3B: cmp     eax, 3E8h
0x7A4E40: jz      short loc_7A4E8A
0x7A4E42: push    18h; MaxCount
0x7A4E44: xor     esi, esi
0x7A4E46: push    offset aMissingBegin_f; "missing begin_file token"
0x7A4E4B: lea     ecx, [esp+0D0h+var_B4]
0x7A4E4F: mov     [esp+0D0h+var_9C], 0Fh
0x7A4E57: mov     [esp+0D0h+var_A0], esi
0x7A4E5B: mov     byte ptr [esp+0D0h+var_B0], 0
0x7A4E60: call    sub_414500
0x7A4E65: push    esi
0x7A4E66: lea     eax, [esp+0CCh+var_B4]
0x7A4E6A: push    eax
0x7A4E6B: lea     ecx, [esp+0D0h+var_98]
0x7A4E6F: mov     [esp+0D0h+var_4], esi
0x7A4E76: call    sub_789190
0x7A4E7B: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A4E80: lea     ecx, [esp+0CCh+var_98]
0x7A4E84: push    ecx
0x7A4E85: call    ThrowException??
0x7A4E8A: lea     edx, [esp+0C8h+var_2C]
0x7A4E91: push    edx
0x7A4E92: mov     ecx, esi
0x7A4E94: call    sub_78EC20
0x7A4E99: mov     edx, ds:0B2BA10h
0x7A4E9F: mov     eax, edx
0x7A4EA1: mov     [esp+0C8h+var_4], 1
0x7A4EAC: mov     [esp+0C8h+var_9C], 0Fh
0x7A4EB4: mov     [esp+0C8h+var_A0], 0
0x7A4EBC: mov     byte ptr [esp+0C8h+var_B0], 0
0x7A4EC1: lea     edi, [eax+1]
0x7A4EC4: mov     cl, [eax]
0x7A4EC6: add     eax, 1
0x7A4EC9: test    cl, cl
0x7A4ECB: jnz     short loc_7A4EC4
0x7A4ECD: sub     eax, edi
0x7A4ECF: push    eax; MaxCount
0x7A4ED0: push    edx; Src
0x7A4ED1: lea     ecx, [esp+0D0h+var_B4]
0x7A4ED5: call    sub_414500
0x7A4EDA: mov     eax, [esp+0C8h+var_B0]
0x7A4EDE: mov     edi, 10h
0x7A4EE3: cmp     [esp+0C8h+var_9C], edi
0x7A4EE7: mov     byte ptr [esp+0C8h+var_4], 2
0x7A4EEF: jnb     short loc_7A4EF5
0x7A4EF1: lea     eax, [esp+0C8h+var_B0]
0x7A4EF5: mov     ecx, [esp+0C8h+var_A0]
0x7A4EF9: mov     edx, [esp+0C8h+var_18]
0x7A4F00: push    ecx
0x7A4F01: push    eax
0x7A4F02: push    edx
0x7A4F03: push    0
0x7A4F05: lea     ecx, [esp+0D8h+var_2C]
0x7A4F0C: call    sub_6F5DE0
0x7A4F11: test    eax, eax
0x7A4F13: setnz   bl
0x7A4F16: cmp     [esp+0C8h+var_9C], edi
0x7A4F1A: mov     byte ptr [esp+0C8h+var_4], 1
0x7A4F22: jb      short loc_7A4F31
0x7A4F24: mov     eax, [esp+0C8h+var_B0]
0x7A4F28: push    eax
0x7A4F29: call    FormHeapFree
0x7A4F2E: add     esp, 4
0x7A4F31: test    bl, bl
0x7A4F33: jz      short loc_7A4F81
0x7A4F35: push    1Eh; MaxCount
0x7A4F37: push    offset aNotAValidSpeed; "not a valid SpeedTree SPT file"
0x7A4F3C: lea     ecx, [esp+0D0h+var_B4]
0x7A4F40: mov     [esp+0D0h+var_9C], 0Fh
0x7A4F48: mov     [esp+0D0h+var_A0], 0
0x7A4F50: mov     byte ptr [esp+0D0h+var_B0], 0
0x7A4F55: call    sub_414500
0x7A4F5A: push    0
0x7A4F5C: lea     ecx, [esp+0CCh+var_B4]
0x7A4F60: push    ecx
0x7A4F61: lea     ecx, [esp+0D0h+var_98]
0x7A4F65: mov     byte ptr [esp+0D0h+var_4], 3
0x7A4F6D: call    sub_789190
0x7A4F72: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A4F77: lea     edx, [esp+0CCh+var_98]
0x7A4F7B: push    edx
0x7A4F7C: call    ThrowException??
0x7A4F81: mov     ecx, esi
0x7A4F83: call    sub_78EB40
0x7A4F88: sub     eax, 3EAh
0x7A4F8D: jz      short loc_7A4FB9
0x7A4F8F: sub     eax, 2
0x7A4F92: jz      short loc_7A4FAB
0x7A4F94: sub     eax, 7
0x7A4F97: jnz     loc_7A5074
0x7A4F9D: push    esi
0x7A4F9E: lea     ecx, [ebp+0F4h]
0x7A4FA4: call    loc_7A84A0
0x7A4FA9: jmp     short loc_7A4FC1
0x7A4FAB: push    esi
0x7A4FAC: lea     ecx, [ebp+84h]
0x7A4FB2: call    sub_7A6020
0x7A4FB7: jmp     short loc_7A4FC1
0x7A4FB9: push    esi
0x7A4FBA: mov     ecx, ebp
0x7A4FBC: call    sub_7A4950
0x7A4FC1: mov     ecx, esi
0x7A4FC3: call    sub_78EB40
0x7A4FC8: cmp     eax, 3E9h
0x7A4FCD: jnz     short loc_7A4F88
0x7A4FCF: mov     ecx, [esi+8]
0x7A4FD2: test    ecx, ecx
0x7A4FD4: jz      short loc_7A4FFC
0x7A4FD6: mov     eax, [esi+0Ch]
0x7A4FD9: sub     eax, ecx
0x7A4FDB: cmp     [esi], eax
0x7A4FDD: jnb     short loc_7A4FFC
0x7A4FDF: mov     ecx, esi
0x7A4FE1: call    sub_78EBF0
0x7A4FE6: cmp     eax, 1B58h
0x7A4FEB: jnz     short loc_7A4FFC
0x7A4FED: mov     ecx, esi
0x7A4FEF: call    sub_78EB40
0x7A4FF4: push    esi
0x7A4FF5: mov     ecx, ebp
0x7A4FF7: call    sub_7A42D0
0x7A4FFC: lea     edx, [ebp+24h]
0x7A4FFF: push    edx
0x7A5000: mov     ecx, ebp
0x7A5002: call    sub_7A34F0
0x7A5007: lea     ecx, [ebp+94h]
0x7A500D: push    ecx
0x7A500E: call    sub_7A4C60
0x7A5013: fld     dword ptr ds:0A30634h
0x7A5019: fcomp   dword ptr [ebp+18h]
0x7A501C: fnstsw  ax
0x7A501E: test    ah, 5
0x7A5021: jp      short loc_7A502F
0x7A5023: fld     dword ptr [ebp+18h]
0x7A5026: fstp    dword ptr [ebp+4Ch]
0x7A5029: fld     dword ptr [ebp+1Ch]
0x7A502C: fstp    dword ptr [ebp+50h]
0x7A502F: cmp     [esp+0C8h+var_14], edi
0x7A5036: jb      short loc_7A5048
0x7A5038: mov     eax, [esp+0C8h+var_28]
0x7A503F: push    eax
0x7A5040: call    FormHeapFree
0x7A5045: add     esp, 4
0x7A5048: mov     al, 1
0x7A504A: mov     ecx, [esp+0C8h+var_C]
0x7A5051: mov     large fs:0, ecx
0x7A5058: pop     ecx
0x7A5059: pop     edi
0x7A505A: pop     esi
0x7A505B: pop     ebp
0x7A505C: pop     ebx
0x7A505D: mov     ecx, [esp+0B4h+var_10]
0x7A5064: xor     ecx, esp
0x7A5066: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7A506B: add     esp, 0B4h
0x7A5071: retn    4
0x7A5074: push    offset aMalformedSpeed; "malformed SpeedTree SPT file"
0x7A5079: lea     ecx, [esp+0CCh+var_70]
0x7A507D: call    sub_414750
0x7A5082: push    0
0x7A5084: lea     eax, [esp+0CCh+var_70]
0x7A5088: push    eax
0x7A5089: lea     ecx, [esp+0D0h+var_54]
0x7A508D: mov     byte ptr [esp+0D0h+var_4], 4
0x7A5095: call    sub_789190
0x7A509A: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A509F: lea     ecx, [esp+0CCh+var_54]
0x7A50A3: push    ecx
0x7A50A4: call    ThrowException??
