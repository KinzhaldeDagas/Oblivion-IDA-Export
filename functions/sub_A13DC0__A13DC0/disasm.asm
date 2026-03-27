0xA13DC0: push    ebp
0xA13DC1: mov     ebp, esp
0xA13DC3: and     esp, 0FFFFFFF0h
0xA13DC6: sub     esp, 0F0h
0xA13DCC: xor     eax, eax
0xA13DCE: push    eax
0xA13DCF: lea     ecx, [esp+0F4h+var_E0]
0xA13DD3: call    sub_9113D0
0xA13DD8: mov     eax, offset off_A9DFE8
0xA13DDD: mov     [esp+0F0h+var_E0], eax
0xA13DE1: mov     ecx, [esp+0F0h+var_E0]
0xA13DE5: mov     byte ptr [esp+0F0h+var_E4], al
0xA13DE9: mov     byte ptr [esp+0F0h+var_E4+1], ah
0xA13DED: shr     eax, 10h
0xA13DF0: shr     ecx, 18h
0xA13DF3: mov     byte ptr [esp+0F0h+var_E4+2], al
0xA13DF7: mov     byte ptr [esp+0F0h+var_E4+3], cl
0xA13DFB: mov     edx, [esp+0F0h+var_E4]
0xA13DFF: mov     dword_BA84FC, offset aHkpoweredragdo; "hkPoweredRagdollConstraintData" ...
0xA13E09: mov     dword_BA8500, offset sub_924F20
0xA13E13: mov     dword_BA8504, edx
0xA13E19: mov     esp, ebp
0xA13E1B: pop     ebp
0xA13E1C: retn
