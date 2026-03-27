0x5C2F20: push    0FFFFFFFFh
0x5C2F22: push    offset UpdatePlayerHead_SEH
0x5C2F27: mov     eax, large fs:0
0x5C2F2D: push    eax
0x5C2F2E: sub     esp, 78h
0x5C2F31: push    ebp
0x5C2F32: push    esi
0x5C2F33: push    edi
0x5C2F34: mov     eax, ds:0B30AACh
0x5C2F39: xor     eax, esp
0x5C2F3B: push    eax
0x5C2F3C: lea     eax, [esp+94h+var_C]
0x5C2F43: mov     large fs:0, eax
0x5C2F49: mov     ecx, ds:0B333C4h
0x5C2F4F: mov     eax, [ecx]
0x5C2F51: mov     edx, [eax+170h]
0x5C2F57: call    edx
0x5C2F59: mov     eax, [eax+0Ch]
0x5C2F5C: push    eax
0x5C2F5D: call    sub_550240
0x5C2F62: mov     eax, ds:0B333C4h
0x5C2F67: mov     byte ptr ds:0B33D80h, 1
0x5C2F6E: mov     ecx, [eax+58h]
0x5C2F71: mov     edx, [ecx]
0x5C2F73: mov     eax, [edx+5Ch]
0x5C2F76: add     esp, 4
0x5C2F79: call    eax
0x5C2F7B: mov     ecx, ds:0B333C4h
0x5C2F81: mov     ecx, [ecx+58h]
0x5C2F84: mov     edx, [ecx]
0x5C2F86: mov     eax, [edx+31Ch]
0x5C2F8C: push    1
0x5C2F8E: call    eax
0x5C2F90: mov     eax, ds:0B333C4h
0x5C2F95: mov     ecx, [eax+58h]
0x5C2F98: mov     edx, [ecx]
0x5C2F9A: push    eax
0x5C2F9B: mov     eax, [edx+318h]
0x5C2FA1: call    eax
0x5C2FA3: mov     ecx, ds:0B333C4h
0x5C2FA9: mov     edx, [ecx]
0x5C2FAB: mov     eax, [edx+134h]
0x5C2FB1: push    0
0x5C2FB3: call    eax
0x5C2FB5: test    eax, eax
0x5C2FB7: jnz     loc_5C303D
0x5C2FBD: mov     ecx, ds:0B333C4h
0x5C2FC3: mov     edx, [ecx]
0x5C2FC5: push    eax
0x5C2FC6: mov     eax, [edx+130h]
0x5C2FCC: call    eax
0x5C2FCE: test    eax, eax
0x5C2FD0: jnz     short loc_5C303D
0x5C2FD2: mov     ecx, ds:0B333C4h; this
0x5C2FD8: push    eax; a2
0x5C2FD9: call    Actor_GetActorBaseForm
0x5C2FDE: push    0
0x5C2FE0: push    eax
0x5C2FE1: lea     ecx, [esp+9Ch+var_3C]
0x5C2FE5: call    sub_437970
0x5C2FEA: lea     ecx, [esp+94h+var_3C]
0x5C2FEE: mov     [esp+94h+var_4], 0
0x5C2FF9: call    sub_435300
0x5C2FFE: mov     edx, [esp+94h+var_3C]
0x5C3002: mov     eax, [edx+28h]
0x5C3005: lea     ecx, [esp+94h+var_3C]
0x5C3009: call    eax
0x5C300B: mov     ecx, ds:0B333C4h
0x5C3011: push    0
0x5C3013: call    sub_6600D0
0x5C3018: mov     ecx, ds:0B333C4h
0x5C301E: push    eax
0x5C301F: push    ecx
0x5C3020: lea     ecx, [esp+9Ch+var_3C]
0x5C3024: call    sub_4353D0
0x5C3029: lea     ecx, [esp+94h+var_3C]; this
0x5C302D: mov     [esp+94h+var_4], 0FFFFFFFFh
0x5C3038: call    ??1QueuedHead@@UAE@XZ; QueuedHead::~QueuedHead(void)
0x5C303D: mov     ecx, ds:0B333C4h
0x5C3043: push    1
0x5C3045: mov     byte ptr ds:0B33D80h, 0
0x5C304C: call    PlayerCharacter_GetPlayerNode
0x5C3051: cmp     word ptr [eax+0B6h], 0
0x5C3059: ja      short loc_5C305F
0x5C305B: xor     ebp, ebp
0x5C305D: jmp     short loc_5C3067
0x5C305F: mov     edx, [eax+0B0h]
0x5C3065: mov     ebp, [edx]
0x5C3067: push    0
0x5C3069: mov     ecx, 9
0x5C306E: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x5C3073: lea     edi, [esp+98h+var_84]
0x5C3077: rep movsd
0x5C3079: lea     eax, [esp+98h+var_84]
0x5C307D: push    eax
0x5C307E: lea     ecx, [esp+9Ch+var_60]
0x5C3082: push    ecx
0x5C3083: mov     ecx, ds:0B333C4h
0x5C3089: call    sub_4D7C50
0x5C308E: mov     esi, eax
0x5C3090: lea     edi, [ebp+30h]
0x5C3093: mov     ecx, 9
0x5C3098: rep movsd
0x5C309A: mov     ecx, ds:0B33A10h
0x5C30A0: push    5
0x5C30A2: call    sub_434020
0x5C30A7: mov     ecx, dword ptr [esp+94h+var_C]
0x5C30AE: mov     large fs:0, ecx
0x5C30B5: pop     ecx
0x5C30B6: pop     edi
0x5C30B7: pop     esi
0x5C30B8: pop     ebp
0x5C30B9: add     esp, 84h
0x5C30BF: retn
