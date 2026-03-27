0x9A8E30: sub     esp, 8
0x9A8E33: push    ebp
0x9A8E34: mov     ebp, [esp+0Ch+arg_0]
0x9A8E38: push    esi
0x9A8E39: mov     esi, ecx
0x9A8E3B: mov     ecx, [esp+10h+arg_4]
0x9A8E3F: mov     [esi+20h], ebp
0x9A8E42: mov     eax, off_B29F84; "__NDL_SCMData"
0x9A8E47: push    eax
0x9A8E48: mov     byte ptr [esp+14h+arg_0], 1
0x9A8E4D: call    NiObjectNET_GetExtraData
0x9A8E52: mov     [esp+10h+var_4], eax
0x9A8E56: xor     eax, eax
0x9A8E58: cmp     [esi+16h], ax
0x9A8E5C: mov     [esp+10h+var_8], eax
0x9A8E60: jbe     loc_9A902C
0x9A8E66: push    ebx
0x9A8E67: mov     ebx, [esp+14h+arg_20]
0x9A8E6B: push    edi
0x9A8E6C: mov     edi, [esp+18h+arg_24]
0x9A8E70: mov     ecx, [esi+10h]
0x9A8E73: mov     eax, [ecx+eax*4]
0x9A8E76: test    eax, eax
0x9A8E78: jz      loc_9A9013
0x9A8E7E: cmp     byte ptr [eax+8], 0
0x9A8E82: jz      loc_9A902A
0x9A8E88: mov     ecx, [eax+1Ch]
0x9A8E8B: cmp     ecx, 0FFFFFFFFh
0x9A8E8E: mov     [esp+18h+arg_24], ecx
0x9A8E92: jnz     short loc_9A8E9E
0x9A8E94: cmp     dword ptr [eax+24h], 0
0x9A8E98: jz      loc_9A9013
0x9A8E9E: mov     ecx, [eax+14h]
0x9A8EA1: and     ecx, 0F0000000h
0x9A8EA7: cmp     ecx, 20000000h
0x9A8EAD: jnz     short loc_9A8EB9
0x9A8EAF: mov     edx, [esi]
0x9A8EB1: mov     edx, [edx+54h]
0x9A8EB4: jmp     loc_9A8FDF
0x9A8EB9: cmp     ecx, 10000000h
0x9A8EBF: jnz     loc_9A8F45
0x9A8EC5: mov     ecx, [eax+18h]
0x9A8EC8: cmp     ecx, 1
0x9A8ECB: jnz     short loc_9A8EFE
0x9A8ECD: mov     edx, [eax+20h]
0x9A8ED0: mov     eax, [eax+30h]
0x9A8ED3: mov     ecx, [esi+28h]
0x9A8ED6: push    edx
0x9A8ED7: mov     [esp+1Ch+arg_20], eax
0x9A8EDB: mov     edx, [esp+1Ch+arg_20]
0x9A8EDF: mov     eax, [ecx]
0x9A8EE1: mov     eax, [eax+178h]
0x9A8EE7: push    edx
0x9A8EE8: mov     edx, [esp+20h+arg_24]
0x9A8EEC: push    edx
0x9A8EED: push    ecx
0x9A8EEE: call    eax
0x9A8EF0: xor     ecx, ecx
0x9A8EF2: test    eax, eax
0x9A8EF4: setl    cl
0x9A8EF7: mov     eax, ecx
0x9A8EF9: jmp     loc_9A900A
0x9A8EFE: cmp     ecx, 2
0x9A8F01: jnz     short loc_9A8F34
0x9A8F03: mov     edx, [eax+20h]
0x9A8F06: mov     eax, [eax+30h]
0x9A8F09: mov     ecx, [esi+28h]
0x9A8F0C: push    edx
0x9A8F0D: mov     [esp+1Ch+arg_20], eax
0x9A8F11: mov     edx, [esp+1Ch+arg_20]
0x9A8F15: mov     eax, [ecx]
0x9A8F17: mov     eax, [eax+1B4h]
0x9A8F1D: push    edx
0x9A8F1E: mov     edx, [esp+20h+arg_24]
0x9A8F22: push    edx
0x9A8F23: push    ecx
0x9A8F24: call    eax
0x9A8F26: xor     ecx, ecx
0x9A8F28: test    eax, eax
0x9A8F2A: setl    cl
0x9A8F2D: mov     eax, ecx
0x9A8F2F: jmp     loc_9A900A
0x9A8F34: mov     edx, [esi]
0x9A8F36: push    edi
0x9A8F37: push    eax
0x9A8F38: mov     eax, [edx+58h]
0x9A8F3B: push    ebp
0x9A8F3C: mov     ecx, esi
0x9A8F3E: call    eax
0x9A8F40: jmp     loc_9A900A
0x9A8F45: cmp     ecx, 30000000h
0x9A8F4B: jnz     short loc_9A8F8C
0x9A8F4D: mov     ecx, [esp+18h+var_4]
0x9A8F51: push    ecx
0x9A8F52: mov     ecx, [esp+1Ch+arg_28]
0x9A8F56: push    ecx
0x9A8F57: mov     ecx, [esp+20h+arg_1C]
0x9A8F5B: push    edi
0x9A8F5C: mov     edx, [esi]
0x9A8F5E: push    ebx
0x9A8F5F: push    ecx
0x9A8F60: mov     ecx, [esp+2Ch+arg_18]
0x9A8F64: push    ecx
0x9A8F65: mov     ecx, [esp+30h+arg_14]
0x9A8F69: mov     edx, [edx+5Ch]
0x9A8F6C: push    ecx
0x9A8F6D: mov     ecx, [esp+34h+arg_10]
0x9A8F71: push    ecx
0x9A8F72: mov     ecx, [esp+38h+arg_C]
0x9A8F76: push    ecx
0x9A8F77: mov     ecx, [esp+3Ch+arg_8]
0x9A8F7B: push    ecx
0x9A8F7C: mov     ecx, [esp+40h+arg_4]
0x9A8F80: push    ecx
0x9A8F81: push    eax
0x9A8F82: push    ebp
0x9A8F83: mov     ecx, esi
0x9A8F85: call    edx
0x9A8F87: jmp     loc_9A900A
0x9A8F8C: cmp     ecx, 40000000h
0x9A8F92: jnz     short loc_9A8FA2
0x9A8F94: mov     edx, [esi]
0x9A8F96: push    edi
0x9A8F97: push    eax
0x9A8F98: mov     eax, [edx+60h]
0x9A8F9B: push    ebp
0x9A8F9C: mov     ecx, esi
0x9A8F9E: call    eax
0x9A8FA0: jmp     short loc_9A900A
0x9A8FA2: cmp     ecx, 50000000h
0x9A8FA8: jnz     short loc_9A8FD2
0x9A8FAA: mov     ecx, [esp+18h+arg_1C]
0x9A8FAE: mov     edx, [esi]
0x9A8FB0: mov     edx, [edx+64h]
0x9A8FB3: push    edi
0x9A8FB4: push    ebx
0x9A8FB5: push    ecx
0x9A8FB6: mov     ecx, [esp+24h+arg_18]
0x9A8FBA: push    ecx
0x9A8FBB: mov     ecx, [esp+28h+arg_14]
0x9A8FBF: push    ecx
0x9A8FC0: mov     ecx, [esp+2Ch+arg_8]
0x9A8FC4: push    ecx
0x9A8FC5: mov     ecx, [esp+30h+arg_4]
0x9A8FC9: push    ecx
0x9A8FCA: push    eax
0x9A8FCB: push    ebp
0x9A8FCC: mov     ecx, esi
0x9A8FCE: call    edx
0x9A8FD0: jmp     short loc_9A900A
0x9A8FD2: cmp     ecx, 60000000h
0x9A8FD8: jnz     short loc_9A900E
0x9A8FDA: mov     edx, [esi]
0x9A8FDC: mov     edx, [edx+6Ch]
0x9A8FDF: mov     ecx, [esp+18h+arg_1C]
0x9A8FE3: push    edi
0x9A8FE4: push    ebx
0x9A8FE5: push    ecx
0x9A8FE6: mov     ecx, [esp+24h+arg_18]
0x9A8FEA: push    ecx
0x9A8FEB: mov     ecx, [esp+28h+arg_14]
0x9A8FEF: push    ecx
0x9A8FF0: mov     ecx, [esp+2Ch+arg_10]
0x9A8FF4: push    ecx
0x9A8FF5: mov     ecx, [esp+30h+arg_C]
0x9A8FF9: push    ecx
0x9A8FFA: mov     ecx, [esp+34h+arg_8]
0x9A8FFE: push    ecx
0x9A8FFF: mov     ecx, [esp+38h+arg_4]
0x9A9003: push    ecx
0x9A9004: push    eax
0x9A9005: push    ebp
0x9A9006: mov     ecx, esi
0x9A9008: call    edx
0x9A900A: test    eax, eax
0x9A900C: jz      short loc_9A9013
0x9A900E: mov     byte ptr [esp+18h+arg_0], 0
0x9A9013: mov     eax, [esp+18h+var_8]
0x9A9017: movzx   ecx, word ptr [esi+16h]
0x9A901B: add     eax, 1
0x9A901E: cmp     eax, ecx
0x9A9020: mov     [esp+18h+var_8], eax
0x9A9024: jb      loc_9A8E70
0x9A902A: pop     edi
0x9A902B: pop     ebx
0x9A902C: xor     eax, eax
0x9A902E: cmp     byte ptr [esp+10h+arg_0], al
0x9A9032: pop     esi
0x9A9033: setz    al
0x9A9036: pop     ebp
0x9A9037: add     esp, 8
0x9A903A: retn    2Ch ; ','
