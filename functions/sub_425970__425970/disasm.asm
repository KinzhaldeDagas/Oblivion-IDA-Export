0x425970: push    esi; Returns actor-owned INFOGENERAL/Rumors MenuTopic. If its response list has zero nodes, lazily rebuild responses from the cached ownerQuest/topic/INFO/speaker tuple; no topic/INFO condition selection is rerun. A populated-but-exhausted cache is simply rewound later by FillTopicList.
0x425971: push    59h ; 'Y'; a2
0x425973: xor     esi, esi
0x425975: call    BaseExtraList_GetExtraData
0x42597A: test    eax, eax
0x42597C: jz      short loc_4259A8
0x42597E: mov     esi, [eax+0Ch]
0x425981: test    esi, esi
0x425983: jz      short loc_4259A8
0x425985: mov     ecx, esi; this
0x425987: call    MenuTopic__ResponsesEmpty; Rebuild gate is structural list emptiness, not an exhausted response cursor. Existing cached response entries remain the same selected INFO even if its conditions would now select another candidate.
0x42598C: test    al, al
0x42598E: jz      short loc_4259A8
0x425990: mov     eax, [esp+4+speaker]
0x425994: mov     ecx, [esi+18h]
0x425997: mov     edx, [esi+24h]
0x42599A: push    eax; speaker
0x42599B: mov     eax, [esi+14h]
0x42599E: push    ecx; info
0x42599F: push    edx; topic
0x4259A0: push    eax; ownerQuest
0x4259A1: mov     ecx, esi; this
0x4259A3: call    MenuTopic__FillResponseList; Reconstruct response entries from the cached identity fields only. This refreshes the runtime preview after a save/load that omitted transient response nodes without reevaluating match conditions or selecting another rumor.
0x4259A8: mov     eax, esi
0x4259AA: pop     esi
0x4259AB: retn    4
