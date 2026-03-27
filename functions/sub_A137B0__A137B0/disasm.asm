0xA137B0: push    ebp
0xA137B1: mov     ebp, esp
0xA137B3: and     esp, 0FFFFFFF0h
0xA137B6: sub     esp, 0A0h
0xA137BC: xor     eax, eax
0xA137BE: push    eax
0xA137BF: lea     ecx, [esp+0A4h+var_90]
0xA137C3: call    sub_9113D0
0xA137C8: mov     al, byte ptr [esp+0A0h+var_90]
0xA137CC: mov     cl, byte ptr [esp+0A0h+var_90+1]
0xA137D0: mov     dl, byte ptr [esp+0A0h+var_90+2]
0xA137D4: mov     byte ptr [esp+0A0h+var_94], al
0xA137D8: mov     al, byte ptr [esp+0A0h+var_90+3]
0xA137DC: mov     byte ptr [esp+0A0h+var_94+1], cl
0xA137E0: mov     byte ptr [esp+0A0h+var_94+2], dl
0xA137E4: mov     byte ptr [esp+0A0h+var_94+3], al
0xA137E8: mov     ecx, [esp+0A0h+var_94]
0xA137EC: mov     dword_BA8344, offset aHkragdollconst; "hkRagdollConstraintData" ...
0xA137F6: mov     dword_BA8348, offset sub_911430
0xA13800: mov     dword_BA834C, ecx
0xA13806: mov     esp, ebp
0xA13808: pop     ebp
0xA13809: retn
