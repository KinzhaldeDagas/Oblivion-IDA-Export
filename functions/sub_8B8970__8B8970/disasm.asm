0x8B8970: push    ebp
0x8B8971: mov     ebp, esp
0x8B8973: and     esp, 0FFFFFFF0h
0x8B8976: sub     esp, 0Ch
0x8B8979: mov     eax, [ebp+arg_0]
0x8B897C: push    esi
0x8B897D: push    0
0x8B897F: push    eax
0x8B8980: mov     esi, ecx
0x8B8982: call    sub_8F5750
0x8B8987: xorps   xmm0, xmm0
0x8B898A: mov     dword ptr [esi], offset off_A98060
0x8B8990: mov     dword ptr [esi+40h], 3F000000h
0x8B8997: mov     dword ptr [esi+44h], 3E99999Ah
0x8B899E: mov     dword ptr [esi+48h], 437A0000h
0x8B89A5: mov     dword ptr [esi+4Ch], 3F733333h
0x8B89AC: movaps  xmmword ptr [esi+20h], xmm0
0x8B89B0: movaps  xmmword ptr [esi+30h], xmm0
0x8B89B4: mov     eax, esi
0x8B89B6: pop     esi
0x8B89B7: mov     esp, ebp
0x8B89B9: pop     ebp
0x8B89BA: retn    4
