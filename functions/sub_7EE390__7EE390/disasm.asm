0x7EE390: mov     eax, ds:0B42EB8h
0x7EE395: mov     ecx, [eax]
0x7EE397: mov     ecx, [ecx+0BCh]
0x7EE39D: mov     edx, [ecx]
0x7EE39F: mov     eax, [edx+1Ch]
0x7EE3A2: call    eax
0x7EE3A4: fld     [esp+propertyDimmer]
0x7EE3A8: cmp     eax, 1Bh
0x7EE3AB: push    ecx
0x7EE3AC: fstp    [esp+4+dimmer]; dimmer
0x7EE3AF: jnz     short loc_7EE3C4
0x7EE3B1: mov     ecx, [esp+4+shadowSceneLight]
0x7EE3B5: mov     edx, [esp+4+lightSlot]
0x7EE3B9: push    ecx; int
0x7EE3BA: push    edx; int
0x7EE3BB: call    Lighting30Shader_WriteType1BLightConstants; Oblivion Lighting30 type-0x1B light decode. Writes paired LightColor/LightData constants. The point/special flavor stores underlying light world position in LightData.xyz and light+0xF8 range/control in .w; selector 0x154/0x155 later applies rigid object-scale correction before SM3026.
0x7EE3C0: add     esp, 0Ch
0x7EE3C3: retn
0x7EE3C4: mov     eax, [esp+4+shadowSceneLight]
0x7EE3C8: mov     ecx, [esp+4+lightSlot]
0x7EE3CC: push    eax; shadowSceneLight
0x7EE3CD: push    ecx; lightSlot
0x7EE3CE: call    OB_BSShader_UpdateLightColorConstant_010201A0
0x7EE3D3: add     esp, 0Ch
0x7EE3D6: retn
