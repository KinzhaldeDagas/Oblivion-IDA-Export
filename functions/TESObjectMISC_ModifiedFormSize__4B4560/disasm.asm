0x4B4560: push    ebx
0x4B4561: push    esi
0x4B4562: push    edi
0x4B4563: mov     edi, [esp+0Ch+arg_0]
0x4B4567: push    edi
0x4B4568: mov     esi, ecx
0x4B456A: call    TESForm_ModifiedFormSize
0x4B456F: push    edi
0x4B4570: lea     ecx, [esi+60h]
0x4B4573: movzx   ebx, ax
0x4B4576: call    TESValueForm_ModifiedSize
0x4B457B: pop     edi
0x4B457C: pop     esi
0x4B457D: add     ax, bx
0x4B4580: pop     ebx
0x4B4581: retn    4
