0x8C4190: push    esi
0x8C4191: mov     esi, ecx
0x8C4193: call    ??1bhkHeightFieldShape@@UAE@XZ; bhkHeightFieldShape::~bhkHeightFieldShape(void)
0x8C4198: test    byte ptr [esp+4+arg_0], 1
0x8C419D: jz      short loc_8C41A8
0x8C419F: push    esi
0x8C41A0: call    FormHeapFree
0x8C41A5: add     esp, 4
0x8C41A8: mov     eax, esi
0x8C41AA: pop     esi
0x8C41AB: retn    4
