0x65AC50: sub     esp, 0Ch
0x65AC53: push    ebp
0x65AC54: push    edi
0x65AC55: mov     edi, ecx
0x65AC57: mov     ecx, ds:0B33398h
0x65AC5D: mov     ebp, [ecx+24h]
0x65AC60: xor     eax, eax
0x65AC62: test    ebp, ebp
0x65AC64: jz      loc_65ACEE
0x65AC6A: cmp     [edi+3Ch], eax
0x65AC6D: jz      short loc_65ACEE
0x65AC6F: mov     edx, dword ptr [esp+14h+a5]
0x65AC73: mov     eax, [esp+14h+a2]
0x65AC77: push    ebx
0x65AC78: mov     ebx, [esp+18h+a4]
0x65AC7C: push    esi
0x65AC7D: push    edx
0x65AC7E: push    ebx
0x65AC7F: push    eax
0x65AC80: mov     ecx, ebp
0x65AC82: call    OSGLobals_PlaySound
0x65AC87: mov     esi, eax
0x65AC89: test    esi, esi
0x65AC8B: jz      short loc_65ACEC
0x65AC8D: test    bl, 2
0x65AC90: jz      short loc_65ACDE
0x65AC92: mov     edx, [edi]
0x65AC94: mov     eax, [edx+174h]
0x65AC9A: mov     ecx, edi
0x65AC9C: call    eax
0x65AC9E: mov     ecx, [eax]
0x65ACA0: mov     edx, [eax+4]
0x65ACA3: mov     eax, [eax+8]
0x65ACA6: sub     esp, 0Ch
0x65ACA9: mov     [esp+28h+var_4], eax
0x65ACAD: fld     [esp+28h+var_4]
0x65ACB1: fstp    [esp+28h+var_20]; float
0x65ACB5: mov     [esp+28h+var_8], edx
0x65ACB9: fld     [esp+28h+var_8]
0x65ACBD: mov     [esp+28h+var_C], ecx
0x65ACC1: fstp    [esp+28h+var_24]; float
0x65ACC5: mov     ecx, esi
0x65ACC7: fld     [esp+28h+var_C]
0x65ACCB: fstp    [esp+28h+var_28]; float
0x65ACCE: call    sub_6B7360
0x65ACD3: mov     ecx, [esi]
0x65ACD5: push    edi
0x65ACD6: push    ecx
0x65ACD7: mov     ecx, ebp
0x65ACD9: call    sub_6AC3E0
0x65ACDE: mov     edx, dword ptr [esp+1Ch+a3]
0x65ACE2: push    edx
0x65ACE3: mov     ecx, esi
0x65ACE5: call    sub_6B7190
0x65ACEA: mov     eax, esi
0x65ACEC: pop     esi
0x65ACED: pop     ebx
0x65ACEE: pop     edi
0x65ACEF: pop     ebp
0x65ACF0: add     esp, 0Ch
0x65ACF3: retn    10h
