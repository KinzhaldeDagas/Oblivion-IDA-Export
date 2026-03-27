0x502069: mov     eax, [esp+arg_10]
0x50206D: mov     ecx, [esp+arg_C]
0x502071: push    eax; int
0x502072: push    ecx; int
0x502073: mov     ecx, edi; int
0x502075: call    Actor_CastOnTouch
0x50207A: pop     ebp
0x50207B: pop     ebx
0x50207C: pop     edi
0x50207D: mov     al, 1
0x50207F: pop     esi
0x502080: add     esp, 8
0x502083: retn
