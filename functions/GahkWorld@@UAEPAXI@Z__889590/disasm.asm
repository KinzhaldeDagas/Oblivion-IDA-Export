0x889590: push    esi
0x889591: mov     esi, ecx
0x889593: mov     dword ptr [esi], offset ??_7ahkWorld@@6B@; const ahkWorld::`vftable'
0x889599: call    sub_89AD80
0x88959E: test    byte ptr [esp+4+arg_0], 1
0x8895A3: jz      short loc_8895BA
0x8895A5: movzx   edx, word ptr [esi+4]
0x8895A9: mov     ecx, ds:0BA7D98h
0x8895AF: mov     eax, [ecx]
0x8895B1: mov     eax, [eax+14h]
0x8895B4: push    2Ch ; ','
0x8895B6: push    edx
0x8895B7: push    esi
0x8895B8: call    eax
0x8895BA: mov     eax, esi
0x8895BC: pop     esi
0x8895BD: retn    4
