0x4DBF30: push    esi
0x4DBF31: mov     esi, [esp+4+arg_0]
0x4DBF35: test    esi, esi
0x4DBF37: push    edi
0x4DBF38: mov     edi, ecx
0x4DBF3A: jz      short loc_4DBF47
0x4DBF3C: mov     ecx, esi; this
0x4DBF3E: call    TESObjectREFR_IsPersistent?
0x4DBF43: test    al, al
0x4DBF45: jz      short loc_4DBF50
0x4DBF47: push    esi
0x4DBF48: lea     ecx, [edi+44h]
0x4DBF4B: call    sub_4206A0
0x4DBF50: pop     edi
0x4DBF51: pop     esi
0x4DBF52: retn    4
