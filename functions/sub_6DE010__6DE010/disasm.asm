0x6DE010: push    0FFFFFFFFh
0x6DE012: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x6DE017: mov     eax, large fs:0
0x6DE01D: push    eax
0x6DE01E: push    ecx
0x6DE01F: push    ebx
0x6DE020: push    ebp
0x6DE021: push    esi
0x6DE022: push    edi
0x6DE023: mov     eax, ds:0B30AACh
0x6DE028: xor     eax, esp
0x6DE02A: push    eax
0x6DE02B: lea     eax, [esp+24h+var_C]
0x6DE02F: mov     large fs:0, eax
0x6DE035: mov     ebp, ecx
0x6DE037: xor     ebx, ebx
0x6DE039: cmp     [esp+24h+arg_4], ebx
0x6DE03D: jbe     short loc_6DE0A7
0x6DE03F: cmp     [ebp+10h], ebx
0x6DE042: lea     edi, [ebp+10h]
0x6DE045: jnz     short loc_6DE08C
0x6DE047: push    18h; Size
0x6DE049: call    FormHeapAlloc
0x6DE04E: mov     esi, eax
0x6DE050: add     esp, 4
0x6DE053: mov     [esp+24h+var_10], esi
0x6DE057: cmp     esi, ebx
0x6DE059: mov     [esp+24h+var_4], ebx
0x6DE05D: jz      short loc_6DE07A
0x6DE05F: mov     ecx, esi
0x6DE061: call    NiObject_constr
0x6DE066: mov     dword ptr [esi], offset ??_7NiFloatData@@6B@; const NiFloatData::`vftable'
0x6DE06C: mov     [esi+8], ebx
0x6DE06F: mov     [esi+0Ch], ebx
0x6DE072: mov     [esi+10h], ebx
0x6DE075: mov     [esi+14h], bl
0x6DE078: jmp     short loc_6DE07C
0x6DE07A: xor     esi, esi
0x6DE07C: push    esi; a2
0x6DE07D: mov     ecx, edi; this
0x6DE07F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6DE087: call    NiSmartPointer_Set??
0x6DE08C: mov     eax, [esp+24h+arg_8]
0x6DE090: mov     ecx, [esp+24h+arg_4]
0x6DE094: mov     edx, [esp+24h+arg_0]
0x6DE098: push    eax
0x6DE099: push    ecx
0x6DE09A: mov     ecx, [edi]
0x6DE09C: push    edx
0x6DE09D: call    sub_6E3540
0x6DE0A2: mov     [ebp+14h], ebx
0x6DE0A5: jmp     short loc_6DE0B6
0x6DE0A7: mov     ecx, [ebp+10h]
0x6DE0AA: cmp     ecx, ebx
0x6DE0AC: jz      short loc_6DE0B6
0x6DE0AE: push    ebx
0x6DE0AF: push    ebx
0x6DE0B0: push    ebx
0x6DE0B1: call    sub_6E3540
0x6DE0B6: mov     ecx, [esp+24h+var_C]
0x6DE0BA: mov     large fs:0, ecx
0x6DE0C1: pop     ecx
0x6DE0C2: pop     edi
0x6DE0C3: pop     esi
0x6DE0C4: pop     ebp
0x6DE0C5: pop     ebx
0x6DE0C6: add     esp, 10h
0x6DE0C9: retn    0Ch
