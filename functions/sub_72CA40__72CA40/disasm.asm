0x72CA40: push    ebx
0x72CA41: mov     bl, [esp+4+arg_0]
0x72CA45: test    bl, 2
0x72CA48: push    esi
0x72CA49: mov     esi, ecx
0x72CA4B: jz      short loc_72CA78
0x72CA4D: mov     eax, [esi-4]
0x72CA50: push    edi
0x72CA51: push    offset sub_72C450; void (__thiscall *)(void *)
0x72CA56: lea     edi, [esi-4]
0x72CA59: push    eax; int
0x72CA5A: push    2Ch ; ','; unsigned int
0x72CA5C: push    esi; void *
0x72CA5D: call    $LN21
0x72CA62: test    bl, 1
0x72CA65: jz      short loc_72CA70
0x72CA67: push    edi
0x72CA68: call    FormHeapFree
0x72CA6D: add     esp, 4
0x72CA70: mov     eax, edi
0x72CA72: pop     edi
0x72CA73: pop     esi
0x72CA74: pop     ebx
0x72CA75: retn    4
0x72CA78: call    sub_72C450
0x72CA7D: test    bl, 1
0x72CA80: jz      short loc_72CA8B
0x72CA82: push    esi
0x72CA83: call    FormHeapFree
0x72CA88: add     esp, 4
0x72CA8B: mov     eax, esi
0x72CA8D: pop     esi
0x72CA8E: pop     ebx
0x72CA8F: retn    4
