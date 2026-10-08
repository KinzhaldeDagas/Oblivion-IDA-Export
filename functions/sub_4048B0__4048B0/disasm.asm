0x4048B0: mov     ecx, dword ptr unk_B42CD0
0x4048B6: mov     eax, [esp+geometryCount]
0x4048BA: mov     edx, [esp+secondaryGeometryCount]
0x4048BE: mov     [eax], ecx
0x4048C0: mov     eax, dword ptr unk_B42CB8
0x4048C5: mov     ecx, [esp+triangleCount]
0x4048C9: mov     [edx], eax
0x4048CB: mov     edx, dword ptr g_rendererTriangleCount
0x4048D1: mov     eax, [esp+passCount]
0x4048D5: mov     [ecx], edx
0x4048D7: mov     ecx, dword ptr g_rendererPassCount
0x4048DD: mov     edx, [esp+trianglePassCount]
0x4048E1: mov     [eax], ecx
0x4048E3: mov     eax, dword ptr g_rendererTrianglePassCount
0x4048E8: mov     ecx, [esp+queueMemoryStatistic]
0x4048EC: mov     [edx], eax
0x4048EE: mov     edx, dword ptr unk_B42CB0
0x4048F4: mov     eax, [esp+occlusionGeometryCount]
0x4048F8: mov     [ecx], edx
0x4048FA: mov     ecx, dword ptr g_rendererOcclusionGeometryCount
0x404900: mov     edx, [esp+occlusionTriangleCount]
0x404904: mov     [eax], ecx
0x404906: mov     eax, dword ptr g_rendererOcclusionTriangleCount
0x40490B: mov     ecx, [esp+occlusionWaitLoops]
0x40490F: mov     [edx], eax
0x404911: mov     edx, dword ptr g_rendererOcclusionWaitLoops
0x404917: mov     eax, [esp+boundVolumeWaitLoops]
0x40491B: mov     [ecx], edx
0x40491D: mov     ecx, dword ptr g_rendererBoundVolumeOcclusionWaitLoops
0x404923: mov     edx, [esp+sunOcclusionWaitFrames]
0x404927: mov     [eax], ecx
0x404929: mov     eax, dword ptr g_rendererSunOcclusionWaitFrames
0x40492E: mov     [edx], eax
0x404930: retn
