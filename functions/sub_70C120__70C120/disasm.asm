0x70C120: sub     esp, 34h
0x70C123: push    ebx
0x70C124: mov     ebx, ecx
0x70C126: mov     eax, [ebx+1Ch]
0x70C129: test    eax, eax
0x70C12B: push    esi
0x70C12C: push    edi
0x70C12D: jz      short loc_70C144
0x70C12F: lea     ecx, [ebx+30h]
0x70C132: push    ecx
0x70C133: lea     edx, [esp+44h+var_34]
0x70C137: push    edx
0x70C138: lea     ecx, [eax+64h]
0x70C13B: call    sub_53D7A0
0x70C140: mov     esi, eax
0x70C142: jmp     short loc_70C147
0x70C144: lea     esi, [ebx+30h]
0x70C147: lea     edi, [ebx+64h]
0x70C14A: mov     ecx, 0Dh
0x70C14F: rep movsd
0x70C151: mov     ecx, [ebx+0A8h]
0x70C157: test    ecx, ecx
0x70C159: pop     edi
0x70C15A: pop     esi
0x70C15B: pop     ebx
0x70C15C: jz      short loc_70C168
0x70C15E: mov     eax, [ecx]
0x70C160: mov     edx, [eax+50h]
0x70C163: add     esp, 34h
0x70C166: jmp     edx
0x70C168: add     esp, 34h
0x70C16B: retn
