0x405760: push    ecx; Return a strong reference to NiGeometry+0xAC NiPropertyState; this is property state, not a RenderPass bundle.
0x405761: mov     eax, [ecx+0ACh]; NiGeometry+0xAC is its strong-owned NiPropertyState pointer.
0x405767: test    eax, eax
0x405769: push    esi
0x40576A: mov     esi, [esp+8+output]
0x40576E: mov     [esp+8+var_4], 0
0x405776: mov     [esi], eax; Publish the NiPropertyState pointer through the output NiPointer before incrementing its reference count.
0x405778: jz      short loc_405784
0x40577A: add     eax, 4
0x40577D: push    eax; lpAddend
0x40577E: call    ds:InterlockedIncrement
0x405784: mov     eax, esi
0x405786: pop     esi
0x405787: pop     ecx
0x405788: retn    4
