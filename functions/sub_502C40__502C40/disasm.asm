0x502C40: sub     esp, 8
0x502C43: mov     edx, [esp+8+l]
0x502C47: push    esi
0x502C48: mov     esi, [esp+0Ch+a4]
0x502C4C: xor     eax, eax
0x502C4E: mov     dword ptr [esp+0Ch+var_4], eax
0x502C52: mov     [esp+0Ch+var_8], eax
0x502C56: lea     eax, [esp+0Ch+var_8]
0x502C5A: push    eax
0x502C5B: mov     eax, [esp+10h+arg_10]
0x502C5F: lea     ecx, [esp+10h+var_4]
0x502C63: push    ecx; UInt16
0x502C64: mov     ecx, [esp+14h+arg_C]
0x502C68: push    edx; l
0x502C69: mov     edx, [esp+18h+a3]
0x502C6D: push    eax; a6
0x502C6E: mov     eax, [esp+1Ch+arg_4]
0x502C72: push    ecx; a5
0x502C73: mov     ecx, [esp+20h+a1]
0x502C77: push    esi; a4
0x502C78: push    edx; a3
0x502C79: push    eax; a2
0x502C7A: push    ecx; a1
0x502C7B: call    Script_ExtractArgs
0x502C80: add     esp, 24h
0x502C83: test    al, al
0x502C85: jnz     short loc_502C8C
0x502C87: pop     esi
0x502C88: add     esp, 8
0x502C8B: retn
0x502C8C: mov     edx, [esp+0Ch+arg_18]
0x502C90: mov     eax, [esp+0Ch+var_8]
0x502C94: mov     ecx, dword ptr [esp+0Ch+var_4]
0x502C98: push    edx
0x502C99: push    eax
0x502C9A: push    ecx
0x502C9B: push    esi
0x502C9C: call    sub_4F4BC0
0x502CA1: add     esp, 10h
0x502CA4: pop     esi
0x502CA5: add     esp, 8
0x502CA8: retn
