0x77B750: push    esi; DX10OBSE target: caps-gated NiDX9RenderState software vertex-processing switch. Calls IDirect3DDevice9::SetSoftwareVertexProcessing via vtable +0x134 and rebinds current vertex shader; plugin mirrors mode into DX10 companion render-state constants.
0x77B751: mov     esi, ecx
0x77B753: mov     cl, [esp+4+enabled]
0x77B757: cmp     cl, [esi+1014h]
0x77B75D: jz      short loc_77B79C
0x77B75F: mov     eax, [esi+0FFCh]
0x77B765: cmp     byte ptr [eax+5C9h], 0
0x77B76C: jz      short loc_77B79C
0x77B76E: mov     eax, [esi+0FF8h]
0x77B774: mov     [esi+1014h], cl
0x77B77A: mov     edx, [eax]
0x77B77C: mov     edx, [edx+134h]
0x77B782: movzx   ecx, cl
0x77B785: push    ecx
0x77B786: push    eax
0x77B787: call    edx
0x77B789: mov     ecx, [esi+0FE0h]
0x77B78F: mov     eax, [esi]
0x77B791: mov     edx, [eax+94h]
0x77B797: push    ecx
0x77B798: mov     ecx, esi
0x77B79A: call    edx; Verified target via vtableA8A9F4+94 =77B3C0 RemoveVertexShader(current). Unbinds/nulls the cached current shader; this is not a rebind.
0x77B79C: pop     esi
0x77B79D: retn    4
