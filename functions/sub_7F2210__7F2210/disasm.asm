0x7F2210: push    0FFFFFFFFh; Branch shader-property stream builder. Emits position, normal, and 0x10-stride STSP streams from the +0xF0 STSPData ref; rejects shapes whose geometry vertex count exceeds STSP count.
0x7F2212: push    offset SEH_8094D0
0x7F2217: mov     eax, large fs:0
0x7F221D: push    eax
0x7F221E: push    ebx
0x7F221F: push    ebp
0x7F2220: push    esi
0x7F2221: push    edi
0x7F2222: mov     eax, ds:0B30AACh
0x7F2227: xor     eax, esp
0x7F2229: push    eax
0x7F222A: lea     eax, [esp+20h+var_C]
0x7F222E: mov     large fs:0, eax
0x7F2234: mov     ebp, ecx
0x7F2236: mov     esi, [esp+20h+geometryData]
0x7F223A: test    esi, esi
0x7F223C: jz      loc_7F233A
0x7F2242: mov     eax, [esi+0B4h]
0x7F2248: movzx   edi, word ptr [eax+8]
0x7F224C: mov     eax, [ebp+0]
0x7F224F: mov     edx, [eax+0A8h]
0x7F2255: call    edx
0x7F2257: cmp     di, ax
0x7F225A: ja      loc_7F233A
0x7F2260: mov     eax, [esi+0B4h]
0x7F2266: movzx   eax, word ptr [eax+8]
0x7F226A: push    2Ch ; ','; Size
0x7F226C: movzx   edi, ax
0x7F226F: call    FormHeapAlloc
0x7F2274: add     esp, 4
0x7F2277: mov     [esp+20h+geometryData], eax
0x7F227B: test    eax, eax
0x7F227D: mov     [esp+20h+var_4], 0
0x7F2285: jz      short loc_7F2295
0x7F2287: push    3
0x7F2289: push    edi
0x7F228A: mov     ecx, eax
0x7F228C: call    sub_7E3AE0
0x7F2291: mov     esi, eax
0x7F2293: jmp     short loc_7F2297
0x7F2295: xor     esi, esi
0x7F2297: push    3
0x7F2299: mov     ecx, esi
0x7F229B: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F22A3: call    OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0
0x7F22A8: mov     eax, [ebp+0D4h]
0x7F22AE: mov     ecx, [eax+0Ch]
0x7F22B1: lea     ebx, [edi+edi*2]
0x7F22B4: push    0; copyData
0x7F22B6: add     ebx, ebx
0x7F22B8: add     ebx, ebx
0x7F22BA: push    ebx; byteCount
0x7F22BB: push    ecx; data
0x7F22BC: push    0; blockIndex
0x7F22BE: mov     ecx, esi; this
0x7F22C0: call    OB_NiAdditionalGeometryData_SetDataBlock_010201A0; 2026-05-30 SpeedTreeOBSE: branch shader input stream 0 uses tangent-space owner +0xD4 field +0x0C as positions.
0x7F22C5: push    0Ch; stride
0x7F22C7: push    0Ch; elementSize
0x7F22C9: push    edi; vertexCount
0x7F22CA: push    3; type
0x7F22CC: push    0; blockOffset
0x7F22CE: push    0; blockIndex
0x7F22D0: push    0; streamIndex
0x7F22D2: mov     ecx, esi; this
0x7F22D4: call    OB_NiAdditionalGeometryData_SetDataStream_010201A0
0x7F22D9: mov     edx, [ebp+0D4h]
0x7F22DF: mov     eax, [edx+10h]
0x7F22E2: push    0; copyData
0x7F22E4: push    ebx; byteCount
0x7F22E5: push    eax; data
0x7F22E6: push    1; blockIndex
0x7F22E8: mov     ecx, esi; this
0x7F22EA: call    OB_NiAdditionalGeometryData_SetDataBlock_010201A0; 2026-05-30 SpeedTreeOBSE: branch shader input stream 1 uses tangent-space owner +0xD4 field +0x10 as normals; texture arrays are separate PPLighting state.
0x7F22EF: push    0Ch; stride
0x7F22F1: push    0Ch; elementSize
0x7F22F3: push    edi; vertexCount
0x7F22F4: push    3; type
0x7F22F6: push    0; blockOffset
0x7F22F8: push    1; blockIndex
0x7F22FA: push    1; streamIndex
0x7F22FC: mov     ecx, esi; this
0x7F22FE: call    OB_NiAdditionalGeometryData_SetDataStream_010201A0
0x7F2303: mov     edx, [ebp+0]
0x7F2306: mov     eax, [edx+0A4h]
0x7F230C: mov     ecx, edi
0x7F230E: shl     ecx, 4
0x7F2311: push    0; copyData
0x7F2313: push    ecx; byteCount
0x7F2314: mov     ecx, ebp
0x7F2316: call    eax
0x7F2318: push    eax; data
0x7F2319: push    2; blockIndex
0x7F231B: mov     ecx, esi; this
0x7F231D: call    OB_NiAdditionalGeometryData_SetDataBlock_010201A0
0x7F2322: push    10h; stride
0x7F2324: push    10h; elementSize
0x7F2326: push    edi; vertexCount
0x7F2327: push    4; type
0x7F2329: push    0; blockOffset
0x7F232B: push    2; blockIndex
0x7F232D: push    2; streamIndex
0x7F232F: mov     ecx, esi; this
0x7F2331: call    OB_NiAdditionalGeometryData_SetDataStream_010201A0
0x7F2336: mov     eax, esi
0x7F2338: jmp     short loc_7F233C
0x7F233A: xor     eax, eax
0x7F233C: mov     ecx, [esp+20h+var_C]
0x7F2340: mov     large fs:0, ecx
0x7F2347: pop     ecx
0x7F2348: pop     edi
0x7F2349: pop     esi
0x7F234A: pop     ebp
0x7F234B: pop     ebx
0x7F234C: add     esp, 0Ch
0x7F234F: retn    4
0x9C6200: mov     eax, [ebp+4]
0x9C6203: push    eax
0x9C6204: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C6209: pop     ecx
0x9C620A: retn
0x9C620B: mov     edx, [esp+arg_4]
0x9C620F: lea     eax, [edx-10h]
0x9C6212: mov     ecx, [edx-14h]
0x9C6215: xor     ecx, eax
0x9C6217: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C621C: mov     eax, offset stru_AEE7E8
0x9C6221: jmp     ___CxxFrameHandler3
