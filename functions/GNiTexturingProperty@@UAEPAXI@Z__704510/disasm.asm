0x704510: push    esi
0x704511: mov     esi, ecx
0x704513: call    ??1NiTexturingProperty@@UAE@XZ; NiTexturingProperty::~NiTexturingProperty(void)
0x704518: test    byte ptr [esp+4+arg_0], 1
0x70451D: jz      short loc_704528
0x70451F: push    esi
0x704520: call    FormHeapFree
0x704525: add     esp, 4
0x704528: mov     eax, esi
0x70452A: pop     esi
0x70452B: retn    4
