0x77B610: push    edi; Tracked NiDX9 sampler setter accepts only D3DSAMP_ADDRESSU/V and MAG/MIN/MIPFILTER (states 1,2,5,6,7). State 8 MIPMAPLODBIAS is outside this cache, so a direct leaked bias is not self-healed by the leaf stage.
0x77B611: mov     edi, [esp+4+state]
0x77B615: movzx   eax, word ptr ds:0B427B0h[edi*2]; Map the requested D3DSAMPLERSTATETYPE through the runtime enum-to-slot table at B427B0.
0x77B61D: cmp     ax, 5
0x77B621: jnb     short loc_77B664; Only five tracked slots are accepted. Unmapped sampler enums are ignored before the D3D device call.
0x77B623: push    esi
0x77B624: mov     esi, [esp+8+arg_0]
0x77B628: movzx   eax, ax
0x77B62B: lea     edx, [esi+esi*4+1A4h]
0x77B632: add     edx, eax
0x77B634: lea     eax, [ecx+edx*8]
0x77B637: mov     edx, [esp+8+value]
0x77B63B: cmp     [eax], edx
0x77B63D: jz      short loc_77B663
0x77B63F: cmp     [esp+8+savePrevious], 0
0x77B644: jz      short loc_77B64D
0x77B646: push    ebx
0x77B647: mov     ebx, [eax]
0x77B649: mov     [eax+4], ebx
0x77B64C: pop     ebx
0x77B64D: push    edx
0x77B64E: mov     [eax], edx
0x77B650: mov     eax, [ecx+0FF8h]
0x77B656: mov     ecx, [eax]
0x77B658: mov     edx, [ecx+114h]
0x77B65E: push    edi
0x77B65F: push    esi
0x77B660: push    eax
0x77B661: call    edx; The sole device SetSamplerState call occurs only after a tracked state changes; leaf-path enums 8/9/10/11 cannot reach it.
0x77B663: pop     esi
0x77B664: pop     edi
0x77B665: retn    10h
