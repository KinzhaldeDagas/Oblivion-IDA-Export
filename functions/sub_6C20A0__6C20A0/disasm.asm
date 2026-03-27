0x6C20A0: mov     eax, [esp+arg_0]
0x6C20A4: test    eax, eax
0x6C20A6: jz      short locret_6C20C7
0x6C20A8: mov     ecx, [eax-4]
0x6C20AB: push    esi
0x6C20AC: lea     esi, [eax-4]
0x6C20AF: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C20B4: push    ecx; int
0x6C20B5: push    14h; unsigned int
0x6C20B7: push    eax; void *
0x6C20B8: call    $LN21
0x6C20BD: push    esi
0x6C20BE: call    FormHeapFree
0x6C20C3: add     esp, 4
0x6C20C6: pop     esi
0x6C20C7: retn
