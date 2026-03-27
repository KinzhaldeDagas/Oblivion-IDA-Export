0x76B3F0: push    esi
0x76B3F1: mov     esi, ecx
0x76B3F3: mov     eax, [esi+280h]
0x76B3F9: mov     ecx, [eax]
0x76B3FB: mov     edx, [ecx+0Ch]
0x76B3FE: push    eax
0x76B3FF: call    edx
0x76B401: cmp     eax, 88760869h
0x76B406: jnz     short loc_76B41C
0x76B408: mov     ecx, esi; this
0x76B40A: call    sub_76A970
0x76B40F: test    al, al
0x76B411: setz    cl
0x76B414: mov     [esi+6F0h], cl
0x76B41A: pop     esi
0x76B41B: retn
0x76B41C: cmp     eax, 88760868h
0x76B421: jnz     short loc_76B482
0x76B423: cmp     byte ptr [esi+6F0h], 0
0x76B42A: push    ebx
0x76B42B: push    edi
0x76B42C: jnz     short loc_76B47C
0x76B42E: movzx   ebx, word ptr [esi+0AC2h]
0x76B435: xor     edi, edi
0x76B437: test    ebx, ebx
0x76B439: mov     byte ptr [esi+6F0h], 1
0x76B440: jbe     short loc_76B47C
0x76B442: mov     edx, [esi+0ABCh]
0x76B448: mov     eax, [edx+edi*4]
0x76B44B: test    eax, eax
0x76B44D: mov     ecx, [esi+0ACCh]
0x76B453: mov     ecx, [ecx+edi*4]
0x76B456: jz      short loc_76B462
0x76B458: push    ecx
0x76B459: call    eax
0x76B45B: add     esp, 4
0x76B45E: test    al, al
0x76B460: jz      short loc_76B46F
0x76B462: add     edi, 1
0x76B465: cmp     edi, ebx
0x76B467: jb      short loc_76B442
0x76B469: pop     edi
0x76B46A: pop     ebx
0x76B46B: xor     al, al
0x76B46D: pop     esi
0x76B46E: retn
0x76B46F: push    offset aNidx9render_25; "NiDX9Renderer::LostDeviceRestore> Lost "...
0x76B474: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76B479: add     esp, 4
0x76B47C: pop     edi
0x76B47D: pop     ebx
0x76B47E: xor     al, al
0x76B480: pop     esi
0x76B481: retn
0x76B482: mov     al, 1
0x76B484: pop     esi
0x76B485: retn
