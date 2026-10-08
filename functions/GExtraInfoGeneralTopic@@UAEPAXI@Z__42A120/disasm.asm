0x42A120: push    esi
0x42A121: mov     esi, ecx
0x42A123: call    ExtraInfoGeneralTopic__Destructor; ExtraInfoGeneralTopic destructor clears the cached MenuTopic's isInfoGeneralTopic ownership marker, destroys its responses/display name, then frees the MenuTopic allocation.
0x42A128: test    byte ptr [esp+4+arg_0], 1
0x42A12D: jz      short loc_42A138
0x42A12F: push    esi
0x42A130: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x42A135: add     esp, 4
0x42A138: mov     eax, esi
0x42A13A: pop     esi
0x42A13B: retn    4
