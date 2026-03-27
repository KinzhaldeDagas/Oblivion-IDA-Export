0x7567B0: push    esi
0x7567B1: push    edi
0x7567B2: push    48h ; 'H'; Size
0x7567B4: mov     edi, ecx
0x7567B6: call    FormHeapAlloc
0x7567BB: mov     esi, eax
0x7567BD: add     esp, 4
0x7567C0: test    esi, esi
0x7567C2: jz      short loc_7567E5
0x7567C4: mov     ecx, esi
0x7567C6: call    sub_75F2C0
0x7567CB: mov     eax, [esp+8+arg_0]
0x7567CF: push    eax
0x7567D0: push    esi
0x7567D1: mov     ecx, edi
0x7567D3: mov     dword ptr [esi], offset ??_7NiPSysModifierActiveCtlr@@6B@; const NiPSysModifierActiveCtlr::`vftable'
0x7567D9: call    sub_75F5A0
0x7567DE: pop     edi
0x7567DF: mov     eax, esi
0x7567E1: pop     esi
0x7567E2: retn    4
0x7567E5: mov     eax, [esp+8+arg_0]
0x7567E9: push    eax
0x7567EA: xor     esi, esi
0x7567EC: push    esi
0x7567ED: mov     ecx, edi
0x7567EF: call    sub_75F5A0
0x7567F4: pop     edi
0x7567F5: mov     eax, esi
0x7567F7: pop     esi
0x7567F8: retn    4
