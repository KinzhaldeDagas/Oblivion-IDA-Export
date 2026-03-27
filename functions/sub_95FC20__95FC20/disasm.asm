0x95FC20: push    ebx
0x95FC21: push    ebp
0x95FC22: push    esi
0x95FC23: push    edi
0x95FC24: mov     edi, [esp+10h+arg_4]
0x95FC28: xor     esi, esi
0x95FC2A: cmp     [edi+0Eh], si
0x95FC2E: jbe     short loc_95FC77
0x95FC30: mov     ebx, [esp+10h+arg_18]
0x95FC34: mov     ebp, [esp+10h+arg_14]
0x95FC38: jmp     short loc_95FC40
0x95FC3A: align 10h
0x95FC40: mov     ecx, [esp+10h+arg_10]
0x95FC44: fld     [esp+10h+arg_0]
0x95FC48: mov     edx, [esp+10h+arg_C]
0x95FC4C: mov     eax, [edi+8]
0x95FC4F: mov     eax, [eax+esi*4]
0x95FC52: push    ebx; int
0x95FC53: push    ebp; int
0x95FC54: push    ecx; int
0x95FC55: mov     ecx, [esp+1Ch+arg_8]
0x95FC59: push    edx; int
0x95FC5A: push    ecx; int
0x95FC5B: push    eax; int
0x95FC5C: push    ecx
0x95FC5D: fstp    [esp+2Ch+var_2C]; float
0x95FC60: call    sub_95DA70
0x95FC65: add     esp, 1Ch
0x95FC68: test    al, al
0x95FC6A: jnz     short loc_95FC7E
0x95FC6C: movzx   edx, word ptr [edi+0Eh]
0x95FC70: add     esi, 1
0x95FC73: cmp     esi, edx
0x95FC75: jb      short loc_95FC40
0x95FC77: pop     edi
0x95FC78: pop     esi
0x95FC79: pop     ebp
0x95FC7A: xor     al, al
0x95FC7C: pop     ebx
0x95FC7D: retn
0x95FC7E: mov     [edi+14h], esi
0x95FC81: pop     edi
0x95FC82: pop     esi
0x95FC83: pop     ebp
0x95FC84: mov     al, 1
0x95FC86: pop     ebx
0x95FC87: retn
