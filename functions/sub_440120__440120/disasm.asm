0x440120: mov     eax, ds:0B051D4h
0x440125: push    esi
0x440126: push    edi
0x440127: mov     edi, ecx
0x440129: mov     ecx, [esp+8+a1]
0x44012D: xor     esi, esi
0x44012F: nop
0x440130: cmp     esi, eax
0x440132: jnb     short loc_440160
0x440134: mov     edx, [edi+38h]
0x440137: cmp     ecx, [edx+esi*4]
0x44013A: jz      short loc_440141
0x44013C: add     esi, 1
0x44013F: jmp     short loc_440130
0x440141: push    ecx; a1
0x440142: mov     ecx, ds:0B33A98h
0x440148: call    sub_447BA0
0x44014D: mov     eax, [edi+38h]
0x440150: mov     dword ptr [eax+esi*4], 0
0x440157: mov     eax, ds:0B051D4h
0x44015C: lea     esp, [esp+0]
0x440160: mov     edx, [edi+38h]
0x440163: lea     ecx, [eax-1]
0x440166: cmp     esi, ecx
0x440168: jnb     short loc_440178
0x44016A: mov     ecx, [edx+esi*4+4]
0x44016E: lea     eax, [edx+esi*4]
0x440171: mov     [eax], ecx
0x440173: add     esi, 1
0x440176: jmp     short loc_440157
0x440178: mov     dword ptr [edx+eax*4-4], 0
0x440180: mov     byte ptr [edi+69h], 1
0x440184: pop     edi
0x440185: pop     esi
0x440186: retn    4
