0x91BD40: push    esi
0x91BD41: push    edi
0x91BD42: mov     edi, [esp+8+arg_0]
0x91BD46: push    edi
0x91BD47: mov     esi, ecx
0x91BD49: call    sub_91BA70
0x91BD4E: mov     ecx, [esi-14h]
0x91BD51: mov     esi, ds:0BA8438h
0x91BD57: mov     edx, [ecx]
0x91BD59: add     esp, 4
0x91BD5C: push    esi
0x91BD5D: push    eax
0x91BD5E: mov     eax, [edi+50h]
0x91BD61: add     eax, 10h
0x91BD64: push    eax
0x91BD65: call    dword ptr [edx+0Ch]
0x91BD68: pop     edi
0x91BD69: pop     esi
0x91BD6A: retn    4
