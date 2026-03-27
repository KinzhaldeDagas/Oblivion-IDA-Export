0x991B45: mov     eax, [edx+4]
0x991B48: and     eax, 7FF00000h
0x991B4D: cmp     eax, 7FF00000h
0x991B52: jz      short fpload_special
0x991B54: fld     qword ptr [edx]
0x991B56: retn
0x991B57: mov     eax, [edx+4]
0x991B5A: sub     esp, 0Ah
0x991B5D: or      eax, 7FFF0000h
0x991B62: mov     dword ptr [esp+0Ah+var_A+6], eax
0x991B66: mov     eax, [edx+4]
0x991B69: mov     ecx, [edx]
0x991B6B: shld    eax, ecx, 0Bh
0x991B6F: shl     ecx, 0Bh
0x991B72: mov     dword ptr [esp+0Ah+var_A+4], eax
0x991B76: mov     dword ptr [esp+0Ah+var_A], ecx
0x991B79: fld     [esp+0Ah+var_A]
0x991B7C: add     esp, 0Ah
0x991B7F: test    eax, 0
0x991B84: mov     eax, [edx+4]
0x991B87: retn
