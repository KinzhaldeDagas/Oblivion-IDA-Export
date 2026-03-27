0x4160BC: movzx   ecx, word ptr [edi+6Ch]
0x4160C0: mov     eax, [edi+9Ch]
0x4160C6: push    eax
0x4160C7: push    ecx
0x4160C8: mov     ecx, esi
0x4160CA: call    EffectSetting_SetCounterEffects_duplicate
0x4160CF: mov     edx, [esi+8]
0x4160D2: shr     edx, 0Eh
0x4160D5: test    dl, 1
0x4160D8: jnz     short EffectSetting_CopyFrom___Done
0x4160DA: cmp     dword ptr [esi+0Ch], 0
0x4160DE: jnz     short EffectSetting_CopyFrom___Done
