0x42AC40: push    0FFFFFFFFh
0x42AC42: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x42AC47: mov     eax, large fs:0
0x42AC4D: push    eax
0x42AC4E: push    ecx
0x42AC4F: push    esi
0x42AC50: push    edi
0x42AC51: mov     eax, ___security_cookie
0x42AC56: xor     eax, esp
0x42AC58: push    eax
0x42AC59: lea     eax, [esp+1Ch+var_C]
0x42AC5D: mov     large fs:0, eax
0x42AC63: mov     esi, ecx
0x42AC65: mov     [esp+1Ch+var_10], esi
0x42AC69: xor     eax, eax
0x42AC6B: mov     byte ptr [esi+4], 14h
0x42AC6F: mov     [esi+8], eax
0x42AC72: mov     edi, [esp+1Ch+arg_0]
0x42AC76: mov     [esp+1Ch+var_4], eax
0x42AC7A: mov     dword ptr [esi], offset ??_7ExtraStartingPosition@@6B@; const ExtraStartingPosition::`vftable'
0x42AC80: mov     eax, [edi]
0x42AC82: mov     edx, [eax+174h]
0x42AC88: mov     ecx, edi
0x42AC8A: call    edx
0x42AC8C: mov     ecx, [eax]
0x42AC8E: mov     [esi+0Ch], ecx
0x42AC91: mov     edx, [eax+4]
0x42AC94: mov     [esi+10h], edx
0x42AC97: mov     eax, [eax+8]
0x42AC9A: mov     [esi+14h], eax
0x42AC9D: mov     ecx, [edi+20h]
0x42ACA0: lea     eax, [edi+20h]
0x42ACA3: mov     [esi+18h], ecx
0x42ACA6: mov     edx, [eax+4]
0x42ACA9: mov     [esi+1Ch], edx
0x42ACAC: mov     eax, [eax+8]
0x42ACAF: mov     [esi+20h], eax
0x42ACB2: mov     eax, esi
0x42ACB4: mov     ecx, [esp+1Ch+var_C]
0x42ACB8: mov     large fs:0, ecx
0x42ACBF: pop     ecx
0x42ACC0: pop     edi
0x42ACC1: pop     esi
0x42ACC2: add     esp, 10h
0x42ACC5: retn    4
