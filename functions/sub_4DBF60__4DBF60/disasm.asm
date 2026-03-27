0x4DBF60: push    esi
0x4DBF61: mov     esi, [esp+4+arg_0]
0x4DBF65: test    esi, esi
0x4DBF67: push    edi
0x4DBF68: mov     edi, ecx
0x4DBF6A: jz      short loc_4DBF77
0x4DBF6C: mov     ecx, esi; this
0x4DBF6E: call    TESObjectREFR_IsPersistent?
0x4DBF73: test    al, al
0x4DBF75: jz      short loc_4DBF80
0x4DBF77: push    esi
0x4DBF78: lea     ecx, [edi+44h]
0x4DBF7B: call    sub_420280
0x4DBF80: pop     edi
0x4DBF81: pop     esi
0x4DBF82: retn    4
