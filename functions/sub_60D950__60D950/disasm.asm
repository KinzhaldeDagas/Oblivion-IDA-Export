0x60D950: sub     esp, 18h
0x60D953: push    ebx
0x60D954: mov     ebx, [esp+1Ch+arg_4]
0x60D958: push    ebp
0x60D959: push    esi
0x60D95A: push    edi
0x60D95B: push    ebx
0x60D95C: xor     edi, edi
0x60D95E: call    sub_8AFCE0
0x60D963: add     esp, 4
0x60D966: test    eax, eax
0x60D968: jz      short loc_60D975
0x60D96A: push    eax
0x60D96B: call    sub_4DC270
0x60D970: add     esp, 4
0x60D973: mov     edi, eax
0x60D975: push    0; int
0x60D977: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x60D97C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x60D981: push    0; int
0x60D983: push    edi; void *
0x60D984: call    OblivionDynamicCast
0x60D989: add     esp, 14h
0x60D98C: cmp     byte ptr [ebx+18h], 2
0x60D990: mov     esi, eax
0x60D992: jnz     loc_60DA37
0x60D998: mov     eax, [ebx+10h]
0x60D99B: add     eax, ebx
0x60D99D: jz      loc_60DA37
0x60D9A3: test    esi, esi
0x60D9A5: jz      loc_60DBA7
0x60D9AB: mov     eax, [esi]
0x60D9AD: mov     edx, [eax+198h]
0x60D9B3: push    0
0x60D9B5: mov     ecx, esi
0x60D9B7: call    edx
0x60D9B9: test    al, al
0x60D9BB: jnz     loc_60DBA7
0x60D9C1: mov     ecx, [esi+58h]
0x60D9C4: test    ecx, ecx
0x60D9C6: jz      short loc_60D9EC
0x60D9C8: mov     eax, [ecx]
0x60D9CA: mov     edx, [eax+2E4h]
0x60D9D0: call    edx
0x60D9D2: test    eax, eax
0x60D9D4: jz      short loc_60D9EC
0x60D9D6: mov     ecx, [esi+58h]
0x60D9D9: mov     eax, [ecx]
0x60D9DB: mov     edx, [eax+2E4h]
0x60D9E1: call    edx
0x60D9E3: cmp     eax, 6
0x60D9E6: jnz     loc_60DBA7
0x60D9EC: mov     eax, [esi]
0x60D9EE: mov     edx, [eax+18Ch]
0x60D9F4: mov     ecx, esi
0x60D9F6: call    edx
0x60D9F8: cmp     eax, 4
0x60D9FB: jz      short loc_60DA0E
0x60D9FD: mov     eax, [esi]
0x60D9FF: mov     edx, [eax+18Ch]
0x60DA05: mov     ecx, esi
0x60DA07: call    edx
0x60DA09: cmp     eax, 9
0x60DA0C: jnz     short loc_60DA37
0x60DA0E: mov     eax, [esp+28h+arg_0]
0x60DA12: mov     edi, [eax+78h]
0x60DA15: test    edi, edi
0x60DA17: jz      loc_60DBA7
0x60DA1D: mov     edx, [esi]
0x60DA1F: mov     eax, [edx+174h]
0x60DA25: mov     ecx, esi
0x60DA27: call    eax
0x60DA29: push    esi
0x60DA2A: push    1
0x60DA2C: sub     esp, 0Ch
0x60DA2F: mov     ecx, esp
0x60DA31: push    edi
0x60DA32: jmp     loc_60DB8D
0x60DA37: mov     ebp, [ebx+1Ch]
0x60DA3A: shr     ebp, 10h
0x60DA3D: call    sub_607B60
0x60DA42: cmp     ebp, eax
0x60DA44: jz      loc_60DBA7
0x60DA4A: test    edi, edi
0x60DA4C: jz      short loc_60DA60
0x60DA4E: mov     ecx, ds:0B333C4h
0x60DA54: cmp     edi, [ecx+578h]
0x60DA5A: jz      loc_60DBA7
0x60DA60: mov     edx, [esp+28h+arg_8]
0x60DA64: push    edx
0x60DA65: lea     eax, [esp+2Ch+var_18]
0x60DA69: push    eax
0x60DA6A: call    sub_43F3E0
0x60DA6F: mov     ecx, [esp+30h+arg_C]
0x60DA73: push    ecx
0x60DA74: lea     edx, [esp+34h+var_C]
0x60DA78: push    edx
0x60DA79: call    sub_4D68A0
0x60DA7E: add     esp, 10h
0x60DA81: cmp     ebp, 1
0x60DA84: jnz     short loc_60DAD6
0x60DA86: mov     esi, [esp+28h+arg_0]
0x60DA8A: lea     eax, [esp+28h+var_C]
0x60DA8E: push    eax
0x60DA8F: lea     ecx, [esp+2Ch+var_18]
0x60DA93: push    ecx
0x60DA94: mov     ecx, esi
0x60DA96: call    sub_60BAC0
0x60DA9B: mov     ecx, [esi+78h]
0x60DA9E: test    ecx, ecx
0x60DAA0: jz      loc_60DBA7
0x60DAA6: mov     edx, [esp+28h+var_18]
0x60DAAA: push    0
0x60DAAC: push    0
0x60DAAE: sub     esp, 0Ch
0x60DAB1: mov     eax, esp
0x60DAB3: mov     [eax], edx
0x60DAB5: mov     edx, [esp+3Ch+var_14]
0x60DAB9: mov     [eax+4], edx
0x60DABC: mov     edx, [esp+3Ch+var_10]
0x60DAC0: push    ecx
0x60DAC1: mov     ecx, offset ActorProcessManager_ptr
0x60DAC6: mov     [eax+8], edx
0x60DAC9: call    sub_677760
0x60DACE: pop     edi
0x60DACF: pop     esi
0x60DAD0: pop     ebp
0x60DAD1: pop     ebx
0x60DAD2: add     esp, 18h
0x60DAD5: retn
0x60DAD6: test    edi, edi
0x60DAD8: jz      loc_60DBA7
0x60DADE: test    esi, esi
0x60DAE0: jz      short loc_60DB45
0x60DAE2: mov     ecx, esi; this
0x60DAE4: call    Actor_IsGhost
0x60DAE9: test    al, al
0x60DAEB: jnz     loc_60DBA7
0x60DAF1: mov     ebx, [esp+28h+arg_0]
0x60DAF5: mov     edi, [ebx+78h]
0x60DAF8: test    edi, edi
0x60DAFA: jz      short loc_60DB2B
0x60DAFC: mov     eax, [esi]
0x60DAFE: mov     edx, [eax+174h]
0x60DB04: mov     ecx, esi
0x60DB06: call    edx
0x60DB08: mov     edx, [eax]
0x60DB0A: push    esi
0x60DB0B: push    1
0x60DB0D: sub     esp, 0Ch
0x60DB10: mov     ecx, esp
0x60DB12: mov     [ecx], edx
0x60DB14: mov     edx, [eax+4]
0x60DB17: mov     eax, [eax+8]
0x60DB1A: mov     [ecx+4], edx
0x60DB1D: mov     [ecx+8], eax
0x60DB20: push    edi
0x60DB21: mov     ecx, offset ActorProcessManager_ptr
0x60DB26: call    sub_677760
0x60DB2B: push    esi
0x60DB2C: lea     ecx, [esp+2Ch+var_C]
0x60DB30: push    ecx
0x60DB31: lea     edx, [esp+30h+var_18]
0x60DB35: push    edx
0x60DB36: mov     ecx, ebx
0x60DB38: call    sub_60A640
0x60DB3D: pop     edi
0x60DB3E: pop     esi
0x60DB3F: pop     ebp
0x60DB40: pop     ebx
0x60DB41: add     esp, 18h
0x60DB44: retn
0x60DB45: push    ebx
0x60DB46: call    sub_47DE00
0x60DB4B: add     esp, 4
0x60DB4E: test    eax, eax
0x60DB50: jz      short loc_60DB57
0x60DB52: mov     eax, [eax+0Ch]
0x60DB55: jmp     short loc_60DB59
0x60DB57: xor     eax, eax
0x60DB59: mov     esi, [esp+28h+arg_0]
0x60DB5D: push    eax
0x60DB5E: push    edi
0x60DB5F: lea     eax, [esp+30h+var_C]
0x60DB63: push    eax
0x60DB64: lea     ecx, [esp+34h+var_18]
0x60DB68: push    ecx
0x60DB69: mov     ecx, esi
0x60DB6B: call    sub_60B120
0x60DB70: mov     esi, [esi+78h]
0x60DB73: test    esi, esi
0x60DB75: jz      short loc_60DBA7
0x60DB77: mov     edx, [edi]
0x60DB79: mov     eax, [edx+174h]
0x60DB7F: mov     ecx, edi
0x60DB81: call    eax
0x60DB83: push    0
0x60DB85: push    0
0x60DB87: sub     esp, 0Ch
0x60DB8A: mov     ecx, esp
0x60DB8C: push    esi
0x60DB8D: mov     edx, [eax]
0x60DB8F: mov     [ecx], edx
0x60DB91: mov     edx, [eax+4]
0x60DB94: mov     eax, [eax+8]
0x60DB97: mov     [ecx+4], edx
0x60DB9A: mov     [ecx+8], eax
0x60DB9D: mov     ecx, offset ActorProcessManager_ptr
0x60DBA2: call    sub_677760
0x60DBA7: pop     edi
0x60DBA8: pop     esi
0x60DBA9: pop     ebp
0x60DBAA: pop     ebx
0x60DBAB: add     esp, 18h
0x60DBAE: retn
