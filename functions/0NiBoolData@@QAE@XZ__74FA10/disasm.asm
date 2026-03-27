0x74FA10: push    ebx
0x74FA11: xor     ebx, ebx
0x74FA13: cmp     [esp+4+arg_8], ebx
0x74FA17: push    ebp
0x74FA18: mov     ebp, ecx
0x74FA1A: jbe     short loc_74FA7B
0x74FA1C: cmp     [ebp+10h], ebx
0x74FA1F: push    edi
0x74FA20: lea     edi, [ebp+10h]
0x74FA23: jnz     short loc_74FA5C
0x74FA25: push    esi
0x74FA26: push    18h; Size
0x74FA28: call    FormHeapAlloc
0x74FA2D: mov     esi, eax
0x74FA2F: add     esp, 4
0x74FA32: cmp     esi, ebx
0x74FA34: jz      short loc_74FA51
0x74FA36: mov     ecx, esi
0x74FA38: call    NiObject_constr
0x74FA3D: mov     dword ptr [esi], offset ??_7NiBoolData@@6B@; const NiBoolData::`vftable'
0x74FA43: mov     [esi+8], ebx
0x74FA46: mov     [esi+0Ch], ebx
0x74FA49: mov     [esi+10h], ebx
0x74FA4C: mov     [esi+14h], bl
0x74FA4F: jmp     short loc_74FA53
0x74FA51: xor     esi, esi
0x74FA53: push    esi; a2
0x74FA54: mov     ecx, edi; this
0x74FA56: call    NiSmartPointer_Set??
0x74FA5B: pop     esi
0x74FA5C: mov     eax, [esp+0Ch+arg_4]
0x74FA60: mov     ecx, [esp+0Ch+arg_8]
0x74FA64: mov     edx, [esp+0Ch+arg_0]
0x74FA68: push    eax
0x74FA69: push    ecx
0x74FA6A: mov     ecx, [edi]
0x74FA6C: push    edx
0x74FA6D: call    sub_6E88C0
0x74FA72: pop     edi
0x74FA73: mov     [ebp+14h], ebx
0x74FA76: pop     ebp
0x74FA77: pop     ebx
0x74FA78: retn    0Ch
0x74FA7B: mov     ecx, [ebp+10h]
0x74FA7E: cmp     ecx, ebx
0x74FA80: jz      short loc_74FA8A
0x74FA82: push    ebx
0x74FA83: push    ebx
0x74FA84: push    ebx
0x74FA85: call    sub_6E88C0
0x74FA8A: pop     ebp
0x74FA8B: pop     ebx
0x74FA8C: retn    0Ch
