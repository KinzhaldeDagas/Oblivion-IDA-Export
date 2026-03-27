0x47EEF0: push    0FFFFFFFFh
0x47EEF2: push    offset SEH_47EEF0
0x47EEF7: mov     eax, large fs:0
0x47EEFD: push    eax
0x47EEFE: push    ebx
0x47EEFF: push    esi
0x47EF00: push    edi
0x47EF01: mov     eax, ds:0B30AACh
0x47EF06: xor     eax, esp
0x47EF08: push    eax
0x47EF09: lea     eax, [esp+1Ch+var_C]
0x47EF0D: mov     large fs:0, eax
0x47EF13: push    24h ; '$'; Size
0x47EF15: call    FormHeapAlloc
0x47EF1A: mov     ecx, [esp+20h+arg_4]
0x47EF1E: mov     edx, [esp+20h+arg_8]
0x47EF22: mov     ebx, eax
0x47EF24: mov     eax, [esp+20h+arg_0]
0x47EF28: mov     [ebx], eax
0x47EF2A: mov     eax, [esp+20h+arg_C]
0x47EF2E: mov     [ebx+4], ecx
0x47EF31: mov     ecx, [esp+20h+arg_10]
0x47EF35: mov     [ebx+8], edx
0x47EF38: mov     edx, [esp+20h+arg_14]
0x47EF3C: mov     [ebx+0Ch], eax
0x47EF3F: mov     eax, [esp+20h+arg_18]
0x47EF43: mov     [ebx+10h], ecx
0x47EF46: mov     ecx, [esp+20h+arg_1C]
0x47EF4A: mov     [ebx+14h], edx
0x47EF4D: mov     edx, [esp+20h+arg_20]
0x47EF51: mov     [ebx+18h], eax
0x47EF54: mov     [ebx+1Ch], ecx
0x47EF57: push    30h ; '0'; Size
0x47EF59: mov     [ebx+20h], edx
0x47EF5C: call    FormHeapAlloc
0x47EF61: mov     esi, eax
0x47EF63: add     esp, 8
0x47EF66: mov     [esp+1Ch+arg_0], esi
0x47EF6A: test    esi, esi
0x47EF6C: mov     [esp+1Ch+var_4], 0
0x47EF74: jz      short loc_47EF87
0x47EF76: push    offset sub_47EA50
0x47EF7B: push    3
0x47EF7D: push    10h
0x47EF7F: push    esi
0x47EF80: call    sub_401080
0x47EF85: jmp     short loc_47EF89
0x47EF87: xor     esi, esi
0x47EF89: mov     eax, [esp+1Ch+arg_24]
0x47EF8D: mov     ecx, [eax]
0x47EF8F: mov     [esi], ecx
0x47EF91: mov     edx, [eax+4]
0x47EF94: mov     [esi+4], edx
0x47EF97: mov     ecx, [eax+8]
0x47EF9A: mov     [esi+8], ecx
0x47EF9D: mov     edx, [eax+0Ch]
0x47EFA0: mov     [esi+0Ch], edx
0x47EFA3: mov     ecx, [eax]
0x47EFA5: mov     [esi+10h], ecx
0x47EFA8: mov     edx, [eax+4]
0x47EFAB: mov     [esi+14h], edx
0x47EFAE: mov     ecx, [eax+8]
0x47EFB1: mov     [esi+18h], ecx
0x47EFB4: mov     edx, [eax+0Ch]
0x47EFB7: mov     [esi+1Ch], edx
0x47EFBA: mov     ecx, [eax]
0x47EFBC: mov     [esi+20h], ecx
0x47EFBF: mov     edx, [eax+4]
0x47EFC2: mov     [esi+24h], edx
0x47EFC5: mov     ecx, [eax+8]
0x47EFC8: mov     [esi+28h], ecx
0x47EFCB: mov     edx, [eax+0Ch]
0x47EFCE: push    0Ch; Size
0x47EFD0: mov     [esp+20h+var_4], 0FFFFFFFFh
0x47EFD8: mov     [esi+2Ch], edx
0x47EFDB: call    FormHeapAlloc
0x47EFE0: mov     edi, eax
0x47EFE2: mov     eax, 2
0x47EFE7: push    0C0h ; 'À'; Size
0x47EFEC: mov     word ptr [edi], 0
0x47EFF1: mov     [edi+2], ax
0x47EFF5: mov     word ptr [edi+4], 1
0x47EFFB: mov     word ptr [edi+6], 0
0x47F001: mov     word ptr [edi+8], 1
0x47F007: mov     [edi+0Ah], ax
0x47F00B: call    FormHeapAlloc
0x47F010: add     esp, 8
0x47F013: mov     [esp+1Ch+arg_24], eax
0x47F017: test    eax, eax
0x47F019: mov     [esp+1Ch+var_4], 1
0x47F021: jz      short loc_47F04C
0x47F023: push    edi
0x47F024: push    2
0x47F026: push    0
0x47F028: push    0
0x47F02A: push    0
0x47F02C: push    esi
0x47F02D: push    0
0x47F02F: push    ebx
0x47F030: push    3
0x47F032: mov     ecx, eax
0x47F034: call    sub_7174B0
0x47F039: mov     ecx, [esp+1Ch+var_C]
0x47F03D: mov     large fs:0, ecx
0x47F044: pop     ecx
0x47F045: pop     edi
0x47F046: pop     esi
0x47F047: pop     ebx
0x47F048: add     esp, 0Ch
0x47F04B: retn
0x47F04C: xor     eax, eax
0x47F04E: mov     ecx, [esp+1Ch+var_C]
0x47F052: mov     large fs:0, ecx
0x47F059: pop     ecx
0x47F05A: pop     edi
0x47F05B: pop     esi
0x47F05C: pop     ebx
0x47F05D: add     esp, 0Ch
0x47F060: retn
