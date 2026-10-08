0x69E350: push    0FFFFFFFFh
0x69E352: push    offset MagicModelHitEffect_constr_args_SEH
0x69E357: mov     eax, large fs:0
0x69E35D: push    eax
0x69E35E: push    ecx
0x69E35F: push    ebx
0x69E360: push    ebp
0x69E361: push    esi
0x69E362: push    edi
0x69E363: mov     eax, ds:0B30AACh
0x69E368: xor     eax, esp
0x69E36A: push    eax
0x69E36B: lea     eax, [esp+24h+var_C]
0x69E36F: mov     large fs:0, eax
0x69E375: mov     esi, ecx
0x69E377: mov     [esp+24h+var_10], esi
0x69E37B: call    MagicHitEffect_constr; Verified MagicHitEffect constructor starts from the 24-byte BSTempEffect base, nulls ownerActiveEffect (+0x18) and targetReference (+0x1C), zeros elapsedSeconds (+0x20) and bFinished (+0x24), establishing a 40-byte base layout.
0x69E380: xor     ebx, ebx
0x69E382: mov     dword ptr [esi], offset ??_7MagicModelHitEffect@@6B@; Verified (Oblivion): constructor initializes a 0x38-byte derived object. Base occupies 0x00..0x27; +0x29 is player third-person state (verified by read/write in visual placement); +0x2C is state-dependent model path/serialized payload; +0x30 is a refcounted NiAVObject model root; +0x34 remains Unknown. Fallout's MagicModelHitEffect is 0x3C and has separate pFilename/spObject/spTarget/LoadedDataSubBuffer members, so its layout cannot be copied onto Oblivion.
0x69E388: mov     [esp+24h+var_4], ebx
0x69E38C: mov     [esi+30h], ebx
0x69E38F: mov     [esi+34h], ebx
0x69E392: mov     edi, [esi+30h]
0x69E395: cmp     edi, ebx
0x69E397: mov     ebp, ds:0A2807Ch
0x69E39D: mov     byte ptr [esp+24h+var_4], 2
0x69E3A2: jz      short loc_69E3BF
0x69E3A4: lea     eax, [edi+4]
0x69E3A7: push    eax; lpAddend
0x69E3A8: call    ebp ; InterlockedDecrement
0x69E3AA: test    eax, eax
0x69E3AC: jnz     short loc_69E3BC
0x69E3AE: cmp     edi, ebx
0x69E3B0: jz      short loc_69E3BC
0x69E3B2: mov     edx, [edi]
0x69E3B4: mov     eax, [edx]
0x69E3B6: push    1
0x69E3B8: mov     ecx, edi
0x69E3BA: call    eax
0x69E3BC: mov     [esi+30h], ebx
0x69E3BF: mov     edi, [esi+34h]
0x69E3C2: cmp     edi, ebx
0x69E3C4: jz      short loc_69E3E1
0x69E3C6: lea     ecx, [edi+4]
0x69E3C9: push    ecx; lpAddend
0x69E3CA: call    ebp ; InterlockedDecrement
0x69E3CC: test    eax, eax
0x69E3CE: jnz     short loc_69E3DE
0x69E3D0: cmp     edi, ebx
0x69E3D2: jz      short loc_69E3DE
0x69E3D4: mov     edx, [edi]
0x69E3D6: mov     eax, [edx]
0x69E3D8: push    1
0x69E3DA: mov     ecx, edi
0x69E3DC: call    eax
0x69E3DE: mov     [esi+34h], ebx
0x69E3E1: mov     [esi+29h], bl; Verified (Oblivion): derived model byte +0x29 is cleared in construction and later updated/read by model visual placement. Its precise boolean/perspective meaning is Probable.
0x69E3E4: mov     [esi+2Ch], ebx
0x69E3E7: mov     [esi+28h], bl
0x69E3EA: mov     eax, esi
0x69E3EC: mov     ecx, dword ptr [esp+24h+var_C]
0x69E3F0: mov     large fs:0, ecx
0x69E3F7: pop     ecx
0x69E3F8: pop     edi
0x69E3F9: pop     esi
0x69E3FA: pop     ebp
0x69E3FB: pop     ebx
0x69E3FC: add     esp, 10h
0x69E3FF: retn
0x9C5D00: mov     ecx, [ebp-10h]
0x9C5D03: jmp     MagicHitEffect_destr
0x9C5D08: mov     ecx, [ebp-10h]
0x9C5D0B: add     ecx, 30h ; '0'; slot
0x9C5D0E: jmp     NiPointerSlot_Release
0x9C5D13: mov     ecx, [ebp-10h]
0x9C5D16: add     ecx, 34h ; '4'; slot
0x9C5D19: jmp     NiPointerSlot_Release
0x9C5D1E: mov     edx, [esp+arg_4]
0x9C5D22: lea     eax, [edx-14h]
0x9C5D25: mov     ecx, [edx-18h]
0x9C5D28: xor     ecx, eax
0x9C5D2A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5D2F: mov     eax, offset stru_AEE3DC
0x9C5D34: jmp     ___CxxFrameHandler3
