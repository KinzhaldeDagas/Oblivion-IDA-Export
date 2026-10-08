0x52F770: mov     eax, [esp+a4]
0x52F774: mov     edx, [esp+a3]
0x52F778: push    0; conversation
0x52F77A: push    0; previousTopic
0x52F77C: push    0; useConversationRules
0x52F77E: push    eax; target
0x52F77F: mov     eax, [esp+10h+a2]
0x52F783: push    edx; speaker
0x52F784: push    eax; lowDispositionFailure
0x52F785: call    TESTopic__SelectInfoForSpeaker; Authoritative Oblivion INFO selector. Scans running quest buckets by descending priority and INFOs in record order; applies conditions, conversation linkedFrom/ANY rules, reuse suppression, and Random groups. For an ambient first item (previousTopic=null), a nonempty linkedFrom list is rejected unless the target is the player. RandomEnd is latched before conversation reuse checks, so a duplicate/repeated RandomEnd INFO can terminate the scan without being eligible.
0x52F78A: retn    0Ch
