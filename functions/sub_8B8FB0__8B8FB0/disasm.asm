0x8B8FB0: push    ebp
0x8B8FB1: mov     ebp, esp
0x8B8FB3: and     esp, 0FFFFFFF0h
0x8B8FB6: sub     esp, 28h
0x8B8FB9: mov     eax, ds:0B30AACh
0x8B8FBE: xor     eax, esp
0x8B8FC0: mov     [esp+28h+var_4], eax
0x8B8FC4: push    esi
0x8B8FC5: push    edi
0x8B8FC6: mov     edi, [ebp+arg_0]
0x8B8FC9: lea     eax, [esp+30h+var_20]
0x8B8FCD: push    eax
0x8B8FCE: mov     esi, ecx
0x8B8FD0: call    sub_8A2F10
0x8B8FD5: add     esi, 20h ; ' '
0x8B8FD8: push    esi
0x8B8FD9: lea     ecx, [esp+34h+var_20]
0x8B8FDD: push    ecx
0x8B8FDE: mov     ecx, edi
0x8B8FE0: call    sub_8A2B40
0x8B8FE5: mov     ecx, [esp+30h+var_4]
0x8B8FE9: mov     eax, edi
0x8B8FEB: pop     edi
0x8B8FEC: pop     esi
0x8B8FED: xor     ecx, esp
0x8B8FEF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B8FF4: mov     esp, ebp
0x8B8FF6: pop     ebp
0x8B8FF7: retn    4
