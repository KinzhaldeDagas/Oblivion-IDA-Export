0x7A3920: push    esi; Oblivion CTreeEngine scalar deleting destructor. Calls the decoded 0x110-byte CTreeEngine destructor, then frees through FormHeap only when flags bit 0 is set.
0x7A3921: mov     esi, ecx
0x7A3923: call    OB_CTreeEngine_dtor_010201A0; Oblivion compact CTreeEngine destructor. Destroys embedded SIdvLeafInfo, releases generated billboard-leaf and branch-info vector storage, clears the branch-texture small string/random state, and then runs the shared base destructor. No later root-support storage exists in this build.
0x7A3928: test    byte ptr [esp+4+flags], 1
0x7A392D: jz      short loc_7A3938
0x7A392F: push    esi
0x7A3930: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A3935: add     esp, 4
0x7A3938: mov     eax, esi
0x7A393A: pop     esi
0x7A393B: retn    4
