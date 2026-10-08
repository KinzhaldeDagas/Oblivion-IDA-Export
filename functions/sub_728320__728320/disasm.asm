0x728320: mov     ax, [esp+arg_0]
0x728325: mov     edx, [esp+arg_8]
0x728329: push    esi
0x72832A: mov     esi, ecx
0x72832C: mov     ecx, [esp+4+arg_4]
0x728330: mov     [esi+8], ax
0x728334: mov     eax, [esi]
0x728336: mov     [esi+1Ch], ecx
0x728339: mov     [esi+20h], edx
0x72833C: mov     edx, [eax+50h]
0x72833F: mov     ecx, esi
0x728341: call    edx
0x728343: movzx   ecx, ax
0x728346: test    cx, cx
0x728349: jz      short loc_72835F
0x72834B: mov     eax, [esi+1Ch]
0x72834E: test    eax, eax
0x728350: jz      short loc_72835F
0x728352: push    eax; vertices
0x728353: movzx   eax, cx
0x728356: push    eax; vertexCount
0x728357: lea     ecx, [esi+0Ch]; self
0x72835A: call    NiSphere_ComputeFromVertices; Local bounding sphere for contiguous NiPoint3 array: midpoint of component minima/maxima; radius=max vertex distance to midpoint; zero-count case clears sphere. Writes sphere only, not NiAVObject world bounds or renderer dirty flags. Prettier Faces invokes after morph on direct CPU vertex data; propagation of world bounds remains a separate runtime verification requirement.
0x72835F: mov     ecx, [esp+4+arg_C]
0x728363: mov     ax, [esi+2Ch]
0x728367: mov     edx, [esp+4+arg_10]
0x72836B: mov     [esi+24h], ecx
0x72836E: movzx   ecx, [esp+4+arg_14]
0x728373: and     ax, 0FC0h
0x728377: and     ecx, 3Fh
0x72837A: or      ax, cx
0x72837D: or      ax, [esp+4+arg_18]
0x728382: mov     [esi+28h], edx
0x728385: mov     [esi+2Ch], ax
0x728389: pop     esi
0x72838A: retn    1Ch
