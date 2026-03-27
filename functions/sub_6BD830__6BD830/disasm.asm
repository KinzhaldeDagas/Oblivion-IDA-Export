0x6BD830: mov     eax, [esp+arg_0]
0x6BD834: test    eax, eax
0x6BD836: jz      short locret_6BD857
0x6BD838: mov     ecx, [eax-4]
0x6BD83B: push    esi
0x6BD83C: lea     esi, [eax-4]
0x6BD83F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BD844: push    ecx; int
0x6BD845: push    24h ; '$'; unsigned int
0x6BD847: push    eax; void *
0x6BD848: call    $LN21
0x6BD84D: push    esi
0x6BD84E: call    FormHeapFree
0x6BD853: add     esp, 4
0x6BD856: pop     esi
0x6BD857: retn
