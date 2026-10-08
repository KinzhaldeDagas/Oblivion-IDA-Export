0x7F13B0: push    esi; SpeedTreeLeafShader render/setup virtual: calls vtable +0x80 pre-pass, then leaf setup 0x7F0BC0, appends pass +0x394 to the current pass list.
0x7F13B1: mov     esi, ecx
0x7F13B3: mov     eax, [esi]
0x7F13B5: mov     edx, [eax+80h]
0x7F13BB: call    edx
0x7F13BD: mov     eax, [esp+4+bound]
0x7F13C1: mov     ecx, [esp+4+world]
0x7F13C5: mov     edx, [esp+4+effects]
0x7F13C9: push    eax; int
0x7F13CA: mov     eax, [esp+8+propertyArray]
0x7F13CE: push    ecx; int
0x7F13CF: mov     ecx, [esp+0Ch+rendererData]
0x7F13D3: push    edx; int
0x7F13D4: mov     edx, [esp+10h+skin]
0x7F13D8: push    eax; int
0x7F13D9: mov     eax, [esp+14h+geometry]
0x7F13DD: push    ecx; int
0x7F13DE: push    edx; int
0x7F13DF: push    eax; float
0x7F13E0: mov     ecx, esi
0x7F13E2: call    OB_SpeedTreeLeafShader_SetupPass_010201A0; OBLIVION AUTHORITY (2026-08-24): SpeedTree leaf SetupPass. Full-bright forces VS0; otherwise marker count selects base versus point-light VS and active fog selects the fog variant. Selector inputs do not encode leaf layer/card/LOD. The routine uploads transform/light constants, binds the property texture, and uploads fog constants only for an active fog property.
0x7F13E7: mov     edx, [esi+38h]
0x7F13EA: lea     ecx, [esi+394h]
0x7F13F0: push    ecx; value
0x7F13F1: push    edx; index
0x7F13F2: lea     ecx, [esi+40h]; this
0x7F13F5: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x7F13FA: add     dword ptr [esi+38h], 1
0x7F13FE: xor     eax, eax
0x7F1400: pop     esi
0x7F1401: retn    1Ch
