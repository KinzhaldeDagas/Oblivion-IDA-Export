0x4CAFC0: push    esi
0x4CAFC1: mov     esi, ecx
0x4CAFC3: lea     ecx, [esi+28h]; this
0x4CAFC6: call    ExtraDataList__GetWaterForm
0x4CAFCB: test    eax, eax
0x4CAFCD: jnz     short loc_4CAFEA
0x4CAFCF: test    byte ptr [esi+24h], 1
0x4CAFD3: jnz     short loc_4CAFE5
0x4CAFD5: mov     ecx, [esi+50h]; a1
0x4CAFD8: test    ecx, ecx
0x4CAFDA: jz      short loc_4CAFE5
0x4CAFDC: call    TESWorldSpace__GetWaterFormParents
0x4CAFE1: test    eax, eax
0x4CAFE3: jnz     short loc_4CAFEA
0x4CAFE5: mov     eax, ds:0B360ACh
0x4CAFEA: pop     esi
0x4CAFEB: retn
