0x79B470: push    ebp; Exception-safe uninitialized_copy for SFrondTexture. Normal path placement-copy-constructs [first,last) and returns destination end; the SEH cleanup landing path destroys the constructed prefix and rethrows.
0x79B471: mov     ebp, esp
0x79B473: push    0FFFFFFFFh
0x79B475: push    offset SEH_79B470
0x79B47A: mov     eax, large fs:0
0x79B480: push    eax
0x79B481: sub     esp, 8
0x79B484: push    ebx
0x79B485: push    esi
0x79B486: push    edi
0x79B487: mov     eax, ds:0B30AACh
0x79B48C: xor     eax, ebp
0x79B48E: push    eax
0x79B48F: lea     eax, [ebp+var_C]
0x79B492: mov     large fs:0, eax
0x79B498: mov     [ebp+var_10], esp
0x79B49B: mov     edi, [ebp+destinationFirst]
0x79B49E: mov     ebx, [ebp+last]
0x79B4A1: mov     esi, [ebp+source]
0x79B4A4: mov     [ebp+var_14], edi
0x79B4A7: mov     [ebp+var_4], 0
0x79B4AE: mov     edi, edi
0x79B4B0: cmp     esi, ebx
0x79B4B2: jz      short loc_79B4EE
0x79B4B4: push    esi; source
0x79B4B5: push    edi; this
0x79B4B6: call    OB_SFrondTexture_CopyCtor_010201A0; Oblivion SFrondTexture copy constructor: deep-copies the 28-byte filename string and copies aspectRatio, sizeScale, minAngleOffset, and maxAngleOffset. The 0x2C layout is established by executable accesses; RT 4.1 FrondEngine.h corroborates the member names.
0x79B4BB: add     edi, 2Ch ; ','
0x79B4BE: add     esp, 8
0x79B4C1: mov     [ebp+destinationFirst], edi
0x79B4C4: add     esi, 2Ch ; ','
0x79B4C7: jmp     short loc_79B4B0
0x79B4C9: mov     esi, [ebp+var_14]
0x79B4CC: mov     edi, [ebp+destinationFirst]
0x79B4CF: cmp     esi, edi
0x79B4D1: jz      short loc_79B4E5
0x79B4D3: mov     ebx, [ebp+arg_C]
0x79B4D6: push    esi; this
0x79B4D7: mov     ecx, ebx
0x79B4D9: call    OB_SFrondTexture_Destroy_010201A0; Oblivion SFrondTexture destructor: releases the 28-byte small-string filename when heap-backed (capacity >= 0x10), then resets string length/capacity; scalar fields need no destruction.
0x79B4DE: add     esi, 2Ch ; ','
0x79B4E1: cmp     esi, edi
0x79B4E3: jnz     short loc_79B4D6
0x79B4E5: push    0
0x79B4E7: push    0
0x79B4E9: call    ThrowException??
0x79B4EE: mov     eax, edi
0x79B4F0: mov     ecx, [ebp+var_C]
0x79B4F3: mov     large fs:0, ecx
0x79B4FA: pop     ecx
0x79B4FB: pop     edi
0x79B4FC: pop     esi
0x79B4FD: pop     ebx
0x79B4FE: mov     esp, ebp
0x79B500: pop     ebp
0x79B501: retn
0x9CC230: mov     edx, [esp-4+last]
0x9CC234: lea     eax, [edx+0Ch]
0x9CC237: mov     ecx, [edx-18h]
0x9CC23A: xor     ecx, eax
0x9CC23C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC241: mov     eax, offset stru_AF5350
0x9CC246: jmp     ___CxxFrameHandler3
