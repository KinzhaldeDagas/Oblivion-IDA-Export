0x6BF5A0: push    0FFFFFFFFh
0x6BF5A2: push    offset SEH_6C2790
0x6BF5A7: mov     eax, large fs:0
0x6BF5AD: push    eax
0x6BF5AE: sub     esp, 14h
0x6BF5B1: push    ebx
0x6BF5B2: push    ebp
0x6BF5B3: push    esi
0x6BF5B4: push    edi
0x6BF5B5: mov     eax, ds:0B30AACh
0x6BF5BA: xor     eax, esp
0x6BF5BC: push    eax
0x6BF5BD: lea     eax, [esp+34h+var_C]
0x6BF5C1: mov     large fs:0, eax
0x6BF5C7: mov     ebp, [esp+34h+arg_8]
0x6BF5CB: fld     [esp+34h+arg_0]
0x6BF5CF: mov     eax, [esp+34h+arg_4]
0x6BF5D3: mov     edx, [ebp+0]
0x6BF5D6: mov     edi, [eax]
0x6BF5D8: push    10h; char
0x6BF5DA: lea     ecx, [esp+38h+var_20]
0x6BF5DE: push    ecx; int
0x6BF5DF: push    edx; int
0x6BF5E0: push    edi; int
0x6BF5E1: push    ecx
0x6BF5E2: fstp    [esp+48h+var_48]; float
0x6BF5E5: call    sub_6D31B0
0x6BF5EA: add     esp, 14h
0x6BF5ED: test    al, al
0x6BF5EF: jz      loc_6BF714
0x6BF5F5: mov     esi, [ebp+0]
0x6BF5F8: add     esi, 1
0x6BF5FB: xor     ecx, ecx
0x6BF5FD: mov     eax, esi
0x6BF5FF: mov     edx, 10h
0x6BF604: mul     edx
0x6BF606: seto    cl
0x6BF609: neg     ecx
0x6BF60B: or      ecx, eax
0x6BF60D: xor     eax, eax
0x6BF60F: add     ecx, 4
0x6BF612: setb    al
0x6BF615: neg     eax
0x6BF617: or      eax, ecx
0x6BF619: push    eax; Size
0x6BF61A: call    FormHeapAlloc
0x6BF61F: add     esp, 4
0x6BF622: mov     [esp+34h+var_1C], eax
0x6BF626: test    eax, eax
0x6BF628: mov     [esp+34h+var_4], 0
0x6BF630: jz      short loc_6BF64E
0x6BF632: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BF637: push    offset sub_7616D0; a4
0x6BF63C: push    esi; size
0x6BF63D: lea     ebx, [eax+4]
0x6BF640: push    10h; a2
0x6BF642: push    ebx; a1
0x6BF643: mov     [eax], esi
0x6BF645: call    ArrayConstructor
0x6BF64A: mov     esi, ebx
0x6BF64C: jmp     short loc_6BF650
0x6BF64E: xor     esi, esi
0x6BF650: mov     ecx, [esp+34h+var_20]
0x6BF654: shl     ecx, 4
0x6BF657: push    ecx; Size
0x6BF658: push    edi; Src
0x6BF659: push    esi; Dst
0x6BF65A: mov     [esp+40h+var_4], 0FFFFFFFFh
0x6BF662: call    _memcpy
0x6BF667: mov     eax, [ebp+0]
0x6BF66A: mov     edx, [esp+40h+var_20]
0x6BF66E: add     esp, 0Ch
0x6BF671: cmp     eax, edx
0x6BF673: jbe     short loc_6BF691
0x6BF675: sub     eax, edx
0x6BF677: mov     ecx, edx
0x6BF679: shl     ecx, 4
0x6BF67C: shl     eax, 4
0x6BF67F: push    eax; Size
0x6BF680: lea     edx, [ecx+edi]
0x6BF683: push    edx; Src
0x6BF684: lea     eax, [ecx+esi+10h]
0x6BF688: push    eax; Dst
0x6BF689: call    _memcpy
0x6BF68E: add     esp, 0Ch
0x6BF691: mov     ecx, [ebp+0]
0x6BF694: fld     [esp+34h+arg_0]
0x6BF698: push    10h; char
0x6BF69A: push    ecx; int
0x6BF69B: push    1; int
0x6BF69D: push    edi; int
0x6BF69E: push    ecx
0x6BF69F: lea     edx, [esp+48h+var_18]
0x6BF6A3: fstp    [esp+48h+var_48]; float
0x6BF6A6: push    edx; int
0x6BF6A7: call    sub_6BBDC0
0x6BF6AC: fld     [esp+4Ch+arg_0]
0x6BF6B0: mov     eax, [esp+4Ch+var_20]
0x6BF6B4: shl     eax, 4
0x6BF6B7: add     eax, esi
0x6BF6B9: fstp    dword ptr [eax]
0x6BF6BB: mov     ecx, [esp+4Ch+var_18]
0x6BF6BF: mov     [eax+4], ecx
0x6BF6C2: mov     edx, [esp+4Ch+var_14]
0x6BF6C6: mov     [eax+8], edx
0x6BF6C9: mov     ecx, [esp+4Ch+var_10]
0x6BF6CD: mov     [eax+0Ch], ecx
0x6BF6D0: add     dword ptr [ebp+0], 1
0x6BF6D4: add     esp, 18h
0x6BF6D7: test    edi, edi
0x6BF6D9: jz      short loc_6BF6F8
0x6BF6DB: mov     edx, [edi-4]
0x6BF6DE: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BF6E3: lea     ebx, [edi-4]
0x6BF6E6: push    edx; int
0x6BF6E7: push    10h; unsigned int
0x6BF6E9: push    edi; void *
0x6BF6EA: call    $LN21
0x6BF6EF: push    ebx
0x6BF6F0: call    FormHeapFree
0x6BF6F5: add     esp, 4
0x6BF6F8: mov     eax, [esp+34h+arg_4]
0x6BF6FC: mov     [eax], esi
0x6BF6FE: mov     al, 1
0x6BF700: mov     ecx, [esp+34h+var_C]
0x6BF704: mov     large fs:0, ecx
0x6BF70B: pop     ecx
0x6BF70C: pop     edi
0x6BF70D: pop     esi
0x6BF70E: pop     ebp
0x6BF70F: pop     ebx
0x6BF710: add     esp, 20h
0x6BF713: retn
0x6BF714: xor     al, al
0x6BF716: mov     ecx, [esp+34h+var_C]
0x6BF71A: mov     large fs:0, ecx
0x6BF721: pop     ecx
0x6BF722: pop     edi
0x6BF723: pop     esi
0x6BF724: pop     ebp
0x6BF725: pop     ebx
0x6BF726: add     esp, 20h
0x6BF729: retn
