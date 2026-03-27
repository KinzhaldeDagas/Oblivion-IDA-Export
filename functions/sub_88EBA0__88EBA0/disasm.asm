0x88EBA0: push    esi
0x88EBA1: mov     esi, ecx
0x88EBA3: mov     dword ptr [esi], offset ??_7bhkBlendCollisionObject@@6B@; const bhkBlendCollisionObject::`vftable'
0x88EBA9: sub     dword ptr ds:0BA7A1Ch, 1
0x88EBB0: call    ??1bhkNiCollisionObject@@UAE@XZ; bhkNiCollisionObject::~bhkNiCollisionObject(void)
0x88EBB5: test    [esp+4+arg_0], 1
0x88EBBA: jz      short loc_88EBC5
0x88EBBC: push    esi
0x88EBBD: call    FormHeapFree
0x88EBC2: add     esp, 4
0x88EBC5: mov     eax, esi
0x88EBC7: pop     esi
0x88EBC8: retn    4
