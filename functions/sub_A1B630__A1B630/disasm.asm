0xA1B630: mov     eax, dword_B082F4
0xA1B635: test    eax, eax
0xA1B637: mov     off_B082F0, offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable' ...
0xA1B641: jz      short locret_A1B662
0xA1B643: mov     ecx, [eax-4]
0xA1B646: push    esi
0xA1B647: lea     esi, [eax-4]
0xA1B64A: push    offset sub_7016A0; void (__thiscall *)(void *)
0xA1B64F: push    ecx; int
0xA1B650: push    4; unsigned int
0xA1B652: push    eax; void *
0xA1B653: call    $LN21
0xA1B658: push    esi
0xA1B659: call    FormHeapFree
0xA1B65E: add     esp, 4
0xA1B661: pop     esi
0xA1B662: retn
