0x70C0B0: mov     ecx, ds:0B3F928h; OR/TESReloaded RenderObject detour target and native camera->NiCullingProcess::Process boundary. CULLING process hook runs under this traversal when vtable slots remain vanilla at install.
0x70C0B6: test    ecx, ecx
0x70C0B8: jz      short locret_70C118
0x70C0BA: push    ebx
0x70C0BB: mov     ebx, [esp+4+camera]
0x70C0BF: test    ebx, ebx
0x70C0C1: jz      short loc_70C117
0x70C0C3: push    ebp
0x70C0C4: mov     ebp, [esp+8+sceneRoot]
0x70C0C8: test    ebp, ebp
0x70C0CA: jz      short loc_70C116
0x70C0CC: push    esi
0x70C0CD: mov     esi, [esp+0Ch+visibleArray]
0x70C0D1: test    esi, esi
0x70C0D3: push    edi
0x70C0D4: mov     edi, [esp+10h+cullingProcess]
0x70C0D8: jnz     short loc_70C0DD
0x70C0DA: mov     esi, [edi+8]
0x70C0DD: push    ebx
0x70C0DE: call    SetCameraViewProj; Install the supplied camera view/projection before culling and visible-geometry submission.
0x70C0E3: test    esi, esi
0x70C0E5: mov     ecx, edi
0x70C0E7: jz      short loc_70C109
0x70C0E9: push    esi
0x70C0EA: mov     dword ptr [esi+4], 0
0x70C0F1: mov     eax, [edi]
0x70C0F3: mov     edx, [eax+8]
0x70C0F6: push    ebp
0x70C0F7: push    ebx
0x70C0F8: call    edx; CULLING audit 2026-09-27: virtual Process(self,camera,generic NiAVObject root,array); scope ends before the following deferred array submit.
0x70C0FA: push    esi; visibleArray
0x70C0FB: push    ebx; camera
0x70C0FC: call    NiRenderer_SubmitAndFlushVisibleGeometryArray; CULLING audit 2026-09-27: consumer runs after Process returns and clears process.Camera. Observation must retain explicit camera/array ownership through this point.
0x70C101: add     esp, 8
0x70C104: pop     edi
0x70C105: pop     esi
0x70C106: pop     ebp
0x70C107: pop     ebx
0x70C108: retn
0x70C109: mov     eax, [edi]
0x70C10B: mov     edx, [eax+8]
0x70C10E: push    0
0x70C110: push    ebp
0x70C111: push    ebx
0x70C112: call    edx
0x70C114: pop     edi
0x70C115: pop     esi
0x70C116: pop     ebp
0x70C117: pop     ebx
0x70C118: retn
