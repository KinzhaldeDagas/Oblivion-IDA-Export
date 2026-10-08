0x6B7C30: push    esi; Deferred ambient INFO commit. When INFO exists and ImmediateResult is clear, expose addedTopics and then run the result on DialogueItem.speaker at response-list exhaustion. Goodbye and RunForRumors are ignored; interruption before exhaustion drops this deferred commit.
0x6B7C31: mov     esi, ecx
0x6B7C33: mov     ecx, [esi+0Ch]; this
0x6B7C36: test    ecx, ecx
0x6B7C38: jz      short loc_6B7C56
0x6B7C3A: movzx   eax, byte ptr [ecx+25h]
0x6B7C3E: shr     eax, 3
0x6B7C41: test    al, 1
0x6B7C43: jnz     short loc_6B7C56; ImmediateResult alone suppresses deferred ambient commit because it was already performed during CreateConversation. This test does not inspect Goodbye or RunForRumors.
0x6B7C45: call    TESTopicInfo__AddTopicList; Deferred ambient ordering is AddTopicList first, then RunResult. This is the reverse of CreateConversation's ImmediateResult ordering.
0x6B7C4A: mov     ecx, [esi+18h]
0x6B7C4D: push    ecx; speaker
0x6B7C4E: mov     ecx, [esi+0Ch]; this
0x6B7C51: call    TESTopicInfo__RunResult; Run the deferred result on this DialogueItem's actual routed speaker, unlike ImmediateResult which uses the original conversation initiator.
0x6B7C56: pop     esi
0x6B7C57: retn
