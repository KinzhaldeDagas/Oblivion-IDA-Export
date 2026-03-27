0x8A67F0: push    ebp
0x8A67F1: mov     ebp, esp
0x8A67F3: and     esp, 0FFFFFFF0h
0x8A67F6: sub     esp, 0F0h
0x8A67FC: mov     eax, ds:0B30AACh
0x8A6801: mov     [esp+0F0h+var_4], eax
0x8A6808: xor     eax, eax
0x8A680A: push    eax
0x8A680B: lea     ecx, [esp+0F4h+var_E0]
0x8A680F: call    sub_8A6740
0x8A6814: mov     al, byte ptr [esp+0F0h+var_E0]
0x8A6818: mov     cl, byte ptr [esp+0F0h+var_E0+1]
0x8A681C: mov     dl, byte ptr [esp+0F0h+var_E0+2]
0x8A6820: mov     byte ptr [esp+0F0h+var_E4], al
0x8A6824: mov     al, byte ptr [esp+0F0h+var_E0+3]
0x8A6828: mov     byte ptr [esp+0F0h+var_E4+1], cl
0x8A682C: mov     ecx, [esp+0F0h+var_4]
0x8A6833: mov     byte ptr [esp+0F0h+var_E4+2], dl
0x8A6837: mov     byte ptr [esp+0F0h+var_E4+3], al
0x8A683B: mov     eax, [esp+0F0h+var_E4]
0x8A683F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A6844: mov     esp, ebp
0x8A6846: pop     ebp
0x8A6847: retn
