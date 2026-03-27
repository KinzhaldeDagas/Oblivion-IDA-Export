0x6BF570: mov     eax, [esp+arg_0]
0x6BF574: test    eax, eax
0x6BF576: jz      short locret_6BF597
0x6BF578: mov     ecx, [eax-4]
0x6BF57B: push    esi
0x6BF57C: lea     esi, [eax-4]
0x6BF57F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BF584: push    ecx; int
0x6BF585: push    10h; unsigned int
0x6BF587: push    eax; void *
0x6BF588: call    $LN21
0x6BF58D: push    esi
0x6BF58E: call    FormHeapFree
0x6BF593: add     esp, 4
0x6BF596: pop     esi
0x6BF597: retn
