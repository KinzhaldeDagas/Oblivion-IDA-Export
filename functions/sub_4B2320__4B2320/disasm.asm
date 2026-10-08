0x4B2320: mov     eax, [ecx]; Generic TESBoundObject Create3D wrapper: dispatches virtual +0xEC with the reference and a zero mode argument.
0x4B2322: mov     edx, [esp+reference]
0x4B2326: mov     eax, [eax+0ECh]
0x4B232C: push    0
0x4B232E: push    edx
0x4B232F: call    eax
0x4B2331: retn    4
