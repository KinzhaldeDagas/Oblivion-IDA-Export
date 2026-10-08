0x77B000: push    ebx; DX10 bridge note: Oblivion render-state cache only calls IDirect3DDevice9::SetRenderState through vtable +0xE4 when a cached value changes. The DX10 device vtable hook captures runtime render-state shader variants here; generated fallback pixel shaders use captured alpha-test and fog render states for D3D10 shader-side discard/fog because D3D10 has no fixed-function alpha-test/fog stage.
0x77B001: mov     ebx, [esp+4+value]
0x77B005: push    esi
0x77B006: push    edi
0x77B007: mov     edi, [esp+0Ch+state]
0x77B00B: mov     esi, ecx
0x77B00D: cmp     [esi+edi*8+120h], ebx
0x77B014: jz      short loc_77B029
0x77B016: mov     eax, [esi+0FF8h]
0x77B01C: mov     ecx, [eax]
0x77B01E: mov     edx, [ecx+0E4h]
0x77B024: push    ebx
0x77B025: push    edi
0x77B026: push    eax
0x77B027: call    edx
0x77B029: cmp     [esp+0Ch+savePrevious], 0
0x77B02E: jz      short loc_77B03E
0x77B030: mov     eax, [esi+edi*8+120h]
0x77B037: mov     [esi+edi*8+124h], eax
0x77B03E: mov     [esi+edi*8+120h], ebx
0x77B045: pop     edi
0x77B046: pop     esi
0x77B047: pop     ebx
0x77B048: retn    0Ch
