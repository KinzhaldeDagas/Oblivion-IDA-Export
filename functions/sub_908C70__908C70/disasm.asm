0x908C70: push    ebp
0x908C71: mov     ebp, esp
0x908C73: and     esp, 0FFFFFFF0h
0x908C76: sub     esp, 224h
0x908C7C: mov     eax, ds:0B30AACh
0x908C81: push    ebx
0x908C82: push    esi
0x908C83: mov     esi, large fs:2Ch
0x908C8A: mov     ebx, ecx
0x908C8C: mov     ecx, ds:0BA9DE4h
0x908C92: mov     [esp+22Ch+var_4], eax
0x908C99: mov     eax, [esi+ecx*4]
0x908C9C: mov     edx, [eax+1A4h]
0x908CA2: push    edi
0x908CA3: cmp     edx, [eax+1A8h]
0x908CA9: jnb     short loc_908CD6
0x908CAB: mov     edi, eax
0x908CAD: mov     ecx, [edi+1A4h]
0x908CB3: mov     dword ptr [ecx], offset aLtbvtree; "LtBvTree"
0x908CB9: mov     dword ptr [ecx+0Ch], offset aQuerytree; "QueryTree"
0x908CC0: rdtsc
0x908CC2: mov     [esp+230h+var_224], eax
0x908CC6: mov     eax, [esp+230h+var_224]
0x908CCA: mov     [ecx+4], eax
0x908CCD: add     ecx, 10h
0x908CD0: mov     [edi+1A4h], ecx
0x908CD6: mov     ecx, [ebp+arg_8]
0x908CD9: mov     edi, [ebp+arg_4]
0x908CDC: mov     edx, [ebp+arg_0]
0x908CDF: push    ecx
0x908CE0: push    edi
0x908CE1: push    edx
0x908CE2: mov     ecx, ebx
0x908CE4: call    sub_9069E0
0x908CE9: mov     ecx, ds:0BA9DE4h
0x908CEF: mov     eax, [esi+ecx*4]
0x908CF2: mov     edx, [eax+1A4h]
0x908CF8: cmp     edx, [eax+1A8h]
0x908CFE: jnb     short loc_908D24
0x908D00: mov     esi, eax
0x908D02: mov     ecx, [esi+1A4h]
0x908D08: mov     dword ptr [ecx], offset aStnarrowphase; "StNarrowPhase"
0x908D0E: rdtsc
0x908D10: mov     [esp+230h+var_224], eax
0x908D14: mov     eax, [esp+230h+var_224]
0x908D18: mov     [ecx+4], eax
0x908D1B: add     ecx, 0Ch
0x908D1E: mov     [esi+1A4h], ecx
0x908D24: mov     esi, [ebx+0Ch]
0x908D27: mov     eax, [ebx+10h]
0x908D2A: lea     ecx, [eax+eax*2]
0x908D2D: mov     eax, [edi+8]
0x908D30: mov     edx, esi
0x908D32: lea     ebx, [edx+ecx*4]
0x908D35: cmp     esi, ebx
0x908D37: mov     ecx, [edi]
0x908D39: mov     [esp+230h+var_214], edi
0x908D3D: mov     [esp+230h+var_218], eax
0x908D41: mov     edi, [ecx+0Ch]
0x908D44: jz      short loc_908D7F
0x908D46: mov     ecx, [esi]
0x908D48: mov     edx, [edi]
0x908D4A: lea     eax, [esp+230h+var_210]
0x908D4E: push    eax
0x908D4F: push    ecx
0x908D50: mov     ecx, edi
0x908D52: call    dword ptr [edx+28h]
0x908D55: mov     ecx, [esi]
0x908D57: mov     [esp+230h+var_220], eax
0x908D5B: mov     eax, [ebp+arg_C]
0x908D5E: push    eax
0x908D5F: mov     eax, [ebp+arg_8]
0x908D62: push    eax
0x908D63: lea     eax, [esp+238h+var_220]
0x908D67: mov     [esp+238h+var_21C], ecx
0x908D6B: mov     ecx, [esi+8]
0x908D6E: mov     edx, [ecx]
0x908D70: push    eax
0x908D71: mov     eax, [ebp+arg_0]
0x908D74: push    eax
0x908D75: call    dword ptr [edx+0Ch]
0x908D78: add     esi, 0Ch
0x908D7B: cmp     esi, ebx
0x908D7D: jnz     short loc_908D46
0x908D7F: mov     ecx, large fs:2Ch
0x908D86: mov     edx, ds:0BA9DE4h
0x908D8C: mov     eax, [ecx+edx*4]
0x908D8F: mov     esi, [eax+1A4h]
0x908D95: cmp     esi, [eax+1A8h]
0x908D9B: jnb     short loc_908DC1
0x908D9D: mov     esi, eax
0x908D9F: mov     ecx, [esi+1A4h]
0x908DA5: mov     dword ptr [ecx], offset aLt_0; "lt"
0x908DAB: rdtsc
0x908DAD: mov     [esp+230h+var_224], eax
0x908DB1: mov     edx, [esp+230h+var_224]
0x908DB5: mov     [ecx+4], edx
0x908DB8: add     ecx, 0Ch
0x908DBB: mov     [esi+1A4h], ecx
0x908DC1: mov     ecx, [esp+230h+var_4]
0x908DC8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x908DCD: pop     edi
0x908DCE: pop     esi
0x908DCF: pop     ebx
0x908DD0: mov     esp, ebp
0x908DD2: pop     ebp
0x908DD3: retn    10h
