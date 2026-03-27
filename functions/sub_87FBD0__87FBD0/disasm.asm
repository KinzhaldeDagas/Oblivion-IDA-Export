0x87FBD0: push    0FFFFFFFFh
0x87FBD2: push    offset SEH_880560
0x87FBD7: mov     eax, large fs:0
0x87FBDD: push    eax
0x87FBDE: push    ebx
0x87FBDF: push    ebp
0x87FBE0: push    esi
0x87FBE1: push    edi
0x87FBE2: mov     eax, ds:0B30AACh
0x87FBE7: xor     eax, esp
0x87FBE9: push    eax
0x87FBEA: lea     eax, [esp+20h+var_C]
0x87FBEE: mov     large fs:0, eax
0x87FBF4: mov     esi, ecx
0x87FBF6: mov     ebx, [esp+20h+arg_8]
0x87FBFA: mov     eax, [ebx+10h]
0x87FBFD: mov     edi, ds:0B4771Ch
0x87FC03: push    eax
0x87FC04: call    sub_848C40
0x87FC09: mov     ebx, [ebx+0Ch]
0x87FC0C: push    ebx
0x87FC0D: mov     ecx, esi
0x87FC0F: call    sub_848E50
0x87FC14: mov     ecx, [esp+20h+arg_0]
0x87FC18: mov     eax, [esi]
0x87FC1A: mov     edx, [eax+0BCh]
0x87FC20: push    0
0x87FC22: push    ebx
0x87FC23: push    ecx
0x87FC24: mov     ecx, esi
0x87FC26: call    edx
0x87FC28: mov     eax, [edi+24h]
0x87FC2B: mov     ecx, [esp+20h+arg_C]
0x87FC2F: mov     ebx, [eax]
0x87FC31: mov     edx, [ecx]
0x87FC33: mov     eax, [edx+88h]
0x87FC39: push    0
0x87FC3B: mov     [esp+24h+arg_8], ebx
0x87FC3F: call    eax
0x87FC41: mov     ebx, [ebx+4]
0x87FC44: mov     ebp, eax
0x87FC46: cmp     ebx, ebp
0x87FC48: jz      short loc_87FC7F
0x87FC4A: test    ebx, ebx
0x87FC4C: jz      short loc_87FC6A
0x87FC4E: lea     ecx, [ebx+4]
0x87FC51: push    ecx; lpAddend
0x87FC52: call    dword ptr ds:0A2807Ch
0x87FC58: test    eax, eax
0x87FC5A: jnz     short loc_87FC6A
0x87FC5C: test    ebx, ebx
0x87FC5E: jz      short loc_87FC6A
0x87FC60: mov     edx, [ebx]
0x87FC62: mov     eax, [edx]
0x87FC64: push    1
0x87FC66: mov     ecx, ebx
0x87FC68: call    eax
0x87FC6A: test    ebp, ebp
0x87FC6C: mov     ecx, [esp+20h+arg_8]
0x87FC70: mov     [ecx+4], ebp
0x87FC73: jz      short loc_87FC7F
0x87FC75: add     ebp, 4
0x87FC78: push    ebp; lpAddend
0x87FC79: call    dword ptr ds:0A28078h
0x87FC7F: mov     edx, [edi+24h]
0x87FC82: mov     eax, [esp+20h+arg_C]
0x87FC86: mov     ebx, [edx+4]
0x87FC89: push    0
0x87FC8B: push    eax
0x87FC8C: mov     ecx, esi
0x87FC8E: mov     [esp+28h+arg_8], ebx
0x87FC92: call    sub_848FD0
0x87FC97: mov     ebx, [ebx+4]
0x87FC9A: mov     ebp, eax
0x87FC9C: cmp     ebx, ebp
0x87FC9E: jz      short loc_87FCD5
0x87FCA0: test    ebx, ebx
0x87FCA2: jz      short loc_87FCC0
0x87FCA4: lea     ecx, [ebx+4]
0x87FCA7: push    ecx; lpAddend
0x87FCA8: call    dword ptr ds:0A2807Ch
0x87FCAE: test    eax, eax
0x87FCB0: jnz     short loc_87FCC0
0x87FCB2: test    ebx, ebx
0x87FCB4: jz      short loc_87FCC0
0x87FCB6: mov     edx, [ebx]
0x87FCB8: mov     eax, [edx]
0x87FCBA: push    1
0x87FCBC: mov     ecx, ebx
0x87FCBE: call    eax
0x87FCC0: test    ebp, ebp
0x87FCC2: mov     ecx, [esp+20h+arg_8]
0x87FCC6: mov     [ecx+4], ebp
0x87FCC9: jz      short loc_87FCD5
0x87FCCB: add     ebp, 4
0x87FCCE: push    ebp; lpAddend
0x87FCCF: call    dword ptr ds:0A28078h
0x87FCD5: mov     edx, [edi+24h]
0x87FCD8: mov     ebp, [edx+10h]
0x87FCDB: mov     eax, ds:0B43110h
0x87FCE0: mov     ebx, [ebp+4]
0x87FCE3: cmp     ebx, eax
0x87FCE5: mov     ecx, eax
0x87FCE7: mov     [esp+20h+arg_C], ecx
0x87FCEB: jz      short loc_87FD22
0x87FCED: test    ebx, ebx
0x87FCEF: jz      short loc_87FD11
0x87FCF1: lea     eax, [ebx+4]
0x87FCF4: push    eax; lpAddend
0x87FCF5: call    dword ptr ds:0A2807Ch
0x87FCFB: test    eax, eax
0x87FCFD: jnz     short loc_87FD0D
0x87FCFF: test    ebx, ebx
0x87FD01: jz      short loc_87FD0D
0x87FD03: mov     edx, [ebx]
0x87FD05: mov     eax, [edx]
0x87FD07: push    1
0x87FD09: mov     ecx, ebx
0x87FD0B: call    eax
0x87FD0D: mov     ecx, [esp+20h+arg_C]
0x87FD11: test    ecx, ecx
0x87FD13: mov     [ebp+4], ecx
0x87FD16: jz      short loc_87FD22
0x87FD18: add     ecx, 4
0x87FD1B: push    ecx; lpAddend
0x87FD1C: call    dword ptr ds:0A28078h
0x87FD22: mov     ebx, 1
0x87FD27: add     [edi+60h], ebx
0x87FD2A: mov     [esp+20h+arg_C], edi
0x87FD2E: mov     edx, [esi+38h]
0x87FD31: lea     ecx, [esp+20h+arg_C]
0x87FD35: push    ecx
0x87FD36: push    edx
0x87FD37: lea     ecx, [esi+40h]
0x87FD3A: mov     [esp+28h+var_4], 0
0x87FD42: call    sub_76CE40
0x87FD47: or      eax, 0FFFFFFFFh
0x87FD4A: add     [edi+60h], eax
0x87FD4D: mov     [esp+20h+var_4], eax
0x87FD51: jnz     short loc_87FD5A
0x87FD53: mov     ecx, edi
0x87FD55: call    sub_7604D0
0x87FD5A: add     [esi+38h], ebx
0x87FD5D: mov     ecx, [esp+20h+var_C]
0x87FD61: mov     large fs:0, ecx
0x87FD68: pop     ecx
0x87FD69: pop     edi
0x87FD6A: pop     esi
0x87FD6B: pop     ebp
0x87FD6C: pop     ebx
0x87FD6D: add     esp, 0Ch
0x87FD70: retn    10h
