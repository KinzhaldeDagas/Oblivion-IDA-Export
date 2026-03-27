0xA26900: mov     eax, dword_B252EC
0xA26905: test    eax, eax
0xA26907: mov     off_B252E8, offset ??_7?$NiTArray@V?$NiPointer@VNiRefObject@@@@@@6B@; const NiTArray<NiPointer<NiRefObject>>::`vftable' ...
0xA26911: jz      short locret_A26932
0xA26913: mov     ecx, [eax-4]
0xA26916: push    esi
0xA26917: lea     esi, [eax-4]
0xA2691A: push    offset sub_7016A0; void (__thiscall *)(void *)
0xA2691F: push    ecx; int
0xA26920: push    4; unsigned int
0xA26922: push    eax; void *
0xA26923: call    $LN21
0xA26928: push    esi
0xA26929: call    FormHeapFree
0xA2692E: add     esp, 4
0xA26931: pop     esi
0xA26932: retn
