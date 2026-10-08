0x530830: mov     eax, ecx; Authoritative Oblivion INFO condition gate. Rejects Deleted INFOs, null parent quests, and SayOnce INFOs whose INFO-global spoken byte is set. Otherwise evaluates quest conditions at +0x50 followed by INFO conditions at +0x18 as one continued stream; lowDispositionFailure is set only by a failed GetDisposition >/>= test.
0x530832: mov     ecx, [eax+8]
0x530835: shr     ecx, 5
0x530838: test    cl, 1
0x53083B: jz      short loc_530842
0x53083D: xor     al, al
0x53083F: retn    10h
0x530842: mov     ecx, [esp+parentQuest]
0x530846: test    ecx, ecx
0x530848: jz      short loc_53083D
0x53084A: movzx   edx, byte ptr [eax+25h]
0x53084E: shr     edx, 2
0x530851: test    dl, 1
0x530854: jz      short loc_53085C
0x530856: cmp     byte ptr [eax+22h], 0
0x53085A: jnz     short loc_53083D
0x53085C: add     ecx, 50h ; 'P'; this
0x53085F: cmp     dword ptr [ecx+4], 0
0x530863: jnz     short loc_530886
0x530865: cmp     dword ptr [ecx], 0
0x530868: jnz     short loc_530886
0x53086A: mov     ecx, [esp+lowDispositionFailure]
0x53086E: mov     edx, [esp+target]
0x530872: push    0; continuation
0x530874: push    ecx; lowDispositionFailure
0x530875: mov     ecx, [esp+8+speaker]
0x530879: push    edx; target
0x53087A: push    ecx; subject
0x53087B: lea     ecx, [eax+18h]; this
0x53087E: call    ConditionList_EvaluateCombined; If quest.conditions is empty, evaluate the INFO condition list as the whole stream. Otherwise TESTopicInfo::EvaluateConditions passes quest.conditions as the main list and this->conditions as continuation, preserving the evaluator's AND/OR group state across the boundary.
0x530883: retn    10h
0x530886: add     eax, 18h
0x530889: cmp     dword ptr [eax+4], 0
0x53088D: jnz     short loc_5308AD
0x53088F: cmp     dword ptr [eax], 0
0x530892: jnz     short loc_5308AD
0x530894: mov     edx, [esp+lowDispositionFailure]
0x530898: mov     eax, [esp+target]
0x53089C: push    0; continuation
0x53089E: push    edx; lowDispositionFailure
0x53089F: mov     edx, [esp+8+speaker]
0x5308A3: push    eax; target
0x5308A4: push    edx; subject
0x5308A5: call    ConditionList_EvaluateCombined; Oblivion condition-stream evaluator. operatorAndFlags bit 0 connects the current predicate to the next predicate by OR; an unflagged item closes that OR group, and groups are combined with AND. TESTopicInfo::EvaluateConditions supplies quest conditions as this list and INFO conditions as continuation, so evaluator state can cross their boundary.
0x5308AA: retn    10h
0x5308AD: mov     edx, [esp+target]
0x5308B1: push    eax; continuation
0x5308B2: mov     eax, [esp+4+lowDispositionFailure]
0x5308B6: push    eax; lowDispositionFailure
0x5308B7: mov     eax, [esp+8+speaker]
0x5308BB: push    edx; target
0x5308BC: push    eax; subject
0x5308BD: call    ConditionList_EvaluateCombined; Oblivion condition-stream evaluator. operatorAndFlags bit 0 connects the current predicate to the next predicate by OR; an unflagged item closes that OR group, and groups are combined with AND. TESTopicInfo::EvaluateConditions supplies quest conditions as this list and INFO conditions as continuation, so evaluator state can cross their boundary.
0x5308C2: retn    10h
