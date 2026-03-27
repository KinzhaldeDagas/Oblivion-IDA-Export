0x69E0B0: push    0FFFFFFFFh
0x69E0B2: push    offset MagicCaster_CastingVFX_destr_SEH
0x69E0B7: mov     eax, large fs:0
0x69E0BD: push    eax
0x69E0BE: sub     esp, 8
0x69E0C1: push    ebp
0x69E0C2: push    esi
0x69E0C3: push    edi
0x69E0C4: mov     eax, ds:0B30AACh
0x69E0C9: xor     eax, esp
0x69E0CB: push    eax
0x69E0CC: lea     eax, [esp+24h+var_C]
0x69E0D0: mov     large fs:0, eax
0x69E0D6: mov     esi, ecx
0x69E0D8: mov     [esp+24h+var_10], esi
0x69E0DC: push    3
0x69E0DE: mov     [esp+28h+var_4], 1
0x69E0E6: call    nullsub_returnTrue_0arg
0x69E0EB: mov     ecx, [esi]
0x69E0ED: mov     ebp, ds:0A2807Ch
0x69E0F3: add     esp, 4
0x69E0F6: test    ecx, ecx
0x69E0F8: jz      short loc_69E12F
0x69E0FA: mov     eax, [esi+8]
0x69E0FD: mov     edx, [ecx]
0x69E0FF: mov     edx, [edx+88h]
0x69E105: push    eax
0x69E106: lea     eax, [esp+28h+var_14]
0x69E10A: push    eax
0x69E10B: call    edx
0x69E10D: mov     eax, dword ptr [esp+24h+var_14]
0x69E111: test    eax, eax
0x69E113: jz      short loc_69E12F
0x69E115: mov     edi, eax
0x69E117: add     eax, 4
0x69E11A: push    eax; lpAddend
0x69E11B: call    ebp ; InterlockedDecrement
0x69E11D: test    eax, eax
0x69E11F: jnz     short loc_69E12F
0x69E121: test    edi, edi
0x69E123: jz      short loc_69E12F
0x69E125: mov     eax, [edi]
0x69E127: mov     edx, [eax]
0x69E129: push    1
0x69E12B: mov     ecx, edi
0x69E12D: call    edx
0x69E12F: mov     edi, [esi]
0x69E131: test    edi, edi
0x69E133: jz      short loc_69E153
0x69E135: lea     eax, [edi+4]
0x69E138: push    eax; lpAddend
0x69E139: call    ebp ; InterlockedDecrement
0x69E13B: test    eax, eax
0x69E13D: jnz     short loc_69E14D
0x69E13F: test    edi, edi
0x69E141: jz      short loc_69E14D
0x69E143: mov     edx, [edi]
0x69E145: mov     eax, [edx]
0x69E147: push    1
0x69E149: mov     ecx, edi
0x69E14B: call    eax
0x69E14D: mov     dword ptr [esi], 0
0x69E153: push    0
0x69E155: call    GetShadowSceneNode
0x69E15A: add     esp, 4
0x69E15D: test    eax, eax
0x69E15F: jz      short loc_69E16C
0x69E161: mov     ecx, [esi+8]
0x69E164: push    ecx
0x69E165: mov     ecx, eax
0x69E167: call    sub_7C7DC0
0x69E16C: mov     edi, [esi+8]
0x69E16F: test    edi, edi
0x69E171: jz      short loc_69E192
0x69E173: lea     ecx, [edi+4]
0x69E176: push    ecx; lpAddend
0x69E177: call    ebp ; InterlockedDecrement
0x69E179: test    eax, eax
0x69E17B: jnz     short loc_69E18B
0x69E17D: test    edi, edi
0x69E17F: jz      short loc_69E18B
0x69E181: mov     edx, [edi]
0x69E183: mov     eax, [edx]
0x69E185: push    1
0x69E187: mov     ecx, edi
0x69E189: call    eax
0x69E18B: mov     dword ptr [esi+8], 0
0x69E192: push    2
0x69E194: mov     dword ptr [esi+4], 0
0x69E19B: call    nullsub_returnTrue_0arg
0x69E1A0: mov     edi, [esi+8]
0x69E1A3: add     esp, 4
0x69E1A6: test    edi, edi
0x69E1A8: mov     byte ptr [esp+24h+var_4], 0
0x69E1AD: jz      short loc_69E1C7
0x69E1AF: lea     ecx, [edi+4]
0x69E1B2: push    ecx; lpAddend
0x69E1B3: call    ebp ; InterlockedDecrement
0x69E1B5: test    eax, eax
0x69E1B7: jnz     short loc_69E1C7
0x69E1B9: test    edi, edi
0x69E1BB: jz      short loc_69E1C7
0x69E1BD: mov     edx, [edi]
0x69E1BF: mov     eax, [edx]
0x69E1C1: push    1
0x69E1C3: mov     ecx, edi
0x69E1C5: call    eax
0x69E1C7: mov     esi, [esi]
0x69E1C9: test    esi, esi
0x69E1CB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x69E1D3: jz      short loc_69E1ED
0x69E1D5: lea     ecx, [esi+4]
0x69E1D8: push    ecx; lpAddend
0x69E1D9: call    ebp ; InterlockedDecrement
0x69E1DB: test    eax, eax
0x69E1DD: jnz     short loc_69E1ED
0x69E1DF: test    esi, esi
0x69E1E1: jz      short loc_69E1ED
0x69E1E3: mov     edx, [esi]
0x69E1E5: mov     eax, [edx]
0x69E1E7: push    1
0x69E1E9: mov     ecx, esi
0x69E1EB: call    eax
0x69E1ED: mov     ecx, dword ptr [esp+24h+var_C]
0x69E1F1: mov     large fs:0, ecx
0x69E1F8: pop     ecx
0x69E1F9: pop     edi
0x69E1FA: pop     esi
0x69E1FB: pop     ebp
0x69E1FC: add     esp, 14h
0x69E1FF: retn
