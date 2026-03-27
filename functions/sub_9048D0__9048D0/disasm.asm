0x9048D0: push    ebp
0x9048D1: mov     ebp, esp
0x9048D3: and     esp, 0FFFFFFF0h
0x9048D6: sub     esp, 54h
0x9048D9: push    ebx
0x9048DA: push    esi
0x9048DB: mov     esi, [ebp+arg_0]
0x9048DE: push    edi
0x9048DF: mov     edi, [esi]
0x9048E1: mov     ebx, ecx
0x9048E3: mov     ecx, [esi+8]
0x9048E6: lea     eax, [edi+20h]
0x9048E9: push    eax
0x9048EA: push    ecx
0x9048EB: lea     ecx, [esp+68h+var_40]
0x9048EF: call    sub_8B1F70
0x9048F4: mov     ecx, [ebx+0Ch]
0x9048F7: mov     [esp+60h+var_44], esi
0x9048FB: lea     edx, [esp+60h+var_40]
0x9048FF: mov     [esp+60h+var_48], edx
0x904903: mov     eax, [esi+4]
0x904906: mov     edi, [edi+0Ch]
0x904909: mov     [esp+60h+var_4C], eax
0x90490D: mov     eax, [ebp+arg_8]
0x904910: push    eax
0x904911: mov     eax, [ebp+arg_4]
0x904914: push    eax
0x904915: lea     eax, [esp+68h+var_50]
0x904919: mov     [esp+68h+var_50], edi
0x90491D: mov     edx, [ecx]
0x90491F: push    eax
0x904920: call    dword ptr [edx+1Ch]
0x904923: pop     edi
0x904924: pop     esi
0x904925: pop     ebx
0x904926: mov     esp, ebp
0x904928: pop     ebp
0x904929: retn    0Ch
