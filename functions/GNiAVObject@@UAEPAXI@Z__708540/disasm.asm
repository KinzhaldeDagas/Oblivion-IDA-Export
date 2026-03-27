0x708540: push    esi
0x708541: mov     esi, ecx
0x708543: call    ??1NiAVObject@@UAE@XZ; NiAVObject::~NiAVObject(void)
0x708548: test    byte ptr [esp+4+arg_0], 1
0x70854D: jz      short loc_708558
0x70854F: push    esi
0x708550: call    FormHeapFree
0x708555: add     esp, 4
0x708558: mov     eax, esi
0x70855A: pop     esi
0x70855B: retn    4
