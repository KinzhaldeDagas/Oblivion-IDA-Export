0x7F4FA0: push    0FFFFFFFFh
0x7F4FA2: push    offset SEH_803C90
0x7F4FA7: mov     eax, large fs:0
0x7F4FAD: push    eax
0x7F4FAE: push    ecx
0x7F4FAF: push    esi
0x7F4FB0: push    edi
0x7F4FB1: mov     eax, ds:0B30AACh
0x7F4FB6: xor     eax, esp
0x7F4FB8: push    eax
0x7F4FB9: lea     eax, [esp+1Ch+var_C]
0x7F4FBD: mov     large fs:0, eax
0x7F4FC3: mov     esi, ecx
0x7F4FC5: cmp     dword ptr [esi+2Ch], 0
0x7F4FC9: lea     edi, [esi+2Ch]
0x7F4FCC: jnz     loc_7F505F
0x7F4FD2: push    34h ; '4'; Size
0x7F4FD4: call    FormHeapAlloc
0x7F4FD9: add     esp, 4
0x7F4FDC: mov     [esp+1Ch+var_10], eax
0x7F4FE0: test    eax, eax
0x7F4FE2: mov     [esp+1Ch+var_4], 0
0x7F4FEA: jz      short loc_7F4FF9
0x7F4FEC: mov     ecx, [esi+14h]
0x7F4FEF: push    ecx
0x7F4FF0: mov     ecx, eax
0x7F4FF2: call    NiD3DShaderCostantMapPixel__Construct
0x7F4FF7: jmp     short loc_7F4FFB
0x7F4FF9: xor     eax, eax
0x7F4FFB: push    eax; a2
0x7F4FFC: mov     ecx, edi; this
0x7F4FFE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F5006: call    NiSmartPointer_Set??
0x7F500B: mov     ecx, [edi]
0x7F500D: mov     edx, [ecx]
0x7F500F: mov     edx, [edx+18h]
0x7F5012: push    0
0x7F5014: lea     eax, [esi+80h]
0x7F501A: push    eax
0x7F501B: push    4
0x7F501D: push    10h
0x7F501F: push    offset EmptyString
0x7F5024: push    1
0x7F5026: push    0
0x7F5028: push    0
0x7F502A: push    10000007h
0x7F502F: push    offset aTimingdata; "timingdata"
0x7F5034: call    edx
0x7F5036: mov     ecx, [edi]
0x7F5038: mov     eax, [ecx]
0x7F503A: mov     edx, [eax+18h]
0x7F503D: push    0
0x7F503F: push    offset flt_B46914
0x7F5044: push    4
0x7F5046: push    10h
0x7F5048: push    offset EmptyString
0x7F504D: push    1
0x7F504F: push    1
0x7F5051: push    0
0x7F5053: push    10000007h
0x7F5058: push    offset aSpellinput; "spellinput"
0x7F505D: call    edx
0x7F505F: cmp     dword ptr [esi+30h], 0
0x7F5063: lea     edi, [esi+30h]
0x7F5066: jnz     loc_7F50FB
0x7F506C: push    34h ; '4'; Size
0x7F506E: call    FormHeapAlloc
0x7F5073: add     esp, 4
0x7F5076: mov     [esp+1Ch+var_10], eax
0x7F507A: test    eax, eax
0x7F507C: mov     [esp+1Ch+var_4], 1
0x7F5084: jz      short loc_7F5093
0x7F5086: mov     ecx, [esi+14h]
0x7F5089: push    ecx
0x7F508A: mov     ecx, eax
0x7F508C: call    NiD3DShaderCostantMapVertex__Construct
0x7F5091: jmp     short loc_7F5095
0x7F5093: xor     eax, eax
0x7F5095: push    eax; a2
0x7F5096: mov     ecx, edi; this
0x7F5098: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F50A0: call    NiSmartPointer_Set??
0x7F50A5: mov     ecx, [edi]
0x7F50A7: mov     edx, [ecx]
0x7F50A9: mov     edx, [edx+18h]
0x7F50AC: push    0
0x7F50AE: lea     eax, [esi+0A0h]
0x7F50B4: push    eax
0x7F50B5: push    4
0x7F50B7: push    10h
0x7F50B9: push    offset EmptyString
0x7F50BE: push    1
0x7F50C0: push    6
0x7F50C2: push    0
0x7F50C4: push    10000007h
0x7F50C9: push    offset aTexratio0; "texRatio0"
0x7F50CE: call    edx
0x7F50D0: mov     ecx, [edi]
0x7F50D2: mov     eax, [ecx]
0x7F50D4: mov     eax, [eax+18h]
0x7F50D7: push    0
0x7F50D9: lea     edx, [esi+0B0h]
0x7F50DF: push    edx
0x7F50E0: push    4
0x7F50E2: push    10h
0x7F50E4: push    offset EmptyString
0x7F50E9: push    1
0x7F50EB: push    7
0x7F50ED: push    0
0x7F50EF: push    10000007h
0x7F50F4: push    offset aTexratio1; "texRatio1"
0x7F50F9: call    eax
0x7F50FB: mov     ecx, [esp+1Ch+a2]
0x7F50FF: push    ecx; a2
0x7F5100: mov     ecx, esi; this
0x7F5102: call    sub_77AA60
0x7F5107: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7F510B: mov     large fs:0, ecx
0x7F5112: pop     ecx
0x7F5113: pop     edi
0x7F5114: pop     esi
0x7F5115: add     esp, 10h
0x7F5118: retn    4
