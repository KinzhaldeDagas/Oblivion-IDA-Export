0x56CD20: mov     eax, [esp+arg_14]
0x56CD24: mov     edx, [esp+arg_10]
0x56CD28: push    eax
0x56CD29: mov     eax, [esp+4+arg_C]
0x56CD2D: push    edx
0x56CD2E: mov     edx, [esp+8+arg_8]
0x56CD32: push    eax
0x56CD33: mov     eax, [esp+0Ch+arg_4]
0x56CD37: push    edx
0x56CD38: push    eax
0x56CD39: mov     eax, [esp+14h+arg_0]
0x56CD3D: movzx   edx, word ptr [eax+8]
0x56CD41: push    edx
0x56CD42: mov     edx, [eax+20h]
0x56CD45: mov     eax, [eax+1Ch]
0x56CD48: push    edx
0x56CD49: push    eax
0x56CD4A: call    sub_72AF20; Verified shared weighted-skin transform: composes per-bone NiTransforms, traverses per-vertex bone indices/weights, transforms source positions/normals and accumulates into caller-provided output arrays. BSTempEffectGeometryDecal_InitializeUsingSkinnedGeometryData passes its source skinData and NiGeometryData vertex/normal arrays here; NiDX9ShaderDeclaration_PackVertexStream is another caller. This is general renderer skinning code, not a blood-specific routine.
0x56CD4F: retn    18h
