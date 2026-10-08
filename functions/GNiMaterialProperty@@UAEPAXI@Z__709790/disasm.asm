0x709790: push    esi
0x709791: mov     esi, ecx
0x709793: call    ??1NiMaterialProperty@@UAE@XZ; NiMaterialProperty::~NiMaterialProperty(void)
0x709798: test    byte ptr [esp+4+arg_0], 1
0x70979D: jz      short loc_7097A8
0x70979F: push    esi
0x7097A0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7097A5: add     esp, 4
0x7097A8: mov     eax, esi
0x7097AA: pop     esi
0x7097AB: retn    4
