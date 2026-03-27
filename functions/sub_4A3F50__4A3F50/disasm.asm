0x4A3F50: push    0FFFFFFFFh
0x4A3F52: push    offset SEH_596FE0
0x4A3F57: mov     eax, large fs:0
0x4A3F5D: push    eax
0x4A3F5E: sub     esp, 8
0x4A3F61: push    ebx
0x4A3F62: push    esi
0x4A3F63: push    edi
0x4A3F64: mov     eax, ds:0B30AACh
0x4A3F69: xor     eax, esp
0x4A3F6B: push    eax
0x4A3F6C: lea     eax, [esp+24h+var_C]
0x4A3F70: mov     large fs:0, eax
0x4A3F76: mov     esi, ecx
0x4A3F78: xor     ebx, ebx
0x4A3F7A: mov     [esp+24h+var_14], ebx
0x4A3F7E: mov     [esp+24h+var_10], bx
0x4A3F83: mov     [esp+24h+var_E], bx
0x4A3F88: mov     edi, [esp+24h+arg_0]
0x4A3F8C: cmp     edi, ebx
0x4A3F8E: mov     [esp+24h+var_4], ebx
0x4A3F92: jz      loc_4A4171
0x4A3F98: mov     eax, [edi]
0x4A3F9A: mov     edx, [eax+0Ch]
0x4A3F9D: mov     ecx, edi
0x4A3F9F: call    edx
0x4A3FA1: cmp     eax, 5
0x4A3FA4: jnz     loc_4A4171
0x4A3FAA: cmp     [esp+24h+arg_4], ebx
0x4A3FAE: jz      loc_4A4171
0x4A3FB4: cmp     [esi+5], bl
0x4A3FB7: jz      short loc_4A3FF9
0x4A3FB9: mov     al, [edi+4]
0x4A3FBC: mov     [esi+4], al
0x4A3FBF: movzx   eax, byte ptr [edi+6]
0x4A3FC3: mov     byte ptr [esp+24h+arg_0], al
0x4A3FC7: mov     ecx, [esp+24h+arg_0]
0x4A3FCB: push    ecx
0x4A3FCC: mov     ecx, esi
0x4A3FCE: call    sub_4A3520
0x4A3FD3: mov     edx, [edi]
0x4A3FD5: mov     edx, [edx+24h]
0x4A3FD8: lea     eax, [esp+24h+var_14]
0x4A3FDC: push    eax
0x4A3FDD: mov     ecx, edi
0x4A3FDF: call    edx
0x4A3FE1: mov     eax, [esi]
0x4A3FE3: mov     edx, [eax+28h]
0x4A3FE6: lea     ecx, [esp+24h+var_14]
0x4A3FEA: push    ecx
0x4A3FEB: mov     ecx, esi
0x4A3FED: call    edx
0x4A3FEF: mov     edx, [esp+24h+var_14]
0x4A3FF3: push    edx
0x4A3FF4: jmp     loc_4A4176
0x4A3FF9: cmp     [edi+5], bl
0x4A3FFC: jnz     short loc_4A4044
0x4A3FFE: cmp     [esi+4], bl
0x4A4001: jz      short loc_4A406A
0x4A4003: mov     cl, [edi+4]
0x4A4006: cmp     cl, bl
0x4A4008: jz      short loc_4A4044
0x4A400A: mov     al, [edi+6]
0x4A400D: cmp     al, [esi+6]
0x4A4010: jbe     short loc_4A4044
0x4A4012: mov     [esi+4], cl
0x4A4015: mov     al, [edi+6]
0x4A4018: mov     byte ptr [esp+24h+arg_0], al
0x4A401C: mov     ecx, [esp+24h+arg_0]
0x4A4020: push    ecx
0x4A4021: mov     ecx, esi
0x4A4023: call    sub_4A3520
0x4A4028: mov     edx, [edi]
0x4A402A: mov     edx, [edx+24h]
0x4A402D: lea     eax, [esp+24h+var_14]
0x4A4031: push    eax
0x4A4032: mov     ecx, edi
0x4A4034: call    edx
0x4A4036: mov     eax, [esi]
0x4A4038: mov     edx, [eax+28h]
0x4A403B: lea     ecx, [esp+24h+var_14]
0x4A403F: push    ecx
0x4A4040: mov     ecx, esi
0x4A4042: call    edx
0x4A4044: lea     ecx, [esp+24h+var_14]; void *
0x4A4048: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A4050: call    BSStringT_Clear
0x4A4055: mov     ecx, [esp+24h+var_C]
0x4A4059: mov     large fs:0, ecx
0x4A4060: pop     ecx
0x4A4061: pop     edi
0x4A4062: pop     esi
0x4A4063: pop     ebx
0x4A4064: add     esp, 14h
0x4A4067: retn    8
0x4A406A: mov     al, [edi+4]
0x4A406D: cmp     al, bl
0x4A406F: jz      short loc_4A40AD
0x4A4071: mov     [esi+4], al
0x4A4074: mov     al, [edi+6]
0x4A4077: mov     byte ptr [esp+24h+arg_0], al
0x4A407B: mov     ecx, [esp+24h+arg_0]
0x4A407F: push    ecx
0x4A4080: mov     ecx, esi
0x4A4082: call    sub_4A3520
0x4A4087: mov     edx, [edi]
0x4A4089: mov     edx, [edx+24h]
0x4A408C: lea     eax, [esp+24h+var_14]
0x4A4090: push    eax
0x4A4091: mov     ecx, edi
0x4A4093: call    edx
0x4A4095: mov     eax, [esi]
0x4A4097: mov     edx, [eax+28h]
0x4A409A: lea     ecx, [esp+24h+var_14]
0x4A409E: push    ecx
0x4A409F: mov     ecx, esi
0x4A40A1: call    edx
0x4A40A3: mov     edx, [esp+24h+var_14]
0x4A40A7: push    edx
0x4A40A8: jmp     loc_4A4176
0x4A40AD: mov     al, [edi+6]
0x4A40B0: cmp     al, [esi+6]
0x4A40B3: jbe     short loc_4A40D1
0x4A40B5: mov     eax, [edi]
0x4A40B7: mov     edx, [eax+24h]
0x4A40BA: lea     ecx, [esp+24h+var_14]
0x4A40BE: push    ecx
0x4A40BF: mov     ecx, edi
0x4A40C1: call    edx
0x4A40C3: mov     eax, [esi]
0x4A40C5: mov     edx, [eax+28h]
0x4A40C8: lea     ecx, [esp+24h+var_14]
0x4A40CC: push    ecx
0x4A40CD: mov     ecx, esi
0x4A40CF: call    edx
0x4A40D1: mov     cl, [edi+6]
0x4A40D4: mov     al, [esi+6]
0x4A40D7: movzx   edx, al
0x4A40DA: mov     edi, 64h ; 'd'
0x4A40DF: sub     edi, edx
0x4A40E1: movzx   edx, cl
0x4A40E4: imul    edi, edx
0x4A40E7: movzx   edx, al
0x4A40EA: movzx   ebx, al
0x4A40ED: imul    edx, ebx
0x4A40F0: add     edi, edx
0x4A40F2: mov     [esp+24h+arg_0], edi
0x4A40F6: movzx   edx, cl
0x4A40F9: fild    [esp+24h+arg_0]
0x4A40FD: movzx   eax, al
0x4A4100: mov     edi, 64h ; 'd'
0x4A4105: sub     edi, edx
0x4A4107: imul    edi, eax
0x4A410A: movzx   edx, cl
0x4A410D: movzx   eax, cl
0x4A4110: imul    edx, eax
0x4A4113: add     edi, edx
0x4A4115: mov     [esp+24h+arg_0], edi
0x4A4119: push    ecx
0x4A411A: fiadd   [esp+28h+arg_0]
0x4A411E: fstp    [esp+28h+arg_0]
0x4A4122: fld     [esp+28h+arg_0]
0x4A4126: fmul    qword ptr ds:0A40048h
0x4A412C: fstp    [esp+28h+arg_0]
0x4A4130: fld     [esp+28h+arg_0]
0x4A4134: fstp    [esp+28h+var_28]; float
0x4A4137: call    sub_4842F0
0x4A413C: fnstcw  word ptr [esp+28h+arg_0]
0x4A4140: add     esp, 4
0x4A4143: movzx   eax, word ptr [esp+24h+arg_0]
0x4A4148: or      eax, 0C00h
0x4A414D: mov     [esp+24h+arg_4], eax
0x4A4151: fldcw   word ptr [esp+24h+arg_4]
0x4A4155: fistp   [esp+24h+arg_4]
0x4A4159: movzx   ecx, byte ptr [esp+24h+arg_4]
0x4A415E: push    ecx
0x4A415F: mov     ecx, esi
0x4A4161: fldcw   word ptr [esp+28h+arg_0]
0x4A4165: call    sub_4A3520
0x4A416A: mov     edx, [esp+24h+var_14]
0x4A416E: push    edx
0x4A416F: jmp     short loc_4A4176
0x4A4171: mov     eax, [esp+24h+var_14]
0x4A4175: push    eax
0x4A4176: call    FormHeapFree
0x4A417B: add     esp, 4
0x4A417E: mov     ecx, [esp+24h+var_C]
0x4A4182: mov     large fs:0, ecx
0x4A4189: pop     ecx
0x4A418A: pop     edi
0x4A418B: pop     esi
0x4A418C: pop     ebx
0x4A418D: add     esp, 14h
0x4A4190: retn    8
