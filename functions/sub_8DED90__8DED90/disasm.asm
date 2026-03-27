0x8DED90: push    ecx
0x8DED91: push    ebx
0x8DED92: push    ebp
0x8DED93: push    esi
0x8DED94: mov     esi, large fs:2Ch
0x8DED9B: push    edi
0x8DED9C: mov     edi, ds:0BA9DE4h
0x8DEDA2: mov     eax, [esi+edi*4]
0x8DEDA5: mov     edx, [eax+1A8h]
0x8DEDAB: mov     ebp, ecx
0x8DEDAD: mov     ecx, [eax+1A4h]
0x8DEDB3: cmp     ecx, edx
0x8DEDB5: jnb     short loc_8DEDE2
0x8DEDB7: mov     ebx, eax
0x8DEDB9: mov     ecx, [ebx+1A4h]
0x8DEDBF: mov     dword ptr [ecx], offset aLtmaint; "LtMaint"
0x8DEDC5: mov     dword ptr [ecx+0Ch], offset aSplit; "Split"
0x8DEDCC: rdtsc
0x8DEDCE: mov     [esp+14h+var_4], eax
0x8DEDD2: mov     edx, [esp+14h+var_4]
0x8DEDD6: mov     [ecx+4], edx
0x8DEDD9: add     ecx, 10h
0x8DEDDC: mov     [ebx+1A4h], ecx
0x8DEDE2: mov     eax, [esp+14h+arg_0]
0x8DEDE6: push    eax
0x8DEDE7: call    sub_8CCC90
0x8DEDEC: mov     ecx, [esp+18h+arg_4]
0x8DEDF0: fld     dword ptr [ecx]
0x8DEDF2: add     esp, 4
0x8DEDF5: fcomp   dword ptr [ebp+0Ch]
0x8DEDF8: fnstsw  ax
0x8DEDFA: test    ah, 1
0x8DEDFD: jnz     short loc_8DEE45
0x8DEDFF: mov     eax, [esi+edi*4]
0x8DEE02: mov     edx, [eax+1A4h]
0x8DEE08: cmp     edx, [eax+1A8h]
0x8DEE0E: jnb     short loc_8DEE34
0x8DEE10: mov     ebx, eax
0x8DEE12: mov     ecx, [ebx+1A4h]
0x8DEE18: mov     dword ptr [ecx], offset aStresettime; "StResetTime"
0x8DEE1E: rdtsc
0x8DEE20: mov     [esp+14h+var_4], eax
0x8DEE24: mov     eax, [esp+14h+var_4]
0x8DEE28: mov     [ecx+4], eax
0x8DEE2B: add     ecx, 0Ch
0x8DEE2E: mov     [ebx+1A4h], ecx
0x8DEE34: mov     ecx, [esp+14h+arg_4]
0x8DEE38: mov     edx, [esp+14h+arg_0]
0x8DEE3C: push    ecx
0x8DEE3D: push    edx
0x8DEE3E: mov     ecx, ebp
0x8DEE40: call    sub_8DEC30
0x8DEE45: mov     eax, [esi+edi*4]
0x8DEE48: mov     ecx, [eax+1A4h]
0x8DEE4E: cmp     ecx, [eax+1A8h]
0x8DEE54: jnb     short loc_8DEE7A
0x8DEE56: mov     ebx, eax
0x8DEE58: mov     ecx, [ebx+1A4h]
0x8DEE5E: mov     dword ptr [ecx], offset aStcheckdeact; "StCheckDeact"
0x8DEE64: rdtsc
0x8DEE66: mov     [esp+14h+var_4], eax
0x8DEE6A: mov     edx, [esp+14h+var_4]
0x8DEE6E: mov     [ecx+4], edx
0x8DEE71: add     ecx, 0Ch
0x8DEE74: mov     [ebx+1A4h], ecx
0x8DEE7A: mov     eax, [esp+14h+arg_4]
0x8DEE7E: mov     ecx, [esp+14h+arg_0]
0x8DEE82: push    eax
0x8DEE83: push    ecx
0x8DEE84: mov     ecx, ebp
0x8DEE86: call    sub_8DED40
0x8DEE8B: mov     eax, [esi+edi*4]
0x8DEE8E: mov     edx, [eax+1A4h]
0x8DEE94: cmp     edx, [eax+1A8h]
0x8DEE9A: jnb     short loc_8DEEC0
0x8DEE9C: mov     esi, eax
0x8DEE9E: mov     ecx, [esi+1A4h]
0x8DEEA4: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8DEEAA: rdtsc
0x8DEEAC: mov     [esp+14h+arg_4], eax
0x8DEEB0: mov     eax, [esp+14h+arg_4]
0x8DEEB4: mov     [ecx+4], eax
0x8DEEB7: add     ecx, 0Ch
0x8DEEBA: mov     [esi+1A4h], ecx
0x8DEEC0: pop     edi
0x8DEEC1: pop     esi
0x8DEEC2: pop     ebp
0x8DEEC3: pop     ebx
0x8DEEC4: pop     ecx
0x8DEEC5: retn    8
