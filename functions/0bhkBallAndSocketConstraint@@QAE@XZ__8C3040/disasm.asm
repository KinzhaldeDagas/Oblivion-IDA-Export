0x8C3040: push    0FFFFFFFFh
0x8C3042: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8C3047: mov     eax, large fs:0
0x8C304D: push    eax
0x8C304E: push    ecx
0x8C304F: push    ebp
0x8C3050: push    esi
0x8C3051: push    edi
0x8C3052: mov     eax, ds:0B30AACh
0x8C3057: xor     eax, esp
0x8C3059: push    eax
0x8C305A: lea     eax, [esp+20h+var_C]
0x8C305E: mov     large fs:0, eax
0x8C3064: mov     edi, ecx
0x8C3066: push    offset stru_BA7C80; lpCriticalSection
0x8C306B: call    dword ptr ds:0A2806Ch
0x8C3071: call    dword ptr ds:0A2808Ch
0x8C3077: mov     ebp, 1
0x8C307C: add     ds:0BA7CFCh, ebp
0x8C3082: push    10h; Size
0x8C3084: mov     ds:0BA7CF8h, eax
0x8C3089: call    FormHeapAlloc
0x8C308E: mov     esi, eax
0x8C3090: add     esp, 4
0x8C3093: mov     [esp+20h+var_10], esi
0x8C3097: test    esi, esi
0x8C3099: mov     [esp+20h+var_4], 0
0x8C30A1: jz      short loc_8C30CB
0x8C30A3: mov     ecx, esi; this
0x8C30A5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C30AA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C30B0: mov     dword ptr [esi+0Ch], 0
0x8C30B7: add     ds:0BA7D4Ch, ebp
0x8C30BD: mov     dword ptr [esi], offset ??_7bhkBallAndSocketConstraint@@6B@; const bhkBallAndSocketConstraint::`vftable'
0x8C30C3: add     ds:0BA80E8h, ebp
0x8C30C9: jmp     short loc_8C30CD
0x8C30CB: xor     esi, esi
0x8C30CD: mov     eax, [esp+20h+arg_0]
0x8C30D1: push    eax
0x8C30D2: push    esi
0x8C30D3: mov     ecx, edi
0x8C30D5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C30DD: call    sub_8A0860
0x8C30E2: sub     ds:0BA7CFCh, ebp
0x8C30E8: jnz     short loc_8C30F4
0x8C30EA: mov     dword ptr ds:0BA7CF8h, 0
0x8C30F4: push    offset stru_BA7C80; lpCriticalSection
0x8C30F9: call    dword ptr ds:0A28074h
0x8C30FF: mov     eax, esi
0x8C3101: mov     ecx, [esp+20h+var_C]
0x8C3105: mov     large fs:0, ecx
0x8C310C: pop     ecx
0x8C310D: pop     edi
0x8C310E: pop     esi
0x8C310F: pop     ebp
0x8C3110: add     esp, 10h
0x8C3113: retn    4
