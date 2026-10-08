0x4A1780: mov     eax, [esp+triangleIndices]
0x4A1784: mov     edx, dword ptr [esp+dataFlags]
0x4A1788: push    esi
0x4A1789: push    eax; triangleIndices
0x4A178A: mov     eax, dword ptr [esp+8+hasVertexColors]
0x4A178E: mov     esi, ecx
0x4A1790: mov     ecx, dword ptr [esp+8+triangleCount]
0x4A1794: push    ecx; triangleCount
0x4A1795: mov     ecx, [esp+0Ch+textureCoordinates]
0x4A1799: push    edx; dataFlags
0x4A179A: mov     edx, [esp+10h+colors]
0x4A179E: push    eax; hasVertexColors
0x4A179F: mov     eax, [esp+14h+normals]
0x4A17A3: push    ecx; textureCoordinates
0x4A17A4: mov     ecx, [esp+18h+vertices]
0x4A17A8: push    edx; colors
0x4A17A9: mov     edx, dword ptr [esp+1Ch+vertexCount]
0x4A17AD: push    eax; normals
0x4A17AE: push    ecx; vertices
0x4A17AF: push    edx; vertexCount
0x4A17B0: mov     ecx, esi; this
0x4A17B2: call    NiTriShape_ctorWithGeometryData; Verified NiTriShape constructor wrapper: allocate/init NiTriShapeData from caller-supplied vertices, colors and triangle-index buffer; initialize NiTriBasedGeom and install NiTriShape vtable.
0x4A17B7: mov     eax, [esp+4+arg_24]
0x4A17BB: mov     ecx, [esp+4+arg_28]
0x4A17BF: mov     edx, [esp+4+arg_2C]
0x4A17C3: mov     [esi+0C0h], eax
0x4A17C9: mov     eax, [esp+4+arg_30]
0x4A17CD: mov     [esi+0CCh], eax
0x4A17D3: mov     dword ptr [esi], offset ??_7BSScissorTriShape@@6B@; const BSScissorTriShape::`vftable'
0x4A17D9: mov     [esi+0C4h], ecx
0x4A17DF: mov     [esi+0C8h], edx
0x4A17E5: mov     eax, esi
0x4A17E7: pop     esi
0x4A17E8: retn    34h ; '4'
