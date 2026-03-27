0x6A3310: push    0FFFFFFFFh
0x6A3312: push    offset ??0NonActorMagicCaster@@QAE@XZ_SEH
0x6A3317: mov     eax, large fs:0
0x6A331D: push    eax
0x6A331E: push    ecx
0x6A331F: push    ebx
0x6A3320: push    esi
0x6A3321: push    edi
0x6A3322: mov     eax, ds:0B30AACh
0x6A3327: xor     eax, esp
0x6A3329: push    eax
0x6A332A: lea     eax, [esp+20h+var_C]
0x6A332E: mov     large fs:0, eax
0x6A3334: mov     esi, ecx
0x6A3336: mov     [esp+20h+var_10], esi
0x6A333A: xor     ebx, ebx
0x6A333C: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x6A3342: mov     byte ptr [esi+4], 3Ah ; ':'
0x6A3346: mov     [esi+8], ebx
0x6A3349: lea     edi, [esi+0Ch]
0x6A334C: mov     ecx, edi
0x6A334E: mov     [esp+20h+var_4], ebx
0x6A3352: call    MagicTarget_constr
0x6A3357: mov     eax, [esp+20h+arg_0]
0x6A335B: mov     dword ptr [esi], offset ??_7NonActorMagicTarget@@6BNonActorMagicTarget@@@; const NonActorMagicTarget::`vftable'{for `NonActorMagicTarget'}
0x6A3361: mov     dword ptr [edi], offset ??_7NonActorMagicTarget@@6BMagicTarget@@@; const NonActorMagicTarget::`vftable'{for `MagicTarget'}
0x6A3367: mov     [esi+18h], ebx
0x6A336A: mov     [esi+1Ch], ebx
0x6A336D: mov     [esi+14h], eax
0x6A3370: mov     eax, esi
0x6A3372: mov     ecx, [esp+20h+var_C]
0x6A3376: mov     large fs:0, ecx
0x6A337D: pop     ecx
0x6A337E: pop     edi
0x6A337F: pop     esi
0x6A3380: pop     ebx
0x6A3381: add     esp, 10h
0x6A3384: retn    4
