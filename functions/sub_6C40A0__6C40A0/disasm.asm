0x6C40A0: push    0FFFFFFFFh
0x6C40A2: push    offset SEH_798CC0
0x6C40A7: mov     eax, large fs:0
0x6C40AD: push    eax
0x6C40AE: sub     esp, 0Ch
0x6C40B1: push    ebx
0x6C40B2: push    ebp
0x6C40B3: push    esi
0x6C40B4: push    edi
0x6C40B5: mov     eax, ds:0B30AACh
0x6C40BA: xor     eax, esp
0x6C40BC: push    eax
0x6C40BD: lea     eax, [esp+2Ch+var_C]
0x6C40C1: mov     large fs:0, eax
0x6C40C7: mov     esi, ecx
0x6C40C9: mov     [esp+2Ch+var_18], esi
0x6C40CD: mov     edi, [esp+2Ch+size]
0x6C40D1: cmp     edi, [esi+4]
0x6C40D4: jz      loc_6C41E1
0x6C40DA: xor     ebx, ebx
0x6C40DC: cmp     edi, ebx
0x6C40DE: jbe     loc_6C41B1
0x6C40E4: xor     ecx, ecx
0x6C40E6: mov     eax, edi
0x6C40E8: mov     edx, 4
0x6C40ED: mul     edx
0x6C40EF: seto    cl
0x6C40F2: neg     ecx
0x6C40F4: or      ecx, eax
0x6C40F6: xor     eax, eax
0x6C40F8: add     ecx, 4
0x6C40FB: setb    al
0x6C40FE: neg     eax
0x6C4100: or      eax, ecx
0x6C4102: push    eax; Size
0x6C4103: call    FormHeapAlloc
0x6C4108: add     esp, 4
0x6C410B: mov     [esp+2Ch+var_10], eax
0x6C410F: cmp     eax, ebx
0x6C4111: mov     [esp+2Ch+var_4], ebx
0x6C4115: jz      short loc_6C4131
0x6C4117: push    offset sub_7016A0; a5
0x6C411C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x6C4121: push    edi; size
0x6C4122: lea     ebp, [eax+4]
0x6C4125: push    4; a2
0x6C4127: push    ebp; a1
0x6C4128: mov     [eax], edi
0x6C412A: call    ArrayConstructor
0x6C412F: jmp     short loc_6C4133
0x6C4131: xor     ebp, ebp
0x6C4133: xor     eax, eax
0x6C4135: cmp     [esi+8], ebx
0x6C4138: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x6C4140: mov     [esp+2Ch+var_10], ebp
0x6C4144: mov     [esp+2Ch+var_14], eax
0x6C4148: jbe     short loc_6C41B5
0x6C414A: lea     ebx, [ebx+0]
0x6C4150: mov     esi, [esi]
0x6C4152: lea     ebx, ds:0[eax*4]
0x6C4159: mov     edi, [ebx+ebp]
0x6C415C: add     esi, ebx
0x6C415E: cmp     edi, [esi]
0x6C4160: jz      short loc_6C4195
0x6C4162: test    edi, edi
0x6C4164: jz      short loc_6C4182
0x6C4166: lea     ecx, [edi+4]
0x6C4169: push    ecx; lpAddend
0x6C416A: call    dword ptr ds:0A2807Ch
0x6C4170: test    eax, eax
0x6C4172: jnz     short loc_6C4182
0x6C4174: test    edi, edi
0x6C4176: jz      short loc_6C4182
0x6C4178: mov     edx, [edi]
0x6C417A: mov     eax, [edx]
0x6C417C: push    1
0x6C417E: mov     ecx, edi
0x6C4180: call    eax
0x6C4182: mov     esi, [esi]
0x6C4184: test    esi, esi
0x6C4186: mov     [ebx+ebp], esi
0x6C4189: jz      short loc_6C4195
0x6C418B: add     esi, 4
0x6C418E: push    esi; lpAddend
0x6C418F: call    dword ptr ds:0A28078h
0x6C4195: mov     eax, [esp+2Ch+var_14]
0x6C4199: mov     ecx, [esp+2Ch+var_18]
0x6C419D: add     eax, 1
0x6C41A0: cmp     eax, [ecx+8]
0x6C41A3: mov     [esp+2Ch+var_14], eax
0x6C41A7: mov     esi, ecx
0x6C41A9: jb      short loc_6C4150
0x6C41AB: mov     edi, [esp+2Ch+size]
0x6C41AF: jmp     short loc_6C41B5
0x6C41B1: mov     [esp+2Ch+var_10], ebx
0x6C41B5: mov     eax, [esi]
0x6C41B7: test    eax, eax
0x6C41B9: jz      short loc_6C41D8
0x6C41BB: mov     edx, [eax-4]
0x6C41BE: lea     ebx, [eax-4]
0x6C41C1: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6C41C6: push    edx; int
0x6C41C7: push    4; unsigned int
0x6C41C9: push    eax; void *
0x6C41CA: call    $LN21
0x6C41CF: push    ebx
0x6C41D0: call    FormHeapFree
0x6C41D5: add     esp, 4
0x6C41D8: mov     eax, [esp+2Ch+var_10]
0x6C41DC: mov     [esi], eax
0x6C41DE: mov     [esi+4], edi
0x6C41E1: mov     ecx, [esp+2Ch+var_C]
0x6C41E5: mov     large fs:0, ecx
0x6C41EC: pop     ecx
0x6C41ED: pop     edi
0x6C41EE: pop     esi
0x6C41EF: pop     ebp
0x6C41F0: pop     ebx
0x6C41F1: add     esp, 18h
0x6C41F4: retn    4
