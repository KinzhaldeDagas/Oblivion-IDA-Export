0x7D6A80: push    esi
0x7D6A81: mov     esi, ecx
0x7D6A83: mov     eax, 1
0x7D6A88: cmp     [esi+200h], eax
0x7D6A8E: jz      short loc_7D6A98
0x7D6A90: cmp     [esi+204h], eax
0x7D6A96: jnz     short loc_7D6AA1
0x7D6A98: cmp     byte ptr [esi+20Ch], 0
0x7D6A9F: jz      short loc_7D6AA7
0x7D6AA1: xor     al, al
0x7D6AA3: pop     esi
0x7D6AA4: retn    8
0x7D6AA7: push    edi
0x7D6AA8: mov     edi, [esp+8+a2]
0x7D6AAC: test    edi, edi
0x7D6AAE: jnz     short loc_7D6AC4
0x7D6AB0: push    offset aNirendererBegi; "NiRenderer::BeginUsingRenderTargetGroup"...
0x7D6AB5: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7D6ABA: add     esp, 4
0x7D6ABD: pop     edi
0x7D6ABE: xor     al, al
0x7D6AC0: pop     esi
0x7D6AC1: retn    8
0x7D6AC4: push    ebx
0x7D6AC5: call    NiDX9Renderer__LockRender
0x7D6ACA: mov     ecx, [esp+0Ch+clearFlags]
0x7D6ACE: mov     eax, [esi]
0x7D6AD0: mov     edx, [eax+148h]
0x7D6AD6: push    ecx
0x7D6AD7: push    edi
0x7D6AD8: mov     ecx, esi
0x7D6ADA: call    edx
0x7D6ADC: mov     bl, al
0x7D6ADE: test    bl, bl
0x7D6AE0: jz      short loc_7D6AEF
0x7D6AE2: pop     ebx
0x7D6AE3: pop     edi
0x7D6AE4: mov     byte ptr [esi+20Ch], 1
0x7D6AEB: pop     esi
0x7D6AEC: retn    8
0x7D6AEF: mov     ecx, esi; this
0x7D6AF1: call    NiDX9Renderer__UnLockRender
0x7D6AF6: mov     al, bl
0x7D6AF8: pop     ebx
0x7D6AF9: pop     edi
0x7D6AFA: pop     esi
0x7D6AFB: retn    8
