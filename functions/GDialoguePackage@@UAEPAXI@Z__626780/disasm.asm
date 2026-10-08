0x626780: push    esi
0x626781: mov     esi, ecx
0x626783: call    DialoguePackage__Destructor; DialoguePackage destructor/cancellation path. Clears PlayerCharacter.dialoguePackage when owned, destroys/frees the generated Conversation, and never calls DialogueItem::RunResult. Deferred INFO results are lost on interruption; ImmediateResult side effects already occurred during construction.
0x626788: test    byte ptr [esp+4+arg_0], 1
0x62678D: jz      short loc_626798
0x62678F: push    esi
0x626790: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x626795: add     esp, 4
0x626798: mov     eax, esi
0x62679A: pop     esi
0x62679B: retn    4
