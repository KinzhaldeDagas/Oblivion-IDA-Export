0x4A0040: fld     dword ptr ds:0A2FE7Ch
0x4A0046: push    esi
0x4A0047: mov     esi, ecx
0x4A0049: fstp    dword ptr [esi+0E4h]
0x4A004F: xor     al, al
0x4A0051: fld     dword ptr ds:0A3F888h
0x4A0057: mov     dword ptr [esi], offset ??_7BSClearZNode@@6B@; const BSClearZNode::`vftable'
0x4A005D: fstp    dword ptr [esi+0E0h]
0x4A0063: mov     [esi+0DDh], al
0x4A0069: mov     [esi+0DCh], al
0x4A006F: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x4A0074: test    [esp+4+arg_0], 1
0x4A0079: jz      short loc_4A0084
0x4A007B: push    esi
0x4A007C: call    FormHeapFree
0x4A0081: add     esp, 4
0x4A0084: mov     eax, esi
0x4A0086: pop     esi
0x4A0087: retn    4
