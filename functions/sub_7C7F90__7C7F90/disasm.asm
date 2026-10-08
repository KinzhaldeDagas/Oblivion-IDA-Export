0x7C7F90: push    esi; Lock-protected wrapper for recursive point-light registration/removal across a NiNode subtree.
0x7C7F91: push    edi
0x7C7F92: mov     edi, [esp+8+root]
0x7C7F96: test    edi, edi
0x7C7F98: mov     esi, ecx
0x7C7F9A: jz      short loc_7C7FF6
0x7C7F9C: push    ebx
0x7C7F9D: xor     bl, bl
0x7C7F9F: cmp     ds:0B43384h, bl
0x7C7FA5: jz      short loc_7C7FC6
0x7C7FA7: push    offset unk_B43400; lpCriticalSection
0x7C7FAC: call    dword ptr ds:0A2806Ch
0x7C7FB2: call    dword ptr ds:0A2808Ch
0x7C7FB8: add     dword ptr ds:0B4347Ch, 1
0x7C7FBF: mov     ds:0B43478h, eax
0x7C7FC4: mov     bl, 1
0x7C7FC6: mov     eax, dword ptr [esp+0Ch+removeExisting]
0x7C7FCA: push    eax; removeExisting
0x7C7FCB: push    edi; root
0x7C7FCC: mov     ecx, esi; self
0x7C7FCE: call    ShadowSceneNode_RegisterOrRemovePointLightsRecursive; Recursively traverse NiNode children. For each object matching the retail point-light RTTI target, either remove its full-list entry or register it with trackBackingPosition=true.
0x7C7FD3: test    bl, bl
0x7C7FD5: pop     ebx
0x7C7FD6: jz      short loc_7C7FF6
0x7C7FD8: sub     dword ptr ds:0B4347Ch, 1
0x7C7FDF: jnz     short loc_7C7FEB
0x7C7FE1: mov     dword ptr ds:0B43478h, 0
0x7C7FEB: push    offset unk_B43400; lpCriticalSection
0x7C7FF0: call    dword ptr ds:0A28074h
0x7C7FF6: pop     edi
0x7C7FF7: pop     esi
0x7C7FF8: retn    8
