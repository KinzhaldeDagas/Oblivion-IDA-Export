0x446A10: mov     eax, [ecx+34h]; TES4 authoritative: TES::CastRay. Uses current interior cell's bhkWorld or exterior bhkWorldM; calls bhkWorld raycast vfunc +0x88 with bhkWorldRayCastData. Reusable for climbing wall/ledge probes.
0x446A13: test    eax, eax
0x446A15: jnz     short loc_446A2E
0x446A17: mov     eax, ds:0B06A2Ch
0x446A1C: mov     ecx, [ecx+8]; this
0x446A1F: shr     eax, 1
0x446A21: push    eax; a3
0x446A22: push    eax; a2
0x446A23: call    GetGridEntry
0x446A28: mov     eax, [eax]
0x446A2A: test    eax, eax
0x446A2C: jz      short loc_446A35
0x446A2E: mov     ecx, eax
0x446A30: jmp     loc_4D4E30
0x446A35: xor     eax, eax
0x446A37: retn    4
0x4D4E30: push    esi; Shared CastRay cell-world body. Calls bhkWorld raycast vfunc +0x88 with bhkWorldRayCastData; if hit collidable maps to terrain layer 0x11, returns cell NiNode, otherwise returns hit object via bhkWorldRayCastData helper 0x889CB0.
0x4D4E31: push    edi
0x4D4E32: mov     edi, ecx
0x4D4E34: test    byte ptr [edi+24h], 1
0x4D4E38: jz      short loc_4D4E44
0x4D4E3A: lea     ecx, [edi+28h]
0x4D4E3D: call    sub_424180
0x4D4E42: jmp     short loc_4D4E49
0x4D4E44: mov     eax, ds:0B35C24h
0x4D4E49: test    eax, eax
0x4D4E4B: jz      short loc_4D4EA6
0x4D4E4D: mov     edx, [eax]
0x4D4E4F: mov     esi, [esp+8+arg_0]
0x4D4E53: mov     ecx, eax
0x4D4E55: mov     eax, [edx+88h]
0x4D4E5B: push    esi
0x4D4E5C: call    eax
0x4D4E5E: test    al, al
0x4D4E60: jz      short loc_4D4EA6
0x4D4E62: mov     ecx, esi
0x4D4E64: call    bhkWorldRayCastData_GetHitInfoIfTyped; Raycast data -> low-level hit info helper from root collidable + internal offset; used to inspect collision layer in TES::CastRay.
0x4D4E69: test    eax, eax
0x4D4E6B: jz      short loc_4D4E72
0x4D4E6D: mov     eax, [eax+0Ch]
0x4D4E70: jmp     short loc_4D4E74
0x4D4E72: xor     eax, eax
0x4D4E74: test    eax, eax
0x4D4E76: jz      short loc_4D4E9A
0x4D4E78: mov     eax, [eax+8]
0x4D4E7B: test    eax, eax
0x4D4E7D: jz      short loc_4D4E89
0x4D4E7F: add     eax, 14h
0x4D4E82: jz      short loc_4D4E89
0x4D4E84: mov     eax, [eax+1Ch]
0x4D4E87: jmp     short loc_4D4E8B
0x4D4E89: xor     eax, eax
0x4D4E8B: and     eax, 3Fh
0x4D4E8E: cmp     al, 11h
0x4D4E90: jnz     short loc_4D4E9A
0x4D4E92: mov     eax, [edi+54h]
0x4D4E95: pop     edi
0x4D4E96: pop     esi
0x4D4E97: retn    4
0x4D4E9A: mov     ecx, esi
0x4D4E9C: call    bhkWorldRayCastData_GetHitNiObject; Raycast data -> hit NiAVObject helper via root collidable at +0x50.
0x4D4EA1: pop     edi
0x4D4EA2: pop     esi
0x4D4EA3: retn    4
0x4D4EA6: pop     edi
0x4D4EA7: xor     eax, eax
0x4D4EA9: pop     esi
0x4D4EAA: retn    4
