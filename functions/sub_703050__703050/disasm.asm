0x703050: movzx   eax, word ptr [ecx+8]
0x703054: test    ax, ax
0x703057: mov     byte ptr [ecx+6Eh], 0
0x70305B: jbe     short locret_70306D
0x70305D: mov     edx, [ecx+1Ch]
0x703060: movzx   eax, ax
0x703063: push    edx; vertices
0x703064: push    eax; vertexCount
0x703065: add     ecx, 0Ch; self
0x703068: call    NiSphere_ComputeFromVertices; Local bounding sphere for contiguous NiPoint3 array: midpoint of component minima/maxima; radius=max vertex distance to midpoint; zero-count case clears sphere. Writes sphere only, not NiAVObject world bounds or renderer dirty flags. Prettier Faces invokes after morph on direct CPU vertex data; propagation of world bounds remains a separate runtime verification requirement.
0x70306D: retn
