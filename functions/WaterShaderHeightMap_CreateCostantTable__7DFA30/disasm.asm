0x7DFA30: push    0FFFFFFFFh
0x7DFA32: push    offset SEH_803C90
0x7DFA37: mov     eax, large fs:0
0x7DFA3D: push    eax
0x7DFA3E: push    ecx
0x7DFA3F: push    esi
0x7DFA40: push    edi
0x7DFA41: mov     eax, ds:0B30AACh
0x7DFA46: xor     eax, esp
0x7DFA48: push    eax
0x7DFA49: lea     eax, [esp+1Ch+var_C]
0x7DFA4D: mov     large fs:0, eax
0x7DFA53: mov     esi, ecx
0x7DFA55: cmp     dword ptr [esi+2Ch], 0
0x7DFA59: lea     edi, [esi+2Ch]
0x7DFA5C: jnz     loc_7DFB1A
0x7DFA62: push    34h ; '4'; Size
0x7DFA64: call    FormHeapAlloc
0x7DFA69: add     esp, 4
0x7DFA6C: mov     [esp+1Ch+var_10], eax
0x7DFA70: test    eax, eax
0x7DFA72: mov     [esp+1Ch+var_4], 0
0x7DFA7A: jz      short loc_7DFA89
0x7DFA7C: mov     ecx, [esi+14h]
0x7DFA7F: push    ecx
0x7DFA80: mov     ecx, eax
0x7DFA82: call    NiD3DShaderCostantMapPixel__Construct
0x7DFA87: jmp     short loc_7DFA8B
0x7DFA89: xor     eax, eax
0x7DFA8B: push    eax; a2
0x7DFA8C: mov     ecx, edi; this
0x7DFA8E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DFA96: call    NiSmartPointer_Set??
0x7DFA9B: mov     ecx, [edi]
0x7DFA9D: mov     edx, [ecx]
0x7DFA9F: mov     edx, [edx+18h]
0x7DFAA2: push    0
0x7DFAA4: lea     eax, [esi+100h]
0x7DFAAA: push    eax
0x7DFAAB: push    4
0x7DFAAD: push    10h
0x7DFAAF: push    offset EmptyString
0x7DFAB4: push    1
0x7DFAB6: push    0
0x7DFAB8: push    0
0x7DFABA: push    10000007h
0x7DFABF: push    offset aTime; "Time"
0x7DFAC4: call    edx
0x7DFAC6: mov     ecx, [edi]
0x7DFAC8: mov     eax, [ecx]
0x7DFACA: mov     eax, [eax+18h]
0x7DFACD: push    0
0x7DFACF: lea     edx, [esi+104h]
0x7DFAD5: push    edx
0x7DFAD6: push    4
0x7DFAD8: push    10h
0x7DFADA: push    offset EmptyString
0x7DFADF: push    1
0x7DFAE1: push    1
0x7DFAE3: push    0
0x7DFAE5: push    10000007h
0x7DFAEA: push    offset aFpassnum; "fPassNum"
0x7DFAEF: call    eax
0x7DFAF1: mov     ecx, [edi]
0x7DFAF3: mov     edx, [ecx]
0x7DFAF5: mov     eax, [edx+18h]
0x7DFAF8: push    0
0x7DFAFA: push    offset fResolution
0x7DFAFF: push    4
0x7DFB01: push    10h
0x7DFB03: push    offset EmptyString
0x7DFB08: push    1
0x7DFB0A: push    2
0x7DFB0C: push    0
0x7DFB0E: push    10000007h
0x7DFB13: push    offset aFresolution; "fResolution"
0x7DFB18: call    eax
0x7DFB1A: cmp     dword ptr [esi+30h], 0
0x7DFB1E: lea     edi, [esi+30h]
0x7DFB21: jnz     loc_7DFBB6
0x7DFB27: push    34h ; '4'; Size
0x7DFB29: call    FormHeapAlloc
0x7DFB2E: add     esp, 4
0x7DFB31: mov     [esp+1Ch+var_10], eax
0x7DFB35: test    eax, eax
0x7DFB37: mov     [esp+1Ch+var_4], 1
0x7DFB3F: jz      short loc_7DFB4E
0x7DFB41: mov     ecx, [esi+14h]
0x7DFB44: push    ecx
0x7DFB45: mov     ecx, eax
0x7DFB47: call    NiD3DShaderCostantMapVertex__Construct
0x7DFB4C: jmp     short loc_7DFB50
0x7DFB4E: xor     eax, eax
0x7DFB50: push    eax; a2
0x7DFB51: mov     ecx, edi; this
0x7DFB53: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DFB5B: call    NiSmartPointer_Set??
0x7DFB60: mov     ecx, [edi]
0x7DFB62: mov     edx, [ecx]
0x7DFB64: mov     edx, [edx+18h]
0x7DFB67: push    0
0x7DFB69: lea     eax, [esi+90h]
0x7DFB6F: push    eax
0x7DFB70: push    4
0x7DFB72: push    10h
0x7DFB74: push    offset EmptyString
0x7DFB79: push    1
0x7DFB7B: push    6
0x7DFB7D: push    0
0x7DFB7F: push    10000007h
0x7DFB84: push    offset aTexratio0; "texRatio0"
0x7DFB89: call    edx
0x7DFB8B: mov     ecx, [edi]
0x7DFB8D: mov     eax, [ecx]
0x7DFB8F: mov     edx, [eax+18h]
0x7DFB92: push    0
0x7DFB94: add     esi, 0A0h ; ' '
0x7DFB9A: push    esi
0x7DFB9B: push    4
0x7DFB9D: push    10h
0x7DFB9F: push    offset EmptyString
0x7DFBA4: push    1
0x7DFBA6: push    7
0x7DFBA8: push    0
0x7DFBAA: push    10000007h
0x7DFBAF: push    offset aTexratio1; "texRatio1"
0x7DFBB4: call    edx
0x7DFBB6: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7DFBBA: mov     large fs:0, ecx
0x7DFBC1: pop     ecx
0x7DFBC2: pop     edi
0x7DFBC3: pop     esi
0x7DFBC4: add     esp, 10h
0x7DFBC7: retn
