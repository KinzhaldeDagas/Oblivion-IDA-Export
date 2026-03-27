0x7343E0: sub     esp, 48h
0x7343E3: mov     eax, ds:0B30AACh
0x7343E8: xor     eax, esp
0x7343EA: mov     [esp+48h+var_4], eax
0x7343EE: push    ebx
0x7343EF: push    ebp
0x7343F0: push    esi
0x7343F1: mov     esi, [esp+54h+Dst]
0x7343F5: push    edi
0x7343F6: mov     edi, ecx
0x7343F8: mov     eax, [edi]
0x7343FA: test    eax, eax
0x7343FC: lea     ebx, [esp+58h+Src]
0x734400: jz      short loc_73440B
0x734402: lea     ecx, [esp+58h+var_41]
0x734406: push    ecx
0x734407: mov     ecx, edi
0x734409: call    eax
0x73440B: mov     eax, [edi+4]
0x73440E: lea     edx, [esp+58h+Src]
0x734412: push    edx
0x734413: mov     ecx, edi
0x734415: call    eax
0x734417: mov     ebp, [esp+58h+arg_4]
0x73441B: mov     eax, [esp+58h+arg_8]
0x73441F: add     ebp, ebp
0x734421: add     ebp, ebp
0x734423: test    eax, eax
0x734425: jbe     short loc_734448
0x734427: mov     dword ptr [esp+58h+var_48], eax
0x73442B: jmp     short loc_734430
0x73442D: align 10h
0x734430: push    ebp; Size
0x734431: push    ebx; Src
0x734432: push    esi; Dst
0x734433: call    _memcpy
0x734438: add     esi, [edi+0Ch]
0x73443B: add     esp, 0Ch
0x73443E: add     ebx, 10h
0x734441: sub     dword ptr [esp+58h+var_48], 1
0x734446: jnz     short loc_734430
0x734448: mov     ecx, [esp+58h+var_4]
0x73444C: pop     edi
0x73444D: pop     esi
0x73444E: pop     ebp
0x73444F: pop     ebx
0x734450: xor     ecx, esp
0x734452: call    @__security_check_cookie@4; __security_check_cookie(x)
0x734457: add     esp, 48h
0x73445A: retn    0Ch
