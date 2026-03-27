0x5E8ED0: sub     esp, 0Ch
0x5E8ED3: push    ebx
0x5E8ED4: push    ebp
0x5E8ED5: push    esi
0x5E8ED6: push    edi
0x5E8ED7: mov     ebp, ecx
0x5E8ED9: push    8; Size
0x5E8EDB: mov     [esp+20h+var_C], ebp
0x5E8EDF: call    FormHeapAlloc
0x5E8EE4: xor     ebx, ebx
0x5E8EE6: add     esp, 4
0x5E8EE9: cmp     eax, ebx
0x5E8EEB: jz      short loc_5E8EF6
0x5E8EED: mov     [eax], ebx
0x5E8EEF: mov     [eax+4], ebx
0x5E8EF2: mov     edi, eax
0x5E8EF4: jmp     short loc_5E8EF8
0x5E8EF6: xor     edi, edi
0x5E8EF8: mov     eax, [ebp+0]
0x5E8EFB: mov     edx, [eax+170h]
0x5E8F01: mov     ecx, ebp
0x5E8F03: call    edx
0x5E8F05: mov     esi, eax
0x5E8F07: test    esi, esi
0x5E8F09: jz      short loc_5E8F1E
0x5E8F0B: mov     eax, [ebp+0]
0x5E8F0E: mov     edx, [eax+190h]
0x5E8F14: mov     ecx, ebp
0x5E8F16: call    edx
0x5E8F18: test    al, al
0x5E8F1A: jz      short loc_5E8F1E
0x5E8F1C: mov     ebx, esi
0x5E8F1E: add     ebx, 58h ; 'X'
0x5E8F21: jz      short loc_5E8F5D
0x5E8F23: mov     esi, [ebx]
0x5E8F25: test    esi, esi
0x5E8F27: jz      short loc_5E8F5D
0x5E8F29: cmp     dword ptr [edi], 0
0x5E8F2C: jz      short loc_5E8F54
0x5E8F2E: push    8; Size
0x5E8F30: call    FormHeapAlloc
0x5E8F35: add     esp, 4
0x5E8F38: test    eax, eax
0x5E8F3A: jz      short loc_5E8F49
0x5E8F3C: mov     ecx, [edi]
0x5E8F3E: mov     [eax], ecx
0x5E8F40: mov     dword ptr [eax+4], 0
0x5E8F47: jmp     short loc_5E8F4B
0x5E8F49: xor     eax, eax
0x5E8F4B: mov     edx, [edi+4]
0x5E8F4E: mov     [eax+4], edx
0x5E8F51: mov     [edi+4], eax
0x5E8F54: mov     [edi], esi
0x5E8F56: mov     ebx, [ebx+4]
0x5E8F59: test    ebx, ebx
0x5E8F5B: jnz     short loc_5E8F23
0x5E8F5D: mov     ecx, ebp; this
0x5E8F5F: call    Actor_IsNPC
0x5E8F64: test    al, al
0x5E8F66: jz      short loc_5E8FCF
0x5E8F68: mov     ecx, ebp; this
0x5E8F6A: call    Actor_IsNPC
0x5E8F6F: test    al, al
0x5E8F71: jz      short loc_5E8F8C
0x5E8F73: mov     eax, [ebp+0]
0x5E8F76: mov     edx, [eax+170h]
0x5E8F7C: mov     ecx, ebp
0x5E8F7E: call    edx
0x5E8F80: test    eax, eax
0x5E8F82: jz      short loc_5E8F8C
0x5E8F84: mov     eax, [eax+0E8h]
0x5E8F8A: jmp     short loc_5E8F8E
0x5E8F8C: xor     eax, eax
0x5E8F8E: lea     ebx, [eax+30h]
0x5E8F91: test    ebx, ebx
0x5E8F93: jz      short loc_5E8FCF
0x5E8F95: mov     esi, [ebx]
0x5E8F97: test    esi, esi
0x5E8F99: jz      short loc_5E8FCF
0x5E8F9B: cmp     dword ptr [edi], 0
0x5E8F9E: jz      short loc_5E8FC6
0x5E8FA0: push    8; Size
0x5E8FA2: call    FormHeapAlloc
0x5E8FA7: add     esp, 4
0x5E8FAA: test    eax, eax
0x5E8FAC: jz      short loc_5E8FBB
0x5E8FAE: mov     ecx, [edi]
0x5E8FB0: mov     [eax], ecx
0x5E8FB2: mov     dword ptr [eax+4], 0
0x5E8FB9: jmp     short loc_5E8FBD
0x5E8FBB: xor     eax, eax
0x5E8FBD: mov     edx, [edi+4]
0x5E8FC0: mov     [eax+4], edx
0x5E8FC3: mov     [edi+4], eax
0x5E8FC6: mov     [edi], esi
0x5E8FC8: mov     ebx, [ebx+4]
0x5E8FCB: test    ebx, ebx
0x5E8FCD: jnz     short loc_5E8F95
0x5E8FCF: mov     eax, [ebp+0]
0x5E8FD2: mov     edx, [eax+170h]
0x5E8FD8: mov     ecx, ebp
0x5E8FDA: xor     esi, esi
0x5E8FDC: call    edx
0x5E8FDE: mov     ebx, eax
0x5E8FE0: test    ebx, ebx
0x5E8FE2: jz      short loc_5E8FF7
0x5E8FE4: mov     eax, [ebp+0]
0x5E8FE7: mov     edx, [eax+190h]
0x5E8FED: mov     ecx, ebp
0x5E8FEF: call    edx
0x5E8FF1: test    al, al
0x5E8FF3: jz      short loc_5E8FF7
0x5E8FF5: mov     esi, ebx
0x5E8FF7: add     esi, 60h ; '`'
0x5E8FFA: mov     [esp+1Ch+var_4], esi
0x5E8FFE: jz      loc_5E910E
0x5E9004: mov     esi, [esp+1Ch+var_4]
0x5E9008: cmp     dword ptr [esi+4], 0
0x5E900C: jnz     short loc_5E9017
0x5E900E: cmp     dword ptr [esi], 0
0x5E9011: jz      loc_5E910E
0x5E9017: mov     ecx, [esi]
0x5E9019: test    ecx, ecx
0x5E901B: jz      loc_5E90FF
0x5E9021: push    ebp
0x5E9022: call    sub_4B0920
0x5E9027: mov     ebx, eax
0x5E9029: test    ebx, ebx
0x5E902B: mov     [esp+1Ch+var_8], ebx
0x5E902F: jz      loc_5E90FF
0x5E9035: mov     eax, [esp+1Ch+var_8]
0x5E9039: cmp     dword ptr [eax+4], 0
0x5E903D: jnz     short loc_5E9048
0x5E903F: cmp     dword ptr [eax], 0
0x5E9042: jz      loc_5E90CC
0x5E9048: mov     ebp, [eax]
0x5E904A: test    ebp, ebp
0x5E904C: jz      short loc_5E90B5
0x5E904E: mov     eax, [ebp+18h]
0x5E9051: mov     edx, [eax+18h]
0x5E9054: lea     esi, [ebp+18h]
0x5E9057: mov     ecx, esi
0x5E9059: call    edx
0x5E905B: cmp     eax, 4
0x5E905E: jz      short loc_5E90B5
0x5E9060: mov     eax, [esi]
0x5E9062: mov     edx, [eax+18h]
0x5E9065: mov     ecx, esi
0x5E9067: call    edx
0x5E9069: cmp     eax, 1
0x5E906C: jz      short loc_5E90B5
0x5E906E: mov     ecx, [esp+1Ch+var_C]
0x5E9072: mov     eax, [ecx+5Ch]
0x5E9075: mov     edx, [eax+1Ch]
0x5E9078: push    0
0x5E907A: push    0
0x5E907C: add     ecx, 5Ch ; '\'
0x5E907F: push    0
0x5E9081: push    esi
0x5E9082: call    edx
0x5E9084: test    al, al
0x5E9086: jz      short loc_5E90B5
0x5E9088: cmp     dword ptr [edi], 0
0x5E908B: jz      short loc_5E90B3
0x5E908D: push    8; Size
0x5E908F: call    FormHeapAlloc
0x5E9094: add     esp, 4
0x5E9097: test    eax, eax
0x5E9099: jz      short loc_5E90A8
0x5E909B: mov     ecx, [edi]
0x5E909D: mov     [eax], ecx
0x5E909F: mov     dword ptr [eax+4], 0
0x5E90A6: jmp     short loc_5E90AA
0x5E90A8: xor     eax, eax
0x5E90AA: mov     edx, [edi+4]
0x5E90AD: mov     [eax+4], edx
0x5E90B0: mov     [edi+4], eax
0x5E90B3: mov     [edi], ebp
0x5E90B5: mov     eax, [esp+1Ch+var_8]
0x5E90B9: mov     eax, [eax+4]
0x5E90BC: test    eax, eax
0x5E90BE: mov     ebp, [esp+1Ch+var_C]
0x5E90C2: mov     [esp+1Ch+var_8], eax
0x5E90C6: jnz     loc_5E9035
0x5E90CC: cmp     dword ptr [ebx+4], 0
0x5E90D0: jz      short loc_5E90EC
0x5E90D2: mov     eax, [ebx+4]
0x5E90D5: mov     esi, [eax+4]
0x5E90D8: push    eax
0x5E90D9: call    FormHeapFree
0x5E90DE: add     esp, 4
0x5E90E1: test    esi, esi
0x5E90E3: mov     [ebx+4], esi
0x5E90E6: jnz     short loc_5E90D2
0x5E90E8: mov     ebp, [esp+1Ch+var_C]
0x5E90EC: push    ebx
0x5E90ED: mov     dword ptr [ebx], 0
0x5E90F3: call    FormHeapFree
0x5E90F8: mov     esi, [esp+20h+var_4]
0x5E90FC: add     esp, 4
0x5E90FF: mov     eax, [esi+4]
0x5E9102: test    eax, eax
0x5E9104: mov     [esp+1Ch+var_4], eax
0x5E9108: jnz     loc_5E9004
0x5E910E: push    8; Size
0x5E9110: call    FormHeapAlloc
0x5E9115: xor     ecx, ecx
0x5E9117: add     esp, 4
0x5E911A: cmp     eax, ecx
0x5E911C: jz      short loc_5E9129
0x5E911E: mov     [eax], ecx
0x5E9120: mov     [eax+4], ecx
0x5E9123: mov     [esp+1Ch+var_8], eax
0x5E9127: jmp     short loc_5E912D
0x5E9129: mov     [esp+1Ch+var_8], ecx
0x5E912D: cmp     edi, ecx
0x5E912F: mov     ebx, edi
0x5E9131: jz      short loc_5E919D
0x5E9133: mov     ebp, [ebx]
0x5E9135: test    ebp, ebp
0x5E9137: jz      short loc_5E919D
0x5E9139: mov     edx, [ebp+18h]
0x5E913C: mov     eax, [edx+18h]
0x5E913F: lea     esi, [ebp+18h]
0x5E9142: mov     ecx, esi
0x5E9144: call    eax
0x5E9146: cmp     eax, 4
0x5E9149: jz      short loc_5E9196
0x5E914B: mov     edx, [esi]
0x5E914D: mov     eax, [edx+18h]
0x5E9150: mov     ecx, esi
0x5E9152: call    eax
0x5E9154: cmp     eax, 1
0x5E9157: jz      short loc_5E9196
0x5E9159: mov     ecx, [esp+1Ch+var_C]
0x5E915D: mov     edx, [ecx+5Ch]
0x5E9160: mov     eax, [edx+1Ch]
0x5E9163: push    0
0x5E9165: push    0
0x5E9167: add     ecx, 5Ch ; '\'
0x5E916A: push    0
0x5E916C: push    esi
0x5E916D: call    eax
0x5E916F: test    al, al
0x5E9171: jz      short loc_5E9196
0x5E9173: lea     ecx, [ebp+24h]
0x5E9176: call    EffectItemList_HasHostile
0x5E917B: cmp     [esp+1Ch+arg_0], 0
0x5E9180: jz      short loc_5E9188
0x5E9182: test    al, al
0x5E9184: jz      short loc_5E9196
0x5E9186: jmp     short loc_5E918C
0x5E9188: test    al, al
0x5E918A: jnz     short loc_5E9196
0x5E918C: mov     ecx, [esp+1Ch+var_8]
0x5E9190: push    ebp
0x5E9191: call    BSSimpleList_PushFront
0x5E9196: mov     ebx, [ebx+4]
0x5E9199: test    ebx, ebx
0x5E919B: jnz     short loc_5E9133
0x5E919D: cmp     dword ptr [edi+4], 0
0x5E91A1: jz      short loc_5E91B9
0x5E91A3: mov     eax, [edi+4]
0x5E91A6: mov     esi, [eax+4]
0x5E91A9: push    eax
0x5E91AA: call    FormHeapFree
0x5E91AF: add     esp, 4
0x5E91B2: test    esi, esi
0x5E91B4: mov     [edi+4], esi
0x5E91B7: jnz     short loc_5E91A3
0x5E91B9: push    edi
0x5E91BA: mov     dword ptr [edi], 0
0x5E91C0: call    FormHeapFree
0x5E91C5: mov     eax, [esp+20h+var_8]
0x5E91C9: add     esp, 4
0x5E91CC: pop     edi
0x5E91CD: pop     esi
0x5E91CE: pop     ebp
0x5E91CF: pop     ebx
0x5E91D0: add     esp, 0Ch
0x5E91D3: retn    4
