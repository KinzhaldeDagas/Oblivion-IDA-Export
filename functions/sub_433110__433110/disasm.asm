0x433110: push    ecx
0x433111: push    ebx
0x433112: push    edi
0x433113: mov     ebx, ecx
0x433115: xor     edi, edi
0x433117: cmp     [ebx], edi
0x433119: jbe     short loc_433163
0x43311B: push    esi
0x43311C: lea     esp, [esp+0]
0x433120: mov     eax, [ebx+8]
0x433123: mov     ecx, [eax+edi*8+4]
0x433127: mov     [esp+10h+var_4], ecx
0x43312B: mov     edx, [esp+10h+var_4]
0x43312F: mov     [esp+10h+var_4], edx
0x433133: mov     eax, [esp+10h+var_4]
0x433137: test    eax, eax
0x433139: jz      short loc_43315B
0x43313B: mov     esi, [esp+10h+var_4]
0x43313F: cmp     dword ptr [esi+20h], 0
0x433143: jz      short loc_433152
0x433145: mov     ecx, esi
0x433147: call    sub_4328B0
0x43314C: cmp     dword ptr [esi+20h], 0
0x433150: jnz     short loc_433145
0x433152: push    esi
0x433153: call    FormHeapFree
0x433158: add     esp, 4
0x43315B: add     edi, 1
0x43315E: cmp     edi, [ebx]
0x433160: jb      short loc_433120
0x433162: pop     esi
0x433163: mov     ecx, [ebx+8]
0x433166: push    ecx
0x433167: call    FormHeapFree
0x43316C: mov     edx, [ebx+4]
0x43316F: add     esp, 4
0x433172: push    edx; dwTlsIndex
0x433173: call    ds:TlsFree
0x433179: pop     edi
0x43317A: pop     ebx
0x43317B: pop     ecx
0x43317C: retn
