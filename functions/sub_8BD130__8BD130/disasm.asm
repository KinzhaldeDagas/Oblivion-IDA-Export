0x8BD130: mov     eax, [esp+arg_4]
0x8BD134: push    ebx
0x8BD135: push    ebp
0x8BD136: mov     ebp, [esp+8+arg_0]
0x8BD13A: push    esi
0x8BD13B: push    edi
0x8BD13C: push    eax
0x8BD13D: push    ebp
0x8BD13E: mov     ebx, ecx
0x8BD140: call    sub_7214A0
0x8BD145: mov     edi, [ebx+1Ch]
0x8BD148: push    edi
0x8BD149: lea     ecx, [ebp+0Ch]
0x8BD14C: call    sub_8BCA30
0x8BD151: xor     esi, esi
0x8BD153: test    edi, edi
0x8BD155: jbe     short loc_8BD17E
0x8BD157: mov     ecx, [ebx+10h]
0x8BD15A: mov     eax, [ecx+esi*4]
0x8BD15D: test    eax, eax
0x8BD15F: jz      short loc_8BD16F
0x8BD161: mov     ecx, [esp+10h+arg_4]
0x8BD165: mov     edx, [eax]
0x8BD167: mov     edx, [edx+18h]
0x8BD16A: push    ecx
0x8BD16B: mov     ecx, eax
0x8BD16D: call    edx
0x8BD16F: push    eax
0x8BD170: mov     ecx, ebp
0x8BD172: call    sub_8BD090
0x8BD177: add     esi, 1
0x8BD17A: cmp     esi, edi
0x8BD17C: jb      short loc_8BD157
0x8BD17E: pop     edi
0x8BD17F: pop     esi
0x8BD180: pop     ebp
0x8BD181: pop     ebx
0x8BD182: retn    8
