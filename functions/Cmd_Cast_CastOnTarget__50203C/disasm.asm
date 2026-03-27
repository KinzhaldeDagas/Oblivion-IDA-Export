0x50203C: mov     ecx, [esp+arg_10]
0x502040: mov     edx, [esp+arg_C]
0x502044: push    0; char
0x502046: push    ecx; int
0x502047: push    edx; int
0x502048: mov     ecx, edi; int
0x50204A: call    Actor_CastOnTarget
0x50204F: pop     ebp
0x502050: pop     ebx
0x502051: pop     edi
0x502052: mov     al, 1
0x502054: pop     esi
0x502055: add     esp, 8
0x502058: retn
