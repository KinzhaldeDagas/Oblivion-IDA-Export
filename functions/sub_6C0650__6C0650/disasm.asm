0x6C0650: mov     eax, [esp+arg_0]
0x6C0654: test    eax, eax
0x6C0656: jz      short locret_6C0677
0x6C0658: mov     ecx, [eax-4]
0x6C065B: push    esi
0x6C065C: lea     esi, [eax-4]
0x6C065F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C0664: push    ecx; int
0x6C0665: push    4Ch ; 'L'; unsigned int
0x6C0667: push    eax; void *
0x6C0668: call    $LN21
0x6C066D: push    esi
0x6C066E: call    FormHeapFree
0x6C0673: add     esp, 4
0x6C0676: pop     esi
0x6C0677: retn
