0x5210A0: sub     esp, 10h
0x5210A3: push    ebp
0x5210A4: push    esi
0x5210A5: push    edi
0x5210A6: mov     edi, ecx
0x5210A8: mov     edx, [edi+4]
0x5210AB: xor     ebp, ebp
0x5210AD: xor     eax, eax
0x5210AF: cmp     edx, ebp
0x5210B1: mov     [esp+1Ch+var_8], edi
0x5210B5: jbe     short loc_5210D2
0x5210B7: mov     esi, [edi+8]
0x5210BA: mov     ecx, esi
0x5210BC: lea     esp, [esp+0]
0x5210C0: cmp     [ecx], ebp
0x5210C2: jnz     loc_52117A
0x5210C8: add     eax, 1
0x5210CB: add     ecx, 4
0x5210CE: cmp     eax, edx
0x5210D0: jb      short loc_5210C0
0x5210D2: xor     eax, eax
0x5210D4: cmp     eax, ebp
0x5210D6: mov     [esp+1Ch+var_C], eax
0x5210DA: jz      loc_521173
0x5210E0: push    ebx
0x5210E1: lea     eax, [esp+20h+var_10]
0x5210E5: push    eax
0x5210E6: lea     ecx, [esp+24h+var_4]
0x5210EA: push    ecx
0x5210EB: lea     edx, [esp+28h+var_C]
0x5210EF: push    edx
0x5210F0: mov     ecx, edi
0x5210F2: mov     [esp+2Ch+var_10], ebp
0x5210F6: call    sub_452600
0x5210FB: mov     esi, [esp+20h+var_10]
0x5210FF: cmp     esi, ebp
0x521101: jz      short loc_521168
0x521103: mov     ebx, [esi+0Ch]
0x521106: xor     edi, edi
0x521108: cmp     ebx, ebp
0x52110A: jbe     short loc_521143
0x52110C: lea     esp, [esp+0]
0x521110: push    ebp; int
0x521111: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x521116: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52111B: push    ebp; int
0x52111C: push    edi
0x52111D: mov     ecx, esi
0x52111F: call    sub_494ED0
0x521124: push    eax; void *
0x521125: call    OblivionDynamicCast
0x52112A: add     esp, 14h
0x52112D: cmp     eax, ebp
0x52112F: jz      short loc_52113C
0x521131: mov     edx, [eax]
0x521133: mov     ecx, eax
0x521135: mov     eax, [edx+10h]
0x521138: push    1
0x52113A: call    eax
0x52113C: add     edi, 1
0x52113F: cmp     edi, ebx
0x521141: jb      short loc_521110
0x521143: xor     eax, eax
0x521145: cmp     [esi+0Ch], ebp
0x521148: jbe     short loc_52115E
0x52114A: lea     ebx, [ebx+0]
0x521150: mov     ecx, [esi+4]
0x521153: mov     [ecx+eax*4], ebp
0x521156: add     eax, 1
0x521159: cmp     eax, [esi+0Ch]
0x52115C: jb      short loc_521150
0x52115E: mov     edi, [esp+20h+var_8]
0x521162: mov     [esi+0Ch], ebp
0x521165: mov     [esi+10h], ebp
0x521168: cmp     [esp+20h+var_C], ebp
0x52116C: jnz     loc_5210E1
0x521172: pop     ebx
0x521173: pop     edi
0x521174: pop     esi
0x521175: pop     ebp
0x521176: add     esp, 10h
0x521179: retn
0x52117A: mov     eax, [esi+eax*4]
0x52117D: jmp     loc_5210D4
