0x6BF150: mov     eax, [esp+arg_0]
0x6BF154: test    eax, eax
0x6BF156: jz      short locret_6BF177
0x6BF158: mov     ecx, [eax-4]
0x6BF15B: push    esi
0x6BF15C: lea     esi, [eax-4]
0x6BF15F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BF164: push    ecx; int
0x6BF165: push    8; unsigned int
0x6BF167: push    eax; void *
0x6BF168: call    $LN21
0x6BF16D: push    esi
0x6BF16E: call    FormHeapFree
0x6BF173: add     esp, 4
0x6BF176: pop     esi
0x6BF177: retn
