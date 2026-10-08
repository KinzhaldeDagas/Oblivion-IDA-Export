0x4B8A40: push    esi
0x4B8A41: mov     esi, ecx
0x4B8A43: call    ??1TESObjectDOOR@@UAE@XZ; Verified destructor restores TESObjectDOOR/base-component vtables, frees the random teleport-space list and clears form component references, destroys the model/name, then destroys the base object.
0x4B8A48: test    byte ptr [esp+4+arg_0], 1
0x4B8A4D: jz      short loc_4B8A58
0x4B8A4F: push    esi
0x4B8A50: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B8A55: add     esp, 4
0x4B8A58: mov     eax, esi
0x4B8A5A: pop     esi
0x4B8A5B: retn    4
