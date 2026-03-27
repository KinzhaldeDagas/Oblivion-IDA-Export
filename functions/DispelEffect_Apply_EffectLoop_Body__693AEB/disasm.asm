0x693AEB: mov     esi, [esi]
0x693AED: test    esi, esi
0x693AEF: jz      short DispelEffect_Apply___EffectLoop_Next
0x693AF1: cmp     esi, ebp
0x693AF3: jz      short DispelEffect_Apply___EffectLoop_Next
0x693AF5: mov     edi, [esi+8]
0x693AF8: mov     edx, [edi]
0x693AFA: mov     eax, [edx+18h]
0x693AFD: mov     ecx, edi
0x693AFF: call    eax
0x693B01: test    eax, eax
0x693B03: jnz     short DispelEffect_Apply___EffectLoop_Next
0x693B05: mov     al, [esp+arg_F]
0x693B09: fld     dword ptr [ebp+18h]
0x693B0C: mov     edx, [edi+0Ch]
0x693B0F: fstp    [esp+arg_14]
0x693B13: mov     edx, [edx]
0x693B15: neg     al
0x693B17: lea     ecx, [edi+0Ch]
0x693B1A: sbb     eax, eax
0x693B1C: and     eax, [esp+arg_10]
0x693B20: push    eax
0x693B21: call    edx
0x693B23: fld     dword ptr ds:0B380D8h
0x693B29: fmul    [esp+arg_14]
0x693B2D: fcompp
0x693B2F: fnstsw  ax
0x693B31: test    ah, 1
0x693B34: jnz     short DispelEffect_Apply___EffectLoop_Next
0x693B36: push    0
0x693B38: mov     ecx, esi
0x693B3A: call    ActiveEffect_Base_Remove
