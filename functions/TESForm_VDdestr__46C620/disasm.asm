0x46C620: push    esi
0x46C621: mov     esi, ecx
0x46C623: call    TESForm_destr
0x46C628: test    [esp+4+arg_0], 1
0x46C62D: jz      short loc_46C638
0x46C62F: push    esi
0x46C630: call    FormHeapFree
0x46C635: add     esp, 4
0x46C638: mov     eax, esi
0x46C63A: pop     esi
0x46C63B: retn    4
