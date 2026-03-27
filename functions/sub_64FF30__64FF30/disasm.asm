0x64FF30: push    ecx
0x64FF31: push    ebx
0x64FF32: push    ebp
0x64FF33: push    esi
0x64FF34: push    edi
0x64FF35: mov     edi, ecx
0x64FF37: mov     eax, [edi]
0x64FF39: mov     edx, [eax+184h]
0x64FF3F: call    edx
0x64FF41: mov     esi, eax
0x64FF43: mov     ecx, esi
0x64FF45: call    sub_779480
0x64FF4A: mov     ecx, esi
0x64FF4C: mov     [esp+14h+var_4], eax
0x64FF50: call    NiDX9TextureData__GetLevels
0x64FF55: mov     ebp, [esp+14h+arg_0]
0x64FF59: mov     ebx, eax
0x64FF5B: cmp     ebp, ebx
0x64FF5D: jnz     short loc_64FF63
0x64FF5F: mov     ebx, [esp+14h+var_4]
0x64FF63: fldz
0x64FF65: fcomp   dword ptr [esi+44h]
0x64FF68: fnstsw  ax
0x64FF6A: test    ah, 5
0x64FF6D: jp      short loc_64FF83
0x64FF6F: fld     dword ptr [esi+44h]
0x64FF72: pop     edi
0x64FF73: fsub    dword ptr ds:0B33E9Ch
0x64FF79: fstp    dword ptr [esi+44h]
0x64FF7C: pop     esi
0x64FF7D: pop     ebp
0x64FF7E: pop     ebx
0x64FF7F: pop     ecx
0x64FF80: retn    4
0x64FF83: mov     eax, [edi]
0x64FF85: mov     edx, [eax+0C0h]
0x64FF8B: mov     ecx, edi
0x64FF8D: call    edx
0x64FF8F: test    al, al
0x64FF91: jz      short loc_64FFD6
0x64FF93: mov     eax, [ebp+0]
0x64FF96: mov     edx, [eax+30Ch]
0x64FF9C: mov     ecx, ebp
0x64FF9E: call    edx
0x64FFA0: mov     ecx, ebx
0x64FFA2: call    sub_5E0380
0x64FFA7: mov     ecx, ebp
0x64FFA9: mov     esi, eax
0x64FFAB: call    sub_5E0380
0x64FFB0: cmp     esi, eax
0x64FFB2: jnz     short loc_64FFC0
0x64FFB4: mov     eax, [ebx]
0x64FFB6: mov     edx, [eax+30Ch]
0x64FFBC: mov     ecx, ebx
0x64FFBE: call    edx
0x64FFC0: mov     eax, [edi]
0x64FFC2: mov     edx, [eax+0BCh]
0x64FFC8: push    0
0x64FFCA: mov     ecx, edi
0x64FFCC: call    edx
0x64FFCE: pop     edi
0x64FFCF: pop     esi
0x64FFD0: pop     ebp
0x64FFD1: pop     ebx
0x64FFD2: pop     ecx
0x64FFD3: retn    4
0x64FFD6: push    0; AnimSequenceSingle *
0x64FFD8: mov     ecx, esi
0x64FFDA: call    sub_6267A0
0x64FFDF: pop     edi
0x64FFE0: pop     esi
0x64FFE1: pop     ebp
0x64FFE2: pop     ebx
0x64FFE3: pop     ecx
0x64FFE4: retn    4
