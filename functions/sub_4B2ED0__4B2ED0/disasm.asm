0x4B2ED0: mov     eax, [esp+arg_0]
0x4B2ED4: mov     dword ptr [eax+8], 0; NiTPointerList node release clears node+0x08 payload before returning the 12-byte node to the global pool.
0x4B2EDB: mov     [esp+arg_0], eax
0x4B2EDF: add     ecx, 0Ch
0x4B2EE2: jmp     NiTListNodePool_Release; Return the cleared NiTList node to the synchronized global node pool; payload lifetime is not handled here.
