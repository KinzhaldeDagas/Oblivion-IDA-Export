0x6A822C: mov     eax, [esi]
0x6A822E: mov     edx, [eax+44h]
0x6A8231: call    edx
0x6A8233: cmp     eax, 7
0x6A8236: jbe     short loc_6A825E
0x6A8238: mov     eax, [esi]
0x6A823A: mov     edx, [eax+44h]
0x6A823D: mov     ecx, esi
0x6A823F: call    edx
0x6A8241: add     eax, 0FFFFFFF8h
0x6A8244: cmp     eax, 3
0x6A8247: jbe     short loc_6A825E
0x6A8249: mov     eax, [esi]
0x6A824B: mov     edx, [eax+44h]
0x6A824E: mov     ecx, esi
0x6A8250: call    edx
0x6A8252: add     eax, 0FFFFFFF4h
0x6A8255: cmp     eax, 14h
0x6A8258: ja      ValueModifierEffect_GetEffectiveMagnitude___Done
0x6A825E: mov     eax, [esi]
0x6A8260: mov     edx, [eax+44h]
0x6A8263: mov     ecx, esi
0x6A8265: call    edx
0x6A8267: cmp     eax, 0Ah
0x6A826A: jz      short ValueModifierEffect_GetEffectiveMagnitude___Done
0x6A826C: mov     eax, [esi+0Ch]
0x6A826F: mov     ecx, [eax+1Ch]
0x6A8272: cmp     dword ptr [ecx+98h], 45484241h
0x6A827C: jz      short ValueModifierEffect_GetEffectiveMagnitude___Done
0x6A827E: fldz
0x6A8280: fcomp   [esp+arg_8]
0x6A8284: fnstsw  ax
0x6A8286: test    ah, 1
0x6A8289: jnz     short ValueModifierEffect_GetEffectiveMagnitude___Done
0x6A828B: mov     ecx, [esi+20h]; this
0x6A828E: test    ecx, ecx
0x6A8290: push    ebx
0x6A8291: push    edi
0x6A8292: jz      short loc_6A829D
0x6A8294: call    MagicTarget_GetParentActor
0x6A8299: mov     edi, eax
0x6A829B: jmp     short ValueModifierEffect_GetEffectiveMagnitude___TestActualMagnitude
0x6A829D: xor     edi, edi
