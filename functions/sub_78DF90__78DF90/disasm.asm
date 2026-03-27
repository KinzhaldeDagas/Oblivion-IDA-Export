0x78DF90: push    ebp
0x78DF91: mov     ebp, esp
0x78DF93: push    0FFFFFFFFh
0x78DF95: push    offset SEH_78DF90
0x78DF9A: mov     eax, large fs:0
0x78DFA0: push    eax
0x78DFA1: sub     esp, 44h
0x78DFA4: push    ebx
0x78DFA5: push    esi
0x78DFA6: push    edi
0x78DFA7: mov     eax, ds:0B30AACh
0x78DFAC: xor     eax, ebp
0x78DFAE: push    eax
0x78DFAF: lea     eax, [ebp+var_C]
0x78DFB2: mov     large fs:0, eax
0x78DFB8: mov     [ebp+var_10], esp
0x78DFBB: mov     edi, ecx
0x78DFBD: mov     eax, [ebp+arg_4]
0x78DFC0: mov     ecx, [ebp+arg_0]
0x78DFC3: push    eax
0x78DFC4: push    ecx
0x78DFC5: lea     ecx, [ebp+var_2C]
0x78DFC8: mov     [ebp+var_11], 0
0x78DFCC: mov     [ebp+var_4], 0
0x78DFD3: call    sub_78D600
0x78DFD8: mov     ecx, [edi]
0x78DFDA: lea     edx, [ebp+var_2C]
0x78DFDD: push    edx
0x78DFDE: mov     byte ptr [ebp+var_4], 1
0x78DFE2: call    sub_7A4DF0
0x78DFE7: test    al, al
0x78DFE9: jz      loc_78E25D
0x78DFEF: mov     ecx, [ebp+var_24]
0x78DFF2: test    ecx, ecx
0x78DFF4: jz      loc_78E1F2
0x78DFFA: mov     eax, [ebp+var_20]
0x78DFFD: sub     eax, ecx
0x78DFFF: cmp     [ebp+var_2C], eax
0x78E002: jnb     loc_78E1F2
0x78E008: lea     ecx, [ebp+var_2C]
0x78E00B: xor     bl, bl
0x78E00D: call    sub_78EB40
0x78E012: cmp     eax, 3E8Dh
0x78E017: jg      loc_78E0FD
0x78E01D: jz      loc_78E0ED
0x78E023: cmp     eax, 2EE0h
0x78E028: jg      short loc_78E0A3
0x78E02A: jz      short loc_78E093
0x78E02C: cmp     eax, 2710h
0x78E031: jg      short loc_78E078
0x78E033: jz      short loc_78E068
0x78E035: cmp     eax, 1F40h
0x78E03A: jz      short loc_78E057
0x78E03C: cmp     eax, 2328h
0x78E041: jnz     loc_78E171
0x78E047: lea     eax, [ebp+var_2C]
0x78E04A: push    eax
0x78E04B: mov     ecx, edi
0x78E04D: call    sub_789610
0x78E052: jmp     loc_78E1D1
0x78E057: lea     ecx, [ebp+var_2C]
0x78E05A: push    ecx
0x78E05B: mov     ecx, [edi+0Ch]
0x78E05E: call    sub_794340
0x78E063: jmp     loc_78E1D1
0x78E068: lea     edx, [ebp+var_2C]
0x78E06B: push    edx
0x78E06C: mov     ecx, edi
0x78E06E: call    loc_7898D0
0x78E073: jmp     loc_78E1D1
0x78E078: cmp     eax, 2AF8h
0x78E07D: jnz     loc_78E171
0x78E083: lea     eax, [ebp+var_2C]
0x78E086: push    eax
0x78E087: mov     ecx, edi
0x78E089: call    sub_7897B0
0x78E08E: jmp     loc_78E1D1
0x78E093: lea     ecx, [ebp+var_2C]
0x78E096: push    ecx
0x78E097: mov     ecx, edi
0x78E099: call    sub_78DD10
0x78E09E: jmp     loc_78E1D1
0x78E0A3: cmp     eax, 32C8h
0x78E0A8: jz      short loc_78E0DC
0x78E0AA: cmp     eax, 3A98h
0x78E0AF: jz      short loc_78E0CC
0x78E0B1: cmp     eax, 3E80h
0x78E0B6: jnz     loc_78E171
0x78E0BC: mov     ecx, [edi]
0x78E0BE: lea     edx, [ebp+var_2C]
0x78E0C1: push    edx
0x78E0C2: call    sub_7A2C60
0x78E0C7: jmp     loc_78E1D1
0x78E0CC: mov     ecx, [edi]
0x78E0CE: lea     eax, [ebp+var_2C]
0x78E0D1: push    eax
0x78E0D2: call    sub_7A2A40
0x78E0D7: jmp     loc_78E1D1
0x78E0DC: lea     ecx, [ebp+var_2C]
0x78E0DF: push    ecx
0x78E0E0: mov     ecx, [edi+5Ch]
0x78E0E3: call    sub_79F1E0
0x78E0E8: jmp     loc_78E1D1
0x78E0ED: mov     ecx, [edi]
0x78E0EF: lea     edx, [ebp+var_2C]
0x78E0F2: push    edx
0x78E0F3: call    sub_7A2540
0x78E0F8: jmp     loc_78E1D1
0x78E0FD: cmp     eax, 4E20h
0x78E102: jg      short loc_78E15E
0x78E104: jz      short loc_78E151
0x78E106: cmp     eax, 3E8Eh
0x78E10B: jz      short loc_78E13B
0x78E10D: cmp     eax, 4650h
0x78E112: jz      short loc_78E12B
0x78E114: cmp     eax, 4A38h
0x78E119: jnz     short loc_78E171
0x78E11B: lea     eax, [ebp+var_2C]
0x78E11E: push    eax
0x78E11F: mov     ecx, edi
0x78E121: call    sub_788DA0
0x78E126: jmp     loc_78E1D1
0x78E12B: lea     ecx, [ebp+var_2C]
0x78E12E: push    ecx
0x78E12F: mov     ecx, edi
0x78E131: call    sub_787400
0x78E136: jmp     loc_78E1D1
0x78E13B: lea     ecx, [ebp+var_2C]
0x78E13E: call    sub_78EB10
0x78E143: fstp    [ebp+arg_4]
0x78E146: fld     [ebp+arg_4]
0x78E149: fstp    dword ptr [edi+28h]
0x78E14C: jmp     loc_78E1D1
0x78E151: lea     edx, [ebp+var_2C]
0x78E154: push    edx
0x78E155: mov     ecx, edi
0x78E157: call    loc_78AB60
0x78E15C: jmp     short loc_78E1D1
0x78E15E: sub     eax, 5208h
0x78E163: jz      short loc_78E1BD
0x78E165: sub     eax, 1
0x78E168: jz      short loc_78E1A7
0x78E16A: sub     eax, 3E7h
0x78E16F: jz      short loc_78E175
0x78E171: mov     bl, 1
0x78E173: jmp     short loc_78E1D1
0x78E175: mov     eax, [ebp+var_2C]
0x78E178: mov     ecx, [ebp+var_24]
0x78E17B: mov     esi, eax
0x78E17D: add     eax, 1
0x78E180: test    ecx, ecx
0x78E182: mov     [ebp+var_2C], eax
0x78E185: jz      short loc_78E190
0x78E187: mov     eax, [ebp+var_20]
0x78E18A: sub     eax, ecx
0x78E18C: cmp     esi, eax
0x78E18E: jb      short loc_78E195
0x78E190: call    __invalid_parameter_noinfo
0x78E195: mov     eax, [ebp+var_24]
0x78E198: cmp     byte ptr [eax+esi], 0
0x78E19C: setnz   cl
0x78E19F: mov     ds:0B429C8h, cl
0x78E1A5: jmp     short loc_78E1D1
0x78E1A7: lea     ecx, [ebp+var_2C]
0x78E1AA: call    sub_78EB10
0x78E1AF: fstp    [ebp+arg_4]
0x78E1B2: mov     eax, [edi+10h]
0x78E1B5: fld     [ebp+arg_4]
0x78E1B8: fstp    dword ptr [eax+40h]
0x78E1BB: jmp     short loc_78E1D1
0x78E1BD: lea     ecx, [ebp+var_2C]
0x78E1C0: call    sub_78EB10
0x78E1C5: fstp    [ebp+arg_4]
0x78E1C8: mov     eax, [edi+10h]
0x78E1CB: fld     [ebp+arg_4]
0x78E1CE: fstp    dword ptr [eax+3Ch]
0x78E1D1: mov     ecx, [ebp+var_24]
0x78E1D4: test    ecx, ecx
0x78E1D6: jz      short loc_78E1F2
0x78E1D8: mov     eax, [ebp+var_20]
0x78E1DB: sub     eax, ecx
0x78E1DD: cmp     [ebp+var_2C], eax
0x78E1E0: jnb     short loc_78E1F2
0x78E1E2: lea     ecx, [ebp+var_2C]
0x78E1E5: call    sub_78EB40
0x78E1EA: test    bl, bl
0x78E1EC: jz      loc_78E012
0x78E1F2: mov     eax, [edi+0Ch]
0x78E1F5: mov     eax, [eax]
0x78E1F7: push    eax
0x78E1F8: mov     ecx, edi
0x78E1FA: call    sub_78B320
0x78E1FF: mov     edx, [edi+0Ch]
0x78E202: mov     eax, [edx+38h]
0x78E205: push    eax
0x78E206: mov     ecx, edi
0x78E208: call    sub_78B440
0x78E20D: mov     eax, [edi+0Ch]
0x78E210: mov     eax, [eax+78h]
0x78E213: push    eax
0x78E214: mov     ecx, edi
0x78E216: call    sub_78B560
0x78E21B: mov     ecx, [edi]
0x78E21D: mov     eax, [ecx+0F0h]
0x78E223: mov     ecx, [edi+5Ch]
0x78E226: mov     [edi+48h], eax
0x78E229: call    ValueModifierEffect_GetAV
0x78E22E: cmp     dword ptr [edi+18h], 2
0x78E232: mov     [edi+3Ch], eax
0x78E235: jnz     short loc_78E247
0x78E237: fld     dword ptr ds:0A3D65Ch
0x78E23D: mov     dword ptr [edi+18h], 1
0x78E244: fstp    dword ptr [edi+28h]
0x78E247: movzx   edx, word ptr ds:0B42A10h
0x78E24E: mov     ecx, [edi+10h]
0x78E251: push    edx
0x78E252: push    0
0x78E254: call    sub_793C40
0x78E259: mov     [ebp+var_11], 1
0x78E25D: mov     eax, [ebp+var_24]
0x78E260: test    eax, eax
0x78E262: jz      short loc_78E26D
0x78E264: push    eax
0x78E265: call    FormHeapFree
0x78E26A: add     esp, 4
0x78E26D: mov     al, [ebp+var_11]
0x78E270: mov     ecx, [ebp+var_C]
0x78E273: mov     large fs:0, ecx
0x78E27A: pop     ecx
0x78E27B: pop     edi
0x78E27C: pop     esi
0x78E27D: pop     ebx
0x78E27E: mov     esp, ebp
0x78E280: pop     ebp
0x78E281: retn    8
0x78E284: mov     ecx, [ebp+var_18]
0x78E287: mov     eax, [ecx]
0x78E289: mov     edx, [eax+4]
0x78E28C: call    edx
0x78E28E: push    eax
0x78E28F: push    offset aCspeedtreer_19; "CSpeedTreeRT::LoadTree"
0x78E294: push    offset aSFailedS; "%s - failed [%s]"
0x78E299: lea     esi, [ebp+var_34]
0x78E29C: call    sub_7A54A0
0x78E2A1: add     esp, 0Ch
0x78E2A4: cmp     dword ptr [eax+18h], 10h
0x78E2A8: mov     byte ptr [ebp+var_4], 3
0x78E2AC: jb      short loc_78E2B3
0x78E2AE: mov     eax, [eax+4]
0x78E2B1: jmp     short loc_78E2B6
0x78E2B3: add     eax, 4
0x78E2B6: push    eax; Src
0x78E2B7: call    sub_7895E0
0x78E2BC: add     esp, 4
0x78E2BF: lea     ecx, [ebp+var_34]
0x78E2C2: call    sub_79AB00
0x78E2C7: mov     eax, offset loc_78E2CD
0x78E2CC: retn
0x78E2CD: jmp     short loc_78E26D
0x78E2CF: push    offset aCspeedtreer_19; "CSpeedTreeRT::LoadTree"
0x78E2D4: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78E2D9: lea     esi, [ebp+var_50]
0x78E2DC: call    sub_7A54A0
0x78E2E1: add     esp, 8
0x78E2E4: cmp     dword ptr [eax+18h], 10h
0x78E2E8: mov     byte ptr [ebp+var_4], 4
0x78E2EC: jb      short loc_78E2F3
0x78E2EE: mov     eax, [eax+4]
0x78E2F1: jmp     short loc_78E2F6
0x78E2F3: add     eax, 4
0x78E2F6: push    eax; Src
0x78E2F7: call    sub_7895E0
0x78E2FC: add     esp, 4
0x78E2FF: lea     ecx, [ebp+var_50]
0x78E302: call    sub_79AB00
0x78E307: mov     eax, offset loc_78E26D
0x78E30C: retn
