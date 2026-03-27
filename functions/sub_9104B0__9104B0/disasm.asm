0x9104B0: push    ebx
0x9104B1: mov     ebx, [esp+4+arg_0]
0x9104B5: push    esi
0x9104B6: mov     esi, [esp+8+arg_4]
0x9104BA: push    edi
0x9104BB: push    0
0x9104BD: push    0
0x9104BF: push    esi
0x9104C0: push    ebx
0x9104C1: mov     edi, ecx
0x9104C3: call    sub_8F0F70
0x9104C8: mov     eax, [edi+14h]
0x9104CB: mov     ecx, [edi+10h]
0x9104CE: push    esi
0x9104CF: push    eax
0x9104D0: push    ecx
0x9104D1: call    sub_8F0F20
0x9104D6: mov     ecx, [edi+0Ch]
0x9104D9: mov     edx, [ecx]
0x9104DB: add     esp, 1Ch
0x9104DE: push    esi
0x9104DF: push    ebx
0x9104E0: call    dword ptr [edx+1Ch]
0x9104E3: push    0
0x9104E5: push    0
0x9104E7: push    esi
0x9104E8: push    ebx
0x9104E9: call    sub_8F0F70
0x9104EE: push    esi
0x9104EF: call    sub_8F0F50
0x9104F4: add     esp, 14h
0x9104F7: pop     edi
0x9104F8: pop     esi
0x9104F9: pop     ebx
0x9104FA: retn    8
