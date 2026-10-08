0x56CAA0: push    0FFFFFFFFh; [Verified] BSTempEffectDecal destructor unregisters its DECAL_DATA payload from the target BSShaderLightingProperty list via BSShaderLightingProperty_RemoveDecalData before releasing the target NiProperty at payload+0x48. It then releases the texture/property members and frees the 0x4C DECAL_DATA payload.
0x56CAA2: push    offset ??1BSTempEffectDecal@@UAE@XZ_SEH
0x56CAA7: mov     eax, large fs:0
0x56CAAD: push    eax
0x56CAAE: push    ecx
0x56CAAF: push    ebx
0x56CAB0: push    esi
0x56CAB1: push    edi
0x56CAB2: mov     eax, ds:0B30AACh
0x56CAB7: xor     eax, esp
0x56CAB9: push    eax
0x56CABA: lea     eax, [esp+20h+var_C]
0x56CABE: mov     large fs:0, eax
0x56CAC4: mov     edi, ecx
0x56CAC6: mov     [esp+20h+var_10], edi
0x56CACA: mov     dword ptr [edi], offset ??_7BSTempEffectDecal@@6B@; const BSTempEffectDecal::`vftable'
0x56CAD0: mov     eax, [edi+18h]
0x56CAD3: mov     ecx, [eax+48h]; this
0x56CAD6: test    ecx, ecx
0x56CAD8: mov     [esp+20h+var_4], 0
0x56CAE0: jz      short loc_56CAE8
0x56CAE2: push    eax; data
0x56CAE3: call    BSShaderLightingProperty_RemoveDecalData; [Verified] Finds a DECAL_DATA* by payload identity in this property's list at +0x80, removes/frees the matching list node via the generic NiTPointerList removal routine, decrements +0x8C, and resets cached render-pass state at +0x24. Uses property+0x90 as its temporary next-node cursor; no payload ownership release occurs here.
0x56CAE8: mov     esi, [edi+18h]
0x56CAEB: mov     ebx, [esi+48h]
0x56CAEE: add     esi, 48h ; 'H'
0x56CAF1: test    ebx, ebx
0x56CAF3: jz      short loc_56CB17
0x56CAF5: lea     eax, [ebx+4]
0x56CAF8: push    eax; lpAddend
0x56CAF9: call    dword ptr ds:0A2807Ch
0x56CAFF: test    eax, eax
0x56CB01: jnz     short loc_56CB11
0x56CB03: test    ebx, ebx
0x56CB05: jz      short loc_56CB11
0x56CB07: mov     edx, [ebx]
0x56CB09: mov     eax, [edx]
0x56CB0B: push    1
0x56CB0D: mov     ecx, ebx
0x56CB0F: call    eax
0x56CB11: mov     dword ptr [esi], 0
0x56CB17: mov     esi, [edi+18h]
0x56CB1A: test    esi, esi
0x56CB1C: jz      short loc_56CB2E
0x56CB1E: mov     ecx, esi; this
0x56CB20: call    DECAL_DATA_ReleaseOwnedReferences; [Verified] DECAL_DATA_ReleaseOwnedReferences decrements/releases sourceTexture_00 and targetShaderProperty_48. Directly confirmed by its DECAL_DATA-list owner and by BSTempEffectDecal/BSTempEffectGeometryDecal destructors, which free a 0x4C payload immediately afterward.
0x56CB25: push    esi
0x56CB26: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x56CB2B: add     esp, 4
0x56CB2E: mov     ecx, edi; self
0x56CB30: mov     [esp+20h+var_4], 0FFFFFFFFh
0x56CB38: call    BSTempEffect_Destructor; Verified BSTempEffect destructor: resets duration, elapsed, parent cell and initializeCallbackDone (+0x14), restores base vtable, then invokes NiRefObject destructor.
0x56CB3D: mov     ecx, dword ptr [esp+20h+var_C]
0x56CB41: mov     large fs:0, ecx
0x56CB48: pop     ecx
0x56CB49: pop     edi
0x56CB4A: pop     esi
0x56CB4B: pop     ebx
0x56CB4C: add     esp, 10h
0x56CB4F: retn
0x9BDA00: mov     ecx, [ebp-10h]; self
0x9BDA03: jmp     BSTempEffect_Destructor; Verified BSTempEffect destructor: resets duration, elapsed, parent cell and initializeCallbackDone (+0x14), restores base vtable, then invokes NiRefObject destructor.
0x9BDA08: mov     edx, [esp+arg_4]
0x9BDA0C: lea     eax, [edx-10h]
0x9BDA0F: mov     ecx, [edx-14h]
0x9BDA12: xor     ecx, eax
0x9BDA14: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BDA19: mov     eax, offset stru_AE7308
0x9BDA1E: jmp     ___CxxFrameHandler3
