0x682ED0: push    esi
0x682ED1: mov     esi, ecx
0x682ED3: call    ??1?$NiTPointerMap@PAVActor@@PAUPathingData@@@@UAE@XZ; NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>(void)
0x682ED8: test    [esp+4+arg_0], 1
0x682EDD: jz      short loc_682EE8
0x682EDF: push    esi
0x682EE0: call    FormHeapFree
0x682EE5: add     esp, 4
0x682EE8: mov     eax, esi
0x682EEA: pop     esi
0x682EEB: retn    4
