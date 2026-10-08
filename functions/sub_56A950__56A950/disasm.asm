0x56A950: mov     edx, [esp+target]; RadiantAI: TESPackage condition-list wrapper used by central package chooser at 0x569020. Delegates to condition evaluator at 0x56A510 with actor and resolved target form; package selection fails if conditions fail.
0x56A954: push    0; continuation
0x56A956: lea     eax, [esp+4+target]
0x56A95A: push    eax; lowDispositionFailure
0x56A95B: mov     eax, [esp+8+subject]
0x56A95F: push    edx; target
0x56A960: push    eax; subject
0x56A961: call    ConditionList_EvaluateCombined; Oblivion condition-stream evaluator. operatorAndFlags bit 0 connects the current predicate to the next predicate by OR; an unflagged item closes that OR group, and groups are combined with AND. TESTopicInfo::EvaluateConditions supplies quest conditions as this list and INFO conditions as continuation, so evaluator state can cross their boundary.
0x56A966: retn    8
