0x481820: push    0FFFFFFFFh
0x481822: push    offset ??1?$NiTMap@IUVertexDist@@@@UAE@XZ_SEH
0x481827: mov     eax, large fs:0
0x48182D: push    eax
0x48182E: push    ecx
0x48182F: push    esi
0x481830: mov     eax, ds:0B30AACh
0x481835: xor     eax, esp
0x481837: push    eax
0x481838: lea     eax, [esp+18h+var_C]
0x48183C: mov     large fs:0, eax
0x481842: mov     esi, ecx
0x481844: mov     [esp+18h+var_10], esi
0x481848: mov     dword ptr [esi], offset ??_7?$NiTMap@IUVertexDist@@@@6B@; const NiTMap<uint,VertexDist>::`vftable'
0x48184E: mov     [esp+18h+var_4], 0
0x481856: call    NiTMap_Clear
0x48185B: mov     ecx, esi
0x48185D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x481865: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@UVertexDist@@@@IUVertexDist@@@@6B@; const NiTMapBase<DFALL<VertexDist>,uint,VertexDist>::`vftable'
0x48186B: call    NiTMap_Clear
0x481870: mov     eax, [esi+8]
0x481873: push    eax
0x481874: call    FormHeapFree
0x481879: add     esp, 4
0x48187C: mov     ecx, [esp+18h+var_C]
0x481880: mov     large fs:0, ecx
0x481887: pop     ecx
0x481888: pop     esi
0x481889: add     esp, 10h
0x48188C: retn
