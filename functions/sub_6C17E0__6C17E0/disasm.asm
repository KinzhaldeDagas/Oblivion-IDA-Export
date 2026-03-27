0x6C17E0: mov     eax, [esp+arg_0]
0x6C17E4: test    eax, eax
0x6C17E6: jz      short locret_6C1807
0x6C17E8: mov     ecx, [eax-4]
0x6C17EB: push    esi
0x6C17EC: lea     esi, [eax-4]
0x6C17EF: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C17F4: push    ecx; int
0x6C17F5: push    1Ch; unsigned int
0x6C17F7: push    eax; void *
0x6C17F8: call    $LN21
0x6C17FD: push    esi
0x6C17FE: call    FormHeapFree
0x6C1803: add     esp, 4
0x6C1806: pop     esi
0x6C1807: retn
