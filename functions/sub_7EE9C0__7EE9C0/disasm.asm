0x7EE9C0: push    0FFFFFFFFh
0x7EE9C2: push    offset SEH_803C90
0x7EE9C7: mov     eax, large fs:0
0x7EE9CD: push    eax
0x7EE9CE: push    ecx
0x7EE9CF: push    esi
0x7EE9D0: push    edi
0x7EE9D1: mov     eax, ds:0B30AACh
0x7EE9D6: xor     eax, esp
0x7EE9D8: push    eax
0x7EE9D9: lea     eax, [esp+1Ch+var_C]
0x7EE9DD: mov     large fs:0, eax
0x7EE9E3: mov     edi, ecx
0x7EE9E5: cmp     dword ptr [edi+2Ch], 0
0x7EE9E9: lea     esi, [edi+2Ch]
0x7EE9EC: jnz     short loc_7EEA52
0x7EE9EE: push    34h ; '4'; Size
0x7EE9F0: call    FormHeapAlloc
0x7EE9F5: add     esp, 4
0x7EE9F8: mov     [esp+1Ch+var_10], eax
0x7EE9FC: test    eax, eax
0x7EE9FE: mov     [esp+1Ch+var_4], 0
0x7EEA06: jz      short loc_7EEA15
0x7EEA08: mov     ecx, [edi+14h]
0x7EEA0B: push    ecx
0x7EEA0C: mov     ecx, eax
0x7EEA0E: call    NiD3DShaderCostantMapPixel__Construct
0x7EEA13: jmp     short loc_7EEA17
0x7EEA15: xor     eax, eax
0x7EEA17: push    eax; a2
0x7EEA18: mov     ecx, esi; this
0x7EEA1A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EEA22: call    NiSmartPointer_Set??
0x7EEA27: mov     ecx, [esi]
0x7EEA29: mov     edx, [ecx]
0x7EEA2B: mov     edx, [edx+18h]
0x7EEA2E: push    0
0x7EEA30: lea     eax, [edi+0B0h]
0x7EEA36: push    eax
0x7EEA37: push    4
0x7EEA39: push    0Ch
0x7EEA3B: push    offset EmptyString
0x7EEA40: push    1
0x7EEA42: push    0
0x7EEA44: push    0
0x7EEA46: push    10000006h
0x7EEA4B: push    offset aAmbientColor_0; "ambient color"
0x7EEA50: call    edx
0x7EEA52: cmp     dword ptr [edi+30h], 0
0x7EEA56: lea     esi, [edi+30h]
0x7EEA59: jnz     loc_7EEBB6
0x7EEA5F: push    34h ; '4'; Size
0x7EEA61: call    FormHeapAlloc
0x7EEA66: add     esp, 4
0x7EEA69: mov     [esp+1Ch+var_10], eax
0x7EEA6D: test    eax, eax
0x7EEA6F: mov     [esp+1Ch+var_4], 1
0x7EEA77: jz      short loc_7EEA86
0x7EEA79: mov     ecx, [edi+14h]
0x7EEA7C: push    ecx
0x7EEA7D: mov     ecx, eax
0x7EEA7F: call    NiD3DShaderCostantMapVertex__Construct
0x7EEA84: jmp     short loc_7EEA88
0x7EEA86: xor     eax, eax
0x7EEA88: push    eax; a2
0x7EEA89: mov     ecx, esi; this
0x7EEA8B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EEA93: call    NiSmartPointer_Set??
0x7EEA98: mov     ecx, [esi]
0x7EEA9A: mov     edx, [ecx]
0x7EEA9C: mov     eax, [edx+18h]
0x7EEA9F: push    0
0x7EEAA1: push    0
0x7EEAA3: push    0
0x7EEAA5: push    0
0x7EEAA7: push    0
0x7EEAA9: push    4
0x7EEAAB: push    0
0x7EEAAD: push    0
0x7EEAAF: push    20000009h
0x7EEAB4: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7EEAB9: call    eax
0x7EEABB: mov     ecx, [esi]
0x7EEABD: mov     edx, [ecx]
0x7EEABF: mov     eax, [edx+18h]
0x7EEAC2: push    0
0x7EEAC4: push    offset dword_B46710
0x7EEAC9: push    4
0x7EEACB: push    0Ch
0x7EEACD: push    offset EmptyString
0x7EEAD2: push    1
0x7EEAD4: push    8
0x7EEAD6: push    0
0x7EEAD8: push    10000006h
0x7EEADD: push    offset aEyePos; "eye pos"
0x7EEAE2: call    eax
0x7EEAE4: mov     ecx, [esi]
0x7EEAE6: mov     edx, [ecx]
0x7EEAE8: mov     edx, [edx+18h]
0x7EEAEB: push    0
0x7EEAED: lea     eax, [edi+7Ch]
0x7EEAF0: push    eax
0x7EEAF1: push    4
0x7EEAF3: push    0Ch
0x7EEAF5: push    offset EmptyString
0x7EEAFA: push    1
0x7EEAFC: push    9
0x7EEAFE: push    0
0x7EEB00: push    10000006h
0x7EEB05: push    offset aVelocity; "velocity"
0x7EEB0A: call    edx
0x7EEB0C: mov     ecx, [esi]
0x7EEB0E: mov     eax, [ecx]
0x7EEB10: mov     eax, [eax+18h]
0x7EEB13: push    0
0x7EEB15: lea     edx, [edi+88h]
0x7EEB1B: push    edx
0x7EEB1C: push    4
0x7EEB1E: push    0Ch
0x7EEB20: push    offset EmptyString
0x7EEB25: push    1
0x7EEB27: push    0Ah
0x7EEB29: push    0
0x7EEB2B: push    10000006h
0x7EEB30: push    offset aMin
0x7EEB35: call    eax
0x7EEB37: mov     ecx, [esi]
0x7EEB39: mov     edx, [ecx]
0x7EEB3B: mov     edx, [edx+18h]
0x7EEB3E: push    0
0x7EEB40: lea     eax, [edi+94h]
0x7EEB46: push    eax
0x7EEB47: push    4
0x7EEB49: push    0Ch
0x7EEB4B: push    offset EmptyString
0x7EEB50: push    1
0x7EEB52: push    0Bh
0x7EEB54: push    0
0x7EEB56: push    10000006h
0x7EEB5B: push    offset aMax
0x7EEB60: call    edx
0x7EEB62: mov     ecx, [esi]
0x7EEB64: mov     eax, [ecx]
0x7EEB66: push    0
0x7EEB68: add     edi, 0A0h ; ' '
0x7EEB6E: mov     edx, [eax+18h]
0x7EEB71: push    edi
0x7EEB72: push    4
0x7EEB74: push    0Ch
0x7EEB76: push    offset EmptyString
0x7EEB7B: push    1
0x7EEB7D: push    0Ch
0x7EEB7F: push    0
0x7EEB81: push    10000006h
0x7EEB86: push    offset aParams_0; "params"
0x7EEB8B: call    edx
0x7EEB8D: mov     ecx, [esi]
0x7EEB8F: mov     eax, [ecx]
0x7EEB91: mov     edx, [eax+18h]
0x7EEB94: push    0
0x7EEB96: push    offset dword_B466F8
0x7EEB9B: push    4
0x7EEB9D: push    0Ch
0x7EEB9F: push    offset EmptyString
0x7EEBA4: push    1
0x7EEBA6: push    0Dh
0x7EEBA8: push    0
0x7EEBAA: push    10000006h
0x7EEBAF: push    offset aCamUp; "cam up"
0x7EEBB4: call    edx
0x7EEBB6: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7EEBBA: mov     large fs:0, ecx
0x7EEBC1: pop     ecx
0x7EEBC2: pop     edi
0x7EEBC3: pop     esi
0x7EEBC4: add     esp, 10h
0x7EEBC7: retn
