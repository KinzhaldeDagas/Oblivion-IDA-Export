0x8C4450: push    esi
0x8C4451: mov     esi, ecx
0x8C4453: mov     dword ptr [esi], offset ??_7bhkPlaneShape@@6B@; const bhkPlaneShape::`vftable'
0x8C4459: sub     dword ptr ds:0BA810Ch, 1
0x8C4460: call    ??1bhkHeightFieldShape@@UAE@XZ; bhkHeightFieldShape::~bhkHeightFieldShape(void)
0x8C4465: test    [esp+4+arg_0], 1
0x8C446A: jz      short loc_8C4475
0x8C446C: push    esi
0x8C446D: call    FormHeapFree
0x8C4472: add     esp, 4
0x8C4475: mov     eax, esi
0x8C4477: pop     esi
0x8C4478: retn    4
