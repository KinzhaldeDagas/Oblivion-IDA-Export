0x8A0FA0: push    0FFFFFFFFh
0x8A0FA2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8A0FA7: mov     eax, large fs:0
0x8A0FAD: push    eax
0x8A0FAE: push    ecx
0x8A0FAF: push    ebx
0x8A0FB0: push    ebp
0x8A0FB1: push    esi
0x8A0FB2: push    edi
0x8A0FB3: mov     eax, ds:0B30AACh
0x8A0FB8: xor     eax, esp
0x8A0FBA: push    eax
0x8A0FBB: lea     eax, [esp+24h+var_C]
0x8A0FBF: mov     large fs:0, eax
0x8A0FC5: mov     edi, ecx
0x8A0FC7: push    offset stru_BA7C80; lpCriticalSection
0x8A0FCC: call    dword ptr ds:0A2806Ch
0x8A0FD2: call    dword ptr ds:0A2808Ch
0x8A0FD8: mov     ebp, 1
0x8A0FDD: add     ds:0BA7CFCh, ebp
0x8A0FE3: push    14h; Size
0x8A0FE5: mov     ds:0BA7CF8h, eax
0x8A0FEA: call    FormHeapAlloc
0x8A0FEF: mov     esi, eax
0x8A0FF1: add     esp, 4
0x8A0FF4: mov     [esp+24h+var_10], esi
0x8A0FF8: xor     ebx, ebx
0x8A0FFA: cmp     esi, ebx
0x8A0FFC: mov     [esp+24h+var_4], ebx
0x8A1000: jz      short loc_8A1035
0x8A1002: mov     ecx, esi; this
0x8A1004: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8A1009: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8A100F: mov     [esi+0Ch], ebx
0x8A1012: mov     [esi+10h], ebx
0x8A1015: add     ds:0BA7D70h, ebp
0x8A101B: mov     dword ptr [esi], offset ??_7bhkShapeCollection@@6B@; const bhkShapeCollection::`vftable'
0x8A1021: add     ds:0BA816Ch, ebp
0x8A1027: mov     dword ptr [esi], offset ??_7bhkListShape@@6B@; const bhkListShape::`vftable'
0x8A102D: add     ds:0BA7D58h, ebp
0x8A1033: jmp     short loc_8A1037
0x8A1035: xor     esi, esi
0x8A1037: mov     ecx, [esp+24h+arg_0]
0x8A103B: mov     eax, [edi]
0x8A103D: mov     edx, [eax+80h]
0x8A1043: push    ecx
0x8A1044: push    esi
0x8A1045: mov     ecx, edi
0x8A1047: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8A104F: call    edx
0x8A1051: sub     ds:0BA7CFCh, ebp
0x8A1057: jnz     short loc_8A105F
0x8A1059: mov     ds:0BA7CF8h, ebx
0x8A105F: push    offset stru_BA7C80; lpCriticalSection
0x8A1064: call    dword ptr ds:0A28074h
0x8A106A: mov     eax, esi
0x8A106C: mov     ecx, dword ptr [esp+24h+var_C]
0x8A1070: mov     large fs:0, ecx
0x8A1077: pop     ecx
0x8A1078: pop     edi
0x8A1079: pop     esi
0x8A107A: pop     ebp
0x8A107B: pop     ebx
0x8A107C: add     esp, 10h
0x8A107F: retn    4
