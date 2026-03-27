0x7D79C0: push    0FFFFFFFFh
0x7D79C2: push    offset ??0TextureEffectData@BSShaderPPLightingProperty@@QAE@XZ_SEH
0x7D79C7: mov     eax, large fs:0
0x7D79CD: push    eax
0x7D79CE: push    ecx
0x7D79CF: push    ebp
0x7D79D0: push    esi
0x7D79D1: push    edi
0x7D79D2: mov     eax, ds:0B30AACh
0x7D79D7: xor     eax, esp
0x7D79D9: push    eax
0x7D79DA: lea     eax, [esp+20h+var_C]
0x7D79DE: mov     large fs:0, eax
0x7D79E4: mov     edi, ecx
0x7D79E6: mov     [esp+20h+var_10], edi
0x7D79EA: mov     dword ptr [edi], offset ??_7TextureEffectData@BSShaderPPLightingProperty@@6B@; const BSShaderPPLightingProperty::TextureEffectData::`vftable'
0x7D79F0: mov     esi, [edi+8]
0x7D79F3: test    esi, esi
0x7D79F5: mov     ebp, ds:0A2807Ch
0x7D79FB: mov     [esp+20h+var_4], 1
0x7D7A03: jz      short loc_7D7A24
0x7D7A05: lea     eax, [esi+4]
0x7D7A08: push    eax; lpAddend
0x7D7A09: call    ebp ; InterlockedDecrement
0x7D7A0B: test    eax, eax
0x7D7A0D: jnz     short loc_7D7A1D
0x7D7A0F: test    esi, esi
0x7D7A11: jz      short loc_7D7A1D
0x7D7A13: mov     edx, [esi]
0x7D7A15: mov     eax, [edx]
0x7D7A17: push    1
0x7D7A19: mov     ecx, esi
0x7D7A1B: call    eax
0x7D7A1D: mov     dword ptr [edi+8], 0
0x7D7A24: mov     esi, [edi+8]
0x7D7A27: test    esi, esi
0x7D7A29: mov     byte ptr [esp+20h+var_4], 0
0x7D7A2E: jz      short loc_7D7A48
0x7D7A30: lea     ecx, [esi+4]
0x7D7A33: push    ecx; lpAddend
0x7D7A34: call    ebp ; InterlockedDecrement
0x7D7A36: test    eax, eax
0x7D7A38: jnz     short loc_7D7A48
0x7D7A3A: test    esi, esi
0x7D7A3C: jz      short loc_7D7A48
0x7D7A3E: mov     edx, [esi]
0x7D7A40: mov     eax, [edx]
0x7D7A42: push    1
0x7D7A44: mov     ecx, esi
0x7D7A46: call    eax
0x7D7A48: push    offset NiRefObject_objcount; lpAddend
0x7D7A4D: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7D7A53: call    ebp ; InterlockedDecrement
0x7D7A55: mov     ecx, dword ptr [esp+20h+var_C]
0x7D7A59: mov     large fs:0, ecx
0x7D7A60: pop     ecx
0x7D7A61: pop     edi
0x7D7A62: pop     esi
0x7D7A63: pop     ebp
0x7D7A64: add     esp, 10h
0x7D7A67: retn
