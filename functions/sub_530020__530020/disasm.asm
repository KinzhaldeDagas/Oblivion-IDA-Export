0x530020: push    ecx; Returns a normal matching INFO only; rejects the condition-fallback result reported through SelectInfoForSpeaker's out flag. Used for InfoRefusal substitution.
0x530021: mov     eax, [esp+4+a4]
0x530025: mov     edx, [esp+4+a3]
0x530029: push    0; conversation
0x53002B: push    0; previousTopic
0x53002D: push    0; useConversationRules
0x53002F: push    eax; target
0x530030: push    edx; speaker
0x530031: lea     eax, [esp+18h+a2]
0x530035: push    eax; lowDispositionFailure
0x530036: mov     [esp+1Ch+a2], 0
0x53003B: call    TESTopic__SelectInfoForSpeaker; Authoritative Oblivion INFO selector. Scans running quest buckets by descending priority and INFOs in record order; applies conditions, conversation linkedFrom/ANY rules, reuse suppression, and Random groups. For an ambient first item (previousTopic=null), a nonempty linkedFrom list is rejected unless the target is the player. RandomEnd is latched before conversation reuse checks, so a duplicate/repeated RandomEnd INFO can terminate the scan without being eligible.
0x530040: mov     cl, [esp+4+a2]
0x530044: neg     cl
0x530046: sbb     ecx, ecx
0x530048: not     ecx
0x53004A: and     eax, ecx
0x53004C: pop     ecx
0x53004D: retn    8
