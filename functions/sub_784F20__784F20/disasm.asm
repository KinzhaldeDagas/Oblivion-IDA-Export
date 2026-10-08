0x784F20: mov     eax, [esp+left]; Constructs one 0x30-byte cache-map node: installs left/parent/right links, copies the 28-byte small-string key and stBezierSpline* value from the pair, then writes color and clears isNil.
0x784F24: mov     edx, [esp+right]
0x784F28: push    ebp
0x784F29: mov     ebp, [esp+4+value]
0x784F2D: push    esi
0x784F2E: push    edi
0x784F2F: mov     esi, ecx
0x784F31: mov     ecx, [esp+0Ch+parent]
0x784F35: push    0FFFFFFFFh; count
0x784F37: mov     [esi+4], ecx
0x784F3A: lea     edi, [esi+0Ch]
0x784F3D: mov     [esi], eax
0x784F3F: mov     [esi+8], edx
0x784F42: push    0; offset
0x784F44: mov     dword ptr [edi+18h], 0Fh
0x784F4B: mov     dword ptr [edi+14h], 0
0x784F52: push    ebp; source
0x784F53: mov     ecx, edi; this
0x784F55: mov     byte ptr [edi+4], 0
0x784F59: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x784F5E: mov     eax, [ebp+1Ch]
0x784F61: mov     cl, [esp+0Ch+color]
0x784F65: mov     [edi+1Ch], eax
0x784F68: pop     edi
0x784F69: mov     [esi+2Ch], cl
0x784F6C: mov     byte ptr [esi+2Dh], 0
0x784F70: mov     eax, esi
0x784F72: pop     esi
0x784F73: pop     ebp
0x784F74: retn    14h
