0x6BE810: mov     eax, [esp+arg_0]
0x6BE814: test    eax, eax
0x6BE816: jz      short locret_6BE837
0x6BE818: mov     ecx, [eax-4]
0x6BE81B: push    esi
0x6BE81C: lea     esi, [eax-4]
0x6BE81F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BE824: push    ecx; int
0x6BE825: push    48h ; 'H'; unsigned int
0x6BE827: push    eax; void *
0x6BE828: call    $LN21
0x6BE82D: push    esi
0x6BE82E: call    FormHeapFree
0x6BE833: add     esp, 4
0x6BE836: pop     esi
0x6BE837: retn
