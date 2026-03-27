0xA162B2: call    sub_98BAF0
0xA162B7: add     eax, 40h ; '@'
0xA162BA: push    eax
0xA162BB: mov     ecx, offset unk_BA9BC0
0xA162C0: call    ??0?$basic_filebuf@DU?$char_traits@D@std@@@std@@QAE@XZ; std::filebuf::filebuf(void)
0xA162C5: push    offset sub_A27BE3; void (__cdecl *)()
0xA162CA: call    _atexit
0xA162CF: pop     ecx
0xA162D0: retn
