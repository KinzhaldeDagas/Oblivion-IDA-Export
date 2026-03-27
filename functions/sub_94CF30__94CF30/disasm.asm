0x94CF30: push    ebx
0x94CF31: mov     ebx, [esp+4+arg_0]
0x94CF35: push    esi
0x94CF36: push    edi
0x94CF37: push    ebx; int
0x94CF38: mov     esi, ecx
0x94CF3A: push    0FFFF0000h; int
0x94CF3F: push    3E800000h; float
0x94CF44: lea     eax, [esi+60h]
0x94CF47: push    eax; int
0x94CF48: lea     ecx, [esi+40h]
0x94CF4B: lea     edi, [esi+0C0h]
0x94CF51: push    ecx; int
0x94CF52: mov     ecx, edi
0x94CF54: call    sub_958610
0x94CF59: push    ebx; int
0x94CF5A: push    0FFFFFFFFh; int
0x94CF5C: push    3E800000h; float
0x94CF61: lea     edx, [esi+90h]
0x94CF67: push    edx; int
0x94CF68: add     esi, 50h ; 'P'
0x94CF6B: push    esi; int
0x94CF6C: mov     ecx, edi
0x94CF6E: call    sub_958610
0x94CF73: pop     edi
0x94CF74: pop     esi
0x94CF75: pop     ebx
0x94CF76: retn    4
