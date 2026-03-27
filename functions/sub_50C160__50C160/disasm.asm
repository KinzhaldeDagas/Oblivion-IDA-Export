0x50C160: cmp     [esp+arg_8], 0
0x50C165: fldz
0x50C167: mov     ecx, [esp+arg_18]
0x50C16B: fstp    qword ptr [ecx]
0x50C16D: mov     [esp+arg_18], 0
0x50C175: jz      short loc_50C194
0x50C177: mov     eax, [esp+arg_C]
0x50C17B: test    eax, eax
0x50C17D: jz      short loc_50C194
0x50C17F: mov     eax, [eax+0Ch]
0x50C182: push    ecx
0x50C183: lea     ecx, [esp+4+arg_18]
0x50C187: push    ecx
0x50C188: mov     [esp+8+arg_18], eax
0x50C18C: call    sub_4F9FB0
0x50C191: add     esp, 8
0x50C194: cmp     byte ptr ds:0B361ACh, 0
0x50C19B: jz      short loc_50C1AF
0x50C19D: mov     edx, [esp+arg_18]
0x50C1A1: push    edx
0x50C1A2: push    offset aGetcontainer08; "GetContainer >>(%08x)"
0x50C1A7: call    Interface_ConsolePrint
0x50C1AC: add     esp, 8
0x50C1AF: mov     al, 1
0x50C1B1: retn
