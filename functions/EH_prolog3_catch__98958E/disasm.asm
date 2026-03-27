0x98958E: push    eax
0x98958F: push    large dword ptr fs:0
0x989596: lea     eax, [esp+8+arg_0]
0x98959A: sub     esp, [esp+0Ch]
0x98959E: push    ebx
0x98959F: push    esi
0x9895A0: push    edi
0x9895A1: mov     [eax], ebp
0x9895A3: mov     ebp, eax
0x9895A5: mov     eax, ___security_cookie
0x9895AA: xor     eax, ebp
0x9895AC: push    eax
0x9895AD: mov     [ebp-10h], esp
0x9895B0: push    dword ptr [ebp-4]
0x9895B3: mov     dword ptr [ebp-4], 0FFFFFFFFh
0x9895BA: lea     eax, [ebp-0Ch]
0x9895BD: mov     large fs:0, eax
0x9895C3: retn
