0x961790: sub     esp, 0B4h
0x961796: mov     eax, [esp+0B4h+arg_10]
0x96179D: fld     dword ptr [eax]
0x96179F: mov     ecx, [esp+0B4h+arg_8]
0x9617A6: fsub    dword ptr [ecx]
0x9617A8: push    ebx
0x9617A9: push    esi
0x9617AA: mov     esi, [esp+0BCh+arg_C]
0x9617B1: fstp    [esp+0BCh+var_94]
0x9617B5: push    edi
0x9617B6: fld     dword ptr [eax+4]
0x9617B9: mov     edi, [esp+0C0h+arg_4]
0x9617C0: fsub    dword ptr [ecx+4]
0x9617C3: lea     ebx, [edi+10h]
0x9617C6: fstp    [esp+0C0h+var_90]
0x9617CA: fld     dword ptr [eax+8]
0x9617CD: mov     eax, [esp+0C0h+var_94]
0x9617D1: fsub    dword ptr [ecx+8]
0x9617D4: mov     ecx, [esp+0C0h+var_90]
0x9617D8: mov     [esp+0C0h+var_24], eax
0x9617DF: mov     [esp+0C0h+var_20], ecx
0x9617E6: fstp    [esp+0C0h+var_8C]
0x9617EA: mov     edx, [esp+0C0h+var_8C]
0x9617EE: fld     dword ptr [esi+4]
0x9617F1: mov     [esp+0C0h+var_1C], edx
0x9617F8: fsub    dword ptr [edi+4]
0x9617FB: fstp    [esp+0C0h+var_A0]
0x9617FF: mov     eax, [esp+0C0h+var_A0]
0x961803: fld     dword ptr [esi+8]
0x961806: mov     [esp+0C0h+var_C], eax
0x96180D: fsub    dword ptr [edi+8]
0x961810: fstp    [esp+0C0h+var_9C]
0x961814: mov     ecx, [esp+0C0h+var_9C]
0x961818: fld     dword ptr [esi+0Ch]
0x96181B: mov     [esp+0C0h+var_8], ecx
0x961822: fsub    dword ptr [edi+0Ch]
0x961825: fstp    [esp+0C0h+var_98]
0x961829: mov     edx, [esp+0C0h+var_98]
0x96182D: fld     [esp+0C0h+var_94]
0x961831: mov     [esp+0C0h+var_4], edx
0x961838: fld     [esp+0C0h+arg_0]
0x96183F: fld     st
0x961841: fmulp   st(2), st
0x961843: fxch    st(1)
0x961845: fstp    [esp+0C0h+var_64]
0x961849: fld     [esp+0C0h+var_90]
0x96184D: fmul    st, st(1)
0x96184F: fstp    [esp+0C0h+var_60]
0x961853: fmul    [esp+0C0h+var_8C]
0x961857: fstp    [esp+0C0h+var_5C]
0x96185B: fld     [esp+0C0h+var_64]
0x96185F: fld     [esp+0C0h+var_A0]
0x961863: fld     st
0x961865: faddp   st(2), st
0x961867: fxch    st(1)
0x961869: fstp    [esp+0C0h+var_94]
0x96186D: mov     eax, [esp+0C0h+var_94]
0x961871: fld     [esp+0C0h+var_60]
0x961875: mov     [esp+0C0h+var_18], eax
0x96187C: fld     [esp+0C0h+var_9C]
0x961880: fld     st
0x961882: faddp   st(2), st
0x961884: fxch    st(1)
0x961886: fstp    [esp+0C0h+var_90]
0x96188A: mov     ecx, [esp+0C0h+var_90]
0x96188E: fld     [esp+0C0h+var_5C]
0x961892: mov     [esp+0C0h+var_14], ecx
0x961899: fld     [esp+0C0h+var_98]
0x96189D: fld     st
0x96189F: faddp   st(2), st
0x9618A1: fxch    st(1)
0x9618A3: fstp    [esp+0C0h+var_8C]
0x9618A7: mov     edx, [esp+0C0h+var_8C]
0x9618AB: fld     dword ptr [esi+10h]
0x9618AE: mov     [esp+0C0h+var_10], edx
0x9618B5: fmul    dword ptr [ebx]
0x9618B7: fld     dword ptr [esi+14h]
0x9618BA: fmul    dword ptr [ebx+4]
0x9618BD: faddp   st(1), st
0x9618BF: fld     dword ptr [esi+18h]
0x9618C2: fmul    dword ptr [ebx+8]
0x9618C5: faddp   st(1), st
0x9618C7: fstp    [esp+0C0h+var_88]
0x9618CB: lea     ecx, [esi+1Ch]
0x9618CE: fld     dword ptr [ecx+4]
0x9618D1: lea     edx, [esi+28h]
0x9618D4: fmul    dword ptr [ebx+4]
0x9618D7: mov     [esp+0C0h+var_A4], ecx
0x9618DB: fld     dword ptr [ecx]
0x9618DD: mov     [esp+0C0h+var_28], edx
0x9618E4: fmul    dword ptr [ebx]
0x9618E6: faddp   st(1), st
0x9618E8: fld     dword ptr [ecx+8]
0x9618EB: fmul    dword ptr [ebx+8]
0x9618EE: faddp   st(1), st
0x9618F0: fstp    [esp+0C0h+var_84]
0x9618F4: fld     dword ptr [edx+4]
0x9618F7: fmul    dword ptr [ebx+4]
0x9618FA: fld     dword ptr [edx]
0x9618FC: fmul    dword ptr [ebx]
0x9618FE: faddp   st(1), st
0x961900: fld     dword ptr [edx+8]
0x961903: fmul    dword ptr [ebx+8]
0x961906: faddp   st(1), st
0x961908: fstp    [esp+0C0h+var_80]
0x96190C: fld     st(2)
0x96190E: fmul    dword ptr [ebx]
0x961910: fld     st(2)
0x961912: fmul    dword ptr [ebx+4]
0x961915: faddp   st(1), st
0x961917: fld     dword ptr [ebx+8]
0x96191A: fmul    st, st(2)
0x96191C: faddp   st(1), st
0x96191E: fstp    [esp+0C0h+var_64]
0x961922: fld     [esp+0C0h+var_94]
0x961926: fld     st
0x961928: fmul    dword ptr [ebx]
0x96192A: fld     [esp+0C0h+var_90]
0x96192E: fld     st
0x961930: fmul    dword ptr [ebx+4]
0x961933: faddp   st(2), st
0x961935: fld     dword ptr [ebx+8]
0x961938: fmul    [esp+0C0h+var_8C]
0x96193C: faddp   st(2), st
0x96193E: fxch    st(1)
0x961940: fstp    [esp+0C0h+var_58]
0x961944: fld     [esp+0C0h+var_88]
0x961948: fabs
0x96194A: fstp    [esp+0C0h+var_B4]
0x96194E: fld     [esp+0C0h+var_B4]
0x961952: fstp    [esp+0C0h+var_4C]
0x961956: fld     [esp+0C0h+var_84]
0x96195A: fabs
0x96195C: fstp    [esp+0C0h+var_B4]
0x961960: fld     [esp+0C0h+var_B4]
0x961964: fstp    [esp+0C0h+var_48]
0x961968: fld     [esp+0C0h+var_80]
0x96196C: fabs
0x96196E: fstp    [esp+0C0h+var_B4]
0x961972: fld     [esp+0C0h+var_B4]
0x961976: fstp    [esp+0C0h+var_44]
0x96197A: fld     dword ptr [esi+38h]
0x96197D: fmul    [esp+0C0h+var_48]
0x961981: fld     dword ptr [esi+34h]
0x961984: fmul    [esp+0C0h+var_4C]
0x961988: faddp   st(1), st
0x96198A: fld     [esp+0C0h+var_44]
0x96198E: fmul    dword ptr [esi+3Ch]
0x961991: faddp   st(1), st
0x961993: fstp    [esp+0C0h+var_B4]
0x961997: fld     [esp+0C0h+var_B4]
0x96199B: fadd    dword ptr [edi+34h]
0x96199E: fstp    [esp+0C0h+var_B0]
0x9619A2: fld     [esp+0C0h+var_64]
0x9619A6: fld     [esp+0C0h+var_B0]
0x9619AA: fcom    st(1)
0x9619AC: fnstsw  ax
0x9619AE: fstp    st(1)
0x9619B0: test    ah, 5
0x9619B3: jp      short loc_9619D8
0x9619B5: fld     [esp+0C0h+var_58]
0x9619B9: fcompp
0x9619BB: fnstsw  ax
0x9619BD: test    ah, 41h
0x9619C0: jnz     short loc_961A16
0x9619C2: fstp    st(4)
0x9619C4: pop     edi
0x9619C5: fstp    st(2)
0x9619C7: pop     esi
0x9619C8: fstp    st
0x9619CA: xor     al, al
0x9619CC: fstp    st
0x9619CE: pop     ebx
0x9619CF: fstp    st
0x9619D1: add     esp, 0B4h
0x9619D7: retn
0x9619D8: fchs
0x9619DA: fstp    [esp+0C0h+var_B0]
0x9619DE: fld     [esp+0C0h+var_64]
0x9619E2: fld     [esp+0C0h+var_B0]
0x9619E6: fcom    st(1)
0x9619E8: fnstsw  ax
0x9619EA: fstp    st(1)
0x9619EC: test    ah, 41h
0x9619EF: jnz     short loc_961A14
0x9619F1: fld     [esp+0C0h+var_58]
0x9619F5: fcompp
0x9619F7: fnstsw  ax
0x9619F9: test    ah, 5
0x9619FC: jp      short loc_961A16
0x9619FE: fstp    st(4)
0x961A00: pop     edi
0x961A01: fstp    st(2)
0x961A03: pop     esi
0x961A04: fstp    st
0x961A06: xor     al, al
0x961A08: fstp    st
0x961A0A: pop     ebx
0x961A0B: fstp    st
0x961A0D: add     esp, 0B4h
0x961A13: retn
0x961A14: fstp    st
0x961A16: fld     dword ptr [ebx+10h]
0x961A19: lea     eax, [ebx+0Ch]
0x961A1C: fmul    dword ptr [esi+14h]
0x961A1F: mov     [esp+0C0h+var_A8], eax
0x961A23: fld     dword ptr [esi+10h]
0x961A26: fmul    dword ptr [eax]
0x961A28: faddp   st(1), st
0x961A2A: fld     dword ptr [eax+8]
0x961A2D: fmul    dword ptr [esi+18h]
0x961A30: faddp   st(1), st
0x961A32: fstp    [esp+0C0h+var_7C]
0x961A36: fld     dword ptr [ecx+4]
0x961A39: fmul    dword ptr [eax+4]
0x961A3C: fld     dword ptr [eax]
0x961A3E: fmul    dword ptr [ecx]
0x961A40: faddp   st(1), st
0x961A42: fld     dword ptr [ecx+8]
0x961A45: fmul    dword ptr [eax+8]
0x961A48: faddp   st(1), st
0x961A4A: fstp    [esp+0C0h+var_78]
0x961A4E: fld     dword ptr [edx+4]
0x961A51: fmul    dword ptr [eax+4]
0x961A54: fld     dword ptr [edx]
0x961A56: fmul    dword ptr [eax]
0x961A58: faddp   st(1), st
0x961A5A: fld     dword ptr [edx+8]
0x961A5D: fmul    dword ptr [eax+8]
0x961A60: faddp   st(1), st
0x961A62: fstp    [esp+0C0h+var_74]
0x961A66: fld     dword ptr [eax+4]
0x961A69: fmul    st, st(4)
0x961A6B: fld     st(5)
0x961A6D: fmul    dword ptr [eax]
0x961A6F: faddp   st(1), st
0x961A71: fld     dword ptr [eax+8]
0x961A74: fmul    st, st(4)
0x961A76: faddp   st(1), st
0x961A78: fstp    [esp+0C0h+var_60]
0x961A7C: fld     dword ptr [eax+4]
0x961A7F: fmul    st, st(1)
0x961A81: fld     st(2)
0x961A83: fmul    dword ptr [eax]
0x961A85: faddp   st(1), st
0x961A87: fld     dword ptr [eax+8]
0x961A8A: fmul    [esp+0C0h+var_8C]
0x961A8E: faddp   st(1), st
0x961A90: fstp    [esp+0C0h+var_54]
0x961A94: fld     [esp+0C0h+var_7C]
0x961A98: fabs
0x961A9A: fstp    [esp+0C0h+var_B4]
0x961A9E: fld     [esp+0C0h+var_B4]
0x961AA2: fstp    [esp+0C0h+var_40]
0x961AA9: fld     [esp+0C0h+var_78]
0x961AAD: fabs
0x961AAF: fstp    [esp+0C0h+var_B4]
0x961AB3: fld     [esp+0C0h+var_B4]
0x961AB7: fstp    [esp+0C0h+var_3C]
0x961ABE: fld     [esp+0C0h+var_74]
0x961AC2: fabs
0x961AC4: fstp    [esp+0C0h+var_B4]
0x961AC8: fld     [esp+0C0h+var_B4]
0x961ACC: fstp    [esp+0C0h+var_38]
0x961AD3: fld     dword ptr [esi+38h]
0x961AD6: fmul    [esp+0C0h+var_3C]
0x961ADD: fld     dword ptr [esi+34h]
0x961AE0: fmul    [esp+0C0h+var_40]
0x961AE7: faddp   st(1), st
0x961AE9: fld     [esp+0C0h+var_38]
0x961AF0: fmul    dword ptr [esi+3Ch]
0x961AF3: faddp   st(1), st
0x961AF5: fstp    [esp+0C0h+var_B4]
0x961AF9: fld     [esp+0C0h+var_B4]
0x961AFD: fadd    dword ptr [edi+38h]
0x961B00: fstp    [esp+0C0h+var_B0]
0x961B04: fld     [esp+0C0h+var_60]
0x961B08: fld     [esp+0C0h+var_B0]
0x961B0C: fcom    st(1)
0x961B0E: fnstsw  ax
0x961B10: fstp    st(1)
0x961B12: test    ah, 5
0x961B15: jp      short loc_961B3A
0x961B17: fld     [esp+0C0h+var_54]
0x961B1B: fcompp
0x961B1D: fnstsw  ax
0x961B1F: test    ah, 41h
0x961B22: jnz     short loc_961B78
0x961B24: fstp    st(4)
0x961B26: pop     edi
0x961B27: fstp    st(2)
0x961B29: pop     esi
0x961B2A: fstp    st
0x961B2C: xor     al, al
0x961B2E: fstp    st
0x961B30: pop     ebx
0x961B31: fstp    st
0x961B33: add     esp, 0B4h
0x961B39: retn
0x961B3A: fchs
0x961B3C: fstp    [esp+0C0h+var_B0]
0x961B40: fld     [esp+0C0h+var_60]
0x961B44: fld     [esp+0C0h+var_B0]
0x961B48: fcom    st(1)
0x961B4A: fnstsw  ax
0x961B4C: fstp    st(1)
0x961B4E: test    ah, 41h
0x961B51: jnz     short loc_961B76
0x961B53: fld     [esp+0C0h+var_54]
0x961B57: fcompp
0x961B59: fnstsw  ax
0x961B5B: test    ah, 5
0x961B5E: jp      short loc_961B78
0x961B60: fstp    st(4)
0x961B62: pop     edi
0x961B63: fstp    st(2)
0x961B65: pop     esi
0x961B66: fstp    st
0x961B68: xor     al, al
0x961B6A: fstp    st
0x961B6C: pop     ebx
0x961B6D: fstp    st
0x961B6F: add     esp, 0B4h
0x961B75: retn
0x961B76: fstp    st
0x961B78: fld     dword ptr [ebx+1Ch]
0x961B7B: push    ebp
0x961B7C: fmul    dword ptr [esi+14h]
0x961B7F: lea     ebp, [ebx+18h]
0x961B82: fld     dword ptr [ebp+0]
0x961B85: fmul    dword ptr [esi+10h]
0x961B88: faddp   st(1), st
0x961B8A: fld     dword ptr [ebp+8]
0x961B8D: fmul    dword ptr [esi+18h]
0x961B90: faddp   st(1), st
0x961B92: fstp    [esp+0C4h+var_70]
0x961B96: fld     dword ptr [ecx+4]
0x961B99: fmul    dword ptr [ebp+4]
0x961B9C: fld     dword ptr [ecx]
0x961B9E: fmul    dword ptr [ebp+0]
0x961BA1: faddp   st(1), st
0x961BA3: fld     dword ptr [ecx+8]
0x961BA6: fmul    dword ptr [ebp+8]
0x961BA9: faddp   st(1), st
0x961BAB: fstp    [esp+0C4h+var_6C]
0x961BAF: fld     dword ptr [edx+4]
0x961BB2: fmul    dword ptr [ebp+4]
0x961BB5: fld     dword ptr [edx]
0x961BB7: fmul    dword ptr [ebp+0]
0x961BBA: faddp   st(1), st
0x961BBC: fld     dword ptr [edx+8]
0x961BBF: fmul    dword ptr [ebp+8]
0x961BC2: faddp   st(1), st
0x961BC4: fstp    [esp+0C4h+var_68]
0x961BC8: fld     dword ptr [ebp+4]
0x961BCB: fmul    st, st(4)
0x961BCD: fld     st(5)
0x961BCF: fmul    dword ptr [ebp+0]
0x961BD2: faddp   st(1), st
0x961BD4: fld     dword ptr [ebp+8]
0x961BD7: fmul    st, st(4)
0x961BD9: faddp   st(1), st
0x961BDB: fstp    [esp+0C4h+var_5C]
0x961BDF: fld     dword ptr [ebp+4]
0x961BE2: fmul    st, st(1)
0x961BE4: fld     st(2)
0x961BE6: fmul    dword ptr [ebp+0]
0x961BE9: faddp   st(1), st
0x961BEB: fld     dword ptr [ebp+8]
0x961BEE: fmul    [esp+0C4h+var_8C]
0x961BF2: faddp   st(1), st
0x961BF4: fstp    [esp+0C4h+var_50]
0x961BF8: fld     [esp+0C4h+var_70]
0x961BFC: fabs
0x961BFE: fstp    [esp+0C4h+var_B4]
0x961C02: fld     [esp+0C4h+var_B4]
0x961C06: fstp    [esp+0C4h+var_34]
0x961C0D: fld     [esp+0C4h+var_6C]
0x961C11: fabs
0x961C13: fstp    [esp+0C4h+var_B4]
0x961C17: fld     [esp+0C4h+var_B4]
0x961C1B: fstp    [esp+0C4h+var_30]
0x961C22: fld     [esp+0C4h+var_68]
0x961C26: fabs
0x961C28: fstp    [esp+0C4h+var_B4]
0x961C2C: fld     [esp+0C4h+var_B4]
0x961C30: fstp    [esp+0C4h+var_2C]
0x961C37: fld     dword ptr [esi+38h]
0x961C3A: fmul    [esp+0C4h+var_30]
0x961C41: fld     dword ptr [esi+34h]
0x961C44: fmul    [esp+0C4h+var_34]
0x961C4B: faddp   st(1), st
0x961C4D: fld     [esp+0C4h+var_2C]
0x961C54: fmul    dword ptr [esi+3Ch]
0x961C57: faddp   st(1), st
0x961C59: fstp    [esp+0C4h+var_B4]
0x961C5D: fld     [esp+0C4h+var_B4]
0x961C61: fadd    dword ptr [edi+3Ch]
0x961C64: fstp    [esp+0C4h+var_B0]
0x961C68: fld     [esp+0C4h+var_5C]
0x961C6C: fld     [esp+0C4h+var_B0]
0x961C70: fcom    st(1)
0x961C72: fnstsw  ax
0x961C74: fstp    st(1)
0x961C76: test    ah, 5
0x961C79: jp      short loc_961C9F
0x961C7B: fld     [esp+0C4h+var_50]
0x961C7F: fcompp
0x961C81: fnstsw  ax
0x961C83: test    ah, 41h
0x961C86: jnz     short loc_961CDE
0x961C88: fstp    st(4)
0x961C8A: pop     ebp
0x961C8B: fstp    st(2)
0x961C8D: pop     edi
0x961C8E: fstp    st
0x961C90: pop     esi
0x961C91: fstp    st
0x961C93: xor     al, al
0x961C95: fstp    st
0x961C97: pop     ebx
0x961C98: add     esp, 0B4h
0x961C9E: retn
0x961C9F: fchs
0x961CA1: fstp    [esp+0C4h+var_B0]
0x961CA5: fld     [esp+0C4h+var_5C]
0x961CA9: fld     [esp+0C4h+var_B0]
0x961CAD: fcom    st(1)
0x961CAF: fnstsw  ax
0x961CB1: fstp    st(1)
0x961CB3: test    ah, 41h
0x961CB6: jnz     short loc_961CDC
0x961CB8: fld     [esp+0C4h+var_50]
0x961CBC: fcompp
0x961CBE: fnstsw  ax
0x961CC0: test    ah, 5
0x961CC3: jp      short loc_961CDE
0x961CC5: fstp    st(4)
0x961CC7: pop     ebp
0x961CC8: fstp    st(2)
0x961CCA: pop     edi
0x961CCB: fstp    st
0x961CCD: pop     esi
0x961CCE: fstp    st
0x961CD0: xor     al, al
0x961CD2: fstp    st
0x961CD4: pop     ebx
0x961CD5: add     esp, 0B4h
0x961CDB: retn
0x961CDC: fstp    st
0x961CDE: fld     st(3)
0x961CE0: fmul    dword ptr [esi+14h]
0x961CE3: fld     st(5)
0x961CE5: fmul    dword ptr [esi+10h]
0x961CE8: faddp   st(1), st
0x961CEA: fld     dword ptr [esi+18h]
0x961CED: fmul    st, st(4)
0x961CEF: faddp   st(1), st
0x961CF1: fstp    [esp+0C4h+var_AC]
0x961CF5: fld     dword ptr [edi+38h]
0x961CF8: fmul    [esp+0C4h+var_40]
0x961CFF: fld     dword ptr [edi+34h]
0x961D02: fmul    [esp+0C4h+var_4C]
0x961D06: faddp   st(1), st
0x961D08: fld     dword ptr [edi+3Ch]
0x961D0B: fmul    [esp+0C4h+var_34]
0x961D12: faddp   st(1), st
0x961D14: fstp    [esp+0C4h+var_B4]
0x961D18: fld     [esp+0C4h+var_B4]
0x961D1C: fadd    dword ptr [esi+34h]
0x961D1F: fstp    [esp+0C4h+var_B0]
0x961D23: fld     [esp+0C4h+var_AC]
0x961D27: fld     [esp+0C4h+var_B0]
0x961D2B: fcomp   st(1)
0x961D2D: fnstsw  ax
0x961D2F: test    ah, 5
0x961D32: jp      short loc_961D77
0x961D34: fstp    st
0x961D36: fld     st
0x961D38: fmul    dword ptr [esi+14h]
0x961D3B: fld     st(2)
0x961D3D: fmul    dword ptr [esi+10h]
0x961D40: faddp   st(1), st
0x961D42: fld     dword ptr [esi+18h]
0x961D45: fmul    [esp+0C4h+var_8C]
0x961D49: faddp   st(1), st
0x961D4B: fstp    [esp+0C4h+var_B4]
0x961D4F: fld     [esp+0C4h+var_B4]
0x961D53: fld     [esp+0C4h+var_B0]
0x961D57: fcompp
0x961D59: fnstsw  ax
0x961D5B: test    ah, 5
0x961D5E: jp      short loc_961DBC
0x961D60: fstp    st(4)
0x961D62: pop     ebp
0x961D63: fstp    st(2)
0x961D65: pop     edi
0x961D66: fstp    st
0x961D68: pop     esi
0x961D69: fstp    st
0x961D6B: xor     al, al
0x961D6D: fstp    st
0x961D6F: pop     ebx
0x961D70: add     esp, 0B4h
0x961D76: retn
0x961D77: fld     [esp+0C4h+var_B0]
0x961D7B: fchs
0x961D7D: fstp    [esp+0C4h+var_B0]
0x961D81: fld     [esp+0C4h+var_B0]
0x961D85: fcompp
0x961D87: fnstsw  ax
0x961D89: test    ah, 41h
0x961D8C: jnz     short loc_961DBC
0x961D8E: fld     st
0x961D90: fmul    dword ptr [esi+14h]
0x961D93: fld     st(2)
0x961D95: fmul    dword ptr [esi+10h]
0x961D98: faddp   st(1), st
0x961D9A: fld     dword ptr [esi+18h]
0x961D9D: fmul    [esp+0C4h+var_8C]
0x961DA1: faddp   st(1), st
0x961DA3: fstp    [esp+0C4h+var_B4]
0x961DA7: fld     [esp+0C4h+var_B4]
0x961DAB: fld     [esp+0C4h+var_B0]
0x961DAF: fcompp
0x961DB1: fnstsw  ax
0x961DB3: test    ah, 41h
0x961DB6: jz      loc_961E40
0x961DBC: fld     dword ptr [ecx+4]
0x961DBF: fmul    st, st(4)
0x961DC1: fld     st(5)
0x961DC3: fmul    dword ptr [ecx]
0x961DC5: faddp   st(1), st
0x961DC7: fld     dword ptr [ecx+8]
0x961DCA: fmul    st, st(4)
0x961DCC: faddp   st(1), st
0x961DCE: fstp    [esp+0C4h+var_AC]
0x961DD2: fld     dword ptr [edi+38h]
0x961DD5: fmul    [esp+0C4h+var_3C]
0x961DDC: fld     dword ptr [edi+34h]
0x961DDF: fmul    [esp+0C4h+var_48]
0x961DE3: faddp   st(1), st
0x961DE5: fld     dword ptr [edi+3Ch]
0x961DE8: fmul    [esp+0C4h+var_30]
0x961DEF: faddp   st(1), st
0x961DF1: fstp    [esp+0C4h+var_B4]
0x961DF5: fld     [esp+0C4h+var_B4]
0x961DF9: fadd    dword ptr [esi+38h]
0x961DFC: fstp    [esp+0C4h+var_B0]
0x961E00: fld     [esp+0C4h+var_AC]
0x961E04: fld     [esp+0C4h+var_B0]
0x961E08: fcomp   st(1)
0x961E0A: fnstsw  ax
0x961E0C: test    ah, 5
0x961E0F: jp      short loc_961E57
0x961E11: fstp    st
0x961E13: fld     dword ptr [ecx+4]
0x961E16: fmul    st, st(1)
0x961E18: fld     st(2)
0x961E1A: fmul    dword ptr [ecx]
0x961E1C: faddp   st(1), st
0x961E1E: fld     dword ptr [ecx+8]
0x961E21: fmul    [esp+0C4h+var_8C]
0x961E25: faddp   st(1), st
0x961E27: fstp    [esp+0C4h+var_B4]
0x961E2B: fld     [esp+0C4h+var_B4]
0x961E2F: fld     [esp+0C4h+var_B0]
0x961E33: fcompp
0x961E35: fnstsw  ax
0x961E37: test    ah, 5
0x961E3A: jp      loc_961F69
0x961E40: fstp    st(4)
0x961E42: pop     ebp
0x961E43: fstp    st(2)
0x961E45: pop     edi
0x961E46: fstp    st
0x961E48: pop     esi
0x961E49: fstp    st
0x961E4B: xor     al, al
0x961E4D: fstp    st
0x961E4F: pop     ebx
0x961E50: add     esp, 0B4h
0x961E56: retn
0x961E57: fld     [esp+0C4h+var_B0]
0x961E5B: fchs
0x961E5D: fstp    [esp+0C4h+var_B0]
0x961E61: fld     [esp+0C4h+var_B0]
0x961E65: fcompp
0x961E67: fnstsw  ax
0x961E69: test    ah, 41h
0x961E6C: jnz     loc_961F69
0x961E72: fstp    st(4)
0x961E74: lea     eax, [esp+0C4h+var_18]
0x961E7B: fstp    st(2)
0x961E7D: push    eax
0x961E7E: fstp    st
0x961E80: fstp    st
0x961E82: fstp    st
0x961E84: call    sub_47D9E0
0x961E89: fld     [esp+0C4h+var_B0]
0x961E8D: fcompp
0x961E8F: fnstsw  ax
0x961E91: test    ah, 41h
0x961E94: jz      loc_962756
0x961E9A: fld     [esp+0C4h+var_5C]
0x961E9E: mov     edx, [esp+0C4h+var_28]
0x961EA5: fld     [esp+0C4h+var_50]
0x961EA9: fld     [esp+0C4h+var_94]
0x961EAD: fld     [esp+0C4h+var_A0]
0x961EB1: fld     [esp+0C4h+var_9C]
0x961EB5: fld     [esp+0C4h+var_98]
0x961EB9: fld     [esp+0C4h+var_90]
0x961EBD: fxch    st(3)
0x961EBF: fxch    st(6)
0x961EC1: fxch    st(2)
0x961EC3: fxch    st(5)
0x961EC5: fxch    st(1)
0x961EC7: fxch    st(4)
0x961EC9: fxch    st(3)
0x961ECB: fxch    st(2)
0x961ECD: fld     dword ptr [edx+4]
0x961ED0: fmulp   st(6), st
0x961ED2: fld     dword ptr [edx]
0x961ED4: fmulp   st(7), st
0x961ED6: fxch    st(5)
0x961ED8: faddp   st(6), st
0x961EDA: fld     dword ptr [edx+8]
0x961EDD: fmulp   st(4), st
0x961EDF: fxch    st(5)
0x961EE1: faddp   st(3), st
0x961EE3: fxch    st(2)
0x961EE5: fstp    [esp+0C4h+var_AC]
0x961EE9: fld     dword ptr [edi+38h]
0x961EEC: fmul    [esp+0C4h+var_38]
0x961EF3: fld     dword ptr [edi+34h]
0x961EF6: fmul    [esp+0C4h+var_44]
0x961EFD: faddp   st(1), st
0x961EFF: fld     dword ptr [edi+3Ch]
0x961F02: fmul    [esp+0C4h+var_2C]
0x961F09: faddp   st(1), st
0x961F0B: fstp    [esp+0C4h+var_B4]
0x961F0F: fld     [esp+0C4h+var_B4]
0x961F13: fadd    dword ptr [esi+3Ch]
0x961F16: fstp    [esp+0C4h+var_B0]
0x961F1A: fld     [esp+0C4h+var_AC]
0x961F1E: fld     [esp+0C4h+var_B0]
0x961F22: fcom    st(1)
0x961F24: fnstsw  ax
0x961F26: test    ah, 5
0x961F29: jp      short loc_961F76
0x961F2B: fstp    st(1)
0x961F2D: fld     dword ptr [edx+4]
0x961F30: fmulp   st(3), st
0x961F32: fld     dword ptr [edx]
0x961F34: fmulp   st(2), st
0x961F36: fxch    st(2)
0x961F38: faddp   st(1), st
0x961F3A: fld     dword ptr [edx+8]
0x961F3D: fmul    [esp+0C4h+var_8C]
0x961F41: faddp   st(1), st
0x961F43: fstp    [esp+0C4h+var_B4]
0x961F47: fld     [esp+0C4h+var_B4]
0x961F4B: fcompp
0x961F4D: fnstsw  ax
0x961F4F: test    ah, 41h
0x961F52: jnz     loc_96205E
0x961F58: pop     ebp
0x961F59: fstp    st
0x961F5B: pop     edi
0x961F5C: fstp    st
0x961F5E: pop     esi
0x961F5F: xor     al, al
0x961F61: pop     ebx
0x961F62: add     esp, 0B4h
0x961F68: retn
0x961F69: fld     [esp+0C4h+var_50]
0x961F6D: fld     [esp+0C4h+var_5C]
0x961F71: jmp     loc_961ECD
0x961F76: fstp    st(2)
0x961F78: fstp    st(2)
0x961F7A: fchs
0x961F7C: fstp    [esp+0C4h+var_B0]
0x961F80: fld     [esp+0C4h+var_B0]
0x961F84: fcompp
0x961F86: fnstsw  ax
0x961F88: test    ah, 41h
0x961F8B: jnz     loc_96205E
0x961F91: lea     ecx, [esp+0C4h+var_18]
0x961F98: fstp    st
0x961F9A: push    ecx
0x961F9B: fstp    st
0x961F9D: mov     ecx, [esp+0C8h+var_28]
0x961FA4: call    sub_47D9E0
0x961FA9: fld     [esp+0C4h+var_B0]
0x961FAD: fcompp
0x961FAF: fnstsw  ax
0x961FB1: test    ah, 41h
0x961FB4: jz      loc_962756
0x961FBA: fld     [esp+0C4h+var_70]
0x961FBE: fld     [esp+0C4h+var_6C]
0x961FC2: fld     [esp+0C4h+var_5C]
0x961FC6: fld     [esp+0C4h+var_50]
0x961FCA: fxch    st(3)
0x961FCC: fxch    st(1)
0x961FCE: fxch    st(2)
0x961FD0: fld     st(2)
0x961FD2: fmul    [esp+0C4h+var_7C]
0x961FD6: fld     st(2)
0x961FD8: fmul    [esp+0C4h+var_60]
0x961FDC: fsubp   st(1), st
0x961FDE: fstp    [esp+0C4h+var_AC]
0x961FE2: fld     dword ptr [esi+38h]
0x961FE5: fmul    [esp+0C4h+var_44]
0x961FEC: fld     [esp+0C4h+var_48]
0x961FF0: fmul    dword ptr [esi+3Ch]
0x961FF3: faddp   st(1), st
0x961FF5: fstp    [esp+0C4h+var_B4]
0x961FF9: fld     [esp+0C4h+var_B4]
0x961FFD: fld     dword ptr [edi+3Ch]
0x962000: fmul    [esp+0C4h+var_40]
0x962007: fld     dword ptr [edi+38h]
0x96200A: fmul    [esp+0C4h+var_34]
0x962011: faddp   st(1), st
0x962013: fstp    [esp+0C4h+var_B4]
0x962017: fadd    [esp+0C4h+var_B4]
0x96201B: fstp    [esp+0C4h+var_B0]
0x96201F: fld     [esp+0C4h+var_AC]
0x962023: fld     [esp+0C4h+var_B0]
0x962027: fcom    st(1)
0x962029: fnstsw  ax
0x96202B: test    ah, 5
0x96202E: jp      short loc_96206B
0x962030: fstp    st(1)
0x962032: fld     st(4)
0x962034: fmul    [esp+0C4h+var_7C]
0x962038: fld     st(3)
0x96203A: fmul    [esp+0C4h+var_54]
0x96203E: fsubp   st(1), st
0x962040: fcompp
0x962042: fnstsw  ax
0x962044: test    ah, 41h
0x962047: jnz     short loc_9620AE
0x962049: fstp    st(2)
0x96204B: pop     ebp
0x96204C: fstp    st
0x96204E: pop     edi
0x96204F: fstp    st
0x962051: pop     esi
0x962052: fstp    st
0x962054: xor     al, al
0x962056: pop     ebx
0x962057: add     esp, 0B4h
0x96205D: retn
0x96205E: fld     [esp+0C4h+var_70]
0x962062: fld     [esp+0C4h+var_6C]
0x962066: jmp     loc_961FD0
0x96206B: fchs
0x96206D: fstp    [esp+0C4h+var_B0]
0x962071: fld     [esp+0C4h+var_B0]
0x962075: fcom    st(1)
0x962077: fnstsw  ax
0x962079: fstp    st(1)
0x96207B: test    ah, 41h
0x96207E: jnz     short loc_9620AC
0x962080: fld     st(4)
0x962082: fmul    [esp+0C4h+var_7C]
0x962086: fld     st(3)
0x962088: fmul    [esp+0C4h+var_54]
0x96208C: fsubp   st(1), st
0x96208E: fcompp
0x962090: fnstsw  ax
0x962092: test    ah, 5
0x962095: jp      short loc_9620AE
0x962097: fstp    st(2)
0x962099: pop     ebp
0x96209A: fstp    st
0x96209C: pop     edi
0x96209D: fstp    st
0x96209F: pop     esi
0x9620A0: fstp    st
0x9620A2: xor     al, al
0x9620A4: pop     ebx
0x9620A5: add     esp, 0B4h
0x9620AB: retn
0x9620AC: fstp    st
0x9620AE: fld     st(2)
0x9620B0: fmul    [esp+0C4h+var_78]
0x9620B4: fld     st(1)
0x9620B6: fmul    [esp+0C4h+var_60]
0x9620BA: fsubp   st(1), st
0x9620BC: fstp    [esp+0C4h+var_AC]
0x9620C0: fld     dword ptr [esi+34h]
0x9620C3: fmul    [esp+0C4h+var_44]
0x9620CA: fld     [esp+0C4h+var_4C]
0x9620CE: fmul    dword ptr [esi+3Ch]
0x9620D1: faddp   st(1), st
0x9620D3: fstp    [esp+0C4h+var_B4]
0x9620D7: fld     [esp+0C4h+var_B4]
0x9620DB: fld     dword ptr [edi+3Ch]
0x9620DE: fmul    [esp+0C4h+var_3C]
0x9620E5: fld     dword ptr [edi+38h]
0x9620E8: fmul    [esp+0C4h+var_30]
0x9620EF: faddp   st(1), st
0x9620F1: fstp    [esp+0C4h+var_B4]
0x9620F5: fadd    [esp+0C4h+var_B4]
0x9620F9: fstp    [esp+0C4h+var_B0]
0x9620FD: fld     [esp+0C4h+var_AC]
0x962101: fld     [esp+0C4h+var_B0]
0x962105: fcom    st(1)
0x962107: fnstsw  ax
0x962109: test    ah, 5
0x96210C: jp      short loc_96213C
0x96210E: fstp    st(1)
0x962110: fld     st(4)
0x962112: fmul    [esp+0C4h+var_78]
0x962116: fld     st(2)
0x962118: fmul    [esp+0C4h+var_54]
0x96211C: fsubp   st(1), st
0x96211E: fcompp
0x962120: fnstsw  ax
0x962122: test    ah, 41h
0x962125: jnz     short loc_96217F
0x962127: fstp    st(2)
0x962129: pop     ebp
0x96212A: fstp    st
0x96212C: pop     edi
0x96212D: fstp    st
0x96212F: pop     esi
0x962130: fstp    st
0x962132: xor     al, al
0x962134: pop     ebx
0x962135: add     esp, 0B4h
0x96213B: retn
0x96213C: fchs
0x96213E: fstp    [esp+0C4h+var_B0]
0x962142: fld     [esp+0C4h+var_B0]
0x962146: fcom    st(1)
0x962148: fnstsw  ax
0x96214A: fstp    st(1)
0x96214C: test    ah, 41h
0x96214F: jnz     short loc_96217D
0x962151: fld     st(4)
0x962153: fmul    [esp+0C4h+var_78]
0x962157: fld     st(2)
0x962159: fmul    [esp+0C4h+var_54]
0x96215D: fsubp   st(1), st
0x96215F: fcompp
0x962161: fnstsw  ax
0x962163: test    ah, 5
0x962166: jp      short loc_96217F
0x962168: fstp    st(2)
0x96216A: pop     ebp
0x96216B: fstp    st
0x96216D: pop     edi
0x96216E: fstp    st
0x962170: pop     esi
0x962171: fstp    st
0x962173: xor     al, al
0x962175: pop     ebx
0x962176: add     esp, 0B4h
0x96217C: retn
0x96217D: fstp    st
0x96217F: fld     st(2)
0x962181: fmul    [esp+0C4h+var_74]
0x962185: fld     [esp+0C4h+var_68]
0x962189: fmul    [esp+0C4h+var_60]
0x96218D: fsubp   st(1), st
0x96218F: fstp    [esp+0C4h+var_AC]
0x962193: fld     dword ptr [edi+3Ch]
0x962196: fmul    [esp+0C4h+var_38]
0x96219D: fld     dword ptr [edi+38h]
0x9621A0: fmul    [esp+0C4h+var_2C]
0x9621A7: faddp   st(1), st
0x9621A9: fstp    [esp+0C4h+var_B4]
0x9621AD: fld     [esp+0C4h+var_B4]
0x9621B1: fld     dword ptr [esi+38h]
0x9621B4: fmul    [esp+0C4h+var_4C]
0x9621B8: fld     dword ptr [esi+34h]
0x9621BB: fmul    [esp+0C4h+var_48]
0x9621BF: faddp   st(1), st
0x9621C1: fstp    [esp+0C4h+var_B4]
0x9621C5: fadd    [esp+0C4h+var_B4]
0x9621C9: fstp    [esp+0C4h+var_B0]
0x9621CD: fld     [esp+0C4h+var_AC]
0x9621D1: fld     [esp+0C4h+var_B0]
0x9621D5: fcom    st(1)
0x9621D7: fnstsw  ax
0x9621D9: test    ah, 5
0x9621DC: jp      short loc_96220E
0x9621DE: fstp    st(1)
0x9621E0: fld     st(4)
0x9621E2: fmul    [esp+0C4h+var_74]
0x9621E6: fld     [esp+0C4h+var_68]
0x9621EA: fmul    [esp+0C4h+var_54]
0x9621EE: fsubp   st(1), st
0x9621F0: fcompp
0x9621F2: fnstsw  ax
0x9621F4: test    ah, 41h
0x9621F7: jnz     short loc_962253
0x9621F9: fstp    st(2)
0x9621FB: pop     ebp
0x9621FC: fstp    st
0x9621FE: pop     edi
0x9621FF: fstp    st
0x962201: pop     esi
0x962202: fstp    st
0x962204: xor     al, al
0x962206: pop     ebx
0x962207: add     esp, 0B4h
0x96220D: retn
0x96220E: fchs
0x962210: fstp    [esp+0C4h+var_B0]
0x962214: fld     [esp+0C4h+var_B0]
0x962218: fcom    st(1)
0x96221A: fnstsw  ax
0x96221C: fstp    st(1)
0x96221E: test    ah, 41h
0x962221: jnz     short loc_962251
0x962223: fld     st(4)
0x962225: fmul    [esp+0C4h+var_74]
0x962229: fld     [esp+0C4h+var_68]
0x96222D: fmul    [esp+0C4h+var_54]
0x962231: fsubp   st(1), st
0x962233: fcompp
0x962235: fnstsw  ax
0x962237: test    ah, 5
0x96223A: jp      short loc_962253
0x96223C: fstp    st(2)
0x96223E: pop     ebp
0x96223F: fstp    st
0x962241: pop     edi
0x962242: fstp    st
0x962244: pop     esi
0x962245: fstp    st
0x962247: xor     al, al
0x962249: pop     ebx
0x96224A: add     esp, 0B4h
0x962250: retn
0x962251: fstp    st
0x962253: fld     st(1)
0x962255: fmul    [esp+0C4h+var_64]
0x962259: fld     st(3)
0x96225B: fmul    [esp+0C4h+var_88]
0x96225F: fsubp   st(1), st
0x962261: fstp    [esp+0C4h+var_AC]
0x962265: fld     dword ptr [esi+38h]
0x962268: fmul    [esp+0C4h+var_38]
0x96226F: fld     [esp+0C4h+var_3C]
0x962276: fmul    dword ptr [esi+3Ch]
0x962279: faddp   st(1), st
0x96227B: fstp    [esp+0C4h+var_B4]
0x96227F: fld     [esp+0C4h+var_B4]
0x962283: fld     dword ptr [edi+3Ch]
0x962286: fmul    [esp+0C4h+var_4C]
0x96228A: fld     dword ptr [edi+34h]
0x96228D: fmul    [esp+0C4h+var_34]
0x962294: faddp   st(1), st
0x962296: fstp    [esp+0C4h+var_B4]
0x96229A: fadd    [esp+0C4h+var_B4]
0x96229E: fstp    [esp+0C4h+var_B0]
0x9622A2: fld     [esp+0C4h+var_AC]
0x9622A6: fld     [esp+0C4h+var_B0]
0x9622AA: fcom    st(1)
0x9622AC: fnstsw  ax
0x9622AE: test    ah, 5
0x9622B1: jp      short loc_9622E5
0x9622B3: fstp    st(1)
0x9622B5: fld     [esp+0C4h+var_58]
0x9622B9: fld     st
0x9622BB: fmulp   st(4), st
0x9622BD: fld     st(5)
0x9622BF: fmul    [esp+0C4h+var_88]
0x9622C3: fsubp   st(4), st
0x9622C5: fxch    st(3)
0x9622C7: fcompp
0x9622C9: fnstsw  ax
0x9622CB: test    ah, 41h
0x9622CE: jnz     short loc_962334
0x9622D0: fstp    st(2)
0x9622D2: pop     ebp
0x9622D3: fstp    st
0x9622D5: pop     edi
0x9622D6: fstp    st
0x9622D8: pop     esi
0x9622D9: fstp    st
0x9622DB: xor     al, al
0x9622DD: pop     ebx
0x9622DE: add     esp, 0B4h
0x9622E4: retn
0x9622E5: fchs
0x9622E7: fstp    [esp+0C4h+var_B0]
0x9622EB: fld     [esp+0C4h+var_B0]
0x9622EF: fcom    st(1)
0x9622F1: fnstsw  ax
0x9622F3: fstp    st(1)
0x9622F5: test    ah, 41h
0x9622F8: jnz     short loc_96232A
0x9622FA: fld     [esp+0C4h+var_58]
0x9622FE: fld     st
0x962300: fmulp   st(4), st
0x962302: fld     st(5)
0x962304: fmul    [esp+0C4h+var_88]
0x962308: fsubp   st(4), st
0x96230A: fxch    st(3)
0x96230C: fcompp
0x96230E: fnstsw  ax
0x962310: test    ah, 5
0x962313: jp      short loc_962334
0x962315: fstp    st(2)
0x962317: pop     ebp
0x962318: fstp    st
0x96231A: pop     edi
0x96231B: fstp    st
0x96231D: pop     esi
0x96231E: fstp    st
0x962320: xor     al, al
0x962322: pop     ebx
0x962323: add     esp, 0B4h
0x962329: retn
0x96232A: fstp    st
0x96232C: fstp    st(1)
0x96232E: fld     [esp+0C4h+var_58]
0x962332: fxch    st(1)
0x962334: fld     st
0x962336: fmul    [esp+0C4h+var_64]
0x96233A: fld     st(3)
0x96233C: fmul    [esp+0C4h+var_84]
0x962340: fsubp   st(1), st
0x962342: fstp    [esp+0C4h+var_AC]
0x962346: fld     dword ptr [esi+34h]
0x962349: fmul    [esp+0C4h+var_38]
0x962350: fld     [esp+0C4h+var_40]
0x962357: fmul    dword ptr [esi+3Ch]
0x96235A: faddp   st(1), st
0x96235C: fstp    [esp+0C4h+var_B4]
0x962360: fld     [esp+0C4h+var_B4]
0x962364: fld     dword ptr [edi+3Ch]
0x962367: fmul    [esp+0C4h+var_48]
0x96236B: fld     dword ptr [edi+34h]
0x96236E: fmul    [esp+0C4h+var_30]
0x962375: faddp   st(1), st
0x962377: fstp    [esp+0C4h+var_B4]
0x96237B: fadd    [esp+0C4h+var_B4]
0x96237F: fstp    [esp+0C4h+var_B0]
0x962383: fld     [esp+0C4h+var_AC]
0x962387: fld     [esp+0C4h+var_B0]
0x96238B: fcom    st(1)
0x96238D: fnstsw  ax
0x96238F: test    ah, 5
0x962392: jp      short loc_9623BE
0x962394: fstp    st(1)
0x962396: fld     st(2)
0x962398: fmulp   st(2), st
0x96239A: fld     st(4)
0x96239C: fmul    [esp+0C4h+var_84]
0x9623A0: fsubp   st(2), st
0x9623A2: fcompp
0x9623A4: fnstsw  ax
0x9623A6: test    ah, 5
0x9623A9: jp      short loc_9623FF
0x9623AB: pop     ebp
0x9623AC: fstp    st(1)
0x9623AE: pop     edi
0x9623AF: fstp    st
0x9623B1: pop     esi
0x9623B2: fstp    st
0x9623B4: xor     al, al
0x9623B6: pop     ebx
0x9623B7: add     esp, 0B4h
0x9623BD: retn
0x9623BE: fchs
0x9623C0: fstp    [esp+0C4h+var_B0]
0x9623C4: fld     [esp+0C4h+var_B0]
0x9623C8: fcom    st(1)
0x9623CA: fnstsw  ax
0x9623CC: fstp    st(1)
0x9623CE: test    ah, 41h
0x9623D1: jnz     short loc_9623FB
0x9623D3: fld     st(2)
0x9623D5: fmulp   st(2), st
0x9623D7: fld     st(4)
0x9623D9: fmul    [esp+0C4h+var_84]
0x9623DD: fsubp   st(2), st
0x9623DF: fcompp
0x9623E1: fnstsw  ax
0x9623E3: test    ah, 41h
0x9623E6: jnz     short loc_9623FF
0x9623E8: pop     ebp
0x9623E9: fstp    st(1)
0x9623EB: pop     edi
0x9623EC: fstp    st
0x9623EE: pop     esi
0x9623EF: fstp    st
0x9623F1: xor     al, al
0x9623F3: pop     ebx
0x9623F4: add     esp, 0B4h
0x9623FA: retn
0x9623FB: fstp    st
0x9623FD: fstp    st
0x9623FF: fld     [esp+0C4h+var_68]
0x962403: fld     st
0x962405: fld     [esp+0C4h+var_64]
0x962409: fld     st
0x96240B: fmulp   st(2), st
0x96240D: fld     [esp+0C4h+var_80]
0x962411: fmulp   st(5), st
0x962413: fxch    st(1)
0x962415: fsubrp  st(4), st
0x962417: fxch    st(3)
0x962419: fstp    [esp+0C4h+var_AC]
0x96241D: fld     dword ptr [esi+38h]
0x962420: fmul    [esp+0C4h+var_40]
0x962427: fld     dword ptr [esi+34h]
0x96242A: fmul    [esp+0C4h+var_3C]
0x962431: faddp   st(1), st
0x962433: fstp    [esp+0C4h+var_B4]
0x962437: fld     [esp+0C4h+var_B4]
0x96243B: fld     dword ptr [edi+3Ch]
0x96243E: fmul    [esp+0C4h+var_44]
0x962445: fld     dword ptr [edi+34h]
0x962448: fmul    [esp+0C4h+var_2C]
0x96244F: faddp   st(1), st
0x962451: fstp    [esp+0C4h+var_B4]
0x962455: fadd    [esp+0C4h+var_B4]
0x962459: fstp    [esp+0C4h+var_B0]
0x96245D: fld     [esp+0C4h+var_AC]
0x962461: fld     [esp+0C4h+var_B0]
0x962465: fcom    st(1)
0x962467: fnstsw  ax
0x962469: test    ah, 5
0x96246C: jp      short loc_96249A
0x96246E: fstp    st(1)
0x962470: fld     st(2)
0x962472: fmulp   st(2), st
0x962474: fld     [esp+0C4h+var_80]
0x962478: fmulp   st(5), st
0x96247A: fxch    st(1)
0x96247C: fsubrp  st(4), st
0x96247E: fcomp   st(3)
0x962480: fnstsw  ax
0x962482: fstp    st(2)
0x962484: test    ah, 5
0x962487: jp      short loc_9624DF
0x962489: pop     ebp
0x96248A: fstp    st
0x96248C: pop     edi
0x96248D: fstp    st
0x96248F: pop     esi
0x962490: xor     al, al
0x962492: pop     ebx
0x962493: add     esp, 0B4h
0x962499: retn
0x96249A: fchs
0x96249C: fstp    [esp+0C4h+var_B0]
0x9624A0: fld     [esp+0C4h+var_B0]
0x9624A4: fcom    st(1)
0x9624A6: fnstsw  ax
0x9624A8: fstp    st(1)
0x9624AA: test    ah, 41h
0x9624AD: jnz     short loc_9624D9
0x9624AF: fld     st(2)
0x9624B1: fmulp   st(2), st
0x9624B3: fld     [esp+0C4h+var_80]
0x9624B7: fmulp   st(5), st
0x9624B9: fxch    st(1)
0x9624BB: fsubrp  st(4), st
0x9624BD: fcomp   st(3)
0x9624BF: fnstsw  ax
0x9624C1: fstp    st(2)
0x9624C3: test    ah, 41h
0x9624C6: jnz     short loc_9624DF
0x9624C8: pop     ebp
0x9624C9: fstp    st
0x9624CB: pop     edi
0x9624CC: fstp    st
0x9624CE: pop     esi
0x9624CF: xor     al, al
0x9624D1: pop     ebx
0x9624D2: add     esp, 0B4h
0x9624D8: retn
0x9624D9: fstp    st
0x9624DB: fstp    st
0x9624DD: fstp    st(2)
0x9624DF: fld     [esp+0C4h+var_60]
0x9624E3: fld     [esp+0C4h+var_88]
0x9624E7: fld     st
0x9624E9: fmulp   st(2), st
0x9624EB: fld     [esp+0C4h+var_7C]
0x9624EF: fld     st
0x9624F1: fmul    st, st(4)
0x9624F3: fsubp   st(3), st
0x9624F5: fxch    st(2)
0x9624F7: fstp    [esp+0C4h+var_AC]
0x9624FB: fld     dword ptr [esi+38h]
0x9624FE: fmul    [esp+0C4h+var_2C]
0x962505: fld     [esp+0C4h+var_30]
0x96250C: fmul    dword ptr [esi+3Ch]
0x96250F: faddp   st(1), st
0x962511: fstp    [esp+0C4h+var_B4]
0x962515: fld     [esp+0C4h+var_B4]
0x962519: fld     dword ptr [edi+38h]
0x96251C: fmul    [esp+0C4h+var_4C]
0x962520: fld     dword ptr [edi+34h]
0x962523: fmul    [esp+0C4h+var_40]
0x96252A: faddp   st(1), st
0x96252C: fstp    [esp+0C4h+var_B4]
0x962530: fadd    [esp+0C4h+var_B4]
0x962534: fstp    [esp+0C4h+var_B0]
0x962538: fld     [esp+0C4h+var_AC]
0x96253C: fld     [esp+0C4h+var_B0]
0x962540: fcom    st(1)
0x962542: fnstsw  ax
0x962544: test    ah, 5
0x962547: jp      short loc_962573
0x962549: fstp    st(1)
0x96254B: fld     [esp+0C4h+var_54]
0x96254F: fmulp   st(2), st
0x962551: fld     st(4)
0x962553: fmulp   st(3), st
0x962555: fxch    st(1)
0x962557: fsubrp  st(2), st
0x962559: fcompp
0x96255B: fnstsw  ax
0x96255D: test    ah, 5
0x962560: jp      short loc_9625B6
0x962562: pop     ebp
0x962563: fstp    st
0x962565: pop     edi
0x962566: fstp    st
0x962568: pop     esi
0x962569: xor     al, al
0x96256B: pop     ebx
0x96256C: add     esp, 0B4h
0x962572: retn
0x962573: fchs
0x962575: fstp    [esp+0C4h+var_B0]
0x962579: fld     [esp+0C4h+var_B0]
0x96257D: fcom    st(1)
0x96257F: fnstsw  ax
0x962581: fstp    st(1)
0x962583: test    ah, 41h
0x962586: jnz     short loc_9625B0
0x962588: fld     [esp+0C4h+var_54]
0x96258C: fmulp   st(2), st
0x96258E: fld     st(4)
0x962590: fmulp   st(3), st
0x962592: fxch    st(1)
0x962594: fsubrp  st(2), st
0x962596: fcompp
0x962598: fnstsw  ax
0x96259A: test    ah, 41h
0x96259D: jnz     short loc_9625B6
0x96259F: pop     ebp
0x9625A0: fstp    st
0x9625A2: pop     edi
0x9625A3: fstp    st
0x9625A5: pop     esi
0x9625A6: xor     al, al
0x9625A8: pop     ebx
0x9625A9: add     esp, 0B4h
0x9625AF: retn
0x9625B0: fstp    st
0x9625B2: fstp    st(1)
0x9625B4: fstp    st
0x9625B6: fld     [esp+0C4h+var_60]
0x9625BA: fld     [esp+0C4h+var_84]
0x9625BE: fld     st
0x9625C0: fmulp   st(2), st
0x9625C2: fld     [esp+0C4h+var_78]
0x9625C6: fld     st
0x9625C8: fmul    st, st(4)
0x9625CA: fsubp   st(3), st
0x9625CC: fxch    st(2)
0x9625CE: fstp    [esp+0C4h+var_AC]
0x9625D2: fld     dword ptr [esi+34h]
0x9625D5: fmul    [esp+0C4h+var_2C]
0x9625DC: fld     [esp+0C4h+var_34]
0x9625E3: fmul    dword ptr [esi+3Ch]
0x9625E6: faddp   st(1), st
0x9625E8: fstp    [esp+0C4h+var_B4]
0x9625EC: fld     [esp+0C4h+var_B4]
0x9625F0: fld     dword ptr [edi+38h]
0x9625F3: fmul    [esp+0C4h+var_48]
0x9625F7: fld     dword ptr [edi+34h]
0x9625FA: fmul    [esp+0C4h+var_3C]
0x962601: faddp   st(1), st
0x962603: fstp    [esp+0C4h+var_B4]
0x962607: fadd    [esp+0C4h+var_B4]
0x96260B: fstp    [esp+0C4h+var_B0]
0x96260F: fld     [esp+0C4h+var_AC]
0x962613: fld     [esp+0C4h+var_B0]
0x962617: fcom    st(1)
0x962619: fnstsw  ax
0x96261B: test    ah, 5
0x96261E: jp      short loc_962650
0x962620: fstp    st(1)
0x962622: fld     [esp+0C4h+var_54]
0x962626: fld     st
0x962628: fmulp   st(3), st
0x96262A: fld     st(5)
0x96262C: fmulp   st(4), st
0x96262E: fxch    st(2)
0x962630: fsubrp  st(3), st
0x962632: fcomp   st(2)
0x962634: fnstsw  ax
0x962636: fstp    st(1)
0x962638: test    ah, 5
0x96263B: jp      short loc_96269D
0x96263D: pop     ebp
0x96263E: fstp    st(1)
0x962640: pop     edi
0x962641: fstp    st(1)
0x962643: pop     esi
0x962644: fstp    st
0x962646: xor     al, al
0x962648: pop     ebx
0x962649: add     esp, 0B4h
0x96264F: retn
0x962650: fchs
0x962652: fstp    [esp+0C4h+var_B0]
0x962656: fld     [esp+0C4h+var_B0]
0x96265A: fcom    st(1)
0x96265C: fnstsw  ax
0x96265E: fstp    st(1)
0x962660: test    ah, 41h
0x962663: jnz     short loc_962693
0x962665: fld     [esp+0C4h+var_54]
0x962669: fld     st
0x96266B: fmulp   st(3), st
0x96266D: fld     st(5)
0x96266F: fmulp   st(4), st
0x962671: fxch    st(2)
0x962673: fsubrp  st(3), st
0x962675: fcomp   st(2)
0x962677: fnstsw  ax
0x962679: fstp    st(1)
0x96267B: test    ah, 41h
0x96267E: jnz     short loc_96269D
0x962680: pop     ebp
0x962681: fstp    st(1)
0x962683: pop     edi
0x962684: fstp    st(1)
0x962686: pop     esi
0x962687: fstp    st
0x962689: xor     al, al
0x96268B: pop     ebx
0x96268C: add     esp, 0B4h
0x962692: retn
0x962693: fstp    st
0x962695: fstp    st(1)
0x962697: fstp    st
0x962699: fld     [esp+0C4h+var_54]
0x96269D: fld     [esp+0C4h+var_60]
0x9626A1: fld     [esp+0C4h+var_80]
0x9626A5: fld     st
0x9626A7: fmulp   st(2), st
0x9626A9: fld     [esp+0C4h+var_74]
0x9626AD: fld     st
0x9626AF: fmulp   st(5), st
0x9626B1: fxch    st(2)
0x9626B3: fsubrp  st(4), st
0x9626B5: fxch    st(3)
0x9626B7: fstp    [esp+0C4h+var_AC]
0x9626BB: fld     dword ptr [esi+38h]
0x9626BE: fmul    [esp+0C4h+var_34]
0x9626C5: fld     dword ptr [esi+34h]
0x9626C8: fmul    [esp+0C4h+var_30]
0x9626CF: faddp   st(1), st
0x9626D1: fstp    [esp+0C4h+var_B4]
0x9626D5: fld     [esp+0C4h+var_B4]
0x9626D9: fld     dword ptr [edi+38h]
0x9626DC: fmul    [esp+0C4h+var_44]
0x9626E3: fld     dword ptr [edi+34h]
0x9626E6: fmul    [esp+0C4h+var_38]
0x9626ED: faddp   st(1), st
0x9626EF: fstp    [esp+0C4h+var_B4]
0x9626F3: fadd    [esp+0C4h+var_B4]
0x9626F7: fstp    [esp+0C4h+var_B0]
0x9626FB: fld     [esp+0C4h+var_AC]
0x9626FF: fld     [esp+0C4h+var_B0]
0x962703: fcom    st(1)
0x962705: fnstsw  ax
0x962707: test    ah, 5
0x96270A: jp      short loc_96272E
0x96270C: fstp    st(1)
0x96270E: fxch    st(2)
0x962710: fmulp   st(3), st
0x962712: fmulp   st(3), st
0x962714: fxch    st(1)
0x962716: fsubrp  st(2), st
0x962718: fcompp
0x96271A: fnstsw  ax
0x96271C: test    ah, 5
0x96271F: jp      short loc_96276D
0x962721: pop     ebp
0x962722: pop     edi
0x962723: pop     esi
0x962724: xor     al, al
0x962726: pop     ebx
0x962727: add     esp, 0B4h
0x96272D: retn
0x96272E: fchs
0x962730: fstp    [esp+0C4h+var_B0]
0x962734: fld     [esp+0C4h+var_B0]
0x962738: fcom    st(1)
0x96273A: fnstsw  ax
0x96273C: fstp    st(1)
0x96273E: test    ah, 41h
0x962741: jnz     short loc_962763
0x962743: fxch    st(2)
0x962745: fmulp   st(3), st
0x962747: fmulp   st(3), st
0x962749: fxch    st(1)
0x96274B: fsubrp  st(2), st
0x96274D: fcompp
0x96274F: fnstsw  ax
0x962751: test    ah, 41h
0x962754: jnz     short loc_96276D
0x962756: pop     ebp
0x962757: pop     edi
0x962758: pop     esi
0x962759: xor     al, al
0x96275B: pop     ebx
0x96275C: add     esp, 0B4h
0x962762: retn
0x962763: fstp    st
0x962765: fstp    st(3)
0x962767: fstp    st(2)
0x962769: fstp    st
0x96276B: fstp    st
0x96276D: lea     edx, [esp+0C4h+var_C]
0x962774: push    edx
0x962775: lea     eax, [esp+0C8h+var_94]
0x962779: push    eax
0x96277A: lea     ecx, [esp+0CCh+var_24]
0x962781: call    sub_498FE0
0x962786: mov     ecx, [esp+0C4h+var_A8]
0x96278A: push    ecx
0x96278B: lea     ecx, [esp+0C8h+var_24]
0x962792: call    sub_47D9E0
0x962797: fstp    [esp+0C4h+var_9C]
0x96279B: push    ebp
0x96279C: lea     ecx, [esp+0C8h+var_24]
0x9627A3: call    sub_47D9E0
0x9627A8: fstp    [esp+0C4h+var_98]
0x9627AC: fld     [esp+0C4h+var_98]
0x9627B0: lea     edx, [esp+0C4h+var_94]
0x9627B4: fabs
0x9627B6: push    edx
0x9627B7: fstp    [esp+0C8h+var_AC]
0x9627BB: mov     ecx, ebx
0x9627BD: fld     [esp+0C8h+var_9C]
0x9627C1: fabs
0x9627C3: fstp    [esp+0C8h+var_B0]
0x9627C7: call    sub_47D9E0
0x9627CC: fabs
0x9627CE: fstp    [esp+0C4h+var_B4]
0x9627D2: fld     [esp+0C4h+var_B4]
0x9627D6: fld     [esp+0C4h+var_98]
0x9627DA: fld     st
0x9627DC: fmul    [esp+0C4h+var_78]
0x9627E0: fld     [esp+0C4h+var_9C]
0x9627E4: fld     st
0x9627E6: fmul    [esp+0C4h+var_6C]
0x9627EA: fsubp   st(2), st
0x9627EC: fxch    st(1)
0x9627EE: fstp    [esp+0C4h+var_B4]
0x9627F2: fld     [esp+0C4h+var_B4]
0x9627F6: fabs
0x9627F8: fstp    [esp+0C4h+var_B4]
0x9627FC: fld     [esp+0C4h+var_B4]
0x962800: fmul    dword ptr [esi+38h]
0x962803: fld     st(2)
0x962805: fmul    [esp+0C4h+var_7C]
0x962809: fld     st(2)
0x96280B: fmul    [esp+0C4h+var_70]
0x96280F: fsubp   st(1), st
0x962811: fstp    [esp+0C4h+var_B4]
0x962815: fld     [esp+0C4h+var_B4]
0x962819: fabs
0x96281B: fstp    [esp+0C4h+var_B4]
0x96281F: fld     [esp+0C4h+var_B4]
0x962823: fmul    dword ptr [esi+34h]
0x962826: faddp   st(1), st
0x962828: fld     [esp+0C4h+var_74]
0x96282C: fmulp   st(3), st
0x96282E: fld     [esp+0C4h+var_68]
0x962832: fmulp   st(2), st
0x962834: fxch    st(2)
0x962836: fsubrp  st(1), st
0x962838: fstp    [esp+0C4h+var_B4]
0x96283C: fld     [esp+0C4h+var_B4]
0x962840: fabs
0x962842: fstp    [esp+0C4h+var_B4]
0x962846: fld     [esp+0C4h+var_B4]
0x96284A: fmul    dword ptr [esi+3Ch]
0x96284D: faddp   st(1), st
0x96284F: fstp    [esp+0C4h+var_B4]
0x962853: fld     [esp+0C4h+var_B4]
0x962857: fld     dword ptr [edi+3Ch]
0x96285A: fmul    [esp+0C4h+var_B0]
0x96285E: fld     dword ptr [edi+38h]
0x962861: fmul    [esp+0C4h+var_AC]
0x962865: faddp   st(1), st
0x962867: fstp    [esp+0C4h+var_B4]
0x96286B: fadd    [esp+0C4h+var_B4]
0x96286F: fstp    [esp+0C4h+var_B4]
0x962873: fld     [esp+0C4h+var_B4]
0x962877: fcompp
0x962879: fnstsw  ax
0x96287B: test    ah, 5
0x96287E: jnp     loc_962756
0x962884: push    ebx
0x962885: lea     ecx, [esp+0C8h+var_24]
0x96288C: call    sub_47D9E0
0x962891: fstp    [esp+0C4h+var_A0]
0x962895: fld     [esp+0C4h+var_A0]
0x962899: mov     ecx, [esp+0C4h+var_A8]
0x96289D: lea     eax, [esp+0C4h+var_94]
0x9628A1: fabs
0x9628A3: push    eax
0x9628A4: fstp    [esp+0C8h+var_B4]
0x9628A8: call    sub_47D9E0
0x9628AD: fabs
0x9628AF: fstp    [esp+0C4h+var_A8]
0x9628B3: fld     [esp+0C4h+var_A8]
0x9628B7: fld     [esp+0C4h+var_A0]
0x9628BB: fld     st
0x9628BD: fmul    [esp+0C4h+var_6C]
0x9628C1: fld     [esp+0C4h+var_98]
0x9628C5: fld     st
0x9628C7: fmul    [esp+0C4h+var_84]
0x9628CB: fsubp   st(2), st
0x9628CD: fxch    st(1)
0x9628CF: fstp    [esp+0C4h+var_A8]
0x9628D3: fld     [esp+0C4h+var_A8]
0x9628D7: fabs
0x9628D9: fstp    [esp+0C4h+var_A8]
0x9628DD: fld     [esp+0C4h+var_A8]
0x9628E1: fmul    dword ptr [esi+38h]
0x9628E4: fld     st(2)
0x9628E6: fmul    [esp+0C4h+var_70]
0x9628EA: fld     st(2)
0x9628EC: fmul    [esp+0C4h+var_88]
0x9628F0: fsubp   st(1), st
0x9628F2: fstp    [esp+0C4h+var_A8]
0x9628F6: fld     [esp+0C4h+var_A8]
0x9628FA: fabs
0x9628FC: fstp    [esp+0C4h+var_A8]
0x962900: fld     [esp+0C4h+var_A8]
0x962904: fmul    dword ptr [esi+34h]
0x962907: faddp   st(1), st
0x962909: fld     [esp+0C4h+var_68]
0x96290D: fmulp   st(3), st
0x96290F: fld     [esp+0C4h+var_80]
0x962913: fmulp   st(2), st
0x962915: fxch    st(2)
0x962917: fsubrp  st(1), st
0x962919: fstp    [esp+0C4h+var_A8]
0x96291D: fld     [esp+0C4h+var_A8]
0x962921: fabs
0x962923: fstp    [esp+0C4h+var_A8]
0x962927: fld     [esp+0C4h+var_A8]
0x96292B: fmul    dword ptr [esi+3Ch]
0x96292E: faddp   st(1), st
0x962930: fstp    [esp+0C4h+var_A8]
0x962934: fld     [esp+0C4h+var_A8]
0x962938: fld     [esp+0C4h+var_AC]
0x96293C: fmul    dword ptr [edi+34h]
0x96293F: fld     dword ptr [edi+3Ch]
0x962942: fmul    [esp+0C4h+var_B4]
0x962946: faddp   st(1), st
0x962948: fstp    [esp+0C4h+var_A8]
0x96294C: fadd    [esp+0C4h+var_A8]
0x962950: fstp    [esp+0C4h+var_A8]
0x962954: fld     [esp+0C4h+var_A8]
0x962958: fcompp
0x96295A: fnstsw  ax
0x96295C: test    ah, 5
0x96295F: jnp     loc_962756
0x962965: lea     ecx, [esp+0C4h+var_94]
0x962969: push    ecx
0x96296A: mov     ecx, ebp
0x96296C: call    sub_47D9E0
0x962971: fabs
0x962973: fstp    [esp+0C4h+var_A8]
0x962977: fld     [esp+0C4h+var_A8]
0x96297B: fld     [esp+0C4h+var_9C]
0x96297F: fld     st
0x962981: fmul    [esp+0C4h+var_84]
0x962985: fld     [esp+0C4h+var_A0]
0x962989: fld     st
0x96298B: fmul    [esp+0C4h+var_78]
0x96298F: fsubp   st(2), st
0x962991: fxch    st(1)
0x962993: fstp    [esp+0C4h+var_A8]
0x962997: fld     [esp+0C4h+var_A8]
0x96299B: fabs
0x96299D: fstp    [esp+0C4h+var_A8]
0x9629A1: fld     [esp+0C4h+var_A8]
0x9629A5: fmul    dword ptr [esi+38h]
0x9629A8: fld     st(2)
0x9629AA: fmul    [esp+0C4h+var_88]
0x9629AE: fld     st(2)
0x9629B0: fmul    [esp+0C4h+var_7C]
0x9629B4: fsubp   st(1), st
0x9629B6: fstp    [esp+0C4h+var_A8]
0x9629BA: fld     [esp+0C4h+var_A8]
0x9629BE: fabs
0x9629C0: fstp    [esp+0C4h+var_A8]
0x9629C4: fld     [esp+0C4h+var_A8]
0x9629C8: fmul    dword ptr [esi+34h]
0x9629CB: faddp   st(1), st
0x9629CD: fld     [esp+0C4h+var_80]
0x9629D1: fmulp   st(3), st
0x9629D3: fld     [esp+0C4h+var_74]
0x9629D7: fmulp   st(2), st
0x9629D9: fxch    st(2)
0x9629DB: fsubrp  st(1), st
0x9629DD: fstp    [esp+0C4h+var_A8]
0x9629E1: fld     [esp+0C4h+var_A8]
0x9629E5: fabs
0x9629E7: fstp    [esp+0C4h+var_A8]
0x9629EB: fld     [esp+0C4h+var_A8]
0x9629EF: fmul    dword ptr [esi+3Ch]
0x9629F2: faddp   st(1), st
0x9629F4: fstp    [esp+0C4h+var_A8]
0x9629F8: fld     [esp+0C4h+var_A8]
0x9629FC: fld     [esp+0C4h+var_B0]
0x962A00: fmul    dword ptr [edi+34h]
0x962A03: fld     dword ptr [edi+38h]
0x962A06: fmul    [esp+0C4h+var_B4]
0x962A0A: faddp   st(1), st
0x962A0C: fstp    [esp+0C4h+var_B4]
0x962A10: fadd    [esp+0C4h+var_B4]
0x962A14: fstp    [esp+0C4h+var_B4]
0x962A18: fld     [esp+0C4h+var_B4]
0x962A1C: fcompp
0x962A1E: fnstsw  ax
0x962A20: test    ah, 5
0x962A23: jnp     loc_962756
0x962A29: mov     ebp, [esp+0C4h+var_A4]
0x962A2D: push    ebp
0x962A2E: lea     ecx, [esp+0C8h+var_24]
0x962A35: call    sub_47D9E0
0x962A3A: fstp    [esp+0C4h+var_9C]
0x962A3E: mov     edx, [esp+0C4h+var_28]
0x962A45: push    edx
0x962A46: lea     ecx, [esp+0C8h+var_24]
0x962A4D: call    sub_47D9E0
0x962A52: fstp    [esp+0C4h+var_98]
0x962A56: fld     [esp+0C4h+var_98]
0x962A5A: lea     eax, [esp+0C4h+var_94]
0x962A5E: fabs
0x962A60: lea     ebx, [esi+10h]
0x962A63: fstp    [esp+0C4h+var_A4]
0x962A67: push    eax
0x962A68: fld     [esp+0C8h+var_9C]
0x962A6C: mov     ecx, ebx
0x962A6E: fabs
0x962A70: fstp    [esp+0C8h+var_A8]
0x962A74: call    sub_47D9E0
0x962A79: fabs
0x962A7B: fstp    [esp+0C4h+var_B4]
0x962A7F: fld     [esp+0C4h+var_B4]
0x962A83: fld     [esp+0C4h+var_98]
0x962A87: fld     st
0x962A89: fmul    [esp+0C4h+var_78]
0x962A8D: fld     [esp+0C4h+var_9C]
0x962A91: fld     st
0x962A93: fmul    [esp+0C4h+var_74]
0x962A97: fsubp   st(2), st
0x962A99: fxch    st(1)
0x962A9B: fstp    [esp+0C4h+var_B4]
0x962A9F: fld     [esp+0C4h+var_B4]
0x962AA3: fabs
0x962AA5: fstp    [esp+0C4h+var_B4]
0x962AA9: fld     [esp+0C4h+var_B4]
0x962AAD: fmul    dword ptr [edi+38h]
0x962AB0: fld     st(2)
0x962AB2: fmul    [esp+0C4h+var_84]
0x962AB6: fld     st(2)
0x962AB8: fmul    [esp+0C4h+var_80]
0x962ABC: fsubp   st(1), st
0x962ABE: fstp    [esp+0C4h+var_B4]
0x962AC2: fld     [esp+0C4h+var_B4]
0x962AC6: fabs
0x962AC8: fstp    [esp+0C4h+var_B4]
0x962ACC: fld     [esp+0C4h+var_B4]
0x962AD0: fmul    dword ptr [edi+34h]
0x962AD3: faddp   st(1), st
0x962AD5: fld     [esp+0C4h+var_6C]
0x962AD9: fmulp   st(3), st
0x962ADB: fld     [esp+0C4h+var_68]
0x962ADF: fmulp   st(2), st
0x962AE1: fxch    st(2)
0x962AE3: fsubrp  st(1), st
0x962AE5: fstp    [esp+0C4h+var_B4]
0x962AE9: fld     [esp+0C4h+var_B4]
0x962AED: fabs
0x962AEF: fstp    [esp+0C4h+var_B4]
0x962AF3: fld     [esp+0C4h+var_B4]
0x962AF7: fmul    dword ptr [edi+3Ch]
0x962AFA: faddp   st(1), st
0x962AFC: fstp    [esp+0C4h+var_B4]
0x962B00: fld     [esp+0C4h+var_B4]
0x962B04: fld     [esp+0C4h+var_A8]
0x962B08: fmul    dword ptr [esi+3Ch]
0x962B0B: fld     [esp+0C4h+var_A4]
0x962B0F: fmul    dword ptr [esi+38h]
0x962B12: faddp   st(1), st
0x962B14: fstp    [esp+0C4h+var_B4]
0x962B18: fadd    [esp+0C4h+var_B4]
0x962B1C: fstp    [esp+0C4h+var_B4]
0x962B20: fld     [esp+0C4h+var_B4]
0x962B24: fcompp
0x962B26: fnstsw  ax
0x962B28: test    ah, 5
0x962B2B: jnp     loc_962756
0x962B31: push    ebx
0x962B32: lea     ecx, [esp+0C8h+var_24]
0x962B39: call    sub_47D9E0
0x962B3E: fstp    [esp+0C4h+var_A0]
0x962B42: fld     [esp+0C4h+var_A0]
0x962B46: lea     ecx, [esp+0C4h+var_94]
0x962B4A: fabs
0x962B4C: push    ecx
0x962B4D: mov     ecx, ebp
0x962B4F: fstp    [esp+0C8h+var_B4]
0x962B53: call    sub_47D9E0
0x962B58: fabs
0x962B5A: fstp    [esp+0C4h+var_AC]
0x962B5E: fld     [esp+0C4h+var_AC]
0x962B62: fld     [esp+0C4h+var_A0]
0x962B66: fld     st
0x962B68: fmul    [esp+0C4h+var_74]
0x962B6C: fld     [esp+0C4h+var_98]
0x962B70: fld     st
0x962B72: fmul    [esp+0C4h+var_7C]
0x962B76: fsubp   st(2), st
0x962B78: fxch    st(1)
0x962B7A: fstp    [esp+0C4h+var_AC]
0x962B7E: fld     [esp+0C4h+var_AC]
0x962B82: fabs
0x962B84: fstp    [esp+0C4h+var_AC]
0x962B88: fld     [esp+0C4h+var_AC]
0x962B8C: fmul    dword ptr [edi+38h]
0x962B8F: fld     st(2)
0x962B91: fmul    [esp+0C4h+var_80]
0x962B95: fld     st(2)
0x962B97: fmul    [esp+0C4h+var_88]
0x962B9B: fsubp   st(1), st
0x962B9D: fstp    [esp+0C4h+var_AC]
0x962BA1: fld     [esp+0C4h+var_AC]
0x962BA5: fabs
0x962BA7: fstp    [esp+0C4h+var_AC]
0x962BAB: fld     [esp+0C4h+var_AC]
0x962BAF: fmul    dword ptr [edi+34h]
0x962BB2: faddp   st(1), st
0x962BB4: fld     [esp+0C4h+var_68]
0x962BB8: fmulp   st(3), st
0x962BBA: fld     [esp+0C4h+var_70]
0x962BBE: fmulp   st(2), st
0x962BC0: fxch    st(2)
0x962BC2: fsubrp  st(1), st
0x962BC4: fstp    [esp+0C4h+var_AC]
0x962BC8: fld     [esp+0C4h+var_AC]
0x962BCC: fabs
0x962BCE: fstp    [esp+0C4h+var_AC]
0x962BD2: fld     [esp+0C4h+var_AC]
0x962BD6: fmul    dword ptr [edi+3Ch]
0x962BD9: faddp   st(1), st
0x962BDB: fstp    [esp+0C4h+var_AC]
0x962BDF: fld     [esp+0C4h+var_AC]
0x962BE3: fld     [esp+0C4h+var_B4]
0x962BE7: fmul    dword ptr [esi+3Ch]
0x962BEA: fld     [esp+0C4h+var_A4]
0x962BEE: fmul    dword ptr [esi+34h]
0x962BF1: faddp   st(1), st
0x962BF3: fstp    [esp+0C4h+var_A4]
0x962BF7: fadd    [esp+0C4h+var_A4]
0x962BFB: fstp    [esp+0C4h+var_A4]
0x962BFF: fld     [esp+0C4h+var_A4]
0x962C03: fcompp
0x962C05: fnstsw  ax
0x962C07: test    ah, 5
0x962C0A: jnp     loc_962756
0x962C10: mov     ecx, [esp+0C4h+var_28]
0x962C17: lea     edx, [esp+0C4h+var_94]
0x962C1B: push    edx
0x962C1C: call    sub_47D9E0
0x962C21: fabs
0x962C23: fstp    [esp+0C4h+var_A4]
0x962C27: fld     [esp+0C4h+var_A4]
0x962C2B: fld     [esp+0C4h+var_9C]
0x962C2F: fld     st
0x962C31: fmul    [esp+0C4h+var_7C]
0x962C35: fld     [esp+0C4h+var_A0]
0x962C39: fld     st
0x962C3B: fmul    [esp+0C4h+var_78]
0x962C3F: fsubp   st(2), st
0x962C41: fxch    st(1)
0x962C43: fstp    [esp+0C4h+var_A4]
0x962C47: fld     [esp+0C4h+var_A4]
0x962C4B: fabs
0x962C4D: fstp    [esp+0C4h+var_A4]
0x962C51: fld     [esp+0C4h+var_A4]
0x962C55: fmul    dword ptr [edi+38h]
0x962C58: fld     st(2)
0x962C5A: fmul    [esp+0C4h+var_88]
0x962C5E: fld     st(2)
0x962C60: fmul    [esp+0C4h+var_84]
0x962C64: fsubp   st(1), st
0x962C66: fstp    [esp+0C4h+var_A4]
0x962C6A: fld     [esp+0C4h+var_A4]
0x962C6E: fabs
0x962C70: fstp    [esp+0C4h+var_A4]
0x962C74: fld     [esp+0C4h+var_A4]
0x962C78: fmul    dword ptr [edi+34h]
0x962C7B: faddp   st(1), st
0x962C7D: fld     [esp+0C4h+var_70]
0x962C81: fmulp   st(3), st
0x962C83: fld     [esp+0C4h+var_6C]
0x962C87: fmulp   st(2), st
0x962C89: fxch    st(2)
0x962C8B: fsubrp  st(1), st
0x962C8D: fstp    [esp+0C4h+var_A4]
0x962C91: fld     [esp+0C4h+var_A4]
0x962C95: fabs
0x962C97: fstp    [esp+0C4h+var_A4]
0x962C9B: fld     [esp+0C4h+var_A4]
0x962C9F: fmul    dword ptr [edi+3Ch]
0x962CA2: faddp   st(1), st
0x962CA4: fstp    [esp+0C4h+var_A4]
0x962CA8: fld     [esp+0C4h+var_A4]
0x962CAC: fld     [esp+0C4h+var_B4]
0x962CB0: fmul    dword ptr [esi+38h]
0x962CB3: fld     [esp+0C4h+var_A8]
0x962CB7: fmul    dword ptr [esi+34h]
0x962CBA: faddp   st(1), st
0x962CBC: fstp    [esp+0C4h+var_A4]
0x962CC0: fadd    [esp+0C4h+var_A4]
0x962CC4: fstp    [esp+0C4h+var_A4]
0x962CC8: fld     [esp+0C4h+var_A4]
0x962CCC: fcompp
0x962CCE: fnstsw  ax
0x962CD0: test    ah, 5
0x962CD3: jnp     loc_962756
0x962CD9: pop     ebp
0x962CDA: pop     edi
0x962CDB: pop     esi
0x962CDC: mov     al, 1
0x962CDE: pop     ebx
0x962CDF: add     esp, 0B4h
0x962CE5: retn
